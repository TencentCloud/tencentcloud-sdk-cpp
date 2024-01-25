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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_PROJECTCLONEWORKFLOWINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_PROJECTCLONEWORKFLOWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ProjectCloneTaskInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 工作流列表信息-项目克隆使用
                */
                class ProjectCloneWorkflowInfo : public AbstractModel
                {
                public:
                    ProjectCloneWorkflowInfo();
                    ~ProjectCloneWorkflowInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Folder 文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFolder() const;

                    /**
                     * 设置文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _folder 文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFolder(const std::string& _folder);

                    /**
                     * 判断参数 Folder 是否已赋值
                     * @return Folder 是否已赋值
                     * 
                     */
                    bool FolderHasBeenSet() const;

                    /**
                     * 获取任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskNum 任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTaskNum() const;

                    /**
                     * 设置任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskNum 任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskNum(const uint64_t& _taskNum);

                    /**
                     * 判断参数 TaskNum 是否已赋值
                     * @return TaskNum 是否已赋值
                     * 
                     */
                    bool TaskNumHasBeenSet() const;

                    /**
                     * 获取责任人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Owner 责任人id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置责任人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _owner 责任人id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerName 责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerName 责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerName(const std::string& _ownerName);

                    /**
                     * 判断参数 OwnerName 是否已赋值
                     * @return OwnerName 是否已赋值
                     * 
                     */
                    bool OwnerNameHasBeenSet() const;

                    /**
                     * 获取工作流最近一次提交时间（未提交则为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestSubmitTime 工作流最近一次提交时间（未提交则为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestSubmitTime() const;

                    /**
                     * 设置工作流最近一次提交时间（未提交则为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestSubmitTime 工作流最近一次提交时间（未提交则为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestSubmitTime(const std::string& _latestSubmitTime);

                    /**
                     * 判断参数 LatestSubmitTime 是否已赋值
                     * @return LatestSubmitTime 是否已赋值
                     * 
                     */
                    bool LatestSubmitTimeHasBeenSet() const;

                    /**
                     * 获取工作流任务列表（当前未使用）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tasks 工作流任务列表（当前未使用）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ProjectCloneTaskInfo> GetTasks() const;

                    /**
                     * 设置工作流任务列表（当前未使用）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tasks 工作流任务列表（当前未使用）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTasks(const std::vector<ProjectCloneTaskInfo>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                private:

                    /**
                     * 工作流id
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
                     * 文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_folder;
                    bool m_folderHasBeenSet;

                    /**
                     * 任务数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_taskNum;
                    bool m_taskNumHasBeenSet;

                    /**
                     * 责任人id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                    /**
                     * 工作流最近一次提交时间（未提交则为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestSubmitTime;
                    bool m_latestSubmitTimeHasBeenSet;

                    /**
                     * 工作流任务列表（当前未使用）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProjectCloneTaskInfo> m_tasks;
                    bool m_tasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_PROJECTCLONEWORKFLOWINFO_H_
