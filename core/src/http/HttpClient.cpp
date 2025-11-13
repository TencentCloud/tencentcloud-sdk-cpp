/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/core/http/HttpClient.h>
#include <tencentcloud/core/utils/Utils.h>
#include <iostream>
#include <sstream>
#include <vector>

#ifdef ENABLE_COMPRESS_MODULE
#include <string>
#include <zlib.h>

#define GZIPDECODING 16
#define GZIPCOMPRESSMULTIPLE 1000000
#endif // ENABLE_COMPRESS_MODULE

using namespace TencentCloud;

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

        if (!proxy.GetUser().empty()) {
            out.clear();
            out << proxy.GetUser() << ":" << proxy.GetPassword();
            curl_easy_setopt(curlHandle, CURLOPT_PROXYUSERPWD, out.str().c_str());
        }
    }
}

HttpClient::HttpClient() :
    m_curlHandle(curl_easy_init()),
    m_caInfo(""),
    m_caPath("")
{
    m_curlm = curl_multi_init();
    m_asyncRunning = true;
    m_asyncReqHandler = std::thread{&HttpClient::AsyncReqHandler, this};
}

HttpClient::~HttpClient()
{
    curl_easy_cleanup(m_curlHandle);
    m_asyncRunning = false;
    curl_multi_wakeup(m_curlm);
    m_asyncReqHandler.join();
    curl_multi_cleanup(m_curlm);
}

void HttpClient::InitGlobalState()
{
    curl_global_init(CURL_GLOBAL_ALL);
}

void HttpClient::CleanupGlobalState()
{
    curl_global_cleanup();
}

void HttpClient::SetReqTimeout(int64_t timeoutOfMs)
{
    m_reqTimeout = timeoutOfMs;
}

void HttpClient::SetConnectTimeout(int64_t timeoutOfMs)
{
    m_connectTimeout = timeoutOfMs;
}

void HttpClient::SetCaInfo(std::string caInfo)
{
    m_caInfo = caInfo;
}

void HttpClient::SetResolveIp(std::string resolveIp)
{
    m_resolveIp = resolveIp;
}

void HttpClient::SetCaPath(std::string caPath)
{
    m_caPath = caPath;
}

void HttpClient::SetProxy(const NetworkProxy &proxy)
{
    m_proxy = proxy;
}

HttpClient::HttpResponseOutcome HttpClient::SendRequest(const HttpRequest &request)
{
    curl_easy_reset(m_curlHandle);
    HttpResponse response;

    std::string url = request.GetUrl().ToString();
    switch (request.GetMethod())
    {
    case HttpRequest::Method::POST:
        {
            if (request.BodySize() > 0)
            {
                curl_easy_setopt(m_curlHandle, CURLOPT_POSTFIELDS, request.Body());
                // explicitly set body size because libcurl use strlen() to determine body size
                // which could fail when there is a '\0' in the middle
                if (request.BodySize() > (size_t)2 * 1024 * 1024 * 1024) {
                    // https://curl.se/libcurl/c/CURLOPT_POSTFIELDSIZE.html
                    // If you post more than 2GB, use CURLOPT_POSTFIELDSIZE_LARGE
                    curl_easy_setopt(m_curlHandle, CURLOPT_POSTFIELDSIZE_LARGE, request.BodySize());
                } else {
                    curl_easy_setopt(m_curlHandle, CURLOPT_POSTFIELDSIZE, request.BodySize());
                }
            }
            else
            {
                curl_easy_setopt(m_curlHandle, CURLOPT_POSTFIELDS, "");
            }
        }
        break;
    default:
        break;
    }

    curl_easy_setopt(m_curlHandle, CURLOPT_NOSIGNAL, 1L);
    curl_easy_setopt(m_curlHandle, CURLOPT_TIMEOUT_MS, m_reqTimeout);
    curl_easy_setopt(m_curlHandle, CURLOPT_CONNECTTIMEOUT_MS, m_connectTimeout);

    curl_easy_setopt(m_curlHandle, CURLOPT_URL, url.c_str());
    std::string domain = request.GetUrl().GetHost();

    //  创建解析规则链表（用于CURLOPT_RESOLVE）
    struct curl_slist *resolveList = nullptr;

    if (!m_resolveIp.empty() && !domain.empty()) {
        std::string resolveEntry = domain + ":443:" + m_resolveIp;
        resolveList = curl_slist_append(resolveList, resolveEntry.c_str());
        curl_easy_setopt(m_curlHandle, CURLOPT_RESOLVE, resolveList);
    }
    curl_easy_setopt(m_curlHandle, CURLOPT_SSL_VERIFYPEER, 1L);
    curl_easy_setopt(m_curlHandle, CURLOPT_SSL_VERIFYHOST, 2L);

    if (m_caInfo != ""){
        curl_easy_setopt(m_curlHandle, CURLOPT_CAINFO, m_caInfo.c_str());
    }
    if (m_caPath != ""){
        curl_easy_setopt(m_curlHandle, CURLOPT_CAPATH, m_caPath.c_str());
    }

    curl_easy_setopt(m_curlHandle, CURLOPT_HEADERDATA, &response);
    curl_easy_setopt(m_curlHandle, CURLOPT_HEADERFUNCTION, recvHeaders);

    curl_slist *header_list = nullptr;
    auto headers = request.Headers();
    for (auto &p : headers)
    {
        std::string str = p.first;
        str.append(": ").append(p.second);
        header_list = curl_slist_append(header_list, str.c_str());
    }
    curl_easy_setopt(m_curlHandle, CURLOPT_HTTPHEADER, header_list);
    std::ostringstream out;
    curl_easy_setopt(m_curlHandle, CURLOPT_WRITEDATA, &out);
    curl_easy_setopt(m_curlHandle, CURLOPT_WRITEFUNCTION, recvBody);
    setCUrlProxy(m_curlHandle, m_proxy);

    char errbuf[CURL_ERROR_SIZE];
    curl_easy_setopt(m_curlHandle, CURLOPT_ERRORBUFFER, errbuf);

    CURLcode res = curl_easy_perform(m_curlHandle);
    if (resolveList)
    {
        curl_slist_free_all(resolveList);
    }

    if (header_list)
    {
        curl_slist_free_all(header_list);
    }
    switch (res)
    {
    case CURLE_OK:
    {
        int64_t response_code = 0;
        curl_easy_getinfo(m_curlHandle, CURLINFO_RESPONSE_CODE, &response_code);
        response.SetStatusCode(response_code);
        response.SetBody(out.str());
#ifdef ENABLE_COMPRESS_MODULE
        if (response.Header("Content-Encoding").find("gzip") != std::string::npos)
        {
            std::string decompressData;
            if (TryDecompress(out.str().c_str(), out.str().size(), decompressData)) {

                response.SetBody(decompressData);
            }
        }
#endif // ENABLE_COMPRESS_MODULE

        if (response_code != 200)
        {
            std::string errorMsg = "status=" + Utils::int2str(response_code) + ", " + out.str();
            return HttpResponseOutcome(Core::Error("ServiceNetworkError", errorMsg));
        }

        return HttpResponseOutcome(response);
    }
    default:
        return HttpResponseOutcome(Core::Error("NetworkError", std::string(errbuf)));
    }
}

#ifdef ENABLE_COMPRESS_MODULE
bool HttpClient::TryDecompress(const char *src, int srcLen, std::string &decompressData)
{
    for (int i = 0; i < GZIPCOMPRESSMULTIPLE; i++) {
        int buffSize = srcLen * 10 * (i + 1);
        char *buffer = new char[buffSize]();
        int ret = GzipDecompress(src, srcLen, buffer, &buffSize);
        if (Z_STREAM_END == ret) {
            decompressData = buffer;
            delete []buffer;
            return true;
        } else {
            delete []buffer;
        }
    }
    return false;
}

int HttpClient::GzipDecompress(const char *src, int srcLen, const char *dst, int* dstLen) {
  z_stream stream;
  stream.zalloc = Z_NULL;
  stream.zfree = Z_NULL;
  stream.opaque = Z_NULL;
  stream.avail_in = srcLen;
  stream.avail_out = *dstLen;
  stream.next_in = (Bytef *)src;
  stream.next_out = (Bytef *)dst;

  int err = inflateInit2(&stream, MAX_WBITS + GZIPDECODING);
  if (err == Z_OK) {
    err = inflate(&stream, Z_FINISH);
    if (err == Z_STREAM_END) {
      *dstLen = stream.total_out;
    }
  }
  inflateEnd(&stream);
  return err;
}
#endif // ENABLE_COMPRESS_MODULE

void HttpClient::SendRequestAsync(HttpRequest request, CompletionHandler handler)
{
    CURL* curl_handle = curl_easy_init();
    auto ctx = new AsyncReqContext{request, {}, std::move(handler)};
    ctx->curl_handle = curl_handle;

    std::string url = ctx->request.GetUrl().ToString();
    switch (ctx->request.GetMethod())
    {
    case HttpRequest::Method::POST:
        {
            if (ctx->request.BodySize() > 0)
            {
                curl_easy_setopt(curl_handle, CURLOPT_POSTFIELDS, ctx->request.Body());
                // explicitly set body size because libcurl use strlen() to determine body size
                // which could fail when there is a '\0' in the middle
                if (ctx->request.BodySize() > (size_t)2 * 1024 * 1024 * 1024)
                {
                    // https://curl.se/libcurl/c/CURLOPT_POSTFIELDSIZE.html
                    // If you post more than 2GB, use CURLOPT_POSTFIELDSIZE_LARGE
                    curl_easy_setopt(curl_handle, CURLOPT_POSTFIELDSIZE_LARGE, ctx->request.BodySize());
                }
                else
                {
                    curl_easy_setopt(curl_handle, CURLOPT_POSTFIELDSIZE, ctx->request.BodySize());
                }
            }
            else
            {
                curl_easy_setopt(curl_handle, CURLOPT_POSTFIELDS, "");
            }
        }
        break;
    default:
        break;
    }

    curl_easy_setopt(curl_handle, CURLOPT_NOSIGNAL, 1L);
    curl_easy_setopt(curl_handle, CURLOPT_TIMEOUT_MS, m_reqTimeout);
    curl_easy_setopt(curl_handle, CURLOPT_CONNECTTIMEOUT_MS, m_connectTimeout);

    curl_easy_setopt(curl_handle, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl_handle, CURLOPT_SSL_VERIFYPEER, 1L);
    curl_easy_setopt(curl_handle, CURLOPT_SSL_VERIFYHOST, 2L);
    curl_easy_setopt(curl_handle, CURLOPT_HEADERDATA, ctx);
    curl_easy_setopt(curl_handle, CURLOPT_HEADERFUNCTION, &HttpClient::CurlReadHeader);

    for (const auto& header : ctx->request.Headers())
    {
        std::string str = header.first;
        str.append(": ").append(header.second);
        ctx->curl_header_buffer = curl_slist_append(ctx->curl_header_buffer, str.c_str());
    }
    curl_easy_setopt(curl_handle, CURLOPT_HTTPHEADER, ctx->curl_header_buffer);
    curl_easy_setopt(curl_handle, CURLOPT_WRITEDATA, ctx);
    curl_easy_setopt(curl_handle, CURLOPT_WRITEFUNCTION, &HttpClient::CurlReadBody);
    setCUrlProxy(curl_handle, m_proxy);
    curl_easy_setopt(curl_handle, CURLOPT_PRIVATE, ctx);

    curl_easy_setopt(curl_handle, CURLOPT_ERRORBUFFER, ctx->curl_err_buffer);

    {
        std::lock_guard<std::mutex> lock_guard{m_pendingReqsMu};
        m_pendingReqs.push_back(ctx);
    }

    curl_multi_wakeup(m_curlm);
}


void HttpClient::AsyncReqHandler()
{
    while (m_asyncRunning)
    {
        CURLMcode err;

        {
            std::lock_guard<std::mutex> lock_guard{m_pendingReqsMu};

            if (!m_pendingReqs.empty())
            {
                for (const auto& async_req : m_pendingReqs)
                {
                    err = curl_multi_add_handle(m_curlm, async_req->curl_handle);
                    if (err)
                    {
                        std::cerr << "curl_multi_add_handle:" << curl_multi_strerror(err) << std::endl;
                        async_req->completion_handler(
                            HttpResponseOutcome(Core::Error("ClientError", curl_multi_strerror(err))));
                    }
                }
                m_pendingReqs.clear();

                int running_handles = 1;
                err = curl_multi_perform(m_curlm, &running_handles);
                if (err)
                {
                    std::cerr << "curl_multi_perform:" << curl_multi_strerror(err) << std::endl;
                    curl_multi_cleanup(m_curlm);
                    m_curlm = curl_multi_init();
                    continue;
                }
            }
        }

        int ready_handles;
        err = curl_multi_poll(m_curlm, nullptr, 0, 5000, &ready_handles);
        if (err)
        {
            std::cerr << "curl_multi_poll:" << curl_multi_strerror(err) << std::endl;
            curl_multi_cleanup(m_curlm);
            m_curlm = curl_multi_init();
            continue;
        }

        int running_handles = 1;
        err = curl_multi_perform(m_curlm, &running_handles);
        if (err)
        {
            std::cerr << "curl_multi_perform:" << curl_multi_strerror(err) << std::endl;
            curl_multi_cleanup(m_curlm);
            m_curlm = curl_multi_init();
            continue;
        }


        CURLMsg* msg;
        do
        {
            msg = curl_multi_info_read(m_curlm, &ready_handles);
            if (msg && (msg->msg == CURLMSG_DONE))
            {
                AsyncReqContext* ctx;
                curl_easy_getinfo(msg->easy_handle, CURLINFO_PRIVATE, &ctx);

                {
                    int64_t response_code = 0;
                    curl_easy_getinfo(msg->easy_handle, CURLINFO_RESPONSE_CODE, &response_code);
                    ctx->response.SetStatusCode(response_code);
#ifdef ENABLE_COMPRESS_MODULE
                    if (ctx->response.Header("Content-Encoding").find("gzip") != std::string::npos)
                    {
                        std::string decompressData;
                        if (TryDecompress(ctx->response.Body(), ctx->response.BodySize(), decompressData))
                        {
                            ctx->response.SetBody(decompressData);
                        }
                    }
#endif // ENABLE_COMPRESS_MODULE

                    if (response_code != 200)
                    {
                        std::string errorMsg = "status=" + std::to_string(response_code) + ", " + ctx->response.
                            m_body;
                        ctx->completion_handler(HttpResponseOutcome(Core::Error("ServiceNetworkError", errorMsg)));
                    }
                    else
                    {
                        ctx->completion_handler(HttpResponseOutcome(ctx->response));
                    }
                }

                curl_slist_free_all(ctx->curl_header_buffer);
                delete ctx;

                curl_multi_remove_handle(m_curlm, msg->easy_handle);
                curl_easy_cleanup(msg->easy_handle);
            }
        }
        while (msg);
    }
}


size_t HttpClient::CurlReadHeader(char* ptr, size_t size, size_t nitems, void* userp)
{
    auto* ctx = static_cast<AsyncReqContext*>(userp);
    std::string line(ptr);

    // remove trailing \r\n or \n
    while (!line.empty() && (line.back() == '\r' || line.back() == '\n'))
        line.resize(line.size() - 1);

    size_t colon_pos = line.find(": ");
    if (colon_pos == std::string::npos)
    {
        // invalid format
        return nitems * size;;
    }

    const auto key = line.substr(0, colon_pos);
    const auto value = line.substr(colon_pos + 2);
    ctx->response.SetHeader(key, value);
    return nitems * size;
}

size_t HttpClient::CurlReadBody(char* ptr, size_t size, size_t nmemb, void* userdata)
{
    auto* ctx = static_cast<AsyncReqContext*>(userdata);
    ctx->response.m_body.append(ptr, nmemb * size);
    return nmemb * size;
}
