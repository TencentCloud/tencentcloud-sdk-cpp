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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_SCHEDULEDACTION_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_SCHEDULEDACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 描述定时任务的信息
                */
                class ScheduledAction : public AbstractModel
                {
                public:
                    ScheduledAction();
                    ~ScheduledAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取定时任务ID。
                     * @return ScheduledActionId 定时任务ID。
                     * 
                     */
                    std::string GetScheduledActionId() const;

                    /**
                     * 设置定时任务ID。
                     * @param _scheduledActionId 定时任务ID。
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
                     * 获取定时任务名称。
                     * @return ScheduledActionName 定时任务名称。
                     * 
                     */
                    std::string GetScheduledActionName() const;

                    /**
                     * 设置定时任务名称。
                     * @param _scheduledActionName 定时任务名称。
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
                     * 获取定时任务所在伸缩组ID。
                     * @return AutoScalingGroupId 定时任务所在伸缩组ID。
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置定时任务所在伸缩组ID。
                     * @param _autoScalingGroupId 定时任务所在伸缩组ID。
                     * 
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取定时任务的开始时间。取值为`北京时间`（UTC+8），按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ss+08:00`。
                     * @return StartTime 定时任务的开始时间。取值为`北京时间`（UTC+8），按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ss+08:00`。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置定时任务的开始时间。取值为`北京时间`（UTC+8），按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ss+08:00`。
                     * @param _startTime 定时任务的开始时间。取值为`北京时间`（UTC+8），按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ss+08:00`。
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
                     * 获取定时任务的重复方式。定时任务中的[Recurrence参数限制](https://cloud.tencent.com/document/product/377/88119)为5个字段，由空格分开，结构为：分，小时，日期，月份，星期。
                     * @return Recurrence 定时任务的重复方式。定时任务中的[Recurrence参数限制](https://cloud.tencent.com/document/product/377/88119)为5个字段，由空格分开，结构为：分，小时，日期，月份，星期。
                     * 
                     */
                    std::string GetRecurrence() const;

                    /**
                     * 设置定时任务的重复方式。定时任务中的[Recurrence参数限制](https://cloud.tencent.com/document/product/377/88119)为5个字段，由空格分开，结构为：分，小时，日期，月份，星期。
                     * @param _recurrence 定时任务的重复方式。定时任务中的[Recurrence参数限制](https://cloud.tencent.com/document/product/377/88119)为5个字段，由空格分开，结构为：分，小时，日期，月份，星期。
                     * 
                     */
                    void SetRecurrence(const std::string& _recurrence);

                    /**
                     * 判断参数 Recurrence 是否已赋值
                     * @return Recurrence 是否已赋值
                     * 
                     */
                    bool RecurrenceHasBeenSet() const;

                    /**
                     * 获取定时任务的结束时间。取值为`北京时间`（UTC+8），按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ss+08:00`。
                     * @return EndTime 定时任务的结束时间。取值为`北京时间`（UTC+8），按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ss+08:00`。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置定时任务的结束时间。取值为`北京时间`（UTC+8），按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ss+08:00`。
                     * @param _endTime 定时任务的结束时间。取值为`北京时间`（UTC+8），按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ss+08:00`。
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
                     * 获取定时任务设置的最大实例数。
                     * @return MaxSize 定时任务设置的最大实例数。
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置定时任务设置的最大实例数。
                     * @param _maxSize 定时任务设置的最大实例数。
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
                     * 获取定时任务设置的期望实例数。
                     * @return DesiredCapacity 定时任务设置的期望实例数。
                     * 
                     */
                    uint64_t GetDesiredCapacity() const;

                    /**
                     * 设置定时任务设置的期望实例数。
                     * @param _desiredCapacity 定时任务设置的期望实例数。
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
                     * 获取定时任务设置的最小实例数。
                     * @return MinSize 定时任务设置的最小实例数。
                     * 
                     */
                    uint64_t GetMinSize() const;

                    /**
                     * 设置定时任务设置的最小实例数。
                     * @param _minSize 定时任务设置的最小实例数。
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
                     * 获取定时任务的创建时间。取值为标准`UTC`时间，按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ssZ`。
                     * @return CreatedTime 定时任务的创建时间。取值为标准`UTC`时间，按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ssZ`。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置定时任务的创建时间。取值为标准`UTC`时间，按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ssZ`。
                     * @param _createdTime 定时任务的创建时间。取值为标准`UTC`时间，按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ssZ`。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取定时任务的执行类型。取值范围：
<li>CRONTAB：代表定时任务为重复执行。</li>
<li>ONCE：代表定时任务为单次执行。</li>
                     * @return ScheduledType 定时任务的执行类型。取值范围：
<li>CRONTAB：代表定时任务为重复执行。</li>
<li>ONCE：代表定时任务为单次执行。</li>
                     * 
                     */
                    std::string GetScheduledType() const;

                    /**
                     * 设置定时任务的执行类型。取值范围：
<li>CRONTAB：代表定时任务为重复执行。</li>
<li>ONCE：代表定时任务为单次执行。</li>
                     * @param _scheduledType 定时任务的执行类型。取值范围：
<li>CRONTAB：代表定时任务为重复执行。</li>
<li>ONCE：代表定时任务为单次执行。</li>
                     * 
                     */
                    void SetScheduledType(const std::string& _scheduledType);

                    /**
                     * 判断参数 ScheduledType 是否已赋值
                     * @return ScheduledType 是否已赋值
                     * 
                     */
                    bool ScheduledTypeHasBeenSet() const;

                private:

                    /**
                     * 定时任务ID。
                     */
                    std::string m_scheduledActionId;
                    bool m_scheduledActionIdHasBeenSet;

                    /**
                     * 定时任务名称。
                     */
                    std::string m_scheduledActionName;
                    bool m_scheduledActionNameHasBeenSet;

                    /**
                     * 定时任务所在伸缩组ID。
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * 定时任务的开始时间。取值为`北京时间`（UTC+8），按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ss+08:00`。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 定时任务的重复方式。定时任务中的[Recurrence参数限制](https://cloud.tencent.com/document/product/377/88119)为5个字段，由空格分开，结构为：分，小时，日期，月份，星期。
                     */
                    std::string m_recurrence;
                    bool m_recurrenceHasBeenSet;

                    /**
                     * 定时任务的结束时间。取值为`北京时间`（UTC+8），按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ss+08:00`。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 定时任务设置的最大实例数。
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * 定时任务设置的期望实例数。
                     */
                    uint64_t m_desiredCapacity;
                    bool m_desiredCapacityHasBeenSet;

                    /**
                     * 定时任务设置的最小实例数。
                     */
                    uint64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * 定时任务的创建时间。取值为标准`UTC`时间，按照`ISO8601`标准，格式：`YYYY-MM-DDThh:mm:ssZ`。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 定时任务的执行类型。取值范围：
<li>CRONTAB：代表定时任务为重复执行。</li>
<li>ONCE：代表定时任务为单次执行。</li>
                     */
                    std::string m_scheduledType;
                    bool m_scheduledTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_SCHEDULEDACTION_H_
