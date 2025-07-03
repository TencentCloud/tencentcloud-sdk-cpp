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

#include "AbstractClient.h"
#include "AsyncCallerContext.h"

namespace TencentCloud 
{
    class CurlAsync {
        friend class AbstractClient;
    public:
        static CurlAsync* GetInstance();
        bool Start();
        void Shutdown();

    private:
        void AddRequest(HttpClient* httpClient, HttpRequest request, std::shared_ptr<std::promise<HttpClient::HttpResponseOutcome>> promise);

        class Garbo {
        public:
            ~Garbo() {
                if (CurlAsync::m_instance != nullptr) {
                    delete CurlAsync::m_instance;
                    CurlAsync::m_instance = nullptr;
                }
            }
        };

        // template<typename ClientType, typename ReqType, typename HandlerType>
        struct AsyncContext {
            // ClientType client;
            // ReqType request;
            // HandlerType handler;

            HttpRequest request;
            std::shared_ptr<const AsyncCallerContext> reqContext;

            std::ostringstream responseStream;
            HttpResponse response;
            char errorBuffer[CURL_ERROR_SIZE];
            curl_slist* headerList = nullptr;
            std::shared_ptr<std::promise<HttpClient::HttpResponseOutcome>> promise;

            virtual ~AsyncContext() {
                if (headerList) {
                    curl_slist_free_all(headerList);
                }
            }
        };

        CurlAsync();
        ~CurlAsync();
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