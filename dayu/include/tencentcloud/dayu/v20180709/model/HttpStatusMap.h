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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_HTTPSTATUSMAP_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_HTTPSTATUSMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 业务流量的http状态码聚合数据
                */
                class HttpStatusMap : public AbstractModel
                {
                public:
                    HttpStatusMap();
                    ~HttpStatusMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取http2xx状态码
                     * @return Http2xx http2xx状态码
                     * 
                     */
                    std::vector<double> GetHttp2xx() const;

                    /**
                     * 设置http2xx状态码
                     * @param _http2xx http2xx状态码
                     * 
                     */
                    void SetHttp2xx(const std::vector<double>& _http2xx);

                    /**
                     * 判断参数 Http2xx 是否已赋值
                     * @return Http2xx 是否已赋值
                     * 
                     */
                    bool Http2xxHasBeenSet() const;

                    /**
                     * 获取http3xx状态码
                     * @return Http3xx http3xx状态码
                     * 
                     */
                    std::vector<double> GetHttp3xx() const;

                    /**
                     * 设置http3xx状态码
                     * @param _http3xx http3xx状态码
                     * 
                     */
                    void SetHttp3xx(const std::vector<double>& _http3xx);

                    /**
                     * 判断参数 Http3xx 是否已赋值
                     * @return Http3xx 是否已赋值
                     * 
                     */
                    bool Http3xxHasBeenSet() const;

                    /**
                     * 获取http404状态码
                     * @return Http404 http404状态码
                     * 
                     */
                    std::vector<double> GetHttp404() const;

                    /**
                     * 设置http404状态码
                     * @param _http404 http404状态码
                     * 
                     */
                    void SetHttp404(const std::vector<double>& _http404);

                    /**
                     * 判断参数 Http404 是否已赋值
                     * @return Http404 是否已赋值
                     * 
                     */
                    bool Http404HasBeenSet() const;

                    /**
                     * 获取http4xx状态码
                     * @return Http4xx http4xx状态码
                     * 
                     */
                    std::vector<double> GetHttp4xx() const;

                    /**
                     * 设置http4xx状态码
                     * @param _http4xx http4xx状态码
                     * 
                     */
                    void SetHttp4xx(const std::vector<double>& _http4xx);

                    /**
                     * 判断参数 Http4xx 是否已赋值
                     * @return Http4xx 是否已赋值
                     * 
                     */
                    bool Http4xxHasBeenSet() const;

                    /**
                     * 获取http5xx状态码
                     * @return Http5xx http5xx状态码
                     * 
                     */
                    std::vector<double> GetHttp5xx() const;

                    /**
                     * 设置http5xx状态码
                     * @param _http5xx http5xx状态码
                     * 
                     */
                    void SetHttp5xx(const std::vector<double>& _http5xx);

                    /**
                     * 判断参数 Http5xx 是否已赋值
                     * @return Http5xx 是否已赋值
                     * 
                     */
                    bool Http5xxHasBeenSet() const;

                    /**
                     * 获取http2xx回源状态码
                     * @return SourceHttp2xx http2xx回源状态码
                     * 
                     */
                    std::vector<double> GetSourceHttp2xx() const;

                    /**
                     * 设置http2xx回源状态码
                     * @param _sourceHttp2xx http2xx回源状态码
                     * 
                     */
                    void SetSourceHttp2xx(const std::vector<double>& _sourceHttp2xx);

                    /**
                     * 判断参数 SourceHttp2xx 是否已赋值
                     * @return SourceHttp2xx 是否已赋值
                     * 
                     */
                    bool SourceHttp2xxHasBeenSet() const;

                    /**
                     * 获取http3xx回源状态码
                     * @return SourceHttp3xx http3xx回源状态码
                     * 
                     */
                    std::vector<double> GetSourceHttp3xx() const;

                    /**
                     * 设置http3xx回源状态码
                     * @param _sourceHttp3xx http3xx回源状态码
                     * 
                     */
                    void SetSourceHttp3xx(const std::vector<double>& _sourceHttp3xx);

                    /**
                     * 判断参数 SourceHttp3xx 是否已赋值
                     * @return SourceHttp3xx 是否已赋值
                     * 
                     */
                    bool SourceHttp3xxHasBeenSet() const;

                    /**
                     * 获取http404回源状态码
                     * @return SourceHttp404 http404回源状态码
                     * 
                     */
                    std::vector<double> GetSourceHttp404() const;

                    /**
                     * 设置http404回源状态码
                     * @param _sourceHttp404 http404回源状态码
                     * 
                     */
                    void SetSourceHttp404(const std::vector<double>& _sourceHttp404);

                    /**
                     * 判断参数 SourceHttp404 是否已赋值
                     * @return SourceHttp404 是否已赋值
                     * 
                     */
                    bool SourceHttp404HasBeenSet() const;

                    /**
                     * 获取http4xx回源状态码
                     * @return SourceHttp4xx http4xx回源状态码
                     * 
                     */
                    std::vector<double> GetSourceHttp4xx() const;

                    /**
                     * 设置http4xx回源状态码
                     * @param _sourceHttp4xx http4xx回源状态码
                     * 
                     */
                    void SetSourceHttp4xx(const std::vector<double>& _sourceHttp4xx);

                    /**
                     * 判断参数 SourceHttp4xx 是否已赋值
                     * @return SourceHttp4xx 是否已赋值
                     * 
                     */
                    bool SourceHttp4xxHasBeenSet() const;

                    /**
                     * 获取http5xx回源状态码
                     * @return SourceHttp5xx http5xx回源状态码
                     * 
                     */
                    std::vector<double> GetSourceHttp5xx() const;

                    /**
                     * 设置http5xx回源状态码
                     * @param _sourceHttp5xx http5xx回源状态码
                     * 
                     */
                    void SetSourceHttp5xx(const std::vector<double>& _sourceHttp5xx);

                    /**
                     * 判断参数 SourceHttp5xx 是否已赋值
                     * @return SourceHttp5xx 是否已赋值
                     * 
                     */
                    bool SourceHttp5xxHasBeenSet() const;

                private:

                    /**
                     * http2xx状态码
                     */
                    std::vector<double> m_http2xx;
                    bool m_http2xxHasBeenSet;

                    /**
                     * http3xx状态码
                     */
                    std::vector<double> m_http3xx;
                    bool m_http3xxHasBeenSet;

                    /**
                     * http404状态码
                     */
                    std::vector<double> m_http404;
                    bool m_http404HasBeenSet;

                    /**
                     * http4xx状态码
                     */
                    std::vector<double> m_http4xx;
                    bool m_http4xxHasBeenSet;

                    /**
                     * http5xx状态码
                     */
                    std::vector<double> m_http5xx;
                    bool m_http5xxHasBeenSet;

                    /**
                     * http2xx回源状态码
                     */
                    std::vector<double> m_sourceHttp2xx;
                    bool m_sourceHttp2xxHasBeenSet;

                    /**
                     * http3xx回源状态码
                     */
                    std::vector<double> m_sourceHttp3xx;
                    bool m_sourceHttp3xxHasBeenSet;

                    /**
                     * http404回源状态码
                     */
                    std::vector<double> m_sourceHttp404;
                    bool m_sourceHttp404HasBeenSet;

                    /**
                     * http4xx回源状态码
                     */
                    std::vector<double> m_sourceHttp4xx;
                    bool m_sourceHttp4xxHasBeenSet;

                    /**
                     * http5xx回源状态码
                     */
                    std::vector<double> m_sourceHttp5xx;
                    bool m_sourceHttp5xxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_HTTPSTATUSMAP_H_
