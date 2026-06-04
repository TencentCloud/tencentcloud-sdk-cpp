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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSPEC_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentProfile.h>
#include <tencentcloud/adp/v20260520/model/AgentModelConfig.h>
#include <tencentcloud/adp/v20260520/model/AgentToolConfig.h>
#include <tencentcloud/adp/v20260520/model/AgentPluginConfig.h>
#include <tencentcloud/adp/v20260520/model/AgentSkillConfig.h>
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
                * Agent 可编辑配置
                */
                class AgentSpec : public AbstractModel
                {
                public:
                    AgentSpec();
                    ~AgentSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取系统提示词
                     * @return Instructions 系统提示词
                     * 
                     */
                    std::string GetInstructions() const;

                    /**
                     * 设置系统提示词
                     * @param _instructions 系统提示词
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
                     * 获取主模型配置
                     * @return Model 主模型配置
                     * 
                     */
                    AgentModelConfig GetModel() const;

                    /**
                     * 设置主模型配置
                     * @param _model 主模型配置
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
                     * 获取<p>工具信息</p>
                     * @return ToolList <p>工具信息</p>
                     * 
                     */
                    std::vector<AgentToolConfig> GetToolList() const;

                    /**
                     * 设置<p>工具信息</p>
                     * @param _toolList <p>工具信息</p>
                     * 
                     */
                    void SetToolList(const std::vector<AgentToolConfig>& _toolList);

                    /**
                     * 判断参数 ToolList 是否已赋值
                     * @return ToolList 是否已赋值
                     * 
                     */
                    bool ToolListHasBeenSet() const;

                    /**
                     * 获取<p>插件信息</p>
                     * @return PluginList <p>插件信息</p>
                     * 
                     */
                    std::vector<AgentPluginConfig> GetPluginList() const;

                    /**
                     * 设置<p>插件信息</p>
                     * @param _pluginList <p>插件信息</p>
                     * 
                     */
                    void SetPluginList(const std::vector<AgentPluginConfig>& _pluginList);

                    /**
                     * 判断参数 PluginList 是否已赋值
                     * @return PluginList 是否已赋值
                     * 
                     */
                    bool PluginListHasBeenSet() const;

                    /**
                     * 获取<p>技能信息</p>
                     * @return SkillList <p>技能信息</p>
                     * 
                     */
                    std::vector<AgentSkillConfig> GetSkillList() const;

                    /**
                     * 设置<p>技能信息</p>
                     * @param _skillList <p>技能信息</p>
                     * 
                     */
                    void SetSkillList(const std::vector<AgentSkillConfig>& _skillList);

                    /**
                     * 判断参数 SkillList 是否已赋值
                     * @return SkillList 是否已赋值
                     * 
                     */
                    bool SkillListHasBeenSet() const;

                    /**
                     * 获取高级设置
                     * @return AdvancedConfig 高级设置
                     * 
                     */
                    AgentAdvancedConfig GetAdvancedConfig() const;

                    /**
                     * 设置高级设置
                     * @param _advancedConfig 高级设置
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
                     * <p>Agent基本配置</p>
                     */
                    AgentProfile m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * 系统提示词
                     */
                    std::string m_instructions;
                    bool m_instructionsHasBeenSet;

                    /**
                     * 主模型配置
                     */
                    AgentModelConfig m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>工具信息</p>
                     */
                    std::vector<AgentToolConfig> m_toolList;
                    bool m_toolListHasBeenSet;

                    /**
                     * <p>插件信息</p>
                     */
                    std::vector<AgentPluginConfig> m_pluginList;
                    bool m_pluginListHasBeenSet;

                    /**
                     * <p>技能信息</p>
                     */
                    std::vector<AgentSkillConfig> m_skillList;
                    bool m_skillListHasBeenSet;

                    /**
                     * 高级设置
                     */
                    AgentAdvancedConfig m_advancedConfig;
                    bool m_advancedConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSPEC_H_
