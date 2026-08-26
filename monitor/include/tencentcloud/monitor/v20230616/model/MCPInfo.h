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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_MCPINFO_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_MCPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * MCP 实体
                */
                class MCPInfo : public AbstractModel
                {
                public:
                    MCPInfo();
                    ~MCPInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>mcp的ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MCPId <p>mcp的ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMCPId() const;

                    /**
                     * 设置<p>mcp的ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mCPId <p>mcp的ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMCPId(const std::string& _mCPId);

                    /**
                     * 判断参数 MCPId 是否已赋值
                     * @return MCPId 是否已赋值
                     * 
                     */
                    bool MCPIdHasBeenSet() const;

                    /**
                     * 获取<p>MCP 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>MCP 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>MCP 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>MCP 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>MCP 描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>MCP 描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>MCP 描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>MCP 描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>MCP URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url <p>MCP URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>MCP URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url <p>MCP URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>传输协议: sse / streamable_http / stdio</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Transport <p>传输协议: sse / streamable_http / stdio</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTransport() const;

                    /**
                     * 设置<p>传输协议: sse / streamable_http / stdio</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transport <p>传输协议: sse / streamable_http / stdio</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransport(const std::string& _transport);

                    /**
                     * 判断参数 Transport 是否已赋值
                     * @return Transport 是否已赋值
                     * 
                     */
                    bool TransportHasBeenSet() const;

                    /**
                     * 获取<p>认证类型: none / bearer / basic / api_key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthType <p>认证类型: none / bearer / basic / api_key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置<p>认证类型: none / bearer / basic / api_key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authType <p>认证类型: none / bearer / basic / api_key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取<p>认证密钥(响应时脱敏)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthSecret <p>认证密钥(响应时脱敏)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthSecret() const;

                    /**
                     * 设置<p>认证密钥(响应时脱敏)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authSecret <p>认证密钥(响应时脱敏)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthSecret(const std::string& _authSecret);

                    /**
                     * 判断参数 AuthSecret 是否已赋值
                     * @return AuthSecret 是否已赋值
                     * 
                     */
                    bool AuthSecretHasBeenSet() const;

                    /**
                     * 获取<p>超时时间(秒)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timeout <p>超时时间(秒)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置<p>超时时间(秒)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeout <p>超时时间(秒)</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>重试次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryCount <p>重试次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetryCount() const;

                    /**
                     * 设置<p>重试次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryCount <p>重试次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetryCount(const int64_t& _retryCount);

                    /**
                     * 判断参数 RetryCount 是否已赋值
                     * @return RetryCount 是否已赋值
                     * 
                     */
                    bool RetryCountHasBeenSet() const;

                    /**
                     * 获取<p>请求头 JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Headers <p>请求头 JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHeaders() const;

                    /**
                     * 设置<p>请求头 JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headers <p>请求头 JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeaders(const std::string& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取<p>是否启用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enabled <p>是否启用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否启用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enabled <p>是否启用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * <p>mcp的ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mCPId;
                    bool m_mCPIdHasBeenSet;

                    /**
                     * <p>MCP 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>MCP 描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>MCP URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>传输协议: sse / streamable_http / stdio</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_transport;
                    bool m_transportHasBeenSet;

                    /**
                     * <p>认证类型: none / bearer / basic / api_key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * <p>认证密钥(响应时脱敏)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authSecret;
                    bool m_authSecretHasBeenSet;

                    /**
                     * <p>超时时间(秒)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>重试次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retryCount;
                    bool m_retryCountHasBeenSet;

                    /**
                     * <p>请求头 JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * <p>是否启用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_MCPINFO_H_
