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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEEVENTREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEEVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyInstanceEvent请求参数结构体
                */
                class ModifyInstanceEventRequest : public AbstractModel
                {
                public:
                    ModifyInstanceEventRequest();
                    ~ModifyInstanceEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis#/)在实例列表复制实例 ID。
                     * @return InstanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis#/)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis#/)在实例列表复制实例 ID。
                     * @param _instanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis#/)在实例列表复制实例 ID。
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
                     * 获取事件 ID。请通过 DescribeInstanceEvents 获取需修改的事件 ID。
                     * @return EventId 事件 ID。请通过 DescribeInstanceEvents 获取需修改的事件 ID。
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置事件 ID。请通过 DescribeInstanceEvents 获取需修改的事件 ID。
                     * @param _eventId 事件 ID。请通过 DescribeInstanceEvents 获取需修改的事件 ID。
                     * 
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取修改事件执行的计划开始时间。
                     * @return StartTime 修改事件执行的计划开始时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置修改事件执行的计划开始时间。
                     * @param _startTime 修改事件执行的计划开始时间。
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
                     * 获取修改事件计划执行的结束时间。开始时间配置之后，结束时间只能选择在开始时间之后的 30 分钟、1 小时、1.5 小时、2 小时和 3 小时之内。
                     * @return EndTime 修改事件计划执行的结束时间。开始时间配置之后，结束时间只能选择在开始时间之后的 30 分钟、1 小时、1.5 小时、2 小时和 3 小时之内。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置修改事件计划执行的结束时间。开始时间配置之后，结束时间只能选择在开始时间之后的 30 分钟、1 小时、1.5 小时、2 小时和 3 小时之内。
                     * @param _endTime 修改事件计划执行的结束时间。开始时间配置之后，结束时间只能选择在开始时间之后的 30 分钟、1 小时、1.5 小时、2 小时和 3 小时之内。
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
                     * 获取修改事件执行计划的开始日期。
                     * @return ExecutionDate 修改事件执行计划的开始日期。
                     * 
                     */
                    std::string GetExecutionDate() const;

                    /**
                     * 设置修改事件执行计划的开始日期。
                     * @param _executionDate 修改事件执行计划的开始日期。
                     * 
                     */
                    void SetExecutionDate(const std::string& _executionDate);

                    /**
                     * 判断参数 ExecutionDate 是否已赋值
                     * @return ExecutionDate 是否已赋值
                     * 
                     */
                    bool ExecutionDateHasBeenSet() const;

                    /**
                     * 获取修改事件的运行状态。该参数当前仅支持设置为 **Canceled**， 即取消执行当前事件。可通过 DescribeInstanceEvents 接口查询当前事件的运行状态与事件级别。
- 事件级别为Critical（关键）或 High（重要）类事件不支持取消。即严重的事件必须执行，不可取消。
- 仅运行状态为 Waiting （待执行的事件）的事件，才能执行取消操作。
                     * @return Status 修改事件的运行状态。该参数当前仅支持设置为 **Canceled**， 即取消执行当前事件。可通过 DescribeInstanceEvents 接口查询当前事件的运行状态与事件级别。
- 事件级别为Critical（关键）或 High（重要）类事件不支持取消。即严重的事件必须执行，不可取消。
- 仅运行状态为 Waiting （待执行的事件）的事件，才能执行取消操作。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置修改事件的运行状态。该参数当前仅支持设置为 **Canceled**， 即取消执行当前事件。可通过 DescribeInstanceEvents 接口查询当前事件的运行状态与事件级别。
- 事件级别为Critical（关键）或 High（重要）类事件不支持取消。即严重的事件必须执行，不可取消。
- 仅运行状态为 Waiting （待执行的事件）的事件，才能执行取消操作。
                     * @param _status 修改事件的运行状态。该参数当前仅支持设置为 **Canceled**， 即取消执行当前事件。可通过 DescribeInstanceEvents 接口查询当前事件的运行状态与事件级别。
- 事件级别为Critical（关键）或 High（重要）类事件不支持取消。即严重的事件必须执行，不可取消。
- 仅运行状态为 Waiting （待执行的事件）的事件，才能执行取消操作。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis#/)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 事件 ID。请通过 DescribeInstanceEvents 获取需修改的事件 ID。
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 修改事件执行的计划开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 修改事件计划执行的结束时间。开始时间配置之后，结束时间只能选择在开始时间之后的 30 分钟、1 小时、1.5 小时、2 小时和 3 小时之内。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 修改事件执行计划的开始日期。
                     */
                    std::string m_executionDate;
                    bool m_executionDateHasBeenSet;

                    /**
                     * 修改事件的运行状态。该参数当前仅支持设置为 **Canceled**， 即取消执行当前事件。可通过 DescribeInstanceEvents 接口查询当前事件的运行状态与事件级别。
- 事件级别为Critical（关键）或 High（重要）类事件不支持取消。即严重的事件必须执行，不可取消。
- 仅运行状态为 Waiting （待执行的事件）的事件，才能执行取消操作。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEEVENTREQUEST_H_
