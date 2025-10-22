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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AgentModelInfo.h>
#include <tencentcloud/lke/v20231130/model/AgentToolInfo.h>
#include <tencentcloud/lke/v20231130/model/AgentPluginInfo.h>
#include <tencentcloud/lke/v20231130/model/AgentAdvancedConfig.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Agent 的定义
                */
                class Agent : public AbstractModel
                {
                public:
                    Agent();
                    ~Agent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AgentID
                     * @return AgentId AgentID
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置AgentID
                     * @param _agentId AgentID
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
                     * 获取WorkflowID，非空则当前Agent从workflow转换而来
                     * @return WorkflowId WorkflowID，非空则当前Agent从workflow转换而来
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置WorkflowID，非空则当前Agent从workflow转换而来
                     * @param _workflowId WorkflowID，非空则当前Agent从workflow转换而来
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取Agent名称，同一个应用内，Agent名称不能重复
                     * @return Name Agent名称，同一个应用内，Agent名称不能重复
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Agent名称，同一个应用内，Agent名称不能重复
                     * @param _name Agent名称，同一个应用内，Agent名称不能重复
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
                     * 获取Agent图标url
                     * @return IconUrl Agent图标url
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置Agent图标url
                     * @param _iconUrl Agent图标url
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
                     * 获取Agent指令；当该Agent被调用时，将作为“系统提示词”使用，描述Agent应执行的操作和响应方式
                     * @return Instructions Agent指令；当该Agent被调用时，将作为“系统提示词”使用，描述Agent应执行的操作和响应方式
                     * 
                     */
                    std::string GetInstructions() const;

                    /**
                     * 设置Agent指令；当该Agent被调用时，将作为“系统提示词”使用，描述Agent应执行的操作和响应方式
                     * @param _instructions Agent指令；当该Agent被调用时，将作为“系统提示词”使用，描述Agent应执行的操作和响应方式
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
                     * 获取当Agent作为转交目标时的描述，用于让其他Agent的LLM理解其功能和转交时机
                     * @return HandoffDescription 当Agent作为转交目标时的描述，用于让其他Agent的LLM理解其功能和转交时机
                     * 
                     */
                    std::string GetHandoffDescription() const;

                    /**
                     * 设置当Agent作为转交目标时的描述，用于让其他Agent的LLM理解其功能和转交时机
                     * @param _handoffDescription 当Agent作为转交目标时的描述，用于让其他Agent的LLM理解其功能和转交时机
                     * 
                     */
                    void SetHandoffDescription(const std::string& _handoffDescription);

                    /**
                     * 判断参数 HandoffDescription 是否已赋值
                     * @return HandoffDescription 是否已赋值
                     * 
                     */
                    bool HandoffDescriptionHasBeenSet() const;

                    /**
                     * 获取Agent可转交的子AgentId列表
                     * @return Handoffs Agent可转交的子AgentId列表
                     * 
                     */
                    std::vector<std::string> GetHandoffs() const;

                    /**
                     * 设置Agent可转交的子AgentId列表
                     * @param _handoffs Agent可转交的子AgentId列表
                     * 
                     */
                    void SetHandoffs(const std::vector<std::string>& _handoffs);

                    /**
                     * 判断参数 Handoffs 是否已赋值
                     * @return Handoffs 是否已赋值
                     * 
                     */
                    bool HandoffsHasBeenSet() const;

                    /**
                     * 获取Agent调用LLM时使用的模型配置
                     * @return Model Agent调用LLM时使用的模型配置
                     * 
                     */
                    AgentModelInfo GetModel() const;

                    /**
                     * 设置Agent调用LLM时使用的模型配置
                     * @param _model Agent调用LLM时使用的模型配置
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
                     * 获取Agent可使用的工具列表
                     * @return Tools Agent可使用的工具列表
                     * 
                     */
                    std::vector<AgentToolInfo> GetTools() const;

                    /**
                     * 设置Agent可使用的工具列表
                     * @param _tools Agent可使用的工具列表
                     * 
                     */
                    void SetTools(const std::vector<AgentToolInfo>& _tools);

                    /**
                     * 判断参数 Tools 是否已赋值
                     * @return Tools 是否已赋值
                     * 
                     */
                    bool ToolsHasBeenSet() const;

                    /**
                     * 获取Agent可使用的插件列表
                     * @return Plugins Agent可使用的插件列表
                     * 
                     */
                    std::vector<AgentPluginInfo> GetPlugins() const;

                    /**
                     * 设置Agent可使用的插件列表
                     * @param _plugins Agent可使用的插件列表
                     * 
                     */
                    void SetPlugins(const std::vector<AgentPluginInfo>& _plugins);

                    /**
                     * 判断参数 Plugins 是否已赋值
                     * @return Plugins 是否已赋值
                     * 
                     */
                    bool PluginsHasBeenSet() const;

                    /**
                     * 获取当前Agent是否是启动Agent
                     * @return IsStartingAgent 当前Agent是否是启动Agent
                     * 
                     */
                    bool GetIsStartingAgent() const;

                    /**
                     * 设置当前Agent是否是启动Agent
                     * @param _isStartingAgent 当前Agent是否是启动Agent
                     * 
                     */
                    void SetIsStartingAgent(const bool& _isStartingAgent);

                    /**
                     * 判断参数 IsStartingAgent 是否已赋值
                     * @return IsStartingAgent 是否已赋值
                     * 
                     */
                    bool IsStartingAgentHasBeenSet() const;

                    /**
                     * 获取Agent类型; 0: 未指定类型; 1: 知识库检索Agent
                     * @return AgentType Agent类型; 0: 未指定类型; 1: 知识库检索Agent
                     * 
                     */
                    uint64_t GetAgentType() const;

                    /**
                     * 设置Agent类型; 0: 未指定类型; 1: 知识库检索Agent
                     * @param _agentType Agent类型; 0: 未指定类型; 1: 知识库检索Agent
                     * 
                     */
                    void SetAgentType(const uint64_t& _agentType);

                    /**
                     * 判断参数 AgentType 是否已赋值
                     * @return AgentType 是否已赋值
                     * 
                     */
                    bool AgentTypeHasBeenSet() const;

                    /**
                     * 获取0 自由转交，1 计划与执行
                     * @return AgentMode 0 自由转交，1 计划与执行
                     * 
                     */
                    int64_t GetAgentMode() const;

                    /**
                     * 设置0 自由转交，1 计划与执行
                     * @param _agentMode 0 自由转交，1 计划与执行
                     * 
                     */
                    void SetAgentMode(const int64_t& _agentMode);

                    /**
                     * 判断参数 AgentMode 是否已赋值
                     * @return AgentMode 是否已赋值
                     * 
                     */
                    bool AgentModeHasBeenSet() const;

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
                     * AgentID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * WorkflowID，非空则当前Agent从workflow转换而来
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Agent名称，同一个应用内，Agent名称不能重复
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Agent图标url
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * Agent指令；当该Agent被调用时，将作为“系统提示词”使用，描述Agent应执行的操作和响应方式
                     */
                    std::string m_instructions;
                    bool m_instructionsHasBeenSet;

                    /**
                     * 当Agent作为转交目标时的描述，用于让其他Agent的LLM理解其功能和转交时机
                     */
                    std::string m_handoffDescription;
                    bool m_handoffDescriptionHasBeenSet;

                    /**
                     * Agent可转交的子AgentId列表
                     */
                    std::vector<std::string> m_handoffs;
                    bool m_handoffsHasBeenSet;

                    /**
                     * Agent调用LLM时使用的模型配置
                     */
                    AgentModelInfo m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * Agent可使用的工具列表
                     */
                    std::vector<AgentToolInfo> m_tools;
                    bool m_toolsHasBeenSet;

                    /**
                     * Agent可使用的插件列表
                     */
                    std::vector<AgentPluginInfo> m_plugins;
                    bool m_pluginsHasBeenSet;

                    /**
                     * 当前Agent是否是启动Agent
                     */
                    bool m_isStartingAgent;
                    bool m_isStartingAgentHasBeenSet;

                    /**
                     * Agent类型; 0: 未指定类型; 1: 知识库检索Agent
                     */
                    uint64_t m_agentType;
                    bool m_agentTypeHasBeenSet;

                    /**
                     * 0 自由转交，1 计划与执行
                     */
                    int64_t m_agentMode;
                    bool m_agentModeHasBeenSet;

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

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENT_H_
