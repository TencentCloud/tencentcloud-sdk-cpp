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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEDETAILVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEDETAILVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskTypeOpsDto.h>
#include <tencentcloud/wedata/v20210820/model/InstanceLifeCycleVO.h>
#include <tencentcloud/wedata/v20210820/model/InstanceLogVO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 调度实例详情
                */
                class InstanceDetailVO : public AbstractModel
                {
                public:
                    InstanceDetailVO();
                    ~InstanceDetailVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceKey 实例唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置实例唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceKey 实例唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                    /**
                     * 获取项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目ID
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
                     * 获取文件夹ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FolderId 文件夹ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置文件夹ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _folderId 文件夹ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FolderName 文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _folderName 文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFolderName(const std::string& _folderName);

                    /**
                     * 判断参数 FolderName 是否已赋值
                     * @return FolderName 是否已赋值
                     * 
                     */
                    bool FolderNameHasBeenSet() const;

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
                     * 获取负责人列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InChargeList 负责人列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetInChargeList() const;

                    /**
                     * 设置负责人列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inChargeList 负责人列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInChargeList(const std::vector<std::string>& _inChargeList);

                    /**
                     * 判断参数 InChargeList 是否已赋值
                     * @return InChargeList 是否已赋值
                     * 
                     */
                    bool InChargeListHasBeenSet() const;

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
                     * 获取任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName 任务名称
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
                     * 获取**任务周期类型**
支持过滤多个，条件间为 或 的过滤关系
* O: ONEOFF_CYCLE
* Y: YEAR_CYCLE
* M: MONTH_CYCLE
* W: WEEK_CYCLE
* D: DAY_CYCLE
* H: HOUR_CYCLE
* I: MINUTE_CYCLE
* C: CRONTAB_CYCLE
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskCycleType **任务周期类型**
支持过滤多个，条件间为 或 的过滤关系
* O: ONEOFF_CYCLE
* Y: YEAR_CYCLE
* M: MONTH_CYCLE
* W: WEEK_CYCLE
* D: DAY_CYCLE
* H: HOUR_CYCLE
* I: MINUTE_CYCLE
* C: CRONTAB_CYCLE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskCycleType() const;

                    /**
                     * 设置**任务周期类型**
支持过滤多个，条件间为 或 的过滤关系
* O: ONEOFF_CYCLE
* Y: YEAR_CYCLE
* M: MONTH_CYCLE
* W: WEEK_CYCLE
* D: DAY_CYCLE
* H: HOUR_CYCLE
* I: MINUTE_CYCLE
* C: CRONTAB_CYCLE
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskCycleType **任务周期类型**
支持过滤多个，条件间为 或 的过滤关系
* O: ONEOFF_CYCLE
* Y: YEAR_CYCLE
* M: MONTH_CYCLE
* W: WEEK_CYCLE
* D: DAY_CYCLE
* H: HOUR_CYCLE
* I: MINUTE_CYCLE
* C: CRONTAB_CYCLE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskCycleType(const std::string& _taskCycleType);

                    /**
                     * 判断参数 TaskCycleType 是否已赋值
                     * @return TaskCycleType 是否已赋值
                     * 
                     */
                    bool TaskCycleTypeHasBeenSet() const;

                    /**
                     * 获取任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskTypeOpsDto GetTaskType() const;

                    /**
                     * 设置任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskType(const TaskTypeOpsDto& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取执行资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupId 执行资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置执行资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorGroupId 执行资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                    /**
                     * 获取资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupName 资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorGroupName() const;

                    /**
                     * 设置资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorGroupName 资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorGroupName(const std::string& _executorGroupName);

                    /**
                     * 判断参数 ExecutorGroupName 是否已赋值
                     * @return ExecutorGroupName 是否已赋值
                     * 
                     */
                    bool ExecutorGroupNameHasBeenSet() const;

                    /**
                     * 获取实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurRunDate 实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _curRunDate 实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     * 
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取下一个实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextCurDate 下一个实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNextCurDate() const;

                    /**
                     * 设置下一个实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nextCurDate 下一个实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNextCurDate(const std::string& _nextCurDate);

                    /**
                     * 判断参数 NextCurDate 是否已赋值
                     * @return NextCurDate 是否已赋值
                     * 
                     */
                    bool NextCurDateHasBeenSet() const;

                    /**
                     * 获取每次运行失败，下发重试次数限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TryLimit 每次运行失败，下发重试次数限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTryLimit() const;

                    /**
                     * 设置每次运行失败，下发重试次数限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tryLimit 每次运行失败，下发重试次数限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTryLimit(const uint64_t& _tryLimit);

                    /**
                     * 判断参数 TryLimit 是否已赋值
                     * @return TryLimit 是否已赋值
                     * 
                     */
                    bool TryLimitHasBeenSet() const;

                    /**
                     * 获取当前运行已下发运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tries 当前运行已下发运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTries() const;

                    /**
                     * 设置当前运行已下发运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tries 当前运行已下发运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTries(const uint64_t& _tries);

                    /**
                     * 判断参数 Tries 是否已赋值
                     * @return Tries 是否已赋值
                     * 
                     */
                    bool TriesHasBeenSet() const;

                    /**
                     * 获取累计运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalRunNum 累计运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalRunNum() const;

                    /**
                     * 设置累计运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalRunNum 累计运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalRunNum(const uint64_t& _totalRunNum);

                    /**
                     * 判断参数 TotalRunNum 是否已赋值
                     * @return TotalRunNum 是否已赋值
                     * 
                     */
                    bool TotalRunNumHasBeenSet() const;

                    /**
                     * 获取**实例生命周期编号，标识实例的某一次执行**

例如：周期实例第一次运行的编号为0，用户后期又重跑了该实例，第二次的执行的编号为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifeRoundNum **实例生命周期编号，标识实例的某一次执行**

例如：周期实例第一次运行的编号为0，用户后期又重跑了该实例，第二次的执行的编号为1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLifeRoundNum() const;

                    /**
                     * 设置**实例生命周期编号，标识实例的某一次执行**

例如：周期实例第一次运行的编号为0，用户后期又重跑了该实例，第二次的执行的编号为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifeRoundNum **实例生命周期编号，标识实例的某一次执行**

例如：周期实例第一次运行的编号为0，用户后期又重跑了该实例，第二次的执行的编号为1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLifeRoundNum(const uint64_t& _lifeRoundNum);

                    /**
                     * 判断参数 LifeRoundNum 是否已赋值
                     * @return LifeRoundNum 是否已赋值
                     * 
                     */
                    bool LifeRoundNumHasBeenSet() const;

                    /**
                     * 获取**实例类型**

- 0 表示补录类型
- 1 表示周期实例
- 2 表示非周期实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType **实例类型**

- 0 表示补录类型
- 1 表示周期实例
- 2 表示非周期实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置**实例类型**

- 0 表示补录类型
- 1 表示周期实例
- 2 表示非周期实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType **实例类型**

- 0 表示补录类型
- 1 表示周期实例
- 2 表示非周期实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceType(const uint64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取**实例状态**

- [0] 表示 等待事件
- [12] 表示 等待上游
- [6, 7, 9, 10, 18] 表示 等待运行
- [1, 19, 22] 表示 运行中
- [21] 表示 跳过运行
- [3] 表示 失败重试
- [8, 4, 5, 13] 表示 失败
- [2] 表示 成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceState **实例状态**

- [0] 表示 等待事件
- [12] 表示 等待上游
- [6, 7, 9, 10, 18] 表示 等待运行
- [1, 19, 22] 表示 运行中
- [21] 表示 跳过运行
- [3] 表示 失败重试
- [8, 4, 5, 13] 表示 失败
- [2] 表示 成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInstanceState() const;

                    /**
                     * 设置**实例状态**

- [0] 表示 等待事件
- [12] 表示 等待上游
- [6, 7, 9, 10, 18] 表示 等待运行
- [1, 19, 22] 表示 运行中
- [21] 表示 跳过运行
- [3] 表示 失败重试
- [8, 4, 5, 13] 表示 失败
- [2] 表示 成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceState **实例状态**

- [0] 表示 等待事件
- [12] 表示 等待上游
- [6, 7, 9, 10, 18] 表示 等待运行
- [1, 19, 22] 表示 运行中
- [21] 表示 跳过运行
- [3] 表示 失败重试
- [8, 4, 5, 13] 表示 失败
- [2] 表示 成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceState(const uint64_t& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取计划调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerTime 计划调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerTime() const;

                    /**
                     * 设置计划调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerTime 计划调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchedulerTime(const std::string& _schedulerTime);

                    /**
                     * 判断参数 SchedulerTime 是否已赋值
                     * @return SchedulerTime 是否已赋值
                     * 
                     */
                    bool SchedulerTimeHasBeenSet() const;

                    /**
                     * 获取运行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 运行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置运行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 运行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取运行完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 运行完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置运行完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 运行完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取耗费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CostTime 耗费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCostTime() const;

                    /**
                     * 设置耗费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _costTime 耗费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCostTime(const std::string& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                    /**
                     * 获取**实例运行触发类型**

- RERUN 表示重跑
- ADDITION 表示补录
- PERIODIC 表示周期
- APERIODIC 表示非周期
- RERUN_SKIP_RUN 表示重跑 - 空跑
- ADDITION_SKIP_RUN 表示补录 - 空跑
- PERIODIC_SKIP_RUN 表示周期 - 空跑
- APERIODIC_SKIP_RUN 表示非周期 - 空跑
- MANUAL_TRIGGER 表示手动触发
- RERUN_MANUAL_TRIGGER 表示手动触发 - 重跑
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceRunType **实例运行触发类型**

- RERUN 表示重跑
- ADDITION 表示补录
- PERIODIC 表示周期
- APERIODIC 表示非周期
- RERUN_SKIP_RUN 表示重跑 - 空跑
- ADDITION_SKIP_RUN 表示补录 - 空跑
- PERIODIC_SKIP_RUN 表示周期 - 空跑
- APERIODIC_SKIP_RUN 表示非周期 - 空跑
- MANUAL_TRIGGER 表示手动触发
- RERUN_MANUAL_TRIGGER 表示手动触发 - 重跑
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceRunType() const;

                    /**
                     * 设置**实例运行触发类型**

- RERUN 表示重跑
- ADDITION 表示补录
- PERIODIC 表示周期
- APERIODIC 表示非周期
- RERUN_SKIP_RUN 表示重跑 - 空跑
- ADDITION_SKIP_RUN 表示补录 - 空跑
- PERIODIC_SKIP_RUN 表示周期 - 空跑
- APERIODIC_SKIP_RUN 表示非周期 - 空跑
- MANUAL_TRIGGER 表示手动触发
- RERUN_MANUAL_TRIGGER 表示手动触发 - 重跑
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceRunType **实例运行触发类型**

- RERUN 表示重跑
- ADDITION 表示补录
- PERIODIC 表示周期
- APERIODIC 表示非周期
- RERUN_SKIP_RUN 表示重跑 - 空跑
- ADDITION_SKIP_RUN 表示补录 - 空跑
- PERIODIC_SKIP_RUN 表示周期 - 空跑
- APERIODIC_SKIP_RUN 表示非周期 - 空跑
- MANUAL_TRIGGER 表示手动触发
- RERUN_MANUAL_TRIGGER 表示手动触发 - 重跑
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceRunType(const std::string& _instanceRunType);

                    /**
                     * 判断参数 InstanceRunType 是否已赋值
                     * @return InstanceRunType 是否已赋值
                     * 
                     */
                    bool InstanceRunTypeHasBeenSet() const;

                    /**
                     * 获取**下发执行ID**
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionJobId **下发执行ID**
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionJobId() const;

                    /**
                     * 设置**下发执行ID**
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionJobId **下发执行ID**
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionJobId(const std::string& _executionJobId);

                    /**
                     * 判断参数 ExecutionJobId 是否已赋值
                     * @return ExecutionJobId 是否已赋值
                     * 
                     */
                    bool ExecutionJobIdHasBeenSet() const;

                    /**
                     * 获取**实例生命周期列表**
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceLifeCycleList **实例生命周期列表**
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceLifeCycleVO> GetInstanceLifeCycleList() const;

                    /**
                     * 设置**实例生命周期列表**
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceLifeCycleList **实例生命周期列表**
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceLifeCycleList(const std::vector<InstanceLifeCycleVO>& _instanceLifeCycleList);

                    /**
                     * 判断参数 InstanceLifeCycleList 是否已赋值
                     * @return InstanceLifeCycleList 是否已赋值
                     * 
                     */
                    bool InstanceLifeCycleListHasBeenSet() const;

                    /**
                     * 获取**实例最近一次的执行日志**
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestLog **实例最近一次的执行日志**
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InstanceLogVO GetLatestLog() const;

                    /**
                     * 设置**实例最近一次的执行日志**
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestLog **实例最近一次的执行日志**
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestLog(const InstanceLogVO& _latestLog);

                    /**
                     * 判断参数 LatestLog 是否已赋值
                     * @return LatestLog 是否已赋值
                     * 
                     */
                    bool LatestLogHasBeenSet() const;

                private:

                    /**
                     * 实例唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 文件夹ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * 文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

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
                     * 负责人列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_inChargeList;
                    bool m_inChargeListHasBeenSet;

                    /**
                     * 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * **任务周期类型**
支持过滤多个，条件间为 或 的过滤关系
* O: ONEOFF_CYCLE
* Y: YEAR_CYCLE
* M: MONTH_CYCLE
* W: WEEK_CYCLE
* D: DAY_CYCLE
* H: HOUR_CYCLE
* I: MINUTE_CYCLE
* C: CRONTAB_CYCLE
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskCycleType;
                    bool m_taskCycleTypeHasBeenSet;

                    /**
                     * 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskTypeOpsDto m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 执行资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * 资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupName;
                    bool m_executorGroupNameHasBeenSet;

                    /**
                     * 实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * 下一个实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nextCurDate;
                    bool m_nextCurDateHasBeenSet;

                    /**
                     * 每次运行失败，下发重试次数限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tryLimit;
                    bool m_tryLimitHasBeenSet;

                    /**
                     * 当前运行已下发运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tries;
                    bool m_triesHasBeenSet;

                    /**
                     * 累计运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalRunNum;
                    bool m_totalRunNumHasBeenSet;

                    /**
                     * **实例生命周期编号，标识实例的某一次执行**

例如：周期实例第一次运行的编号为0，用户后期又重跑了该实例，第二次的执行的编号为1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_lifeRoundNum;
                    bool m_lifeRoundNumHasBeenSet;

                    /**
                     * **实例类型**

- 0 表示补录类型
- 1 表示周期实例
- 2 表示非周期实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * **实例状态**

- [0] 表示 等待事件
- [12] 表示 等待上游
- [6, 7, 9, 10, 18] 表示 等待运行
- [1, 19, 22] 表示 运行中
- [21] 表示 跳过运行
- [3] 表示 失败重试
- [8, 4, 5, 13] 表示 失败
- [2] 表示 成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * 计划调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerTime;
                    bool m_schedulerTimeHasBeenSet;

                    /**
                     * 运行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 运行完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 耗费时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * **实例运行触发类型**

- RERUN 表示重跑
- ADDITION 表示补录
- PERIODIC 表示周期
- APERIODIC 表示非周期
- RERUN_SKIP_RUN 表示重跑 - 空跑
- ADDITION_SKIP_RUN 表示补录 - 空跑
- PERIODIC_SKIP_RUN 表示周期 - 空跑
- APERIODIC_SKIP_RUN 表示非周期 - 空跑
- MANUAL_TRIGGER 表示手动触发
- RERUN_MANUAL_TRIGGER 表示手动触发 - 重跑
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceRunType;
                    bool m_instanceRunTypeHasBeenSet;

                    /**
                     * **下发执行ID**
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionJobId;
                    bool m_executionJobIdHasBeenSet;

                    /**
                     * **实例生命周期列表**
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceLifeCycleVO> m_instanceLifeCycleList;
                    bool m_instanceLifeCycleListHasBeenSet;

                    /**
                     * **实例最近一次的执行日志**
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InstanceLogVO m_latestLog;
                    bool m_latestLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEDETAILVO_H_
