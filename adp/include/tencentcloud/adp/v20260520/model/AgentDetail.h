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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTDETAIL_H_
