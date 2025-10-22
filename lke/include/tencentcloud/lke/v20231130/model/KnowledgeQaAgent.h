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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQAAGENT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQAAGENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/KnowledgeQaWorkflowInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 应用配置关联的agent信息
                */
                class KnowledgeQaAgent : public AbstractModel
                {
                public:
                    KnowledgeQaAgent();
                    ~KnowledgeQaAgent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取协同方式，1：自由转交，2：工作流编排，3：Plan-and-Execute
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentCollaboration 协同方式，1：自由转交，2：工作流编排，3：Plan-and-Execute
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAgentCollaboration() const;

                    /**
                     * 设置协同方式，1：自由转交，2：工作流编排，3：Plan-and-Execute
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentCollaboration 协同方式，1：自由转交，2：工作流编排，3：Plan-and-Execute
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentCollaboration(const uint64_t& _agentCollaboration);

                    /**
                     * 判断参数 AgentCollaboration 是否已赋值
                     * @return AgentCollaboration 是否已赋值
                     * 
                     */
                    bool AgentCollaborationHasBeenSet() const;

                    /**
                     * 获取应用配置agent关联的工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Workflow 应用配置agent关联的工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KnowledgeQaWorkflowInfo GetWorkflow() const;

                    /**
                     * 设置应用配置agent关联的工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflow 应用配置agent关联的工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflow(const KnowledgeQaWorkflowInfo& _workflow);

                    /**
                     * 判断参数 Workflow 是否已赋值
                     * @return Workflow 是否已赋值
                     * 
                     */
                    bool WorkflowHasBeenSet() const;

                private:

                    /**
                     * 协同方式，1：自由转交，2：工作流编排，3：Plan-and-Execute
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_agentCollaboration;
                    bool m_agentCollaborationHasBeenSet;

                    /**
                     * 应用配置agent关联的工作流
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KnowledgeQaWorkflowInfo m_workflow;
                    bool m_workflowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQAAGENT_H_
