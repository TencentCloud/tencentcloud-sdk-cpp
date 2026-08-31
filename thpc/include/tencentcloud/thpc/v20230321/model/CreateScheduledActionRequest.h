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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_CREATESCHEDULEDACTIONREQUEST_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_CREATESCHEDULEDACTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * CreateScheduledAction请求参数结构体
                */
                class CreateScheduledActionRequest : public AbstractModel
                {
                public:
                    CreateScheduledActionRequest();
                    ~CreateScheduledActionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群 ID。</p>
                     * @return ClusterId <p>集群 ID。</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群 ID。</p>
                     * @param _clusterId <p>集群 ID。</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>队列名称。</p>
                     * @return QueueName <p>队列名称。</p>
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置<p>队列名称。</p>
                     * @param _queueName <p>队列名称。</p>
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取<p>定时伸缩任务名称。</p>
                     * @return ScheduledActionName <p>定时伸缩任务名称。</p>
                     * 
                     */
                    std::string GetScheduledActionName() const;

                    /**
                     * 设置<p>定时伸缩任务名称。</p>
                     * @param _scheduledActionName <p>定时伸缩任务名称。</p>
                     * 
                     */
                    void SetScheduledActionName(const std::string& _scheduledActionName);

                    /**
                     * 判断参数 ScheduledActionName 是否已赋值
                     * @return ScheduledActionName 是否已赋值
                     * 
                     */
                    bool ScheduledActionNameHasBeenSet() const;

                    /**
                     * 获取<p>定时伸缩任务生效起始时间，格式：YYYY-MM-DD HH:MM:SS。</p>
                     * @return StartTime <p>定时伸缩任务生效起始时间，格式：YYYY-MM-DD HH:MM:SS。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>定时伸缩任务生效起始时间，格式：YYYY-MM-DD HH:MM:SS。</p>
                     * @param _startTime <p>定时伸缩任务生效起始时间，格式：YYYY-MM-DD HH:MM:SS。</p>
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
                     * 获取<p>定时触发后队列期望节点数。</p>
                     * @return DesiredCapacity <p>定时触发后队列期望节点数。</p>
                     * 
                     */
                    int64_t GetDesiredCapacity() const;

                    /**
                     * 设置<p>定时触发后队列期望节点数。</p>
                     * @param _desiredCapacity <p>定时触发后队列期望节点数。</p>
                     * 
                     */
                    void SetDesiredCapacity(const int64_t& _desiredCapacity);

                    /**
                     * 判断参数 DesiredCapacity 是否已赋值
                     * @return DesiredCapacity 是否已赋值
                     * 
                     */
                    bool DesiredCapacityHasBeenSet() const;

                    /**
                     * 获取<p>定时伸缩任务生效结束时间，格式：YYYY-MM-DD HH:MM:SS。不传则永久有效。</p>
                     * @return EndTime <p>定时伸缩任务生效结束时间，格式：YYYY-MM-DD HH:MM:SS。不传则永久有效。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>定时伸缩任务生效结束时间，格式：YYYY-MM-DD HH:MM:SS。不传则永久有效。</p>
                     * @param _endTime <p>定时伸缩任务生效结束时间，格式：YYYY-MM-DD HH:MM:SS。不传则永久有效。</p>
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
                     * 获取<p>重复策略，遵循 cron 表达式格式。不传则只执行一次。</p>
                     * @return Recurrence <p>重复策略，遵循 cron 表达式格式。不传则只执行一次。</p>
                     * 
                     */
                    std::string GetRecurrence() const;

                    /**
                     * 设置<p>重复策略，遵循 cron 表达式格式。不传则只执行一次。</p>
                     * @param _recurrence <p>重复策略，遵循 cron 表达式格式。不传则只执行一次。</p>
                     * 
                     */
                    void SetRecurrence(const std::string& _recurrence);

                    /**
                     * 判断参数 Recurrence 是否已赋值
                     * @return Recurrence 是否已赋值
                     * 
                     */
                    bool RecurrenceHasBeenSet() const;

                private:

                    /**
                     * <p>集群 ID。</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>队列名称。</p>
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * <p>定时伸缩任务名称。</p>
                     */
                    std::string m_scheduledActionName;
                    bool m_scheduledActionNameHasBeenSet;

                    /**
                     * <p>定时伸缩任务生效起始时间，格式：YYYY-MM-DD HH:MM:SS。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>定时触发后队列期望节点数。</p>
                     */
                    int64_t m_desiredCapacity;
                    bool m_desiredCapacityHasBeenSet;

                    /**
                     * <p>定时伸缩任务生效结束时间，格式：YYYY-MM-DD HH:MM:SS。不传则永久有效。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>重复策略，遵循 cron 表达式格式。不传则只执行一次。</p>
                     */
                    std::string m_recurrence;
                    bool m_recurrenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_CREATESCHEDULEDACTIONREQUEST_H_
