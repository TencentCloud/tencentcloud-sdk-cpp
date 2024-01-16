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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BASELINETASKINSTANCEDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BASELINETASKINSTANCEDTO_H_

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
                * 基线实例
                */
                class BaselineTaskInstanceDto : public AbstractModel
                {
                public:
                    BaselineTaskInstanceDto();
                    ~BaselineTaskInstanceDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务实例变更记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 任务实例变更记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置任务实例变更记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 任务实例变更记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取基线实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BaselineInstanceId 基线实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBaselineInstanceId() const;

                    /**
                     * 设置基线实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _baselineInstanceId 基线实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBaselineInstanceId(const int64_t& _baselineInstanceId);

                    /**
                     * 判断参数 BaselineInstanceId 是否已赋值
                     * @return BaselineInstanceId 是否已赋值
                     * 
                     */
                    bool BaselineInstanceIdHasBeenSet() const;

                    /**
                     * 获取基线周期, D: 天 / H: 小时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BaselineType 基线周期, D: 天 / H: 小时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBaselineType() const;

                    /**
                     * 设置基线周期, D: 天 / H: 小时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _baselineType 基线周期, D: 天 / H: 小时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBaselineType(const std::string& _baselineType);

                    /**
                     * 判断参数 BaselineType 是否已赋值
                     * @return BaselineType 是否已赋值
                     * 
                     */
                    bool BaselineTypeHasBeenSet() const;

                    /**
                     * 获取数据时间/基线实例应该应该生成的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BaselineDataTime 数据时间/基线实例应该应该生成的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBaselineDataTime() const;

                    /**
                     * 设置数据时间/基线实例应该应该生成的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _baselineDataTime 数据时间/基线实例应该应该生成的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBaselineDataTime(const std::string& _baselineDataTime);

                    /**
                     * 判断参数 BaselineDataTime 是否已赋值
                     * @return BaselineDataTime 是否已赋值
                     * 
                     */
                    bool BaselineDataTimeHasBeenSet() const;

                    /**
                     * 获取上游实例id,多个实例用,分开.格式为taskId_curRunDate
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamInstanceIds 上游实例id,多个实例用,分开.格式为taskId_curRunDate
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpstreamInstanceIds() const;

                    /**
                     * 设置上游实例id,多个实例用,分开.格式为taskId_curRunDate
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamInstanceIds 上游实例id,多个实例用,分开.格式为taskId_curRunDate
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpstreamInstanceIds(const std::string& _upstreamInstanceIds);

                    /**
                     * 判断参数 UpstreamInstanceIds 是否已赋值
                     * @return UpstreamInstanceIds 是否已赋值
                     * 
                     */
                    bool UpstreamInstanceIdsHasBeenSet() const;

                    /**
                     * 获取下游实例id,多个实例用,分开.格式为taskId_curRunDate
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownstreamInstanceIds 下游实例id,多个实例用,分开.格式为taskId_curRunDate
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDownstreamInstanceIds() const;

                    /**
                     * 设置下游实例id,多个实例用,分开.格式为taskId_curRunDate
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _downstreamInstanceIds 下游实例id,多个实例用,分开.格式为taskId_curRunDate
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDownstreamInstanceIds(const std::string& _downstreamInstanceIds);

                    /**
                     * 判断参数 DownstreamInstanceIds 是否已赋值
                     * @return DownstreamInstanceIds 是否已赋值
                     * 
                     */
                    bool DownstreamInstanceIdsHasBeenSet() const;

                    /**
                     * 获取是否是保障任务的实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsPromiseTask 是否是保障任务的实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsPromiseTask() const;

                    /**
                     * 设置是否是保障任务的实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isPromiseTask 是否是保障任务的实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsPromiseTask(const bool& _isPromiseTask);

                    /**
                     * 判断参数 IsPromiseTask 是否已赋值
                     * @return IsPromiseTask 是否已赋值
                     * 
                     */
                    bool IsPromiseTaskHasBeenSet() const;

                    /**
                     * 获取任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务id
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
                     * 获取任务实例的数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurRunDate 任务实例的数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置任务实例的数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _curRunDate 任务实例的数据时间
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
                     * 获取是否在关键路径上，1表示在，0表示不在
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InCriticalPath 是否在关键路径上，1表示在，0表示不在
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInCriticalPath() const;

                    /**
                     * 设置是否在关键路径上，1表示在，0表示不在
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inCriticalPath 是否在关键路径上，1表示在，0表示不在
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInCriticalPath(const int64_t& _inCriticalPath);

                    /**
                     * 判断参数 InCriticalPath 是否已赋值
                     * @return InCriticalPath 是否已赋值
                     * 
                     */
                    bool InCriticalPathHasBeenSet() const;

                    /**
                     * 获取是否在DAG首层
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InFirstLevel 是否在DAG首层
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetInFirstLevel() const;

                    /**
                     * 设置是否在DAG首层
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inFirstLevel 是否在DAG首层
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInFirstLevel(const bool& _inFirstLevel);

                    /**
                     * 判断参数 InFirstLevel 是否已赋值
                     * @return InFirstLevel 是否已赋值
                     * 
                     */
                    bool InFirstLevelHasBeenSet() const;

                    /**
                     * 获取实例预计耗时/单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EstimatedCostTime 实例预计耗时/单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEstimatedCostTime() const;

                    /**
                     * 设置实例预计耗时/单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _estimatedCostTime 实例预计耗时/单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEstimatedCostTime(const int64_t& _estimatedCostTime);

                    /**
                     * 判断参数 EstimatedCostTime 是否已赋值
                     * @return EstimatedCostTime 是否已赋值
                     * 
                     */
                    bool EstimatedCostTimeHasBeenSet() const;

                    /**
                     * 获取实例实际耗时/单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActualCostTime 实例实际耗时/单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetActualCostTime() const;

                    /**
                     * 设置实例实际耗时/单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _actualCostTime 实例实际耗时/单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActualCostTime(const int64_t& _actualCostTime);

                    /**
                     * 判断参数 ActualCostTime 是否已赋值
                     * @return ActualCostTime 是否已赋值
                     * 
                     */
                    bool ActualCostTimeHasBeenSet() const;

                    /**
                     * 获取预计最晚开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestStartTime 预计最晚开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestStartTime() const;

                    /**
                     * 设置预计最晚开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestStartTime 预计最晚开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestStartTime(const std::string& _latestStartTime);

                    /**
                     * 判断参数 LatestStartTime 是否已赋值
                     * @return LatestStartTime 是否已赋值
                     * 
                     */
                    bool LatestStartTimeHasBeenSet() const;

                    /**
                     * 获取实际开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActualStartTime 实际开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActualStartTime() const;

                    /**
                     * 设置实际开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _actualStartTime 实际开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActualStartTime(const std::string& _actualStartTime);

                    /**
                     * 判断参数 ActualStartTime 是否已赋值
                     * @return ActualStartTime 是否已赋值
                     * 
                     */
                    bool ActualStartTimeHasBeenSet() const;

                    /**
                     * 获取预计完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EstimatedEndTime 预计完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEstimatedEndTime() const;

                    /**
                     * 设置预计完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _estimatedEndTime 预计完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEstimatedEndTime(const std::string& _estimatedEndTime);

                    /**
                     * 判断参数 EstimatedEndTime 是否已赋值
                     * @return EstimatedEndTime 是否已赋值
                     * 
                     */
                    bool EstimatedEndTimeHasBeenSet() const;

                    /**
                     * 获取最晚完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestEndTime 最晚完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestEndTime() const;

                    /**
                     * 设置最晚完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestEndTime 最晚完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestEndTime(const std::string& _latestEndTime);

                    /**
                     * 判断参数 LatestEndTime 是否已赋值
                     * @return LatestEndTime 是否已赋值
                     * 
                     */
                    bool LatestEndTimeHasBeenSet() const;

                    /**
                     * 获取实际完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActualEndTime 实际完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActualEndTime() const;

                    /**
                     * 设置实际完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _actualEndTime 实际完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActualEndTime(const std::string& _actualEndTime);

                    /**
                     * 判断参数 ActualEndTime 是否已赋值
                     * @return ActualEndTime 是否已赋值
                     * 
                     */
                    bool ActualEndTimeHasBeenSet() const;

                    /**
                     * 获取实例运行状态
WAITINT_TO_RUN:等待运行 / RUNNING: 正在运行 / COMPLETED: 执行成功 / FAILED: 执行失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskInstanceStatus 实例运行状态
WAITINT_TO_RUN:等待运行 / RUNNING: 正在运行 / COMPLETED: 执行成功 / FAILED: 执行失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskInstanceStatus() const;

                    /**
                     * 设置实例运行状态
WAITINT_TO_RUN:等待运行 / RUNNING: 正在运行 / COMPLETED: 执行成功 / FAILED: 执行失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskInstanceStatus 实例运行状态
WAITINT_TO_RUN:等待运行 / RUNNING: 正在运行 / COMPLETED: 执行成功 / FAILED: 执行失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskInstanceStatus(const std::string& _taskInstanceStatus);

                    /**
                     * 判断参数 TaskInstanceStatus 是否已赋值
                     * @return TaskInstanceStatus 是否已赋值
                     * 
                     */
                    bool TaskInstanceStatusHasBeenSet() const;

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
                     * 获取该基线由哪个机器处理
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShardKey 该基线由哪个机器处理
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShardKey() const;

                    /**
                     * 设置该基线由哪个机器处理
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shardKey 该基线由哪个机器处理
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShardKey(const std::string& _shardKey);

                    /**
                     * 判断参数 ShardKey 是否已赋值
                     * @return ShardKey 是否已赋值
                     * 
                     */
                    bool ShardKeyHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取当前用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserUin 当前用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置当前用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userUin 当前用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin 主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin 主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取关键路径依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CriticalDependency 关键路径依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCriticalDependency() const;

                    /**
                     * 设置关键路径依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _criticalDependency 关键路径依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCriticalDependency(const std::string& _criticalDependency);

                    /**
                     * 判断参数 CriticalDependency 是否已赋值
                     * @return CriticalDependency 是否已赋值
                     * 
                     */
                    bool CriticalDependencyHasBeenSet() const;

                private:

                    /**
                     * 任务实例变更记录id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 基线实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_baselineInstanceId;
                    bool m_baselineInstanceIdHasBeenSet;

                    /**
                     * 基线周期, D: 天 / H: 小时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_baselineType;
                    bool m_baselineTypeHasBeenSet;

                    /**
                     * 数据时间/基线实例应该应该生成的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_baselineDataTime;
                    bool m_baselineDataTimeHasBeenSet;

                    /**
                     * 上游实例id,多个实例用,分开.格式为taskId_curRunDate
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_upstreamInstanceIds;
                    bool m_upstreamInstanceIdsHasBeenSet;

                    /**
                     * 下游实例id,多个实例用,分开.格式为taskId_curRunDate
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_downstreamInstanceIds;
                    bool m_downstreamInstanceIdsHasBeenSet;

                    /**
                     * 是否是保障任务的实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isPromiseTask;
                    bool m_isPromiseTaskHasBeenSet;

                    /**
                     * 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务实例的数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 是否在关键路径上，1表示在，0表示不在
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_inCriticalPath;
                    bool m_inCriticalPathHasBeenSet;

                    /**
                     * 是否在DAG首层
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_inFirstLevel;
                    bool m_inFirstLevelHasBeenSet;

                    /**
                     * 实例预计耗时/单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_estimatedCostTime;
                    bool m_estimatedCostTimeHasBeenSet;

                    /**
                     * 实例实际耗时/单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_actualCostTime;
                    bool m_actualCostTimeHasBeenSet;

                    /**
                     * 预计最晚开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestStartTime;
                    bool m_latestStartTimeHasBeenSet;

                    /**
                     * 实际开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_actualStartTime;
                    bool m_actualStartTimeHasBeenSet;

                    /**
                     * 预计完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_estimatedEndTime;
                    bool m_estimatedEndTimeHasBeenSet;

                    /**
                     * 最晚完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestEndTime;
                    bool m_latestEndTimeHasBeenSet;

                    /**
                     * 实际完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_actualEndTime;
                    bool m_actualEndTimeHasBeenSet;

                    /**
                     * 实例运行状态
WAITINT_TO_RUN:等待运行 / RUNNING: 正在运行 / COMPLETED: 执行成功 / FAILED: 执行失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskInstanceStatus;
                    bool m_taskInstanceStatusHasBeenSet;

                    /**
                     * 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 该基线由哪个机器处理
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shardKey;
                    bool m_shardKeyHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 当前用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * 主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 租户id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 关键路径依赖
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_criticalDependency;
                    bool m_criticalDependencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BASELINETASKINSTANCEDTO_H_
