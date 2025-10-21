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
                     * 获取插件id
                     * @return PluginId 插件id
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置插件id
                     * @param _pluginId 插件id
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
                     * 获取应用配置的插件header信息
                     * @return Headers 应用配置的插件header信息
                     * 
                     */
                    std::vector<AgentPluginHeader> GetHeaders() const;

                    /**
                     * 设置应用配置的插件header信息
                     * @param _headers 应用配置的插件header信息
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
                     * 获取插件调用LLM时使用的模型配置，一般用于指定知识库问答插件的生成模型
                     * @return Model 插件调用LLM时使用的模型配置，一般用于指定知识库问答插件的生成模型
                     * 
                     */
                    AgentModelInfo GetModel() const;

                    /**
                     * 设置插件调用LLM时使用的模型配置，一般用于指定知识库问答插件的生成模型
                     * @param _model 插件调用LLM时使用的模型配置，一般用于指定知识库问答插件的生成模型
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
                     * 获取插件信息类型; 0: 未指定类型; 1: 知识库问答插件
                     * @return PluginInfoType 插件信息类型; 0: 未指定类型; 1: 知识库问答插件
                     * 
                     */
                    uint64_t GetPluginInfoType() const;

                    /**
                     * 设置插件信息类型; 0: 未指定类型; 1: 知识库问答插件
                     * @param _pluginInfoType 插件信息类型; 0: 未指定类型; 1: 知识库问答插件
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
                     * 获取知识库问答插件配置
                     * @return KnowledgeQa 知识库问答插件配置
                     * 
                     */
                    AgentKnowledgeQAPlugin GetKnowledgeQa() const;

                    /**
                     * 设置知识库问答插件配置
                     * @param _knowledgeQa 知识库问答插件配置
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
                     * 获取是否使用一键授权
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableRoleAuth 是否使用一键授权
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableRoleAuth() const;

                    /**
                     * 设置是否使用一键授权
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableRoleAuth 是否使用一键授权
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
                     * 获取应用配置的插件query信息
                     * @return Query 应用配置的插件query信息
                     * 
                     */
                    std::vector<AgentPluginQuery> GetQuery() const;

                    /**
                     * 设置应用配置的插件query信息
                     * @param _query 应用配置的插件query信息
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
                     * 获取MCP类型
                     * @return McpType MCP类型
                     * 
                     */
                    uint64_t GetMcpType() const;

                    /**
                     * 设置MCP类型
                     * @param _mcpType MCP类型
                     * 
                     */
                    void SetMcpType(const uint64_t& _mcpType);

                    /**
                     * 判断参数 McpType 是否已赋值
                     * @return McpType 是否已赋值
                     * 
                     */
                    bool McpTypeHasBeenSet() const;

                private:

                    /**
                     * 插件id
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * 应用配置的插件header信息
                     */
                    std::vector<AgentPluginHeader> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * 插件调用LLM时使用的模型配置，一般用于指定知识库问答插件的生成模型
                     */
                    AgentModelInfo m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 插件信息类型; 0: 未指定类型; 1: 知识库问答插件
                     */
                    uint64_t m_pluginInfoType;
                    bool m_pluginInfoTypeHasBeenSet;

                    /**
                     * 知识库问答插件配置
                     */
                    AgentKnowledgeQAPlugin m_knowledgeQa;
                    bool m_knowledgeQaHasBeenSet;

                    /**
                     * 是否使用一键授权
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableRoleAuth;
                    bool m_enableRoleAuthHasBeenSet;

                    /**
                     * 应用配置的插件query信息
                     */
                    std::vector<AgentPluginQuery> m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * MCP类型
                     */
                    uint64_t m_mcpType;
                    bool m_mcpTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTPLUGININFO_H_
