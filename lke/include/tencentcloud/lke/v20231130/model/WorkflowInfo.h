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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/Content.h>


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
                     * 获取<p>工作流ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowId <p>工作流ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>工作流ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowId <p>工作流ID</p>
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
                     * 获取<p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowName <p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置<p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowName <p>工作流名称</p>
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
                     * 获取<p>工作流运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowRunId <p>工作流运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置<p>工作流运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowRunId <p>工作流运行ID</p>
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
                     * 获取<p>选项卡</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OptionCards <p>选项卡</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOptionCards() const;

                    /**
                     * 设置<p>选项卡</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _optionCards <p>选项卡</p>
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
                     * 获取<p>多气泡的输出结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Outputs <p>多气泡的输出结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOutputs() const;

                    /**
                     * 设置<p>多气泡的输出结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputs <p>多气泡的输出结果</p>
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
                     * 获取<p>工作流发布时间，unix时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowReleaseTime <p>工作流发布时间，unix时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowReleaseTime() const;

                    /**
                     * 设置<p>工作流发布时间，unix时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowReleaseTime <p>工作流发布时间，unix时间戳</p>
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

                    /**
                     * 获取<p>工作流多气泡输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Contents <p>工作流多气泡输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Content> GetContents() const;

                    /**
                     * 设置<p>工作流多气泡输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contents <p>工作流多气泡输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContents(const std::vector<Content>& _contents);

                    /**
                     * 判断参数 Contents 是否已赋值
                     * @return Contents 是否已赋值
                     * 
                     */
                    bool ContentsHasBeenSet() const;

                    /**
                     * 获取<p>标识选项卡为单选还是双选</p><p>枚举值：</p><ul><li>0： 单选</li><li>1： 多选</li></ul>
                     * @return OptionMode <p>标识选项卡为单选还是双选</p><p>枚举值：</p><ul><li>0： 单选</li><li>1： 多选</li></ul>
                     * 
                     */
                    int64_t GetOptionMode() const;

                    /**
                     * 设置<p>标识选项卡为单选还是双选</p><p>枚举值：</p><ul><li>0： 单选</li><li>1： 多选</li></ul>
                     * @param _optionMode <p>标识选项卡为单选还是双选</p><p>枚举值：</p><ul><li>0： 单选</li><li>1： 多选</li></ul>
                     * 
                     */
                    void SetOptionMode(const int64_t& _optionMode);

                    /**
                     * 判断参数 OptionMode 是否已赋值
                     * @return OptionMode 是否已赋值
                     * 
                     */
                    bool OptionModeHasBeenSet() const;

                private:

                    /**
                     * <p>工作流ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * <p>工作流运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                    /**
                     * <p>选项卡</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_optionCards;
                    bool m_optionCardsHasBeenSet;

                    /**
                     * <p>多气泡的输出结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_outputs;
                    bool m_outputsHasBeenSet;

                    /**
                     * <p>工作流发布时间，unix时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowReleaseTime;
                    bool m_workflowReleaseTimeHasBeenSet;

                    /**
                     * <p>工作流多气泡输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Content> m_contents;
                    bool m_contentsHasBeenSet;

                    /**
                     * <p>标识选项卡为单选还是双选</p><p>枚举值：</p><ul><li>0： 单选</li><li>1： 多选</li></ul>
                     */
                    int64_t m_optionMode;
                    bool m_optionModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWINFO_H_
