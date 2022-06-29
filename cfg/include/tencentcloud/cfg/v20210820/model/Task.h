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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASK_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TaskGroup.h>
#include <tencentcloud/cfg/v20210820/model/TaskMonitor.h>
#include <tencentcloud/cfg/v20210820/model/DescribePolicy.h>
#include <tencentcloud/cfg/v20210820/model/TagWithDescribe.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务
                */
                class Task : public AbstractModel
                {
                public:
                    Task();
                    ~Task() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param TaskId 任务ID
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务标题
                     * @return TaskTitle 任务标题
                     */
                    std::string GetTaskTitle() const;

                    /**
                     * 设置任务标题
                     * @param TaskTitle 任务标题
                     */
                    void SetTaskTitle(const std::string& _taskTitle);

                    /**
                     * 判断参数 TaskTitle 是否已赋值
                     * @return TaskTitle 是否已赋值
                     */
                    bool TaskTitleHasBeenSet() const;

                    /**
                     * 获取任务描述
                     * @return TaskDescription 任务描述
                     */
                    std::string GetTaskDescription() const;

                    /**
                     * 设置任务描述
                     * @param TaskDescription 任务描述
                     */
                    void SetTaskDescription(const std::string& _taskDescription);

                    /**
                     * 判断参数 TaskDescription 是否已赋值
                     * @return TaskDescription 是否已赋值
                     */
                    bool TaskDescriptionHasBeenSet() const;

                    /**
                     * 获取自定义标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTag 自定义标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTaskTag() const;

                    /**
                     * 设置自定义标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskTag 自定义标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskTag(const std::string& _taskTag);

                    /**
                     * 判断参数 TaskTag 是否已赋值
                     * @return TaskTag 是否已赋值
                     */
                    bool TaskTagHasBeenSet() const;

                    /**
                     * 获取任务状态，1001--未开始  1002--进行中（执行）1003--进行中（暂停）1004--执行结束
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskStatus 任务状态，1001--未开始  1002--进行中（执行）1003--进行中（暂停）1004--执行结束
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置任务状态，1001--未开始  1002--进行中（执行）1003--进行中（暂停）1004--执行结束
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskStatus 任务状态，1001--未开始  1002--进行中（执行）1003--进行中（暂停）1004--执行结束
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskStatus(const int64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取任务结束状态，表明任务以何种状态结束: 0 -- 尚未结束，1 -- 成功，2-- 失败，3--终止
                     * @return TaskStatusType 任务结束状态，表明任务以何种状态结束: 0 -- 尚未结束，1 -- 成功，2-- 失败，3--终止
                     */
                    int64_t GetTaskStatusType() const;

                    /**
                     * 设置任务结束状态，表明任务以何种状态结束: 0 -- 尚未结束，1 -- 成功，2-- 失败，3--终止
                     * @param TaskStatusType 任务结束状态，表明任务以何种状态结束: 0 -- 尚未结束，1 -- 成功，2-- 失败，3--终止
                     */
                    void SetTaskStatusType(const int64_t& _taskStatusType);

                    /**
                     * 判断参数 TaskStatusType 是否已赋值
                     * @return TaskStatusType 是否已赋值
                     */
                    bool TaskStatusTypeHasBeenSet() const;

                    /**
                     * 获取保护策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskProtectStrategy 保护策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTaskProtectStrategy() const;

                    /**
                     * 设置保护策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskProtectStrategy 保护策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskProtectStrategy(const std::string& _taskProtectStrategy);

                    /**
                     * 判断参数 TaskProtectStrategy 是否已赋值
                     * @return TaskProtectStrategy 是否已赋值
                     */
                    bool TaskProtectStrategyHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return TaskCreateTime 任务创建时间
                     */
                    std::string GetTaskCreateTime() const;

                    /**
                     * 设置任务创建时间
                     * @param TaskCreateTime 任务创建时间
                     */
                    void SetTaskCreateTime(const std::string& _taskCreateTime);

                    /**
                     * 判断参数 TaskCreateTime 是否已赋值
                     * @return TaskCreateTime 是否已赋值
                     */
                    bool TaskCreateTimeHasBeenSet() const;

                    /**
                     * 获取任务更新时间
                     * @return TaskUpdateTime 任务更新时间
                     */
                    std::string GetTaskUpdateTime() const;

                    /**
                     * 设置任务更新时间
                     * @param TaskUpdateTime 任务更新时间
                     */
                    void SetTaskUpdateTime(const std::string& _taskUpdateTime);

                    /**
                     * 判断参数 TaskUpdateTime 是否已赋值
                     * @return TaskUpdateTime 是否已赋值
                     */
                    bool TaskUpdateTimeHasBeenSet() const;

                    /**
                     * 获取任务动作组
                     * @return TaskGroups 任务动作组
                     */
                    std::vector<TaskGroup> GetTaskGroups() const;

                    /**
                     * 设置任务动作组
                     * @param TaskGroups 任务动作组
                     */
                    void SetTaskGroups(const std::vector<TaskGroup>& _taskGroups);

                    /**
                     * 判断参数 TaskGroups 是否已赋值
                     * @return TaskGroups 是否已赋值
                     */
                    bool TaskGroupsHasBeenSet() const;

                    /**
                     * 获取开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskStartTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTaskStartTime() const;

                    /**
                     * 设置开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskStartTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskStartTime(const std::string& _taskStartTime);

                    /**
                     * 判断参数 TaskStartTime 是否已赋值
                     * @return TaskStartTime 是否已赋值
                     */
                    bool TaskStartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskEndTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTaskEndTime() const;

                    /**
                     * 设置结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskEndTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskEndTime(const std::string& _taskEndTime);

                    /**
                     * 判断参数 TaskEndTime 是否已赋值
                     * @return TaskEndTime 是否已赋值
                     */
                    bool TaskEndTimeHasBeenSet() const;

                    /**
                     * 获取是否符合预期。1：符合预期，2：不符合预期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskExpect 是否符合预期。1：符合预期，2：不符合预期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTaskExpect() const;

                    /**
                     * 设置是否符合预期。1：符合预期，2：不符合预期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskExpect 是否符合预期。1：符合预期，2：不符合预期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskExpect(const int64_t& _taskExpect);

                    /**
                     * 判断参数 TaskExpect 是否已赋值
                     * @return TaskExpect 是否已赋值
                     */
                    bool TaskExpectHasBeenSet() const;

                    /**
                     * 获取演习记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskSummary 演习记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTaskSummary() const;

                    /**
                     * 设置演习记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskSummary 演习记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskSummary(const std::string& _taskSummary);

                    /**
                     * 判断参数 TaskSummary 是否已赋值
                     * @return TaskSummary 是否已赋值
                     */
                    bool TaskSummaryHasBeenSet() const;

                    /**
                     * 获取任务模式。1:手工执行，2:自动执行
                     * @return TaskMode 任务模式。1:手工执行，2:自动执行
                     */
                    int64_t GetTaskMode() const;

                    /**
                     * 设置任务模式。1:手工执行，2:自动执行
                     * @param TaskMode 任务模式。1:手工执行，2:自动执行
                     */
                    void SetTaskMode(const int64_t& _taskMode);

                    /**
                     * 判断参数 TaskMode 是否已赋值
                     * @return TaskMode 是否已赋值
                     */
                    bool TaskModeHasBeenSet() const;

                    /**
                     * 获取自动暂停时长。单位分钟
                     * @return TaskPauseDuration 自动暂停时长。单位分钟
                     */
                    int64_t GetTaskPauseDuration() const;

                    /**
                     * 设置自动暂停时长。单位分钟
                     * @param TaskPauseDuration 自动暂停时长。单位分钟
                     */
                    void SetTaskPauseDuration(const int64_t& _taskPauseDuration);

                    /**
                     * 判断参数 TaskPauseDuration 是否已赋值
                     * @return TaskPauseDuration 是否已赋值
                     */
                    bool TaskPauseDurationHasBeenSet() const;

                    /**
                     * 获取演练创建者Uin
                     * @return TaskOwnerUin 演练创建者Uin
                     */
                    std::string GetTaskOwnerUin() const;

                    /**
                     * 设置演练创建者Uin
                     * @param TaskOwnerUin 演练创建者Uin
                     */
                    void SetTaskOwnerUin(const std::string& _taskOwnerUin);

                    /**
                     * 判断参数 TaskOwnerUin 是否已赋值
                     * @return TaskOwnerUin 是否已赋值
                     */
                    bool TaskOwnerUinHasBeenSet() const;

                    /**
                     * 获取地域ID
                     * @return TaskRegionId 地域ID
                     */
                    int64_t GetTaskRegionId() const;

                    /**
                     * 设置地域ID
                     * @param TaskRegionId 地域ID
                     */
                    void SetTaskRegionId(const int64_t& _taskRegionId);

                    /**
                     * 判断参数 TaskRegionId 是否已赋值
                     * @return TaskRegionId 是否已赋值
                     */
                    bool TaskRegionIdHasBeenSet() const;

                    /**
                     * 获取监控指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskMonitors 监控指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskMonitor> GetTaskMonitors() const;

                    /**
                     * 设置监控指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskMonitors 监控指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskMonitors(const std::vector<TaskMonitor>& _taskMonitors);

                    /**
                     * 判断参数 TaskMonitors 是否已赋值
                     * @return TaskMonitors 是否已赋值
                     */
                    bool TaskMonitorsHasBeenSet() const;

                    /**
                     * 获取保护策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskPolicy 保护策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribePolicy GetTaskPolicy() const;

                    /**
                     * 设置保护策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskPolicy 保护策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskPolicy(const DescribePolicy& _taskPolicy);

                    /**
                     * 判断参数 TaskPolicy 是否已赋值
                     * @return TaskPolicy 是否已赋值
                     */
                    bool TaskPolicyHasBeenSet() const;

                    /**
                     * 获取标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagWithDescribe> GetTags() const;

                    /**
                     * 设置标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<TagWithDescribe>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务标题
                     */
                    std::string m_taskTitle;
                    bool m_taskTitleHasBeenSet;

                    /**
                     * 任务描述
                     */
                    std::string m_taskDescription;
                    bool m_taskDescriptionHasBeenSet;

                    /**
                     * 自定义标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskTag;
                    bool m_taskTagHasBeenSet;

                    /**
                     * 任务状态，1001--未开始  1002--进行中（执行）1003--进行中（暂停）1004--执行结束
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 任务结束状态，表明任务以何种状态结束: 0 -- 尚未结束，1 -- 成功，2-- 失败，3--终止
                     */
                    int64_t m_taskStatusType;
                    bool m_taskStatusTypeHasBeenSet;

                    /**
                     * 保护策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskProtectStrategy;
                    bool m_taskProtectStrategyHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_taskCreateTime;
                    bool m_taskCreateTimeHasBeenSet;

                    /**
                     * 任务更新时间
                     */
                    std::string m_taskUpdateTime;
                    bool m_taskUpdateTimeHasBeenSet;

                    /**
                     * 任务动作组
                     */
                    std::vector<TaskGroup> m_taskGroups;
                    bool m_taskGroupsHasBeenSet;

                    /**
                     * 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskStartTime;
                    bool m_taskStartTimeHasBeenSet;

                    /**
                     * 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskEndTime;
                    bool m_taskEndTimeHasBeenSet;

                    /**
                     * 是否符合预期。1：符合预期，2：不符合预期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskExpect;
                    bool m_taskExpectHasBeenSet;

                    /**
                     * 演习记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskSummary;
                    bool m_taskSummaryHasBeenSet;

                    /**
                     * 任务模式。1:手工执行，2:自动执行
                     */
                    int64_t m_taskMode;
                    bool m_taskModeHasBeenSet;

                    /**
                     * 自动暂停时长。单位分钟
                     */
                    int64_t m_taskPauseDuration;
                    bool m_taskPauseDurationHasBeenSet;

                    /**
                     * 演练创建者Uin
                     */
                    std::string m_taskOwnerUin;
                    bool m_taskOwnerUinHasBeenSet;

                    /**
                     * 地域ID
                     */
                    int64_t m_taskRegionId;
                    bool m_taskRegionIdHasBeenSet;

                    /**
                     * 监控指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskMonitor> m_taskMonitors;
                    bool m_taskMonitorsHasBeenSet;

                    /**
                     * 保护策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribePolicy m_taskPolicy;
                    bool m_taskPolicyHasBeenSet;

                    /**
                     * 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagWithDescribe> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASK_H_
