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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEYARNSCHEDULEHISTORYREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEYARNSCHEDULEHISTORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeYarnScheduleHistory请求参数结构体
                */
                class DescribeYarnScheduleHistoryRequest : public AbstractModel
                {
                public:
                    DescribeYarnScheduleHistoryRequest();
                    ~DescribeYarnScheduleHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return InstanceId 集群id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群id
                     * @param _instanceId 集群id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return Limit 页码
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置页码
                     * @param _limit 页码
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取页大小
                     * @return Offset 页大小
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置页大小
                     * @param _offset 页大小
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取调度器类型 可选值为“ALL”，"Capacity Scheduler", "Fair Scheduler"
                     * @return SchedulerType 调度器类型 可选值为“ALL”，"Capacity Scheduler", "Fair Scheduler"
                     * 
                     */
                    std::string GetSchedulerType() const;

                    /**
                     * 设置调度器类型 可选值为“ALL”，"Capacity Scheduler", "Fair Scheduler"
                     * @param _schedulerType 调度器类型 可选值为“ALL”，"Capacity Scheduler", "Fair Scheduler"
                     * 
                     */
                    void SetSchedulerType(const std::string& _schedulerType);

                    /**
                     * 判断参数 SchedulerType 是否已赋值
                     * @return SchedulerType 是否已赋值
                     * 
                     */
                    bool SchedulerTypeHasBeenSet() const;

                    /**
                     * 获取任务类型0:等待执行，1:执行中，2：完成，-1:失败 ，-99:全部
                     * @return TaskState 任务类型0:等待执行，1:执行中，2：完成，-1:失败 ，-99:全部
                     * 
                     */
                    int64_t GetTaskState() const;

                    /**
                     * 设置任务类型0:等待执行，1:执行中，2：完成，-1:失败 ，-99:全部
                     * @param _taskState 任务类型0:等待执行，1:执行中，2：完成，-1:失败 ，-99:全部
                     * 
                     */
                    void SetTaskState(const int64_t& _taskState);

                    /**
                     * 判断参数 TaskState 是否已赋值
                     * @return TaskState 是否已赋值
                     * 
                     */
                    bool TaskStateHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 开始时间
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 页码
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 页大小
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 调度器类型 可选值为“ALL”，"Capacity Scheduler", "Fair Scheduler"
                     */
                    std::string m_schedulerType;
                    bool m_schedulerTypeHasBeenSet;

                    /**
                     * 任务类型0:等待执行，1:执行中，2：完成，-1:失败 ，-99:全部
                     */
                    int64_t m_taskState;
                    bool m_taskStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEYARNSCHEDULEHISTORYREQUEST_H_
