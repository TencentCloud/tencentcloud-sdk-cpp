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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_MODIFYSCHEDULEDACTIONREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_MODIFYSCHEDULEDACTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * ModifyScheduledAction请求参数结构体
                */
                class ModifyScheduledActionRequest : public AbstractModel
                {
                public:
                    ModifyScheduledActionRequest();
                    ~ModifyScheduledActionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待修改的定时任务ID。可以通过调用接口 [DescribeScheduledActions](https://cloud.tencent.com/document/api/377/20450) ，取返回信息中的 ScheduledActionId 获取定时任务ID。
                     * @return ScheduledActionId 待修改的定时任务ID。可以通过调用接口 [DescribeScheduledActions](https://cloud.tencent.com/document/api/377/20450) ，取返回信息中的 ScheduledActionId 获取定时任务ID。
                     * 
                     */
                    std::string GetScheduledActionId() const;

                    /**
                     * 设置待修改的定时任务ID。可以通过调用接口 [DescribeScheduledActions](https://cloud.tencent.com/document/api/377/20450) ，取返回信息中的 ScheduledActionId 获取定时任务ID。
                     * @param _scheduledActionId 待修改的定时任务ID。可以通过调用接口 [DescribeScheduledActions](https://cloud.tencent.com/document/api/377/20450) ，取返回信息中的 ScheduledActionId 获取定时任务ID。
                     * 
                     */
                    void SetScheduledActionId(const std::string& _scheduledActionId);

                    /**
                     * 判断参数 ScheduledActionId 是否已赋值
                     * @return ScheduledActionId 是否已赋值
                     * 
                     */
                    bool ScheduledActionIdHasBeenSet() const;

                    /**
                     * 获取定时任务名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。同一伸缩组下必须唯一。
                     * @return ScheduledActionName 定时任务名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。同一伸缩组下必须唯一。
                     * 
                     */
                    std::string GetScheduledActionName() const;

                    /**
                     * 设置定时任务名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。同一伸缩组下必须唯一。
                     * @param _scheduledActionName 定时任务名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。同一伸缩组下必须唯一。
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
                     * 获取当定时任务触发时，设置的伸缩组最大实例数。
                     * @return MaxSize 当定时任务触发时，设置的伸缩组最大实例数。
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置当定时任务触发时，设置的伸缩组最大实例数。
                     * @param _maxSize 当定时任务触发时，设置的伸缩组最大实例数。
                     * 
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取当定时任务触发时，设置的伸缩组最小实例数。
                     * @return MinSize 当定时任务触发时，设置的伸缩组最小实例数。
                     * 
                     */
                    uint64_t GetMinSize() const;

                    /**
                     * 设置当定时任务触发时，设置的伸缩组最小实例数。
                     * @param _minSize 当定时任务触发时，设置的伸缩组最小实例数。
                     * 
                     */
                    void SetMinSize(const uint64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     * 
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取当定时任务触发时，设置的伸缩组期望实例数。
                     * @return DesiredCapacity 当定时任务触发时，设置的伸缩组期望实例数。
                     * 
                     */
                    uint64_t GetDesiredCapacity() const;

                    /**
                     * 设置当定时任务触发时，设置的伸缩组期望实例数。
                     * @param _desiredCapacity 当定时任务触发时，设置的伸缩组期望实例数。
                     * 
                     */
                    void SetDesiredCapacity(const uint64_t& _desiredCapacity);

                    /**
                     * 判断参数 DesiredCapacity 是否已赋值
                     * @return DesiredCapacity 是否已赋值
                     * 
                     */
                    bool DesiredCapacityHasBeenSet() const;

                    /**
                     * 获取定时任务的首次触发时间，取值为`北京时间`（UTC+8），按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ss+08:00`。
                     * @return StartTime 定时任务的首次触发时间，取值为`北京时间`（UTC+8），按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ss+08:00`。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置定时任务的首次触发时间，取值为`北京时间`（UTC+8），按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ss+08:00`。
                     * @param _startTime 定时任务的首次触发时间，取值为`北京时间`（UTC+8），按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ss+08:00`。
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
                     * 获取定时任务的结束时间，取值为`北京时间`（UTC+8），按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ss+08:00`。<br>此参数与`Recurrence`需要同时指定，到达结束时间之后，定时任务将不再生效。
                     * @return EndTime 定时任务的结束时间，取值为`北京时间`（UTC+8），按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ss+08:00`。<br>此参数与`Recurrence`需要同时指定，到达结束时间之后，定时任务将不再生效。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置定时任务的结束时间，取值为`北京时间`（UTC+8），按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ss+08:00`。<br>此参数与`Recurrence`需要同时指定，到达结束时间之后，定时任务将不再生效。
                     * @param _endTime 定时任务的结束时间，取值为`北京时间`（UTC+8），按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ss+08:00`。<br>此参数与`Recurrence`需要同时指定，到达结束时间之后，定时任务将不再生效。
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
                     * 获取定时任务的重复方式。为标准 Cron 格式，[Recurrence参数限制](https://cloud.tencent.com/document/product/377/88119)为5个字段，由空格分开，结构为：分，小时，日期，月份，星期。此参数与`EndTime`需要同时指定。
                     * @return Recurrence 定时任务的重复方式。为标准 Cron 格式，[Recurrence参数限制](https://cloud.tencent.com/document/product/377/88119)为5个字段，由空格分开，结构为：分，小时，日期，月份，星期。此参数与`EndTime`需要同时指定。
                     * 
                     */
                    std::string GetRecurrence() const;

                    /**
                     * 设置定时任务的重复方式。为标准 Cron 格式，[Recurrence参数限制](https://cloud.tencent.com/document/product/377/88119)为5个字段，由空格分开，结构为：分，小时，日期，月份，星期。此参数与`EndTime`需要同时指定。
                     * @param _recurrence 定时任务的重复方式。为标准 Cron 格式，[Recurrence参数限制](https://cloud.tencent.com/document/product/377/88119)为5个字段，由空格分开，结构为：分，小时，日期，月份，星期。此参数与`EndTime`需要同时指定。
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
                     * 待修改的定时任务ID。可以通过调用接口 [DescribeScheduledActions](https://cloud.tencent.com/document/api/377/20450) ，取返回信息中的 ScheduledActionId 获取定时任务ID。
                     */
                    std::string m_scheduledActionId;
                    bool m_scheduledActionIdHasBeenSet;

                    /**
                     * 定时任务名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。同一伸缩组下必须唯一。
                     */
                    std::string m_scheduledActionName;
                    bool m_scheduledActionNameHasBeenSet;

                    /**
                     * 当定时任务触发时，设置的伸缩组最大实例数。
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * 当定时任务触发时，设置的伸缩组最小实例数。
                     */
                    uint64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * 当定时任务触发时，设置的伸缩组期望实例数。
                     */
                    uint64_t m_desiredCapacity;
                    bool m_desiredCapacityHasBeenSet;

                    /**
                     * 定时任务的首次触发时间，取值为`北京时间`（UTC+8），按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ss+08:00`。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 定时任务的结束时间，取值为`北京时间`（UTC+8），按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ss+08:00`。<br>此参数与`Recurrence`需要同时指定，到达结束时间之后，定时任务将不再生效。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 定时任务的重复方式。为标准 Cron 格式，[Recurrence参数限制](https://cloud.tencent.com/document/product/377/88119)为5个字段，由空格分开，结构为：分，小时，日期，月份，星期。此参数与`EndTime`需要同时指定。
                     */
                    std::string m_recurrence;
                    bool m_recurrenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_MODIFYSCHEDULEDACTIONREQUEST_H_
