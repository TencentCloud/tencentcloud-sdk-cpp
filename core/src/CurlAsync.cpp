#include <tencentcloud/core/CurlAsync.h>
#include <tencentcloud/core/utils/Utils.h>
#include <tencentcloud/core/Outcome.h>
#include <iostream>

#ifdef ENABLE_COMPRESS_MODULE
#include <string>
#include <zlib.h>

#define GZIPDECODING 16
#define GZIPCOMPRESSMULTIPLE 1000000
#endif // ENABLE_COMPRESS_MODULE

using namespace TencentCloud;
using namespace std;

namespace
{
    size_t recvBody(char *ptr, size_t size, size_t nmemb, void *userdata)
    {
        std::ostringstream &out = *static_cast<std::ostringstream*>(userdata);
        
        out << std::string(ptr, nmemb*size);
        return nmemb * size;
    }

    size_t recvHeaders(char *buffer, size_t size, size_t nitems, void *userdata)
    {
        HttpResponse *response = static_cast<HttpResponse*>(userdata);
        std::string line(buffer);
        auto pos = line.find(':');
        if (pos != line.npos)
        {
            std::string name = line.substr(0, pos);
            std::string value = line.substr(pos + 2);
            size_t p = 0;
            if ((p = value.rfind('\r')) != value.npos)
                value[p] = '\0';
            response->SetHeader(name, value);
        }
        return nitems * size;
    }

    void setCUrlProxy(CURL *curlHandle, const NetworkProxy &proxy)
    {
        if (proxy.GetType() == NetworkProxy::Type::NONE)
            return;

        int64_t type;
        switch (proxy.GetType())
        {
            case NetworkProxy::Type::SOCKS5:
                type = CURLPROXY_SOCKS5;
                break;
            /*case NetworkProxy::Type::HTTPS:
                type = CURLPROXY_HTTPS;
                break;*/
            case NetworkProxy::Type::HTTP:
            default:
                type = CURLPROXY_HTTP;
                break;
        }
        curl_easy_setopt(curlHandle, CURLOPT_PROXYTYPE, type);

        std::ostringstream out;
        out << proxy.GetHostName() << ":" << proxy.GetPort();
        curl_easy_setopt(curlHandle, CURLOPT_PROXY, out.str().c_str());

        if (!proxy.GetUser().empty()) 
        {
            out.clear();
            out << proxy.GetUser() << ":" << proxy.GetPassword();
            curl_easy_setopt(curlHandle, CURLOPT_PROXYUSERPWD, out.str().c_str());
        }
    }
}

CurlAsync* CurlAsync::m_instance = nullptr;
CurlAsync::Garbo CurlAsync::m_garbo;
std::mutex CurlAsync::m_instanceMutex;

CurlAsync::CurlAsync() : m_multiHandle(nullptr), m_stopIoThread(false)
{
}

CurlAsync::~CurlAsync()
{
    Shutdown();  
}

CurlAsync* CurlAsync::GetInstance()
{
    if (m_instance == nullptr)
    {
        lock_guard<mutex> lock(m_instanceMutex);
        if (m_instance == nullptr)
        {
            m_instance = new CurlAsync;
        }
    }
    return m_instance;
}

bool CurlAsync::Start()
{
    lock_guard<mutex> lk(m_stopIoMutex);
    
    if (!m_stopIoThread && m_multiHandle)
        return true;

    m_stopIoThread = false;

    HttpClient::InitGlobalState();

    m_multiHandle = curl_multi_init();
    if (!m_multiHandle)
    {
        cerr << "curl_multi_handle init error" << endl;
        return false;
    }

    m_ioThread = std::thread(&CurlAsync::CurlMultiLoop, this);
    
    return true;
}

void CurlAsync::Shutdown()
{
    lock_guard<mutex> lk(m_stopIoMutex);
    if (m_stopIoThread) 
        return;


    m_stopIoThread = true;

    if (m_ioThread.joinable()) {
        m_ioThread.join();
    }

    HttpClient::CleanupGlobalState();

    if (m_multiHandle)
    {
        for (auto& pair : m_activeContexts)
        {
            auto handle = pair.first;
            auto ctx = pair.second;
            curl_multi_remove_handle(m_multiHandle, handle);
            curl_easy_cleanup(handle);
        }
        m_activeContexts.clear();

        curl_multi_cleanup(m_multiHandle);
        m_multiHandle = nullptr;
    }
}

void CurlAsync::AddRequest(HttpClient* httpClient, HttpRequest request, AbstractClient::AsyncCallback callback)
{
    if (!m_multiHandle)
    {
        cerr << "curl multi handle not init" << endl;
        callback(HttpClient::HttpResponseOutcome(Core::Error("CurlError", "multi handle not initialized")));
        return;
    }

    CURL* easy_handle = curl_easy_init();
    if (!easy_handle)
    {
        cerr << "curl_easy_init error" << endl;
        callback(HttpClient::HttpResponseOutcome(Core::Error("CurlError", "easy handle not initialized")));
        return;
    }

    shared_ptr<AsyncContext> ctx = make_shared<AsyncContext>();
    ctx->callback = callback;

    std::string url = request.GetUrl().ToString();

    switch (request.GetMethod())
    {
    case HttpRequest::Method::POST:
        {
            if (request.BodySize() > 0)
            {
                curl_easy_setopt(easy_handle, CURLOPT_POSTFIELDS, request.Body());
                if (request.BodySize() > (size_t)2 * 1024 * 1024 * 1024) {
                    curl_easy_setopt(easy_handle, CURLOPT_POSTFIELDSIZE_LARGE, request.BodySize());
                } else {
                    curl_easy_setopt(easy_handle, CURLOPT_POSTFIELDSIZE, request.BodySize());
                }
            }
            else
            {
                curl_easy_setopt(easy_handle, CURLOPT_POSTFIELDS, "");
            }
        }
        break;
    default:
        break;
    }

    curl_easy_setopt(easy_handle, CURLOPT_NOSIGNAL, 1L);
    curl_easy_setopt(easy_handle, CURLOPT_TIMEOUT_MS, httpClient->GetReqTimeout());
    curl_easy_setopt(easy_handle, CURLOPT_CONNECTTIMEOUT_MS, httpClient->GetConnectTimeout());

    curl_easy_setopt(easy_handle, CURLOPT_URL, url.c_str());
    curl_easy_setopt(easy_handle, CURLOPT_SSL_VERIFYPEER, 1L);
    curl_easy_setopt(easy_handle, CURLOPT_SSL_VERIFYHOST, 2L);

    if (httpClient->GetCaInfo() != "")
    {
        curl_easy_setopt(easy_handle, CURLOPT_CAINFO, httpClient->GetCaInfo().c_str());
    }
    if (httpClient->GetCaPath() != "")
    {
        curl_easy_setopt(easy_handle, CURLOPT_CAPATH, httpClient->GetCaPath().c_str());
    }

    curl_easy_setopt(easy_handle, CURLOPT_HEADERDATA, &ctx->response);
    curl_easy_setopt(easy_handle, CURLOPT_HEADERFUNCTION, recvHeaders);

    curl_slist *header_list = nullptr;
    auto headers = request.Headers();
    for (auto &p : headers)
    {
        std::string str = p.first;
        str.append(": ").append(p.second);
        header_list = curl_slist_append(header_list, str.c_str());
    }
    curl_easy_setopt(easy_handle, CURLOPT_HTTPHEADER, header_list);
    ctx->headerList = header_list;
    curl_easy_setopt(easy_handle, CURLOPT_WRITEDATA, &ctx->responseStream);
    curl_easy_setopt(easy_handle, CURLOPT_WRITEFUNCTION, recvBody);
    setCUrlProxy(easy_handle, httpClient->GetProxy());

    curl_easy_setopt(easy_handle, CURLOPT_ERRORBUFFER, ctx->errorBuffer);
    
    unique_lock<mutex> ul(m_multiHandleMutex);
    CURLMcode mc = curl_multi_add_handle(m_multiHandle, easy_handle);
    ul.unlock();
    if (mc != CURLM_OK) 
    {
        cerr << "curl_multi_add_handle error: " << curl_multi_strerror(mc) << endl;
        callback(HttpClient::HttpResponseOutcome(Core::Error("CurlError", "add request to multi handle error")));
        curl_easy_cleanup(easy_handle);
        return;
    } 
    else 
    {
        lock_guard<mutex> lock(m_easyHandlesMutex);
        m_activeContexts[easy_handle] = ctx;
    }
}

void CurlAsync::CurlMultiLoop()
{
    while (!m_stopIoThread && m_multiHandle) 
    {
        int still_running = 0;
        CURLMcode mc = curl_multi_perform(m_multiHandle, &still_running);
        if (mc != CURLM_OK)
        {
            cerr << "curl_multi_perform error: " << curl_multi_strerror(mc) << endl;
            Shutdown();
        }

        int numfds = 0;
        mc = curl_multi_poll(m_multiHandle, nullptr, 0, 2000, &numfds);
        if (mc == CURLM_OK)
        {
            ReadTaskResult();
        }
        else
        {
            cerr << "curl_multi_poll error: " << curl_multi_strerror(mc) << endl;
            Shutdown();
        } 
    }
}

void CurlAsync::ReadTaskResult() 
{
    CURLMsg* msg;
    int msgs_left;

    do {
        msg = curl_multi_info_read(m_multiHandle, &msgs_left);
        if (msg && msg->msg == CURLMSG_DONE)
        {
            CURL* easy_handle = msg->easy_handle;
            std::shared_ptr<AsyncContext> ctx;
            {
                std::lock_guard<std::mutex> lock(m_easyHandlesMutex);
                auto it = m_activeContexts.find(easy_handle);
                if (it != m_activeContexts.end()) {
                    ctx = it->second;
                }
            }
            if (ctx) 
            {
                HttpClient::HttpResponseOutcome outcome;
                if (msg->data.result == CURLE_OK) {
                    int64_t response_code = 0;
                    curl_easy_getinfo(easy_handle, CURLINFO_RESPONSE_CODE, &response_code);
                    ctx->response.SetStatusCode(response_code);
                    ctx->response.SetBody(ctx->responseStream.str());
#ifdef ENABLE_COMPRESS_MODULE
                    if (ctx->response.Header("Content-Encoding").find("gzip") != std::string::npos)
                    {
                        std::string decompressData;
                        if (TryDecompress(ctx->responseStream.str().c_str(), ctx->responseStream.str().size(), decompressData)) {
                            ctx->response.SetBody(decompressData);
                        }
                    }
#endif // ENABLE_COMPRESS_MODULE

                    if (response_code != 200)
                    {
                        std::string errorMsg = "status=" + Utils::int2str(response_code) + ", " + ctx->responseStream.str();
                        outcome = HttpClient::HttpResponseOutcome(Core::Error("ServiceNetworkError", errorMsg));
                    }
                    else
                    {
                        outcome = HttpClient::HttpResponseOutcome(ctx->response);
                    }
                } 
                else 
                {
                    outcome = HttpClient::HttpResponseOutcome(Core::Error("CurlError", ctx->errorBuffer));
                }

                // 调用回调
                if (ctx->callback) 
                {
                    ctx->callback(outcome);
                }

                curl_multi_remove_handle(m_multiHandle, easy_handle);
                curl_easy_cleanup(easy_handle);
                {
                    lock_guard<mutex> lock(m_easyHandlesMutex);
                    auto it = m_activeContexts.find(easy_handle);
                    if (it != m_activeContexts.end()) {
                        m_activeContexts.erase(it);
                    }
                }
            }
            else 
            {
                cerr << "curl_multi_info_read error: " << endl;
                curl_multi_remove_handle(m_multiHandle, easy_handle);
                curl_easy_cleanup(easy_handle);
            }
        }
    } while (msg);
}
