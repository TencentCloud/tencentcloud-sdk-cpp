/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AIGWLOGCONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AIGWLOGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * AI 网关日志输出配置
                */
                class AIGWLogConfig : public AbstractModel
                {
                public:
                    AIGWLogConfig();
                    ~AIGWLogConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否开启请求 payload 记录日志</p>
                     * @return EnableRequestLogPayloads <p>是否开启请求 payload 记录日志</p>
                     * 
                     */
                    bool GetEnableRequestLogPayloads() const;

                    /**
                     * 设置<p>是否开启请求 payload 记录日志</p>
                     * @param _enableRequestLogPayloads <p>是否开启请求 payload 记录日志</p>
                     * 
                     */
                    void SetEnableRequestLogPayloads(const bool& _enableRequestLogPayloads);

                    /**
                     * 判断参数 EnableRequestLogPayloads 是否已赋值
                     * @return EnableRequestLogPayloads 是否已赋值
                     * 
                     */
                    bool EnableRequestLogPayloadsHasBeenSet() const;

                    /**
                     * 获取<p>是否开启响应 payload 记录日志</p>
                     * @return EnableResponseLogPayloads <p>是否开启响应 payload 记录日志</p>
                     * 
                     */
                    bool GetEnableResponseLogPayloads() const;

                    /**
                     * 设置<p>是否开启响应 payload 记录日志</p>
                     * @param _enableResponseLogPayloads <p>是否开启响应 payload 记录日志</p>
                     * 
                     */
                    void SetEnableResponseLogPayloads(const bool& _enableResponseLogPayloads);

                    /**
                     * 判断参数 EnableResponseLogPayloads 是否已赋值
                     * @return EnableResponseLogPayloads 是否已赋值
                     * 
                     */
                    bool EnableResponseLogPayloadsHasBeenSet() const;

                    /**
                     * 获取<p>日志记录的请求body的最大字节数</p><p>取值范围：[512, 1048576]</p><p>EnableRequestLogPayloads 为true时必填</p>
                     * @return RequestLogPayloadMaxSize <p>日志记录的请求body的最大字节数</p><p>取值范围：[512, 1048576]</p><p>EnableRequestLogPayloads 为true时必填</p>
                     * 
                     */
                    int64_t GetRequestLogPayloadMaxSize() const;

                    /**
                     * 设置<p>日志记录的请求body的最大字节数</p><p>取值范围：[512, 1048576]</p><p>EnableRequestLogPayloads 为true时必填</p>
                     * @param _requestLogPayloadMaxSize <p>日志记录的请求body的最大字节数</p><p>取值范围：[512, 1048576]</p><p>EnableRequestLogPayloads 为true时必填</p>
                     * 
                     */
                    void SetRequestLogPayloadMaxSize(const int64_t& _requestLogPayloadMaxSize);

                    /**
                     * 判断参数 RequestLogPayloadMaxSize 是否已赋值
                     * @return RequestLogPayloadMaxSize 是否已赋值
                     * 
                     */
                    bool RequestLogPayloadMaxSizeHasBeenSet() const;

                    /**
                     * 获取<p>日志记录的响应body的最大字节数</p><p>取值范围：[512, 1048576]</p><p>EnableResponseLogPayloads 为true时必填</p>
                     * @return ResponseLogPayloadMaxSize <p>日志记录的响应body的最大字节数</p><p>取值范围：[512, 1048576]</p><p>EnableResponseLogPayloads 为true时必填</p>
                     * 
                     */
                    int64_t GetResponseLogPayloadMaxSize() const;

                    /**
                     * 设置<p>日志记录的响应body的最大字节数</p><p>取值范围：[512, 1048576]</p><p>EnableResponseLogPayloads 为true时必填</p>
                     * @param _responseLogPayloadMaxSize <p>日志记录的响应body的最大字节数</p><p>取值范围：[512, 1048576]</p><p>EnableResponseLogPayloads 为true时必填</p>
                     * 
                     */
                    void SetResponseLogPayloadMaxSize(const int64_t& _responseLogPayloadMaxSize);

                    /**
                     * 判断参数 ResponseLogPayloadMaxSize 是否已赋值
                     * @return ResponseLogPayloadMaxSize 是否已赋值
                     * 
                     */
                    bool ResponseLogPayloadMaxSizeHasBeenSet() const;

                    /**
                     * 获取<p>请求 payload access log 输出模式</p><p>枚举值：</p><ul><li>raw： access log 中 body 记录客户端原始请求</li><li>processed： access log 中 body 记录 AI 网关协议适配、改写、归一化后的 OpenAI-compatible 内容</li></ul>
                     * @return RequestLogPayloadMode <p>请求 payload access log 输出模式</p><p>枚举值：</p><ul><li>raw： access log 中 body 记录客户端原始请求</li><li>processed： access log 中 body 记录 AI 网关协议适配、改写、归一化后的 OpenAI-compatible 内容</li></ul>
                     * 
                     */
                    std::string GetRequestLogPayloadMode() const;

                    /**
                     * 设置<p>请求 payload access log 输出模式</p><p>枚举值：</p><ul><li>raw： access log 中 body 记录客户端原始请求</li><li>processed： access log 中 body 记录 AI 网关协议适配、改写、归一化后的 OpenAI-compatible 内容</li></ul>
                     * @param _requestLogPayloadMode <p>请求 payload access log 输出模式</p><p>枚举值：</p><ul><li>raw： access log 中 body 记录客户端原始请求</li><li>processed： access log 中 body 记录 AI 网关协议适配、改写、归一化后的 OpenAI-compatible 内容</li></ul>
                     * 
                     */
                    void SetRequestLogPayloadMode(const std::string& _requestLogPayloadMode);

                    /**
                     * 判断参数 RequestLogPayloadMode 是否已赋值
                     * @return RequestLogPayloadMode 是否已赋值
                     * 
                     */
                    bool RequestLogPayloadModeHasBeenSet() const;

                    /**
                     * 获取<p>上游原始 payload access log 输出模式</p><p>枚举值：</p><ul><li>raw： access log 中 body 记录客户端原始上游响应</li><li>processed： access log 中 body 记录 AI 网关协议适配、改写、归一化后的 OpenAI-compatible 内容</li></ul>
                     * @return ResponseLogPayloadMode <p>上游原始 payload access log 输出模式</p><p>枚举值：</p><ul><li>raw： access log 中 body 记录客户端原始上游响应</li><li>processed： access log 中 body 记录 AI 网关协议适配、改写、归一化后的 OpenAI-compatible 内容</li></ul>
                     * 
                     */
                    std::string GetResponseLogPayloadMode() const;

                    /**
                     * 设置<p>上游原始 payload access log 输出模式</p><p>枚举值：</p><ul><li>raw： access log 中 body 记录客户端原始上游响应</li><li>processed： access log 中 body 记录 AI 网关协议适配、改写、归一化后的 OpenAI-compatible 内容</li></ul>
                     * @param _responseLogPayloadMode <p>上游原始 payload access log 输出模式</p><p>枚举值：</p><ul><li>raw： access log 中 body 记录客户端原始上游响应</li><li>processed： access log 中 body 记录 AI 网关协议适配、改写、归一化后的 OpenAI-compatible 内容</li></ul>
                     * 
                     */
                    void SetResponseLogPayloadMode(const std::string& _responseLogPayloadMode);

                    /**
                     * 判断参数 ResponseLogPayloadMode 是否已赋值
                     * @return ResponseLogPayloadMode 是否已赋值
                     * 
                     */
                    bool ResponseLogPayloadModeHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启请求 payload 记录日志</p>
                     */
                    bool m_enableRequestLogPayloads;
                    bool m_enableRequestLogPayloadsHasBeenSet;

                    /**
                     * <p>是否开启响应 payload 记录日志</p>
                     */
                    bool m_enableResponseLogPayloads;
                    bool m_enableResponseLogPayloadsHasBeenSet;

                    /**
                     * <p>日志记录的请求body的最大字节数</p><p>取值范围：[512, 1048576]</p><p>EnableRequestLogPayloads 为true时必填</p>
                     */
                    int64_t m_requestLogPayloadMaxSize;
                    bool m_requestLogPayloadMaxSizeHasBeenSet;

                    /**
                     * <p>日志记录的响应body的最大字节数</p><p>取值范围：[512, 1048576]</p><p>EnableResponseLogPayloads 为true时必填</p>
                     */
                    int64_t m_responseLogPayloadMaxSize;
                    bool m_responseLogPayloadMaxSizeHasBeenSet;

                    /**
                     * <p>请求 payload access log 输出模式</p><p>枚举值：</p><ul><li>raw： access log 中 body 记录客户端原始请求</li><li>processed： access log 中 body 记录 AI 网关协议适配、改写、归一化后的 OpenAI-compatible 内容</li></ul>
                     */
                    std::string m_requestLogPayloadMode;
                    bool m_requestLogPayloadModeHasBeenSet;

                    /**
                     * <p>上游原始 payload access log 输出模式</p><p>枚举值：</p><ul><li>raw： access log 中 body 记录客户端原始上游响应</li><li>processed： access log 中 body 记录 AI 网关协议适配、改写、归一化后的 OpenAI-compatible 内容</li></ul>
                     */
                    std::string m_responseLogPayloadMode;
                    bool m_responseLogPayloadModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AIGWLOGCONFIG_H_
