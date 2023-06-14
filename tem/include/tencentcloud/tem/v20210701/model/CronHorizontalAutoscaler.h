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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_CRONHORIZONTALAUTOSCALER_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_CRONHORIZONTALAUTOSCALER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/CronHorizontalAutoscalerSchedule.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 定时伸缩策略
                */
                class CronHorizontalAutoscaler : public AbstractModel
                {
                public:
                    CronHorizontalAutoscaler();
                    ~CronHorizontalAutoscaler() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取定时伸缩策略名称
                     * @return Name 定时伸缩策略名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置定时伸缩策略名称
                     * @param _name 定时伸缩策略名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取策略周期
* * *，三个范围，第一个是天，第二个是月，第三个是周，中间用空格隔开
例子：
* * * （每天）
* * 0-3 （每周日到周三）
1,11,21 * *（每个月1号，11号，21号）
                     * @return Period 策略周期
* * *，三个范围，第一个是天，第二个是月，第三个是周，中间用空格隔开
例子：
* * * （每天）
* * 0-3 （每周日到周三）
1,11,21 * *（每个月1号，11号，21号）
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置策略周期
* * *，三个范围，第一个是天，第二个是月，第三个是周，中间用空格隔开
例子：
* * * （每天）
* * 0-3 （每周日到周三）
1,11,21 * *（每个月1号，11号，21号）
                     * @param _period 策略周期
* * *，三个范围，第一个是天，第二个是月，第三个是周，中间用空格隔开
例子：
* * * （每天）
* * 0-3 （每周日到周三）
1,11,21 * *（每个月1号，11号，21号）
                     * 
                     */
                    void SetPeriod(const std::string& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取定时伸缩策略明细
                     * @return Schedules 定时伸缩策略明细
                     * 
                     */
                    std::vector<CronHorizontalAutoscalerSchedule> GetSchedules() const;

                    /**
                     * 设置定时伸缩策略明细
                     * @param _schedules 定时伸缩策略明细
                     * 
                     */
                    void SetSchedules(const std::vector<CronHorizontalAutoscalerSchedule>& _schedules);

                    /**
                     * 判断参数 Schedules 是否已赋值
                     * @return Schedules 是否已赋值
                     * 
                     */
                    bool SchedulesHasBeenSet() const;

                    /**
                     * 获取是否启用
                     * @return Enabled 是否启用
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否启用
                     * @param _enabled 是否启用
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取策略优先级，值越大优先级越高，0为最小值
                     * @return Priority 策略优先级，值越大优先级越高，0为最小值
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置策略优先级，值越大优先级越高，0为最小值
                     * @param _priority 策略优先级，值越大优先级越高，0为最小值
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * 定时伸缩策略名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 策略周期
* * *，三个范围，第一个是天，第二个是月，第三个是周，中间用空格隔开
例子：
* * * （每天）
* * 0-3 （每周日到周三）
1,11,21 * *（每个月1号，11号，21号）
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 定时伸缩策略明细
                     */
                    std::vector<CronHorizontalAutoscalerSchedule> m_schedules;
                    bool m_schedulesHasBeenSet;

                    /**
                     * 是否启用
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 策略优先级，值越大优先级越高，0为最小值
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_CRONHORIZONTALAUTOSCALER_H_
