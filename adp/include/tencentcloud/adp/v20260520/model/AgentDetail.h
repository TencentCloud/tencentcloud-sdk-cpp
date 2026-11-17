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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTDETAIL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentProfile.h>
#include <tencentcloud/adp/v20260520/model/AgentModelConfig.h>
#include <tencentcloud/adp/v20260520/model/AgentTool.h>
#include <tencentcloud/adp/v20260520/model/AgentPlugin.h>
#include <tencentcloud/adp/v20260520/model/AgentSkill.h>
#include <tencentcloud/adp/v20260520/model/AgentAdvancedConfig.h>
#include <tencentcloud/adp/v20260520/model/AgentExternalToolConfig.h>
#include <tencentcloud/adp/v20260520/model/ReferenceAppDetail.h>
#include <tencentcloud/adp/v20260520/model/AgentBuiltinTool.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Agent 详情
                */
                class AgentDetail : public AbstractModel
                {
                public:
                    AgentDetail();
                    ~AgentDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Agent ID</p>
                     * @return AgentId <p>Agent ID</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>Agent ID</p>
                     * @param _agentId <p>Agent ID</p>
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取<p>Agent基本配置</p>
                     * @return Profile <p>Agent基本配置</p>
                     * 
                     */
                    AgentProfile GetProfile() const;

                    /**
                     * 设置<p>Agent基本配置</p>
                     * @param _profile <p>Agent基本配置</p>
                     * 
                     */
                    void SetProfile(const AgentProfile& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取<p>系统提示词</p>
                     * @return Instructions <p>系统提示词</p>
                     * 
                     */
                    std::string GetInstructions() const;

                    /**
                     * 设置<p>系统提示词</p>
                     * @param _instructions <p>系统提示词</p>
                     * 
                     */
                    void SetInstructions(const std::string& _instructions);

                    /**
                     * 判断参数 Instructions 是否已赋值
                     * @return Instructions 是否已赋值
                     * 
                     */
                    bool InstructionsHasBeenSet() const;

                    /**
                     * 获取<p>模型信息</p>
                     * @return Model <p>模型信息</p>
                     * 
                     */
                    AgentModelConfig GetModel() const;

                    /**
                     * 设置<p>模型信息</p>
                     * @param _model <p>模型信息</p>
                     * 
                     */
                    void SetModel(const AgentModelConfig& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>工具详情</p>
                     * @return ToolList <p>工具详情</p>
                     * 
                     */
                    std::vector<AgentTool> GetToolList() const;

                    /**
                     * 设置<p>工具详情</p>
                     * @param _toolList <p>工具详情</p>
                     * 
                     */
                    void SetToolList(const std::vector<AgentTool>& _toolList);

                    /**
                     * 判断参数 ToolList 是否已赋值
                     * @return ToolList 是否已赋值
                     * 
                     */
                    bool ToolListHasBeenSet() const;

                    /**
                     * 获取<p>插件配置</p>
                     * @return PluginList <p>插件配置</p>
                     * 
                     */
                    std::vector<AgentPlugin> GetPluginList() const;

                    /**
                     * 设置<p>插件配置</p>
                     * @param _pluginList <p>插件配置</p>
                     * 
                     */
                    void SetPluginList(const std::vector<AgentPlugin>& _pluginList);

                    /**
                     * 判断参数 PluginList 是否已赋值
                     * @return PluginList 是否已赋值
                     * 
                     */
                    bool PluginListHasBeenSet() const;

                    /**
                     * 获取<p>技能详情</p>
                     * @return SkillList <p>技能详情</p>
                     * 
                     */
                    std::vector<AgentSkill> GetSkillList() const;

                    /**
                     * 设置<p>技能详情</p>
                     * @param _skillList <p>技能详情</p>
                     * 
                     */
                    void SetSkillList(const std::vector<AgentSkill>& _skillList);

                    /**
                     * 判断参数 SkillList 是否已赋值
                     * @return SkillList 是否已赋值
                     * 
                     */
                    bool SkillListHasBeenSet() const;

                    /**
                     * 获取<p>高级配置</p>
                     * @return AdvancedConfig <p>高级配置</p>
                     * 
                     */
                    AgentAdvancedConfig GetAdvancedConfig() const;

                    /**
                     * 设置<p>高级配置</p>
                     * @param _advancedConfig <p>高级配置</p>
                     * 
                     */
                    void SetAdvancedConfig(const AgentAdvancedConfig& _advancedConfig);

                    /**
                     * 判断参数 AdvancedConfig 是否已赋值
                     * @return AdvancedConfig 是否已赋值
                     * 
                     */
                    bool AdvancedConfigHasBeenSet() const;

                    /**
                     * 获取<p>调用方执行的 Function Tool 列表</p><p>入参限制：仅在 C 端用户态 Agent 场景可用，B 端配置态 Agent 忽略该字段与</p>
                     * @return ExternalToolList <p>调用方执行的 Function Tool 列表</p><p>入参限制：仅在 C 端用户态 Agent 场景可用，B 端配置态 Agent 忽略该字段与</p>
                     * 
                     */
                    std::vector<AgentExternalToolConfig> GetExternalToolList() const;

                    /**
                     * 设置<p>调用方执行的 Function Tool 列表</p><p>入参限制：仅在 C 端用户态 Agent 场景可用，B 端配置态 Agent 忽略该字段与</p>
                     * @param _externalToolList <p>调用方执行的 Function Tool 列表</p><p>入参限制：仅在 C 端用户态 Agent 场景可用，B 端配置态 Agent 忽略该字段与</p>
                     * 
                     */
                    void SetExternalToolList(const std::vector<AgentExternalToolConfig>& _externalToolList);

                    /**
                     * 判断参数 ExternalToolList 是否已赋值
                     * @return ExternalToolList 是否已赋值
                     * 
                     */
                    bool ExternalToolListHasBeenSet() const;

                    /**
                     * 获取<p>子 Agent 执行来源</p><p>枚举值：</p><ul><li>0： 应用内子 Agent</li><li>1： 引用已发布的应用</li></ul>
                     * @return ProviderType <p>子 Agent 执行来源</p><p>枚举值：</p><ul><li>0： 应用内子 Agent</li><li>1： 引用已发布的应用</li></ul>
                     * 
                     */
                    int64_t GetProviderType() const;

                    /**
                     * 设置<p>子 Agent 执行来源</p><p>枚举值：</p><ul><li>0： 应用内子 Agent</li><li>1： 引用已发布的应用</li></ul>
                     * @param _providerType <p>子 Agent 执行来源</p><p>枚举值：</p><ul><li>0： 应用内子 Agent</li><li>1： 引用已发布的应用</li></ul>
                     * 
                     */
                    void SetProviderType(const int64_t& _providerType);

                    /**
                     * 判断参数 ProviderType 是否已赋值
                     * @return ProviderType 是否已赋值
                     * 
                     */
                    bool ProviderTypeHasBeenSet() const;

                    /**
                     * 获取<p>引用应用的ID</p>
                     * @return ReferenceAppId <p>引用应用的ID</p>
                     * 
                     */
                    std::string GetReferenceAppId() const;

                    /**
                     * 设置<p>引用应用的ID</p>
                     * @param _referenceAppId <p>引用应用的ID</p>
                     * 
                     */
                    void SetReferenceAppId(const std::string& _referenceAppId);

                    /**
                     * 判断参数 ReferenceAppId 是否已赋值
                     * @return ReferenceAppId 是否已赋值
                     * 
                     */
                    bool ReferenceAppIdHasBeenSet() const;

                    /**
                     * 获取<p>引用应用状态，ProviderType=1 时有效</p><p>枚举值：</p><ul><li>0： 来源应用可用</li><li>1： 来源应用不可用</li><li>2： 无权限</li><li>3： 嵌套引用: 来源应用线上生效配置中已含应用类子 Agent</li></ul>
                     * @return ReferenceAppStatus <p>引用应用状态，ProviderType=1 时有效</p><p>枚举值：</p><ul><li>0： 来源应用可用</li><li>1： 来源应用不可用</li><li>2： 无权限</li><li>3： 嵌套引用: 来源应用线上生效配置中已含应用类子 Agent</li></ul>
                     * 
                     */
                    int64_t GetReferenceAppStatus() const;

                    /**
                     * 设置<p>引用应用状态，ProviderType=1 时有效</p><p>枚举值：</p><ul><li>0： 来源应用可用</li><li>1： 来源应用不可用</li><li>2： 无权限</li><li>3： 嵌套引用: 来源应用线上生效配置中已含应用类子 Agent</li></ul>
                     * @param _referenceAppStatus <p>引用应用状态，ProviderType=1 时有效</p><p>枚举值：</p><ul><li>0： 来源应用可用</li><li>1： 来源应用不可用</li><li>2： 无权限</li><li>3： 嵌套引用: 来源应用线上生效配置中已含应用类子 Agent</li></ul>
                     * 
                     */
                    void SetReferenceAppStatus(const int64_t& _referenceAppStatus);

                    /**
                     * 判断参数 ReferenceAppStatus 是否已赋值
                     * @return ReferenceAppStatus 是否已赋值
                     * 
                     */
                    bool ReferenceAppStatusHasBeenSet() const;

                    /**
                     * 获取<p>引用应用详情，ProviderType=1 时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReferenceApp <p>引用应用详情，ProviderType=1 时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ReferenceAppDetail GetReferenceApp() const;

                    /**
                     * 设置<p>引用应用详情，ProviderType=1 时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _referenceApp <p>引用应用详情，ProviderType=1 时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReferenceApp(const ReferenceAppDetail& _referenceApp);

                    /**
                     * 判断参数 ReferenceApp 是否已赋值
                     * @return ReferenceApp 是否已赋值
                     * 
                     */
                    bool ReferenceAppHasBeenSet() const;

                    /**
                     * 获取<p>内置工具列表</p>
                     * @return BuiltinToolList <p>内置工具列表</p>
                     * 
                     */
                    std::vector<AgentBuiltinTool> GetBuiltinToolList() const;

                    /**
                     * 设置<p>内置工具列表</p>
                     * @param _builtinToolList <p>内置工具列表</p>
                     * 
                     */
                    void SetBuiltinToolList(const std::vector<AgentBuiltinTool>& _builtinToolList);

                    /**
                     * 判断参数 BuiltinToolList 是否已赋值
                     * @return BuiltinToolList 是否已赋值
                     * 
                     */
                    bool BuiltinToolListHasBeenSet() const;

                private:

                    /**
                     * <p>Agent ID</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>Agent基本配置</p>
                     */
                    AgentProfile m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * <p>系统提示词</p>
                     */
                    std::string m_instructions;
                    bool m_instructionsHasBeenSet;

                    /**
                     * <p>模型信息</p>
                     */
                    AgentModelConfig m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>工具详情</p>
                     */
                    std::vector<AgentTool> m_toolList;
                    bool m_toolListHasBeenSet;

                    /**
                     * <p>插件配置</p>
                     */
                    std::vector<AgentPlugin> m_pluginList;
                    bool m_pluginListHasBeenSet;

                    /**
                     * <p>技能详情</p>
                     */
                    std::vector<AgentSkill> m_skillList;
                    bool m_skillListHasBeenSet;

                    /**
                     * <p>高级配置</p>
                     */
                    AgentAdvancedConfig m_advancedConfig;
                    bool m_advancedConfigHasBeenSet;

                    /**
                     * <p>调用方执行的 Function Tool 列表</p><p>入参限制：仅在 C 端用户态 Agent 场景可用，B 端配置态 Agent 忽略该字段与</p>
                     */
                    std::vector<AgentExternalToolConfig> m_externalToolList;
                    bool m_externalToolListHasBeenSet;

                    /**
                     * <p>子 Agent 执行来源</p><p>枚举值：</p><ul><li>0： 应用内子 Agent</li><li>1： 引用已发布的应用</li></ul>
                     */
                    int64_t m_providerType;
                    bool m_providerTypeHasBeenSet;

                    /**
                     * <p>引用应用的ID</p>
                     */
                    std::string m_referenceAppId;
                    bool m_referenceAppIdHasBeenSet;

                    /**
                     * <p>引用应用状态，ProviderType=1 时有效</p><p>枚举值：</p><ul><li>0： 来源应用可用</li><li>1： 来源应用不可用</li><li>2： 无权限</li><li>3： 嵌套引用: 来源应用线上生效配置中已含应用类子 Agent</li></ul>
                     */
                    int64_t m_referenceAppStatus;
                    bool m_referenceAppStatusHasBeenSet;

                    /**
                     * <p>引用应用详情，ProviderType=1 时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ReferenceAppDetail m_referenceApp;
                    bool m_referenceAppHasBeenSet;

                    /**
                     * <p>内置工具列表</p>
                     */
                    std::vector<AgentBuiltinTool> m_builtinToolList;
                    bool m_builtinToolListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTDETAIL_H_
