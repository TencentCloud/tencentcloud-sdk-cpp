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
    class CurlAsync 
    {
        friend class AbstractClient;
        
    public:
        static CurlAsync* GetInstance();
        bool Start();
        void Shutdown();

    private:
        void AddRequest(HttpClient* httpClient, HttpRequest request, AbstractClient::AsyncCallback callback);

        class Garbo 
        {
        public:
            ~Garbo() 
            {
                if (CurlAsync::m_instance != nullptr) 
                {
                    delete CurlAsync::m_instance;
                    CurlAsync::m_instance = nullptr;
                }
            }
        };

        struct AsyncContext 
        {
            curl_slist* headerList = nullptr;
            char errorBuffer[CURL_ERROR_SIZE];
            HttpResponse response;
            std::ostringstream responseStream;
            AbstractClient::AsyncCallback callback;
        };

        CurlAsync();
        ~CurlAsync();
        void CurlMultiLoop(); 
        void ReadTaskResult();

        static CurlAsync* m_instance;
        static std::mutex m_instanceMutex;
        static Garbo m_garbo;

        CURLM* m_multiHandle;
        std::mutex m_multiHandleMutex;
        std::unordered_map<CURL*, std::shared_ptr<AsyncContext>> m_activeContexts;
        std::mutex m_easyHandlesMutex;

        std::thread m_ioThread;
        std::atomic<bool> m_stopIoThread;
        std::mutex m_stopIoMutex;
    };
}

#endif // TENCENTCLOUD_CORE_CURLASYNC_H_