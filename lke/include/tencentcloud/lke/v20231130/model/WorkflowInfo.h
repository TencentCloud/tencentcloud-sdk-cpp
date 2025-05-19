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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 工作流信息
                */
                class WorkflowInfo : public AbstractModel
                {
                public:
                    WorkflowInfo();
                    ~WorkflowInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowId 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowId 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowName 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowName 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取工作流运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowRunId 工作流运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置工作流运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowRunId 工作流运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowRunId(const std::string& _workflowRunId);

                    /**
                     * 判断参数 WorkflowRunId 是否已赋值
                     * @return WorkflowRunId 是否已赋值
                     * 
                     */
                    bool WorkflowRunIdHasBeenSet() const;

                    /**
                     * 获取选项卡
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OptionCards 选项卡
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOptionCards() const;

                    /**
                     * 设置选项卡
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _optionCards 选项卡
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOptionCards(const std::vector<std::string>& _optionCards);

                    /**
                     * 判断参数 OptionCards 是否已赋值
                     * @return OptionCards 是否已赋值
                     * 
                     */
                    bool OptionCardsHasBeenSet() const;

                    /**
                     * 获取多气泡的输出结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Outputs 多气泡的输出结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOutputs() const;

                    /**
                     * 设置多气泡的输出结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputs 多气泡的输出结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputs(const std::vector<std::string>& _outputs);

                    /**
                     * 判断参数 Outputs 是否已赋值
                     * @return Outputs 是否已赋值
                     * 
                     */
                    bool OutputsHasBeenSet() const;

                    /**
                     * 获取工作流发布时间，unix时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowReleaseTime 工作流发布时间，unix时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowReleaseTime() const;

                    /**
                     * 设置工作流发布时间，unix时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowReleaseTime 工作流发布时间，unix时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowReleaseTime(const std::string& _workflowReleaseTime);

                    /**
                     * 判断参数 WorkflowReleaseTime 是否已赋值
                     * @return WorkflowReleaseTime 是否已赋值
                     * 
                     */
                    bool WorkflowReleaseTimeHasBeenSet() const;

                private:

                    /**
                     * 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 工作流运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                    /**
                     * 选项卡
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_optionCards;
                    bool m_optionCardsHasBeenSet;

                    /**
                     * 多气泡的输出结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_outputs;
                    bool m_outputsHasBeenSet;

                    /**
                     * 工作流发布时间，unix时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowReleaseTime;
                    bool m_workflowReleaseTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWINFO_H_
