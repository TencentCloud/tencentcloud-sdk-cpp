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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SCHEDULEELASTICITYCONF_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SCHEDULEELASTICITYCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/ElasticPlan.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 引擎资源弹性伸缩策略
                */
                class ScheduleElasticityConf : public AbstractModel
                {
                public:
                    ScheduleElasticityConf();
                    ~ScheduleElasticityConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启弹性伸缩：true/false
                     * @return ScheduledElasticityEnabled 是否开启弹性伸缩：true/false
                     * 
                     */
                    bool GetScheduledElasticityEnabled() const;

                    /**
                     * 设置是否开启弹性伸缩：true/false
                     * @param _scheduledElasticityEnabled 是否开启弹性伸缩：true/false
                     * 
                     */
                    void SetScheduledElasticityEnabled(const bool& _scheduledElasticityEnabled);

                    /**
                     * 判断参数 ScheduledElasticityEnabled 是否已赋值
                     * @return ScheduledElasticityEnabled 是否已赋值
                     * 
                     */
                    bool ScheduledElasticityEnabledHasBeenSet() const;

                    /**
                     * 获取调度类型：ONCE（一次性调度），DAILY（每日调度），WEEKLY（每周调度），MONTHLY（每月调度）
                     * @return ScheduleType 调度类型：ONCE（一次性调度），DAILY（每日调度），WEEKLY（每周调度），MONTHLY（每月调度）
                     * 
                     */
                    std::string GetScheduleType() const;

                    /**
                     * 设置调度类型：ONCE（一次性调度），DAILY（每日调度），WEEKLY（每周调度），MONTHLY（每月调度）
                     * @param _scheduleType 调度类型：ONCE（一次性调度），DAILY（每日调度），WEEKLY（每周调度），MONTHLY（每月调度）
                     * 
                     */
                    void SetScheduleType(const std::string& _scheduleType);

                    /**
                     * 判断参数 ScheduleType 是否已赋值
                     * @return ScheduleType 是否已赋值
                     * 
                     */
                    bool ScheduleTypeHasBeenSet() const;

                    /**
                     * 获取调度日期：WEEKLY传：1~7； MONTHLY传:1~31；其它类型不传
                     * @return ScheduleDays 调度日期：WEEKLY传：1~7； MONTHLY传:1~31；其它类型不传
                     * 
                     */
                    std::vector<int64_t> GetScheduleDays() const;

                    /**
                     * 设置调度日期：WEEKLY传：1~7； MONTHLY传:1~31；其它类型不传
                     * @param _scheduleDays 调度日期：WEEKLY传：1~7； MONTHLY传:1~31；其它类型不传
                     * 
                     */
                    void SetScheduleDays(const std::vector<int64_t>& _scheduleDays);

                    /**
                     * 判断参数 ScheduleDays 是否已赋值
                     * @return ScheduleDays 是否已赋值
                     * 
                     */
                    bool ScheduleDaysHasBeenSet() const;

                    /**
                     * 获取调度时区
                     * @return TimeZone 调度时区
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置调度时区
                     * @param _timeZone 调度时区
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取弹性伸缩计划
                     * @return ElasticPlans 弹性伸缩计划
                     * 
                     */
                    std::vector<ElasticPlan> GetElasticPlans() const;

                    /**
                     * 设置弹性伸缩计划
                     * @param _elasticPlans 弹性伸缩计划
                     * 
                     */
                    void SetElasticPlans(const std::vector<ElasticPlan>& _elasticPlans);

                    /**
                     * 判断参数 ElasticPlans 是否已赋值
                     * @return ElasticPlans 是否已赋值
                     * 
                     */
                    bool ElasticPlansHasBeenSet() const;

                private:

                    /**
                     * 是否开启弹性伸缩：true/false
                     */
                    bool m_scheduledElasticityEnabled;
                    bool m_scheduledElasticityEnabledHasBeenSet;

                    /**
                     * 调度类型：ONCE（一次性调度），DAILY（每日调度），WEEKLY（每周调度），MONTHLY（每月调度）
                     */
                    std::string m_scheduleType;
                    bool m_scheduleTypeHasBeenSet;

                    /**
                     * 调度日期：WEEKLY传：1~7； MONTHLY传:1~31；其它类型不传
                     */
                    std::vector<int64_t> m_scheduleDays;
                    bool m_scheduleDaysHasBeenSet;

                    /**
                     * 调度时区
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * 弹性伸缩计划
                     */
                    std::vector<ElasticPlan> m_elasticPlans;
                    bool m_elasticPlansHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SCHEDULEELASTICITYCONF_H_
