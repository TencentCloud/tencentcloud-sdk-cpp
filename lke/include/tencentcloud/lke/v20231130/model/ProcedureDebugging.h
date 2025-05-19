/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_PROCEDUREDEBUGGING_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_PROCEDUREDEBUGGING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/HistorySummary.h>
#include <tencentcloud/lke/v20231130/model/KnowledgeSummary.h>
#include <tencentcloud/lke/v20231130/model/TaskFlowSummary.h>
#include <tencentcloud/lke/v20231130/model/WorkFlowSummary.h>
#include <tencentcloud/lke/v20231130/model/AgentDebugInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 调试信息
                */
                class ProcedureDebugging : public AbstractModel
                {
                public:
                    ProcedureDebugging();
                    ~ProcedureDebugging() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检索query
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 检索query
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置检索query
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 检索query
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取系统prompt
注意：此字段可能返回 null，表示取不到有效值。
                     * @return System 系统prompt
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSystem() const;

                    /**
                     * 设置系统prompt
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _system 系统prompt
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSystem(const std::string& _system);

                    /**
                     * 判断参数 System 是否已赋值
                     * @return System 是否已赋值
                     * 
                     */
                    bool SystemHasBeenSet() const;

                    /**
                     * 获取多轮历史信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Histories 多轮历史信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<HistorySummary> GetHistories() const;

                    /**
                     * 设置多轮历史信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _histories 多轮历史信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHistories(const std::vector<HistorySummary>& _histories);

                    /**
                     * 判断参数 Histories 是否已赋值
                     * @return Histories 是否已赋值
                     * 
                     */
                    bool HistoriesHasBeenSet() const;

                    /**
                     * 获取检索知识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Knowledge 检索知识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KnowledgeSummary> GetKnowledge() const;

                    /**
                     * 设置检索知识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _knowledge 检索知识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKnowledge(const std::vector<KnowledgeSummary>& _knowledge);

                    /**
                     * 判断参数 Knowledge 是否已赋值
                     * @return Knowledge 是否已赋值
                     * 
                     */
                    bool KnowledgeHasBeenSet() const;

                    /**
                     * 获取任务流程
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskFlow 任务流程
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskFlowSummary GetTaskFlow() const;

                    /**
                     * 设置任务流程
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskFlow 任务流程
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskFlow(const TaskFlowSummary& _taskFlow);

                    /**
                     * 判断参数 TaskFlow 是否已赋值
                     * @return TaskFlow 是否已赋值
                     * 
                     */
                    bool TaskFlowHasBeenSet() const;

                    /**
                     * 获取工作流调试信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkFlow 工作流调试信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WorkFlowSummary GetWorkFlow() const;

                    /**
                     * 设置工作流调试信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workFlow 工作流调试信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkFlow(const WorkFlowSummary& _workFlow);

                    /**
                     * 判断参数 WorkFlow 是否已赋值
                     * @return WorkFlow 是否已赋值
                     * 
                     */
                    bool WorkFlowHasBeenSet() const;

                    /**
                     * 获取Agent调试信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Agent Agent调试信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AgentDebugInfo GetAgent() const;

                    /**
                     * 设置Agent调试信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agent Agent调试信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgent(const AgentDebugInfo& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取自定义参数
                     * @return CustomVariables 自定义参数
                     * 
                     */
                    std::vector<std::string> GetCustomVariables() const;

                    /**
                     * 设置自定义参数
                     * @param _customVariables 自定义参数
                     * 
                     */
                    void SetCustomVariables(const std::vector<std::string>& _customVariables);

                    /**
                     * 判断参数 CustomVariables 是否已赋值
                     * @return CustomVariables 是否已赋值
                     * 
                     */
                    bool CustomVariablesHasBeenSet() const;

                private:

                    /**
                     * 检索query
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 系统prompt
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_system;
                    bool m_systemHasBeenSet;

                    /**
                     * 多轮历史信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<HistorySummary> m_histories;
                    bool m_historiesHasBeenSet;

                    /**
                     * 检索知识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KnowledgeSummary> m_knowledge;
                    bool m_knowledgeHasBeenSet;

                    /**
                     * 任务流程
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskFlowSummary m_taskFlow;
                    bool m_taskFlowHasBeenSet;

                    /**
                     * 工作流调试信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WorkFlowSummary m_workFlow;
                    bool m_workFlowHasBeenSet;

                    /**
                     * Agent调试信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AgentDebugInfo m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 自定义参数
                     */
                    std::vector<std::string> m_customVariables;
                    bool m_customVariablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_PROCEDUREDEBUGGING_H_
