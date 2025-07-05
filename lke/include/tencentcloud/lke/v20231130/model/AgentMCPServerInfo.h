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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTMCPSERVERINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTMCPSERVERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AgentPluginHeader.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * mcp的服务信息
                */
                class AgentMCPServerInfo : public AbstractModel
                {
                public:
                    AgentMCPServerInfo();
                    ~AgentMCPServerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取mcp server URL地址
                     * @return McpServerUrl mcp server URL地址
                     * 
                     */
                    std::string GetMcpServerUrl() const;

                    /**
                     * 设置mcp server URL地址
                     * @param _mcpServerUrl mcp server URL地址
                     * 
                     */
                    void SetMcpServerUrl(const std::string& _mcpServerUrl);

                    /**
                     * 判断参数 McpServerUrl 是否已赋值
                     * @return McpServerUrl 是否已赋值
                     * 
                     */
                    bool McpServerUrlHasBeenSet() const;

                    /**
                     * 获取mcp server header信息
                     * @return Headers mcp server header信息
                     * 
                     */
                    std::vector<AgentPluginHeader> GetHeaders() const;

                    /**
                     * 设置mcp server header信息
                     * @param _headers mcp server header信息
                     * 
                     */
                    void SetHeaders(const std::vector<AgentPluginHeader>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取超时时间，单位秒
                     * @return Timeout 超时时间，单位秒
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置超时时间，单位秒
                     * @param _timeout 超时时间，单位秒
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取sse服务超时时间，单位秒
                     * @return SseReadTimeout sse服务超时时间，单位秒
                     * 
                     */
                    int64_t GetSseReadTimeout() const;

                    /**
                     * 设置sse服务超时时间，单位秒
                     * @param _sseReadTimeout sse服务超时时间，单位秒
                     * 
                     */
                    void SetSseReadTimeout(const int64_t& _sseReadTimeout);

                    /**
                     * 判断参数 SseReadTimeout 是否已赋值
                     * @return SseReadTimeout 是否已赋值
                     * 
                     */
                    bool SseReadTimeoutHasBeenSet() const;

                private:

                    /**
                     * mcp server URL地址
                     */
                    std::string m_mcpServerUrl;
                    bool m_mcpServerUrlHasBeenSet;

                    /**
                     * mcp server header信息
                     */
                    std::vector<AgentPluginHeader> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * 超时时间，单位秒
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * sse服务超时时间，单位秒
                     */
                    int64_t m_sseReadTimeout;
                    bool m_sseReadTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTMCPSERVERINFO_H_
