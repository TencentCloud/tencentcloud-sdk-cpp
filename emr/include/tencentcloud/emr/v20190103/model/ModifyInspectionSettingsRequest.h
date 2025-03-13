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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYINSPECTIONSETTINGSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYINSPECTIONSETTINGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/InspectionTaskSettings.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyInspectionSettings请求参数结构体
                */
                class ModifyInspectionSettingsRequest : public AbstractModel
                {
                public:
                    ModifyInspectionSettingsRequest();
                    ~ModifyInspectionSettingsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取巡检类型，FixedTime/RealTime
                     * @return Type 巡检类型，FixedTime/RealTime
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置巡检类型，FixedTime/RealTime
                     * @param _type 巡检类型，FixedTime/RealTime
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取任务配置
                     * @return Settings 任务配置
                     * 
                     */
                    std::vector<InspectionTaskSettings> GetSettings() const;

                    /**
                     * 设置任务配置
                     * @param _settings 任务配置
                     * 
                     */
                    void SetSettings(const std::vector<InspectionTaskSettings>& _settings);

                    /**
                     * 判断参数 Settings 是否已赋值
                     * @return Settings 是否已赋值
                     * 
                     */
                    bool SettingsHasBeenSet() const;

                    /**
                     * 获取开始时间戳
                     * @return StartTime 开始时间戳
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间戳
                     * @param _startTime 开始时间戳
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间戳
                     * @return EndTime 结束时间戳
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间戳
                     * @param _endTime 结束时间戳
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取巡检周期，eg EveryDay EveryWeek EveryMonth
                     * @return Strategy 巡检周期，eg EveryDay EveryWeek EveryMonth
                     * 
                     */
                    std::string GetStrategy() const;

                    /**
                     * 设置巡检周期，eg EveryDay EveryWeek EveryMonth
                     * @param _strategy 巡检周期，eg EveryDay EveryWeek EveryMonth
                     * 
                     */
                    void SetStrategy(const std::string& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取每天的开始的时间
                     * @return Clock 每天的开始的时间
                     * 
                     */
                    std::string GetClock() const;

                    /**
                     * 设置每天的开始的时间
                     * @param _clock 每天的开始的时间
                     * 
                     */
                    void SetClock(const std::string& _clock);

                    /**
                     * 判断参数 Clock 是否已赋值
                     * @return Clock 是否已赋值
                     * 
                     */
                    bool ClockHasBeenSet() const;

                    /**
                     * 获取每周的周几
                     * @return DayOfWeek 每周的周几
                     * 
                     */
                    std::string GetDayOfWeek() const;

                    /**
                     * 设置每周的周几
                     * @param _dayOfWeek 每周的周几
                     * 
                     */
                    void SetDayOfWeek(const std::string& _dayOfWeek);

                    /**
                     * 判断参数 DayOfWeek 是否已赋值
                     * @return DayOfWeek 是否已赋值
                     * 
                     */
                    bool DayOfWeekHasBeenSet() const;

                    /**
                     * 获取每月的第几号
                     * @return DayOfMonth 每月的第几号
                     * 
                     */
                    std::string GetDayOfMonth() const;

                    /**
                     * 设置每月的第几号
                     * @param _dayOfMonth 每月的第几号
                     * 
                     */
                    void SetDayOfMonth(const std::string& _dayOfMonth);

                    /**
                     * 判断参数 DayOfMonth 是否已赋值
                     * @return DayOfMonth 是否已赋值
                     * 
                     */
                    bool DayOfMonthHasBeenSet() const;

                    /**
                     * 获取巡检作业Id
                     * @return JobId 巡检作业Id
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置巡检作业Id
                     * @param _jobId 巡检作业Id
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 巡检类型，FixedTime/RealTime
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 任务配置
                     */
                    std::vector<InspectionTaskSettings> m_settings;
                    bool m_settingsHasBeenSet;

                    /**
                     * 开始时间戳
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间戳
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 巡检周期，eg EveryDay EveryWeek EveryMonth
                     */
                    std::string m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * 每天的开始的时间
                     */
                    std::string m_clock;
                    bool m_clockHasBeenSet;

                    /**
                     * 每周的周几
                     */
                    std::string m_dayOfWeek;
                    bool m_dayOfWeekHasBeenSet;

                    /**
                     * 每月的第几号
                     */
                    std::string m_dayOfMonth;
                    bool m_dayOfMonthHasBeenSet;

                    /**
                     * 巡检作业Id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYINSPECTIONSETTINGSREQUEST_H_
