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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTTOOLINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTTOOLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AgentToolReqParam.h>
#include <tencentcloud/lke/v20231130/model/AgentToolRspParam.h>
#include <tencentcloud/lke/v20231130/model/AgentMCPServerInfo.h>
#include <tencentcloud/lke/v20231130/model/AgentPluginHeader.h>
#include <tencentcloud/lke/v20231130/model/AgentPluginQuery.h>
#include <tencentcloud/lke/v20231130/model/ToolAdvanceConfig.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Agent的工具信息
                */
                class AgentToolInfo : public AbstractModel
                {
                public:
                    AgentToolInfo();
                    ~AgentToolInfo() = default;
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
                     * 获取<p>插件名称</p>
                     * @return PluginName <p>插件名称</p>
                     * 
                     */
                    std::string GetPluginName() const;

                    /**
                     * 设置<p>插件名称</p>
                     * @param _pluginName <p>插件名称</p>
                     * 
                     */
                    void SetPluginName(const std::string& _pluginName);

                    /**
                     * 判断参数 PluginName 是否已赋值
                     * @return PluginName 是否已赋值
                     * 
                     */
                    bool PluginNameHasBeenSet() const;

                    /**
                     * 获取<p>插件图标url</p>
                     * @return IconUrl <p>插件图标url</p>
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置<p>插件图标url</p>
                     * @param _iconUrl <p>插件图标url</p>
                     * 
                     */
                    void SetIconUrl(const std::string& _iconUrl);

                    /**
                     * 判断参数 IconUrl 是否已赋值
                     * @return IconUrl 是否已赋值
                     * 
                     */
                    bool IconUrlHasBeenSet() const;

                    /**
                     * 获取<p>0 自定义插件<br>1 官方插件<br>2 第三方插件 目前用于第三方实现的mcp server</p>
                     * @return PluginType <p>0 自定义插件<br>1 官方插件<br>2 第三方插件 目前用于第三方实现的mcp server</p>
                     * 
                     */
                    uint64_t GetPluginType() const;

                    /**
                     * 设置<p>0 自定义插件<br>1 官方插件<br>2 第三方插件 目前用于第三方实现的mcp server</p>
                     * @param _pluginType <p>0 自定义插件<br>1 官方插件<br>2 第三方插件 目前用于第三方实现的mcp server</p>
                     * 
                     */
                    void SetPluginType(const uint64_t& _pluginType);

                    /**
                     * 判断参数 PluginType 是否已赋值
                     * @return PluginType 是否已赋值
                     * 
                     */
                    bool PluginTypeHasBeenSet() const;

                    /**
                     * 获取<p>工具id</p>
                     * @return ToolId <p>工具id</p>
                     * 
                     */
                    std::string GetToolId() const;

                    /**
                     * 设置<p>工具id</p>
                     * @param _toolId <p>工具id</p>
                     * 
                     */
                    void SetToolId(const std::string& _toolId);

                    /**
                     * 判断参数 ToolId 是否已赋值
                     * @return ToolId 是否已赋值
                     * 
                     */
                    bool ToolIdHasBeenSet() const;

                    /**
                     * 获取<p>工具名称</p>
                     * @return ToolName <p>工具名称</p>
                     * 
                     */
                    std::string GetToolName() const;

                    /**
                     * 设置<p>工具名称</p>
                     * @param _toolName <p>工具名称</p>
                     * 
                     */
                    void SetToolName(const std::string& _toolName);

                    /**
                     * 判断参数 ToolName 是否已赋值
                     * @return ToolName 是否已赋值
                     * 
                     */
                    bool ToolNameHasBeenSet() const;

                    /**
                     * 获取<p>工具描述</p>
                     * @return ToolDesc <p>工具描述</p>
                     * 
                     */
                    std::string GetToolDesc() const;

                    /**
                     * 设置<p>工具描述</p>
                     * @param _toolDesc <p>工具描述</p>
                     * 
                     */
                    void SetToolDesc(const std::string& _toolDesc);

                    /**
                     * 判断参数 ToolDesc 是否已赋值
                     * @return ToolDesc 是否已赋值
                     * 
                     */
                    bool ToolDescHasBeenSet() const;

                    /**
                     * 获取<p>输入参数</p>
                     * @return Inputs <p>输入参数</p>
                     * 
                     */
                    std::vector<AgentToolReqParam> GetInputs() const;

                    /**
                     * 设置<p>输入参数</p>
                     * @param _inputs <p>输入参数</p>
                     * 
                     */
                    void SetInputs(const std::vector<AgentToolReqParam>& _inputs);

                    /**
                     * 判断参数 Inputs 是否已赋值
                     * @return Inputs 是否已赋值
                     * 
                     */
                    bool InputsHasBeenSet() const;

                    /**
                     * 获取<p>输出参数</p>
                     * @return Outputs <p>输出参数</p>
                     * 
                     */
                    std::vector<AgentToolRspParam> GetOutputs() const;

                    /**
                     * 设置<p>输出参数</p>
                     * @param _outputs <p>输出参数</p>
                     * 
                     */
                    void SetOutputs(const std::vector<AgentToolRspParam>& _outputs);

                    /**
                     * 判断参数 Outputs 是否已赋值
                     * @return Outputs 是否已赋值
                     * 
                     */
                    bool OutputsHasBeenSet() const;

                    /**
                     * 获取<p>创建方式，0:服务创建，1:代码创建，2:MCP创建</p>
                     * @return CreateType <p>创建方式，0:服务创建，1:代码创建，2:MCP创建</p>
                     * 
                     */
                    int64_t GetCreateType() const;

                    /**
                     * 设置<p>创建方式，0:服务创建，1:代码创建，2:MCP创建</p>
                     * @param _createType <p>创建方式，0:服务创建，1:代码创建，2:MCP创建</p>
                     * 
                     */
                    void SetCreateType(const int64_t& _createType);

                    /**
                     * 判断参数 CreateType 是否已赋值
                     * @return CreateType 是否已赋值
                     * 
                     */
                    bool CreateTypeHasBeenSet() const;

                    /**
                     * 获取<p>MCP插件的配置信息</p>
                     * @return McpServer <p>MCP插件的配置信息</p>
                     * 
                     */
                    AgentMCPServerInfo GetMcpServer() const;

                    /**
                     * 设置<p>MCP插件的配置信息</p>
                     * @param _mcpServer <p>MCP插件的配置信息</p>
                     * 
                     */
                    void SetMcpServer(const AgentMCPServerInfo& _mcpServer);

                    /**
                     * 判断参数 McpServer 是否已赋值
                     * @return McpServer 是否已赋值
                     * 
                     */
                    bool McpServerHasBeenSet() const;

                    /**
                     * 获取<p>该工具是否和知识库绑定</p>
                     * @return IsBindingKnowledge <p>该工具是否和知识库绑定</p>
                     * 
                     */
                    bool GetIsBindingKnowledge() const;

                    /**
                     * 设置<p>该工具是否和知识库绑定</p>
                     * @param _isBindingKnowledge <p>该工具是否和知识库绑定</p>
                     * 
                     */
                    void SetIsBindingKnowledge(const bool& _isBindingKnowledge);

                    /**
                     * 判断参数 IsBindingKnowledge 是否已赋值
                     * @return IsBindingKnowledge 是否已赋值
                     * 
                     */
                    bool IsBindingKnowledgeHasBeenSet() const;

                    /**
                     * 获取<p>插件状态，1:可用，2:不可用</p>
                     * @return Status <p>插件状态，1:可用，2:不可用</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>插件状态，1:可用，2:不可用</p>
                     * @param _status <p>插件状态，1:可用，2:不可用</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>header信息</p>
                     * @return Headers <p>header信息</p>
                     * 
                     */
                    std::vector<AgentPluginHeader> GetHeaders() const;

                    /**
                     * 设置<p>header信息</p>
                     * @param _headers <p>header信息</p>
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
                     * 获取<p>NON_STREAMING: 非流式  STREAMIN: 流式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallingMethod <p>NON_STREAMING: 非流式  STREAMIN: 流式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCallingMethod() const;

                    /**
                     * 设置<p>NON_STREAMING: 非流式  STREAMIN: 流式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _callingMethod <p>NON_STREAMING: 非流式  STREAMIN: 流式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCallingMethod(const std::string& _callingMethod);

                    /**
                     * 判断参数 CallingMethod 是否已赋值
                     * @return CallingMethod 是否已赋值
                     * 
                     */
                    bool CallingMethodHasBeenSet() const;

                    /**
                     * 获取<p>query信息</p>
                     * @return Query <p>query信息</p>
                     * 
                     */
                    std::vector<AgentPluginQuery> GetQuery() const;

                    /**
                     * 设置<p>query信息</p>
                     * @param _query <p>query信息</p>
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
                     * 获取<p>工具计费状态 0-不计费 1-可用 2-不可用（欠费、无资源等）</p>
                     * @return FinanceStatus <p>工具计费状态 0-不计费 1-可用 2-不可用（欠费、无资源等）</p>
                     * 
                     */
                    int64_t GetFinanceStatus() const;

                    /**
                     * 设置<p>工具计费状态 0-不计费 1-可用 2-不可用（欠费、无资源等）</p>
                     * @param _financeStatus <p>工具计费状态 0-不计费 1-可用 2-不可用（欠费、无资源等）</p>
                     * 
                     */
                    void SetFinanceStatus(const int64_t& _financeStatus);

                    /**
                     * 判断参数 FinanceStatus 是否已赋值
                     * @return FinanceStatus 是否已赋值
                     * 
                     */
                    bool FinanceStatusHasBeenSet() const;

                    /**
                     * 获取<p>工具来源: 0-来自插件，1-来自工作流</p>
                     * @return ToolSource <p>工具来源: 0-来自插件，1-来自工作流</p>
                     * 
                     */
                    uint64_t GetToolSource() const;

                    /**
                     * 设置<p>工具来源: 0-来自插件，1-来自工作流</p>
                     * @param _toolSource <p>工具来源: 0-来自插件，1-来自工作流</p>
                     * 
                     */
                    void SetToolSource(const uint64_t& _toolSource);

                    /**
                     * 判断参数 ToolSource 是否已赋值
                     * @return ToolSource 是否已赋值
                     * 
                     */
                    bool ToolSourceHasBeenSet() const;

                    /**
                     * 获取<p>计费状态；0-不计费，1-限时免费，2-官方收费</p>
                     * @return FinanceType <p>计费状态；0-不计费，1-限时免费，2-官方收费</p>
                     * 
                     */
                    int64_t GetFinanceType() const;

                    /**
                     * 设置<p>计费状态；0-不计费，1-限时免费，2-官方收费</p>
                     * @param _financeType <p>计费状态；0-不计费，1-限时免费，2-官方收费</p>
                     * 
                     */
                    void SetFinanceType(const int64_t& _financeType);

                    /**
                     * 判断参数 FinanceType 是否已赋值
                     * @return FinanceType 是否已赋值
                     * 
                     */
                    bool FinanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>工具高级设置</p>
                     * @return ToolAdvanceConfig <p>工具高级设置</p>
                     * 
                     */
                    ToolAdvanceConfig GetToolAdvanceConfig() const;

                    /**
                     * 设置<p>工具高级设置</p>
                     * @param _toolAdvanceConfig <p>工具高级设置</p>
                     * 
                     */
                    void SetToolAdvanceConfig(const ToolAdvanceConfig& _toolAdvanceConfig);

                    /**
                     * 判断参数 ToolAdvanceConfig 是否已赋值
                     * @return ToolAdvanceConfig 是否已赋值
                     * 
                     */
                    bool ToolAdvanceConfigHasBeenSet() const;

                    /**
                     * 获取<p>授权模式； 0-开发者授权；1-使用者授权</p>
                     * @return AuthMode <p>授权模式； 0-开发者授权；1-使用者授权</p>
                     * 
                     */
                    int64_t GetAuthMode() const;

                    /**
                     * 设置<p>授权模式； 0-开发者授权；1-使用者授权</p>
                     * @param _authMode <p>授权模式； 0-开发者授权；1-使用者授权</p>
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
                     * 获取<p>授权类型; 0-无鉴权；1-APIKey；2-CAM授权；3-Oauth2.0授权；</p>
                     * @return AuthType <p>授权类型; 0-无鉴权；1-APIKey；2-CAM授权；3-Oauth2.0授权；</p>
                     * 
                     */
                    int64_t GetAuthType() const;

                    /**
                     * 设置<p>授权类型; 0-无鉴权；1-APIKey；2-CAM授权；3-Oauth2.0授权；</p>
                     * @param _authType <p>授权类型; 0-无鉴权；1-APIKey；2-CAM授权；3-Oauth2.0授权；</p>
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
                     * 获取<p>工具授权配置状态；0：不需要授权，1：需要授权-未配置，2：需要授权-已配置</p>
                     * @return AuthConfigStatus <p>工具授权配置状态；0：不需要授权，1：需要授权-未配置，2：需要授权-已配置</p>
                     * 
                     */
                    int64_t GetAuthConfigStatus() const;

                    /**
                     * 设置<p>工具授权配置状态；0：不需要授权，1：需要授权-未配置，2：需要授权-已配置</p>
                     * @param _authConfigStatus <p>工具授权配置状态；0：不需要授权，1：需要授权-未配置，2：需要授权-已配置</p>
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
                     * 获取<p>连接器工具 API 类型</p><p>枚举值：</p><ul><li>1： 只读</li><li>2： 写/删除</li></ul>
                     * @return ToolAccessMode <p>连接器工具 API 类型</p><p>枚举值：</p><ul><li>1： 只读</li><li>2： 写/删除</li></ul>
                     * 
                     */
                    int64_t GetToolAccessMode() const;

                    /**
                     * 设置<p>连接器工具 API 类型</p><p>枚举值：</p><ul><li>1： 只读</li><li>2： 写/删除</li></ul>
                     * @param _toolAccessMode <p>连接器工具 API 类型</p><p>枚举值：</p><ul><li>1： 只读</li><li>2： 写/删除</li></ul>
                     * 
                     */
                    void SetToolAccessMode(const int64_t& _toolAccessMode);

                    /**
                     * 判断参数 ToolAccessMode 是否已赋值
                     * @return ToolAccessMode 是否已赋值
                     * 
                     */
                    bool ToolAccessModeHasBeenSet() const;

                    /**
                     * 获取<p>是否禁用该工具</p>
                     * @return IsDisabled <p>是否禁用该工具</p>
                     * 
                     */
                    bool GetIsDisabled() const;

                    /**
                     * 设置<p>是否禁用该工具</p>
                     * @param _isDisabled <p>是否禁用该工具</p>
                     * 
                     */
                    void SetIsDisabled(const bool& _isDisabled);

                    /**
                     * 判断参数 IsDisabled 是否已赋值
                     * @return IsDisabled 是否已赋值
                     * 
                     */
                    bool IsDisabledHasBeenSet() const;

                private:

                    /**
                     * <p>插件id</p>
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * <p>插件名称</p>
                     */
                    std::string m_pluginName;
                    bool m_pluginNameHasBeenSet;

                    /**
                     * <p>插件图标url</p>
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * <p>0 自定义插件<br>1 官方插件<br>2 第三方插件 目前用于第三方实现的mcp server</p>
                     */
                    uint64_t m_pluginType;
                    bool m_pluginTypeHasBeenSet;

                    /**
                     * <p>工具id</p>
                     */
                    std::string m_toolId;
                    bool m_toolIdHasBeenSet;

                    /**
                     * <p>工具名称</p>
                     */
                    std::string m_toolName;
                    bool m_toolNameHasBeenSet;

                    /**
                     * <p>工具描述</p>
                     */
                    std::string m_toolDesc;
                    bool m_toolDescHasBeenSet;

                    /**
                     * <p>输入参数</p>
                     */
                    std::vector<AgentToolReqParam> m_inputs;
                    bool m_inputsHasBeenSet;

                    /**
                     * <p>输出参数</p>
                     */
                    std::vector<AgentToolRspParam> m_outputs;
                    bool m_outputsHasBeenSet;

                    /**
                     * <p>创建方式，0:服务创建，1:代码创建，2:MCP创建</p>
                     */
                    int64_t m_createType;
                    bool m_createTypeHasBeenSet;

                    /**
                     * <p>MCP插件的配置信息</p>
                     */
                    AgentMCPServerInfo m_mcpServer;
                    bool m_mcpServerHasBeenSet;

                    /**
                     * <p>该工具是否和知识库绑定</p>
                     */
                    bool m_isBindingKnowledge;
                    bool m_isBindingKnowledgeHasBeenSet;

                    /**
                     * <p>插件状态，1:可用，2:不可用</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>header信息</p>
                     */
                    std::vector<AgentPluginHeader> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * <p>NON_STREAMING: 非流式  STREAMIN: 流式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_callingMethod;
                    bool m_callingMethodHasBeenSet;

                    /**
                     * <p>query信息</p>
                     */
                    std::vector<AgentPluginQuery> m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>工具计费状态 0-不计费 1-可用 2-不可用（欠费、无资源等）</p>
                     */
                    int64_t m_financeStatus;
                    bool m_financeStatusHasBeenSet;

                    /**
                     * <p>工具来源: 0-来自插件，1-来自工作流</p>
                     */
                    uint64_t m_toolSource;
                    bool m_toolSourceHasBeenSet;

                    /**
                     * <p>计费状态；0-不计费，1-限时免费，2-官方收费</p>
                     */
                    int64_t m_financeType;
                    bool m_financeTypeHasBeenSet;

                    /**
                     * <p>工具高级设置</p>
                     */
                    ToolAdvanceConfig m_toolAdvanceConfig;
                    bool m_toolAdvanceConfigHasBeenSet;

                    /**
                     * <p>授权模式； 0-开发者授权；1-使用者授权</p>
                     */
                    int64_t m_authMode;
                    bool m_authModeHasBeenSet;

                    /**
                     * <p>授权类型; 0-无鉴权；1-APIKey；2-CAM授权；3-Oauth2.0授权；</p>
                     */
                    int64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * <p>工具授权配置状态；0：不需要授权，1：需要授权-未配置，2：需要授权-已配置</p>
                     */
                    int64_t m_authConfigStatus;
                    bool m_authConfigStatusHasBeenSet;

                    /**
                     * <p>连接器工具 API 类型</p><p>枚举值：</p><ul><li>1： 只读</li><li>2： 写/删除</li></ul>
                     */
                    int64_t m_toolAccessMode;
                    bool m_toolAccessModeHasBeenSet;

                    /**
                     * <p>是否禁用该工具</p>
                     */
                    bool m_isDisabled;
                    bool m_isDisabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTTOOLINFO_H_
