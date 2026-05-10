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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTPLUGININFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTPLUGININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AgentPluginHeader.h>
#include <tencentcloud/lke/v20231130/model/AgentModelInfo.h>
#include <tencentcloud/lke/v20231130/model/AgentKnowledgeQAPlugin.h>
#include <tencentcloud/lke/v20231130/model/AgentPluginQuery.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Agent 的插件信息
                */
                class AgentPluginInfo : public AbstractModel
                {
                public:
                    AgentPluginInfo();
                    ~AgentPluginInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>插件id</p>
                     * @return PluginId <p>插件id</p>
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置<p>插件id</p>
                     * @param _pluginId <p>插件id</p>
                     * 
                     */
                    void SetPluginId(const std::string& _pluginId);

                    /**
                     * 判断参数 PluginId 是否已赋值
                     * @return PluginId 是否已赋值
                     * 
                     */
                    bool PluginIdHasBeenSet() const;

                    /**
                     * 获取<p>应用配置的插件header信息</p>
                     * @return Headers <p>应用配置的插件header信息</p>
                     * 
                     */
                    std::vector<AgentPluginHeader> GetHeaders() const;

                    /**
                     * 设置<p>应用配置的插件header信息</p>
                     * @param _headers <p>应用配置的插件header信息</p>
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
                     * 获取<p>插件调用LLM时使用的模型配置，一般用于指定知识库问答插件的生成模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Model <p>插件调用LLM时使用的模型配置，一般用于指定知识库问答插件的生成模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AgentModelInfo GetModel() const;

                    /**
                     * 设置<p>插件调用LLM时使用的模型配置，一般用于指定知识库问答插件的生成模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _model <p>插件调用LLM时使用的模型配置，一般用于指定知识库问答插件的生成模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModel(const AgentModelInfo& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>插件信息类型; 0: 未指定类型; 1: 知识库问答插件</p>
                     * @return PluginInfoType <p>插件信息类型; 0: 未指定类型; 1: 知识库问答插件</p>
                     * 
                     */
                    uint64_t GetPluginInfoType() const;

                    /**
                     * 设置<p>插件信息类型; 0: 未指定类型; 1: 知识库问答插件</p>
                     * @param _pluginInfoType <p>插件信息类型; 0: 未指定类型; 1: 知识库问答插件</p>
                     * 
                     */
                    void SetPluginInfoType(const uint64_t& _pluginInfoType);

                    /**
                     * 判断参数 PluginInfoType 是否已赋值
                     * @return PluginInfoType 是否已赋值
                     * 
                     */
                    bool PluginInfoTypeHasBeenSet() const;

                    /**
                     * 获取<p>知识库问答插件配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KnowledgeQa <p>知识库问答插件配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AgentKnowledgeQAPlugin GetKnowledgeQa() const;

                    /**
                     * 设置<p>知识库问答插件配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _knowledgeQa <p>知识库问答插件配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKnowledgeQa(const AgentKnowledgeQAPlugin& _knowledgeQa);

                    /**
                     * 判断参数 KnowledgeQa 是否已赋值
                     * @return KnowledgeQa 是否已赋值
                     * 
                     */
                    bool KnowledgeQaHasBeenSet() const;

                    /**
                     * 获取<p>是否使用一键授权</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableRoleAuth <p>是否使用一键授权</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableRoleAuth() const;

                    /**
                     * 设置<p>是否使用一键授权</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableRoleAuth <p>是否使用一键授权</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableRoleAuth(const bool& _enableRoleAuth);

                    /**
                     * 判断参数 EnableRoleAuth 是否已赋值
                     * @return EnableRoleAuth 是否已赋值
                     * 
                     */
                    bool EnableRoleAuthHasBeenSet() const;

                    /**
                     * 获取<p>应用配置的插件query信息</p>
                     * @return Query <p>应用配置的插件query信息</p>
                     * 
                     */
                    std::vector<AgentPluginQuery> GetQuery() const;

                    /**
                     * 设置<p>应用配置的插件query信息</p>
                     * @param _query <p>应用配置的插件query信息</p>
                     * 
                     */
                    void SetQuery(const std::vector<AgentPluginQuery>& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取<p>MCP类型</p><p>枚举值：</p><ul><li>0： SSE 模式</li><li>1： Streamable Http 模式</li></ul>
                     * @return McpType <p>MCP类型</p><p>枚举值：</p><ul><li>0： SSE 模式</li><li>1： Streamable Http 模式</li></ul>
                     * 
                     */
                    uint64_t GetMcpType() const;

                    /**
                     * 设置<p>MCP类型</p><p>枚举值：</p><ul><li>0： SSE 模式</li><li>1： Streamable Http 模式</li></ul>
                     * @param _mcpType <p>MCP类型</p><p>枚举值：</p><ul><li>0： SSE 模式</li><li>1： Streamable Http 模式</li></ul>
                     * 
                     */
                    void SetMcpType(const uint64_t& _mcpType);

                    /**
                     * 判断参数 McpType 是否已赋值
                     * @return McpType 是否已赋值
                     * 
                     */
                    bool McpTypeHasBeenSet() const;

                    /**
                     * 获取<p>OAuth授权主体</p><p>枚举值：</p><ul><li>0： 开发者授权</li><li>1： 使用者授权</li></ul>
                     * @return AuthMode <p>OAuth授权主体</p><p>枚举值：</p><ul><li>0： 开发者授权</li><li>1： 使用者授权</li></ul>
                     * 
                     */
                    int64_t GetAuthMode() const;

                    /**
                     * 设置<p>OAuth授权主体</p><p>枚举值：</p><ul><li>0： 开发者授权</li><li>1： 使用者授权</li></ul>
                     * @param _authMode <p>OAuth授权主体</p><p>枚举值：</p><ul><li>0： 开发者授权</li><li>1： 使用者授权</li></ul>
                     * 
                     */
                    void SetAuthMode(const int64_t& _authMode);

                    /**
                     * 判断参数 AuthMode 是否已赋值
                     * @return AuthMode 是否已赋值
                     * 
                     */
                    bool AuthModeHasBeenSet() const;

                    /**
                     * 获取<p>授权方式</p><p>枚举值：</p><ul><li>0： 无鉴权</li><li>1： api key鉴权</li><li>2： 支持CAM授权</li><li>3： 支持Oauth2.0授权</li></ul>
                     * @return AuthType <p>授权方式</p><p>枚举值：</p><ul><li>0： 无鉴权</li><li>1： api key鉴权</li><li>2： 支持CAM授权</li><li>3： 支持Oauth2.0授权</li></ul>
                     * 
                     */
                    int64_t GetAuthType() const;

                    /**
                     * 设置<p>授权方式</p><p>枚举值：</p><ul><li>0： 无鉴权</li><li>1： api key鉴权</li><li>2： 支持CAM授权</li><li>3： 支持Oauth2.0授权</li></ul>
                     * @param _authType <p>授权方式</p><p>枚举值：</p><ul><li>0： 无鉴权</li><li>1： api key鉴权</li><li>2： 支持CAM授权</li><li>3： 支持Oauth2.0授权</li></ul>
                     * 
                     */
                    void SetAuthType(const int64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取<p>授权配置状态</p><p>枚举值：</p><ul><li>0： 不需要授权</li><li>1： 未配置</li><li>2： 已配置</li></ul>
                     * @return AuthConfigStatus <p>授权配置状态</p><p>枚举值：</p><ul><li>0： 不需要授权</li><li>1： 未配置</li><li>2： 已配置</li></ul>
                     * 
                     */
                    int64_t GetAuthConfigStatus() const;

                    /**
                     * 设置<p>授权配置状态</p><p>枚举值：</p><ul><li>0： 不需要授权</li><li>1： 未配置</li><li>2： 已配置</li></ul>
                     * @param _authConfigStatus <p>授权配置状态</p><p>枚举值：</p><ul><li>0： 不需要授权</li><li>1： 未配置</li><li>2： 已配置</li></ul>
                     * 
                     */
                    void SetAuthConfigStatus(const int64_t& _authConfigStatus);

                    /**
                     * 判断参数 AuthConfigStatus 是否已赋值
                     * @return AuthConfigStatus 是否已赋值
                     * 
                     */
                    bool AuthConfigStatusHasBeenSet() const;

                    /**
                     * 获取<p>插件用途类型</p><p>枚举值：</p><ul><li>0： 工具类</li><li>1： 连接器类</li></ul>
                     * @return PluginClass <p>插件用途类型</p><p>枚举值：</p><ul><li>0： 工具类</li><li>1： 连接器类</li></ul>
                     * 
                     */
                    int64_t GetPluginClass() const;

                    /**
                     * 设置<p>插件用途类型</p><p>枚举值：</p><ul><li>0： 工具类</li><li>1： 连接器类</li></ul>
                     * @param _pluginClass <p>插件用途类型</p><p>枚举值：</p><ul><li>0： 工具类</li><li>1： 连接器类</li></ul>
                     * 
                     */
                    void SetPluginClass(const int64_t& _pluginClass);

                    /**
                     * 判断参数 PluginClass 是否已赋值
                     * @return PluginClass 是否已赋值
                     * 
                     */
                    bool PluginClassHasBeenSet() const;

                    /**
                     * 获取<p>插件状态</p><p>枚举值：</p><ul><li>1： 成功</li><li>2： 不可用</li></ul>
                     * @return PluginStatus <p>插件状态</p><p>枚举值：</p><ul><li>1： 成功</li><li>2： 不可用</li></ul>
                     * 
                     */
                    int64_t GetPluginStatus() const;

                    /**
                     * 设置<p>插件状态</p><p>枚举值：</p><ul><li>1： 成功</li><li>2： 不可用</li></ul>
                     * @param _pluginStatus <p>插件状态</p><p>枚举值：</p><ul><li>1： 成功</li><li>2： 不可用</li></ul>
                     * 
                     */
                    void SetPluginStatus(const int64_t& _pluginStatus);

                    /**
                     * 判断参数 PluginStatus 是否已赋值
                     * @return PluginStatus 是否已赋值
                     * 
                     */
                    bool PluginStatusHasBeenSet() const;

                private:

                    /**
                     * <p>插件id</p>
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * <p>应用配置的插件header信息</p>
                     */
                    std::vector<AgentPluginHeader> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * <p>插件调用LLM时使用的模型配置，一般用于指定知识库问答插件的生成模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AgentModelInfo m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>插件信息类型; 0: 未指定类型; 1: 知识库问答插件</p>
                     */
                    uint64_t m_pluginInfoType;
                    bool m_pluginInfoTypeHasBeenSet;

                    /**
                     * <p>知识库问答插件配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AgentKnowledgeQAPlugin m_knowledgeQa;
                    bool m_knowledgeQaHasBeenSet;

                    /**
                     * <p>是否使用一键授权</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableRoleAuth;
                    bool m_enableRoleAuthHasBeenSet;

                    /**
                     * <p>应用配置的插件query信息</p>
                     */
                    std::vector<AgentPluginQuery> m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>MCP类型</p><p>枚举值：</p><ul><li>0： SSE 模式</li><li>1： Streamable Http 模式</li></ul>
                     */
                    uint64_t m_mcpType;
                    bool m_mcpTypeHasBeenSet;

                    /**
                     * <p>OAuth授权主体</p><p>枚举值：</p><ul><li>0： 开发者授权</li><li>1： 使用者授权</li></ul>
                     */
                    int64_t m_authMode;
                    bool m_authModeHasBeenSet;

                    /**
                     * <p>授权方式</p><p>枚举值：</p><ul><li>0： 无鉴权</li><li>1： api key鉴权</li><li>2： 支持CAM授权</li><li>3： 支持Oauth2.0授权</li></ul>
                     */
                    int64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * <p>授权配置状态</p><p>枚举值：</p><ul><li>0： 不需要授权</li><li>1： 未配置</li><li>2： 已配置</li></ul>
                     */
                    int64_t m_authConfigStatus;
                    bool m_authConfigStatusHasBeenSet;

                    /**
                     * <p>插件用途类型</p><p>枚举值：</p><ul><li>0： 工具类</li><li>1： 连接器类</li></ul>
                     */
                    int64_t m_pluginClass;
                    bool m_pluginClassHasBeenSet;

                    /**
                     * <p>插件状态</p><p>枚举值：</p><ul><li>1： 成功</li><li>2： 不可用</li></ul>
                     */
                    int64_t m_pluginStatus;
                    bool m_pluginStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTPLUGININFO_H_
