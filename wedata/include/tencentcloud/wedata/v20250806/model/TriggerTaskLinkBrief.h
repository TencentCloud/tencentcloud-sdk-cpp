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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKLINKBRIEF_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKLINKBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 任务链接概要信息
                */
                class TriggerTaskLinkBrief : public AbstractModel
                {
                public:
                    TriggerTaskLinkBrief();
                    ~TriggerTaskLinkBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取连接ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LinkId 连接ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLinkId() const;

                    /**
                     * 设置连接ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _linkId 连接ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLinkId(const std::string& _linkId);

                    /**
                     * 判断参数 LinkId 是否已赋值
                     * @return LinkId 是否已赋值
                     * 
                     */
                    bool LinkIdHasBeenSet() const;

                    /**
                     * 获取所属工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowId 所属工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置所属工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowId 所属工作流ID
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
                     * 获取所属工作流版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowVersionId 所属工作流版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowVersionId() const;

                    /**
                     * 设置所属工作流版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowVersionId 所属工作流版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowVersionId(const std::string& _workflowVersionId);

                    /**
                     * 判断参数 WorkflowVersionId 是否已赋值
                     * @return WorkflowVersionId 是否已赋值
                     * 
                     */
                    bool WorkflowVersionIdHasBeenSet() const;

                    /**
                     * 获取上游任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamTaskId 上游任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpstreamTaskId() const;

                    /**
                     * 设置上游任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamTaskId 上游任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpstreamTaskId(const std::string& _upstreamTaskId);

                    /**
                     * 判断参数 UpstreamTaskId 是否已赋值
                     * @return UpstreamTaskId 是否已赋值
                     * 
                     */
                    bool UpstreamTaskIdHasBeenSet() const;

                    /**
                     * 获取下游任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownstreamTaskId 下游任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDownstreamTaskId() const;

                    /**
                     * 设置下游任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _downstreamTaskId 下游任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDownstreamTaskId(const std::string& _downstreamTaskId);

                    /**
                     * 判断参数 DownstreamTaskId 是否已赋值
                     * @return DownstreamTaskId 是否已赋值
                     * 
                     */
                    bool DownstreamTaskIdHasBeenSet() const;

                private:

                    /**
                     * 连接ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_linkId;
                    bool m_linkIdHasBeenSet;

                    /**
                     * 所属工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 所属工作流版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowVersionId;
                    bool m_workflowVersionIdHasBeenSet;

                    /**
                     * 上游任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_upstreamTaskId;
                    bool m_upstreamTaskIdHasBeenSet;

                    /**
                     * 下游任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_downstreamTaskId;
                    bool m_downstreamTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKLINKBRIEF_H_
