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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATEAUTOSNAPSHOTPOLICYREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATEAUTOSNAPSHOTPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateAutoSnapshotPolicy请求参数结构体
                */
                class CreateAutoSnapshotPolicyRequest : public AbstractModel
                {
                public:
                    CreateAutoSnapshotPolicyRequest();
                    ~CreateAutoSnapshotPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取快照重复时间点,0-23
                     * @return Hour 快照重复时间点,0-23
                     * 
                     */
                    std::string GetHour() const;

                    /**
                     * 设置快照重复时间点,0-23
                     * @param _hour 快照重复时间点,0-23
                     * 
                     */
                    void SetHour(const std::string& _hour);

                    /**
                     * 判断参数 Hour 是否已赋值
                     * @return Hour 是否已赋值
                     * 
                     */
                    bool HourHasBeenSet() const;

                    /**
                     * 获取策略名称
                     * @return PolicyName 策略名称
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名称
                     * @param _policyName 策略名称
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取快照重复日期，星期一到星期日。 1代表星期一、7代表星期天
                     * @return DayOfWeek 快照重复日期，星期一到星期日。 1代表星期一、7代表星期天
                     * 
                     */
                    std::string GetDayOfWeek() const;

                    /**
                     * 设置快照重复日期，星期一到星期日。 1代表星期一、7代表星期天
                     * @param _dayOfWeek 快照重复日期，星期一到星期日。 1代表星期一、7代表星期天
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
                     * 获取快照保留时长，单位天
                     * @return AliveDays 快照保留时长，单位天
                     * 
                     */
                    uint64_t GetAliveDays() const;

                    /**
                     * 设置快照保留时长，单位天
                     * @param _aliveDays 快照保留时长，单位天
                     * 
                     */
                    void SetAliveDays(const uint64_t& _aliveDays);

                    /**
                     * 判断参数 AliveDays 是否已赋值
                     * @return AliveDays 是否已赋值
                     * 
                     */
                    bool AliveDaysHasBeenSet() const;

                    /**
                     * 获取快照按月重复，每月1-31号，选择一天，每月将在这一天自动创建快照。
                     * @return DayOfMonth 快照按月重复，每月1-31号，选择一天，每月将在这一天自动创建快照。
                     * 
                     */
                    std::string GetDayOfMonth() const;

                    /**
                     * 设置快照按月重复，每月1-31号，选择一天，每月将在这一天自动创建快照。
                     * @param _dayOfMonth 快照按月重复，每月1-31号，选择一天，每月将在这一天自动创建快照。
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
                     * 获取间隔天数
                     * @return IntervalDays 间隔天数
                     * 
                     */
                    uint64_t GetIntervalDays() const;

                    /**
                     * 设置间隔天数
                     * @param _intervalDays 间隔天数
                     * 
                     */
                    void SetIntervalDays(const uint64_t& _intervalDays);

                    /**
                     * 判断参数 IntervalDays 是否已赋值
                     * @return IntervalDays 是否已赋值
                     * 
                     */
                    bool IntervalDaysHasBeenSet() const;

                private:

                    /**
                     * 快照重复时间点,0-23
                     */
                    std::string m_hour;
                    bool m_hourHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 快照重复日期，星期一到星期日。 1代表星期一、7代表星期天
                     */
                    std::string m_dayOfWeek;
                    bool m_dayOfWeekHasBeenSet;

                    /**
                     * 快照保留时长，单位天
                     */
                    uint64_t m_aliveDays;
                    bool m_aliveDaysHasBeenSet;

                    /**
                     * 快照按月重复，每月1-31号，选择一天，每月将在这一天自动创建快照。
                     */
                    std::string m_dayOfMonth;
                    bool m_dayOfMonthHasBeenSet;

                    /**
                     * 间隔天数
                     */
                    uint64_t m_intervalDays;
                    bool m_intervalDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATEAUTOSNAPSHOTPOLICYREQUEST_H_
