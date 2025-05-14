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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBRESPONSE_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/TaskView.h>
#include <tencentcloud/batch/v20170312/model/Dependence.h>
#include <tencentcloud/batch/v20170312/model/TaskMetrics.h>
#include <tencentcloud/batch/v20170312/model/TaskInstanceMetrics.h>
#include <tencentcloud/batch/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeJob返回参数结构体
                */
                class DescribeJobResponse : public AbstractModel
                {
                public:
                    DescribeJobResponse();
                    ~DescribeJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取作业ID
                     * @return JobId 作业ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取作业名称
                     * @return JobName 作业名称
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取可用区信息
                     * @return Zone 可用区信息
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取作业优先级
                     * @return Priority 作业优先级
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取作业状态
                     * @return JobState 作业状态
                     * 
                     */
                    std::string GetJobState() const;

                    /**
                     * 判断参数 JobState 是否已赋值
                     * @return JobState 是否已赋值
                     * 
                     */
                    bool JobStateHasBeenSet() const;

                    /**
                     * 获取创建时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * @return CreateTime 创建时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取结束时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * @return EndTime 结束时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取任务视图信息
                     * @return TaskSet 任务视图信息
                     * 
                     */
                    std::vector<TaskView> GetTaskSet() const;

                    /**
                     * 判断参数 TaskSet 是否已赋值
                     * @return TaskSet 是否已赋值
                     * 
                     */
                    bool TaskSetHasBeenSet() const;

                    /**
                     * 获取任务间依赖信息
                     * @return DependenceSet 任务间依赖信息
                     * 
                     */
                    std::vector<Dependence> GetDependenceSet() const;

                    /**
                     * 判断参数 DependenceSet 是否已赋值
                     * @return DependenceSet 是否已赋值
                     * 
                     */
                    bool DependenceSetHasBeenSet() const;

                    /**
                     * 获取任务统计指标
                     * @return TaskMetrics 任务统计指标
                     * 
                     */
                    TaskMetrics GetTaskMetrics() const;

                    /**
                     * 判断参数 TaskMetrics 是否已赋值
                     * @return TaskMetrics 是否已赋值
                     * 
                     */
                    bool TaskMetricsHasBeenSet() const;

                    /**
                     * 获取任务实例统计指标
                     * @return TaskInstanceMetrics 任务实例统计指标
                     * 
                     */
                    TaskInstanceMetrics GetTaskInstanceMetrics() const;

                    /**
                     * 判断参数 TaskInstanceMetrics 是否已赋值
                     * @return TaskInstanceMetrics 是否已赋值
                     * 
                     */
                    bool TaskInstanceMetricsHasBeenSet() const;

                    /**
                     * 获取作业失败原因
                     * @return StateReason 作业失败原因
                     * 
                     */
                    std::string GetStateReason() const;

                    /**
                     * 判断参数 StateReason 是否已赋值
                     * @return StateReason 是否已赋值
                     * 
                     */
                    bool StateReasonHasBeenSet() const;

                    /**
                     * 获取作业绑定的标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 作业绑定的标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取下一步动作
                     * @return NextAction 下一步动作
                     * 
                     */
                    std::string GetNextAction() const;

                    /**
                     * 判断参数 NextAction 是否已赋值
                     * @return NextAction 是否已赋值
                     * 
                     */
                    bool NextActionHasBeenSet() const;

                private:

                    /**
                     * 作业ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 作业名称
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 可用区信息
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 作业优先级
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 作业状态
                     */
                    std::string m_jobState;
                    bool m_jobStateHasBeenSet;

                    /**
                     * 创建时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 结束时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务视图信息
                     */
                    std::vector<TaskView> m_taskSet;
                    bool m_taskSetHasBeenSet;

                    /**
                     * 任务间依赖信息
                     */
                    std::vector<Dependence> m_dependenceSet;
                    bool m_dependenceSetHasBeenSet;

                    /**
                     * 任务统计指标
                     */
                    TaskMetrics m_taskMetrics;
                    bool m_taskMetricsHasBeenSet;

                    /**
                     * 任务实例统计指标
                     */
                    TaskInstanceMetrics m_taskInstanceMetrics;
                    bool m_taskInstanceMetricsHasBeenSet;

                    /**
                     * 作业失败原因
                     */
                    std::string m_stateReason;
                    bool m_stateReasonHasBeenSet;

                    /**
                     * 作业绑定的标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 下一步动作
                     */
                    std::string m_nextAction;
                    bool m_nextActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBRESPONSE_H_
