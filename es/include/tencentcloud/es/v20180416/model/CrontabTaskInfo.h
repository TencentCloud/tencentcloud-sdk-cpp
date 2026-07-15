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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_CRONTABTASKINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_CRONTABTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * forcemerge任务信息
                */
                class CrontabTaskInfo : public AbstractModel
                {
                public:
                    CrontabTaskInfo();
                    ~CrontabTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取forcemerge任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId forcemerge任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置forcemerge任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId forcemerge任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取集群地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionId 集群地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置集群地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionId 集群地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInstanceId() const;

                    /**
                     * 设置集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const uint64_t& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取forcemerge任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName forcemerge任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置forcemerge任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName forcemerge任务名称
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
                     * 获取任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取任务执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTime 任务执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskTime() const;

                    /**
                     * 设置任务执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTime 任务执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskTime(const std::string& _taskTime);

                    /**
                     * 判断参数 TaskTime 是否已赋值
                     * @return TaskTime 是否已赋值
                     * 
                     */
                    bool TaskTimeHasBeenSet() const;

                    /**
                     * 获取执行forcemerge的索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Target 执行forcemerge的索引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置执行forcemerge的索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _target 执行forcemerge的索引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取上次执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastExecTime 上次执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastExecTime() const;

                    /**
                     * 设置上次执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastExecTime 上次执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastExecTime(const std::string& _lastExecTime);

                    /**
                     * 判断参数 LastExecTime 是否已赋值
                     * @return LastExecTime 是否已赋值
                     * 
                     */
                    bool LastExecTimeHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _state 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskStatus 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskStatus 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskStatus(const int64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取创建任务时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建任务时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建任务时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建任务时间
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
                     * 获取任务更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 任务更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置任务更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 任务更新时间
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
                     * 获取任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskDetail 任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskDetail() const;

                    /**
                     * 设置任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskDetail 任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskDetail(const std::string& _taskDetail);

                    /**
                     * 判断参数 TaskDetail 是否已赋值
                     * @return TaskDetail 是否已赋值
                     * 
                     */
                    bool TaskDetailHasBeenSet() const;

                    /**
                     * 获取是否只合并有deleted标记的索引，对应ES _forcemerge API中的only_expunge_deletes参数,默认值false
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OnlyExpungeDeletes 是否只合并有deleted标记的索引，对应ES _forcemerge API中的only_expunge_deletes参数,默认值false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetOnlyExpungeDeletes() const;

                    /**
                     * 设置是否只合并有deleted标记的索引，对应ES _forcemerge API中的only_expunge_deletes参数,默认值false
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _onlyExpungeDeletes 是否只合并有deleted标记的索引，对应ES _forcemerge API中的only_expunge_deletes参数,默认值false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOnlyExpungeDeletes(const bool& _onlyExpungeDeletes);

                    /**
                     * 判断参数 OnlyExpungeDeletes 是否已赋值
                     * @return OnlyExpungeDeletes 是否已赋值
                     * 
                     */
                    bool OnlyExpungeDeletesHasBeenSet() const;

                    /**
                     * 获取最大合并Segment数量，对应ES _forcemerge API中的max_num_segments参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxMumSegments 最大合并Segment数量，对应ES _forcemerge API中的max_num_segments参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxMumSegments() const;

                    /**
                     * 设置最大合并Segment数量，对应ES _forcemerge API中的max_num_segments参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxMumSegments 最大合并Segment数量，对应ES _forcemerge API中的max_num_segments参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxMumSegments(const uint64_t& _maxMumSegments);

                    /**
                     * 判断参数 MaxMumSegments 是否已赋值
                     * @return MaxMumSegments 是否已赋值
                     * 
                     */
                    bool MaxMumSegmentsHasBeenSet() const;

                private:

                    /**
                     * forcemerge任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 集群地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 集群id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * forcemerge任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskTime;
                    bool m_taskTimeHasBeenSet;

                    /**
                     * 执行forcemerge的索引
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 上次执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastExecTime;
                    bool m_lastExecTimeHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 创建任务时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskDetail;
                    bool m_taskDetailHasBeenSet;

                    /**
                     * 是否只合并有deleted标记的索引，对应ES _forcemerge API中的only_expunge_deletes参数,默认值false
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_onlyExpungeDeletes;
                    bool m_onlyExpungeDeletesHasBeenSet;

                    /**
                     * 最大合并Segment数量，对应ES _forcemerge API中的max_num_segments参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxMumSegments;
                    bool m_maxMumSegmentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_CRONTABTASKINFO_H_
