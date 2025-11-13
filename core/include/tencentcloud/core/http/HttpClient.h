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

#ifndef TENCENTCLOUD_CORE_HTTP_HTTPCLIENT_H_
#define TENCENTCLOUD_CORE_HTTP_HTTPCLIENT_H_

#include <curl/curl.h>
#include <functional>
#include <thread>
#include <tencentcloud/core/Outcome.h>
#include <tencentcloud/core/Error.h>
#include <tencentcloud/core/NetworkProxy.h>
#include "HttpResponse.h"
#include <string>

namespace TencentCloud
{
    class HttpClient
    {
    public:
        typedef Outcome<Core::Error, HttpResponse> HttpResponseOutcome;

        HttpClient();
        ~HttpClient();

        void SetReqTimeout(int64_t timeoutOfMs);
        void SetConnectTimeout(int64_t timeoutOfMs);

        void SetCaInfo(std::string caInfo);
        void SetCaPath(std::string caPath);

        void SetResolveIp(std::string resolveIp);

        HttpResponseOutcome SendRequest(const HttpRequest &request);

        using CompletionHandler = std::function<void(HttpResponseOutcome)>;
        void SendRequestAsync(HttpRequest request, CompletionHandler handler);

        void SetProxy(const NetworkProxy &proxy);

        static void InitGlobalState();
        static void CleanupGlobalState();

    private:
        CURL *m_curlHandle;
        int64_t m_reqTimeout;
        int64_t m_connectTimeout;
        NetworkProxy m_proxy;
        std::string m_caInfo;
        std::string m_caPath;
        std::string m_resolveIp;
#ifdef ENABLE_COMPRESS_MODULE
        int GzipDecompress(const char *src, int srcLen, const char *dst, int* dstLen);
        bool TryDecompress(const char *src, int srcLen, std::string &decompressData);
#endif // ENABLE_COMPRESS_MODULE

        void AsyncReqHandler();

        static size_t CurlReadHeader(char* ptr, size_t size, size_t nmemb, void* userp);
        static size_t CurlReadBody(char* ptr, size_t size, size_t nmemb, void* userp);

        struct AsyncReqContext
        {
            HttpRequest request;
            HttpResponse response;

            CompletionHandler completion_handler;

            CURL* curl_handle;
            curl_slist* curl_header_buffer;
            char curl_err_buffer[CURL_ERROR_SIZE];
        };

        bool m_asyncRunning;
        std::vector<AsyncReqContext*> m_pendingReqs;
        std::mutex m_pendingReqsMu;
        std::thread m_asyncReqHandler;
        CURLM* m_curlm;
    };
}

#endif // !TENCENTCLOUD_CORE_HTTP_HTTPCLIENT_H_