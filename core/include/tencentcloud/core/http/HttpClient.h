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
        int64_t GetReqTimeout() const {return m_reqTimeout;};
        void SetConnectTimeout(int64_t timeoutOfMs);
        int64_t GetConnectTimeout() const {return m_connectTimeout;};

        void SetCaInfo(std::string caInfo);
        std::string GetCaInfo() const {return m_caInfo;};
        void SetCaPath(std::string caPath);
        std::string GetCaPath() const {return m_caPath;};

        HttpResponseOutcome SendRequest(const HttpRequest &request);

        void SetProxy(const NetworkProxy &proxy);
        NetworkProxy GetProxy() const {return m_proxy;};

        static void InitGlobalState();
        static void CleanupGlobalState();

    private:
        CURL *m_curlHandle;
        int64_t m_reqTimeout;
        int64_t m_connectTimeout;
        NetworkProxy m_proxy;
        std::string m_caInfo;
        std::string m_caPath;
#ifdef ENABLE_COMPRESS_MODULE
        int GzipDecompress(const char *src, int srcLen, const char *dst, int* dstLen);
        bool TryDecompress(const char *src, int srcLen, std::string &decompressData);
#endif // ENABLE_COMPRESS_MODULE
    };
}

#endif // !TENCENTCLOUD_CORE_HTTP_HTTPCLIENT_H_
