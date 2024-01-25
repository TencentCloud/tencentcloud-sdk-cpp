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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHCREATEVIRTUALTASKDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHCREATEVIRTUALTASKDTO_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * BatchCreateVirtualTask使用，描述任务信息
                */
                class BatchCreateVirtualTaskDTO : public AbstractModel
                {
                public:
                    BatchCreateVirtualTaskDTO();
                    ~BatchCreateVirtualTaskDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowId 工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowId 工作流id
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
                     * 获取项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName 任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName 任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取LeftCoordinate坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LeftCoordinate LeftCoordinate坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLeftCoordinate() const;

                    /**
                     * 设置LeftCoordinate坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _leftCoordinate LeftCoordinate坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLeftCoordinate(const double& _leftCoordinate);

                    /**
                     * 判断参数 LeftCoordinate 是否已赋值
                     * @return LeftCoordinate 是否已赋值
                     * 
                     */
                    bool LeftCoordinateHasBeenSet() const;

                    /**
                     * 获取TopCoordinate坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopCoordinate TopCoordinate坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTopCoordinate() const;

                    /**
                     * 设置TopCoordinate坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topCoordinate TopCoordinate坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopCoordinate(const double& _topCoordinate);

                    /**
                     * 判断参数 TopCoordinate 是否已赋值
                     * @return TopCoordinate 是否已赋值
                     * 
                     */
                    bool TopCoordinateHasBeenSet() const;

                private:

                    /**
                     * 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * LeftCoordinate坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_leftCoordinate;
                    bool m_leftCoordinateHasBeenSet;

                    /**
                     * TopCoordinate坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_topCoordinate;
                    bool m_topCoordinateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHCREATEVIRTUALTASKDTO_H_
