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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_TIMERSCHEDULECONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_TIMERSCHEDULECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/CronSchedule.h>
#include <tencentcloud/adp/v20260520/model/DailySchedule.h>
#include <tencentcloud/adp/v20260520/model/IntervalSchedule.h>
#include <tencentcloud/adp/v20260520/model/ManualOnlySchedule.h>
#include <tencentcloud/adp/v20260520/model/OnceSchedule.h>
#include <tencentcloud/adp/v20260520/model/WeeklySchedule.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * TimerScheduleConfig
                */
                class TimerScheduleConfig : public AbstractModel
                {
                public:
                    TimerScheduleConfig();
                    ~TimerScheduleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cron配置
                     * @return Cron cron配置
                     * 
                     */
                    CronSchedule GetCron() const;

                    /**
                     * 设置cron配置
                     * @param _cron cron配置
                     * 
                     */
                    void SetCron(const CronSchedule& _cron);

                    /**
                     * 判断参数 Cron 是否已赋值
                     * @return Cron 是否已赋值
                     * 
                     */
                    bool CronHasBeenSet() const;

                    /**
                     * 获取每日触发
                     * @return Daily 每日触发
                     * 
                     */
                    DailySchedule GetDaily() const;

                    /**
                     * 设置每日触发
                     * @param _daily 每日触发
                     * 
                     */
                    void SetDaily(const DailySchedule& _daily);

                    /**
                     * 判断参数 Daily 是否已赋值
                     * @return Daily 是否已赋值
                     * 
                     */
                    bool DailyHasBeenSet() const;

                    /**
                     * 获取固定间隔
                     * @return Interval 固定间隔
                     * 
                     */
                    IntervalSchedule GetInterval() const;

                    /**
                     * 设置固定间隔
                     * @param _interval 固定间隔
                     * 
                     */
                    void SetInterval(const IntervalSchedule& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取仅手动
                     * @return ManualOnly 仅手动
                     * 
                     */
                    ManualOnlySchedule GetManualOnly() const;

                    /**
                     * 设置仅手动
                     * @param _manualOnly 仅手动
                     * 
                     */
                    void SetManualOnly(const ManualOnlySchedule& _manualOnly);

                    /**
                     * 判断参数 ManualOnly 是否已赋值
                     * @return ManualOnly 是否已赋值
                     * 
                     */
                    bool ManualOnlyHasBeenSet() const;

                    /**
                     * 获取单次
                     * @return Once 单次
                     * 
                     */
                    OnceSchedule GetOnce() const;

                    /**
                     * 设置单次
                     * @param _once 单次
                     * 
                     */
                    void SetOnce(const OnceSchedule& _once);

                    /**
                     * 判断参数 Once 是否已赋值
                     * @return Once 是否已赋值
                     * 
                     */
                    bool OnceHasBeenSet() const;

                    /**
                     * 获取
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 仅手动 |
| 2 | 每天 |
| 3 | 每周 |
| 4 | 按间隔 |
| 5 | 一次性 |
| 6 | Cron |
                     * @return ScheduleType 
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 仅手动 |
| 2 | 每天 |
| 3 | 每周 |
| 4 | 按间隔 |
| 5 | 一次性 |
| 6 | Cron |
                     * 
                     */
                    int64_t GetScheduleType() const;

                    /**
                     * 设置
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 仅手动 |
| 2 | 每天 |
| 3 | 每周 |
| 4 | 按间隔 |
| 5 | 一次性 |
| 6 | Cron |
                     * @param _scheduleType 
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 仅手动 |
| 2 | 每天 |
| 3 | 每周 |
| 4 | 按间隔 |
| 5 | 一次性 |
| 6 | Cron |
                     * 
                     */
                    void SetScheduleType(const int64_t& _scheduleType);

                    /**
                     * 判断参数 ScheduleType 是否已赋值
                     * @return ScheduleType 是否已赋值
                     * 
                     */
                    bool ScheduleTypeHasBeenSet() const;

                    /**
                     * 获取时区
                     * @return Timezone 时区
                     * 
                     */
                    std::string GetTimezone() const;

                    /**
                     * 设置时区
                     * @param _timezone 时区
                     * 
                     */
                    void SetTimezone(const std::string& _timezone);

                    /**
                     * 判断参数 Timezone 是否已赋值
                     * @return Timezone 是否已赋值
                     * 
                     */
                    bool TimezoneHasBeenSet() const;

                    /**
                     * 获取每周固定时间触发
                     * @return Weekly 每周固定时间触发
                     * 
                     */
                    WeeklySchedule GetWeekly() const;

                    /**
                     * 设置每周固定时间触发
                     * @param _weekly 每周固定时间触发
                     * 
                     */
                    void SetWeekly(const WeeklySchedule& _weekly);

                    /**
                     * 判断参数 Weekly 是否已赋值
                     * @return Weekly 是否已赋值
                     * 
                     */
                    bool WeeklyHasBeenSet() const;

                private:

                    /**
                     * cron配置
                     */
                    CronSchedule m_cron;
                    bool m_cronHasBeenSet;

                    /**
                     * 每日触发
                     */
                    DailySchedule m_daily;
                    bool m_dailyHasBeenSet;

                    /**
                     * 固定间隔
                     */
                    IntervalSchedule m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 仅手动
                     */
                    ManualOnlySchedule m_manualOnly;
                    bool m_manualOnlyHasBeenSet;

                    /**
                     * 单次
                     */
                    OnceSchedule m_once;
                    bool m_onceHasBeenSet;

                    /**
                     * 
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 仅手动 |
| 2 | 每天 |
| 3 | 每周 |
| 4 | 按间隔 |
| 5 | 一次性 |
| 6 | Cron |
                     */
                    int64_t m_scheduleType;
                    bool m_scheduleTypeHasBeenSet;

                    /**
                     * 时区
                     */
                    std::string m_timezone;
                    bool m_timezoneHasBeenSet;

                    /**
                     * 每周固定时间触发
                     */
                    WeeklySchedule m_weekly;
                    bool m_weeklyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_TIMERSCHEDULECONFIG_H_
