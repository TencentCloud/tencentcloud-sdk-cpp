#ifndef TENCENTCLOUD_CORE_CURLASYNC_H_
#define TENCENTCLOUD_CORE_CURLASYNC_H_

#include <tencentcloud/core/http/HttpClient.h>
#include <tencentcloud/core/http/HttpRequest.h>
#include <tencentcloud/core/http/HttpResponse.h>
#include <tencentcloud/core/Outcome.h>
#include <curl/curl.h>
#include <string>
#include <vector>
#include <thread>
#include <atomic>
#include <memory>
#include <future>

namespace TencentCloud 
{
    class CurlAsync {
    public:
        ~CurlAsync();
        static CurlAsync* GetInstance();

        bool Start();
        CURL* AddRequest(HttpClient* httpClient, const HttpRequest &request, std::shared_ptr<std::promise<HttpClient::HttpResponseOutcome>> promise);
        void Shutdown();

    private:
        class Garbo {
        public:
            ~Garbo() {
                if (CurlAsync::m_instance != nullptr) {
                    delete CurlAsync::m_instance;
                    CurlAsync::m_instance = nullptr;
                }
            }
        };

        struct AsyncContext {
            std::ostringstream responseStream;
            HttpResponse response;
            char errorBuffer[CURL_ERROR_SIZE];
            curl_slist* headerList = nullptr;
            std::shared_ptr<std::promise<HttpClient::HttpResponseOutcome>> promise;

            ~AsyncContext() {
                if (headerList) {
                    curl_slist_free_all(headerList);
                }
            }
        };

        CurlAsync();
        void IoThreadLoop(); 
        void readTaskResult();

        static CurlAsync* m_instance;
        static std::mutex m_instanceMutex;
        static Garbo m_garbo;

        CURLM* m_multiHandle;
        std::mutex m_multiHandleMutex;
        std::vector<CURL*> m_easyHandles; 
        std::unordered_map<CURL*, std::shared_ptr<AsyncContext>> m_activeContexts;
        std::mutex m_esayHandlesMutex;

        std::thread m_ioThread;
        std::atomic<bool> m_stopIoThread;
        std::mutex m_stopIoMutex;
    };
}

#endif // TENCENTCLOUD_CORE_CURLASYNC_H_