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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MCPPLUGINCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MCPPLUGINCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/PluginParam.h>
#include <tencentcloud/adp/v20260520/model/AuthConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * MCP插件配置信息
                */
                class MCPPluginConfig : public AbstractModel
                {
                public:
                    MCPPluginConfig();
                    ~MCPPluginConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>MCP插件外部访问地址</p>
                     * @return ExternalMCPServerUrl <p>MCP插件外部访问地址</p>
                     * 
                     */
                    std::string GetExternalMCPServerUrl() const;

                    /**
                     * 设置<p>MCP插件外部访问地址</p>
                     * @param _externalMCPServerUrl <p>MCP插件外部访问地址</p>
                     * 
                     */
                    void SetExternalMCPServerUrl(const std::string& _externalMCPServerUrl);

                    /**
                     * 判断参数 ExternalMCPServerUrl 是否已赋值
                     * @return ExternalMCPServerUrl 是否已赋值
                     * 
                     */
                    bool ExternalMCPServerUrlHasBeenSet() const;

                    /**
                     * 获取<p>MCP server地址</p>
                     * @return MCPServerUrl <p>MCP server地址</p>
                     * 
                     */
                    std::string GetMCPServerUrl() const;

                    /**
                     * 设置<p>MCP server地址</p>
                     * @param _mCPServerUrl <p>MCP server地址</p>
                     * 
                     */
                    void SetMCPServerUrl(const std::string& _mCPServerUrl);

                    /**
                     * 判断参数 MCPServerUrl 是否已赋值
                     * @return MCPServerUrl 是否已赋值
                     * 
                     */
                    bool MCPServerUrlHasBeenSet() const;

                    /**
                     * 获取<p>MCP传输类型: SSE/Streamable<br>枚举值:<br>| uint | 描述 |<br>| --- | --- |<br>| 0 | SSE + HTTP 模式 |<br>| 1 | Streamable HTTP 模式 |</p>
                     * @return MCPTransport <p>MCP传输类型: SSE/Streamable<br>枚举值:<br>| uint | 描述 |<br>| --- | --- |<br>| 0 | SSE + HTTP 模式 |<br>| 1 | Streamable HTTP 模式 |</p>
                     * 
                     */
                    int64_t GetMCPTransport() const;

                    /**
                     * 设置<p>MCP传输类型: SSE/Streamable<br>枚举值:<br>| uint | 描述 |<br>| --- | --- |<br>| 0 | SSE + HTTP 模式 |<br>| 1 | Streamable HTTP 模式 |</p>
                     * @param _mCPTransport <p>MCP传输类型: SSE/Streamable<br>枚举值:<br>| uint | 描述 |<br>| --- | --- |<br>| 0 | SSE + HTTP 模式 |<br>| 1 | Streamable HTTP 模式 |</p>
                     * 
                     */
                    void SetMCPTransport(const int64_t& _mCPTransport);

                    /**
                     * 判断参数 MCPTransport 是否已赋值
                     * @return MCPTransport 是否已赋值
                     * 
                     */
                    bool MCPTransportHasBeenSet() const;

                    /**
                     * 获取<p>MCP插件的header参数</p>
                     * @return PluginHeader <p>MCP插件的header参数</p>
                     * 
                     */
                    std::vector<PluginParam> GetPluginHeader() const;

                    /**
                     * 设置<p>MCP插件的header参数</p>
                     * @param _pluginHeader <p>MCP插件的header参数</p>
                     * 
                     */
                    void SetPluginHeader(const std::vector<PluginParam>& _pluginHeader);

                    /**
                     * 判断参数 PluginHeader 是否已赋值
                     * @return PluginHeader 是否已赋值
                     * 
                     */
                    bool PluginHeaderHasBeenSet() const;

                    /**
                     * 获取<p>MCP插件的query参数</p>
                     * @return PluginQuery <p>MCP插件的query参数</p>
                     * 
                     */
                    std::vector<PluginParam> GetPluginQuery() const;

                    /**
                     * 设置<p>MCP插件的query参数</p>
                     * @param _pluginQuery <p>MCP插件的query参数</p>
                     * 
                     */
                    void SetPluginQuery(const std::vector<PluginParam>& _pluginQuery);

                    /**
                     * 判断参数 PluginQuery 是否已赋值
                     * @return PluginQuery 是否已赋值
                     * 
                     */
                    bool PluginQueryHasBeenSet() const;

                    /**
                     * 获取<p>SSE长连接超时时间，单位秒</p>
                     * @return SSEReadTimeout <p>SSE长连接超时时间，单位秒</p>
                     * 
                     */
                    int64_t GetSSEReadTimeout() const;

                    /**
                     * 设置<p>SSE长连接超时时间，单位秒</p>
                     * @param _sSEReadTimeout <p>SSE长连接超时时间，单位秒</p>
                     * 
                     */
                    void SetSSEReadTimeout(const int64_t& _sSEReadTimeout);

                    /**
                     * 判断参数 SSEReadTimeout 是否已赋值
                     * @return SSEReadTimeout 是否已赋值
                     * 
                     */
                    bool SSEReadTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>请求超时时间，单位秒</p>
                     * @return Timeout <p>请求超时时间，单位秒</p>
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置<p>请求超时时间，单位秒</p>
                     * @param _timeout <p>请求超时时间，单位秒</p>
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
                     * 获取<p>授权信息</p>
                     * @return AuthConfig <p>授权信息</p>
                     * 
                     */
                    AuthConfig GetAuthConfig() const;

                    /**
                     * 设置<p>授权信息</p>
                     * @param _authConfig <p>授权信息</p>
                     * 
                     */
                    void SetAuthConfig(const AuthConfig& _authConfig);

                    /**
                     * 判断参数 AuthConfig 是否已赋值
                     * @return AuthConfig 是否已赋值
                     * 
                     */
                    bool AuthConfigHasBeenSet() const;

                private:

                    /**
                     * <p>MCP插件外部访问地址</p>
                     */
                    std::string m_externalMCPServerUrl;
                    bool m_externalMCPServerUrlHasBeenSet;

                    /**
                     * <p>MCP server地址</p>
                     */
                    std::string m_mCPServerUrl;
                    bool m_mCPServerUrlHasBeenSet;

                    /**
                     * <p>MCP传输类型: SSE/Streamable<br>枚举值:<br>| uint | 描述 |<br>| --- | --- |<br>| 0 | SSE + HTTP 模式 |<br>| 1 | Streamable HTTP 模式 |</p>
                     */
                    int64_t m_mCPTransport;
                    bool m_mCPTransportHasBeenSet;

                    /**
                     * <p>MCP插件的header参数</p>
                     */
                    std::vector<PluginParam> m_pluginHeader;
                    bool m_pluginHeaderHasBeenSet;

                    /**
                     * <p>MCP插件的query参数</p>
                     */
                    std::vector<PluginParam> m_pluginQuery;
                    bool m_pluginQueryHasBeenSet;

                    /**
                     * <p>SSE长连接超时时间，单位秒</p>
                     */
                    int64_t m_sSEReadTimeout;
                    bool m_sSEReadTimeoutHasBeenSet;

                    /**
                     * <p>请求超时时间，单位秒</p>
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>授权信息</p>
                     */
                    AuthConfig m_authConfig;
                    bool m_authConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MCPPLUGINCONFIG_H_
