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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_UPDATEAUTOSNAPSHOTPOLICYREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_UPDATEAUTOSNAPSHOTPOLICYREQUEST_H_

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
                * UpdateAutoSnapshotPolicy请求参数结构体
                */
                class UpdateAutoSnapshotPolicyRequest : public AbstractModel
                {
                public:
                    UpdateAutoSnapshotPolicyRequest();
                    ~UpdateAutoSnapshotPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取快照策略ID
                     * @return AutoSnapshotPolicyId 快照策略ID
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置快照策略ID
                     * @param AutoSnapshotPolicyId 快照策略ID
                     */
                    void SetAutoSnapshotPolicyId(const std::string& _autoSnapshotPolicyId);

                    /**
                     * 判断参数 AutoSnapshotPolicyId 是否已赋值
                     * @return AutoSnapshotPolicyId 是否已赋值
                     */
                    bool AutoSnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取快照策略名称
                     * @return PolicyName 快照策略名称
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置快照策略名称
                     * @param PolicyName 快照策略名称
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取快照定期备份在一星期哪一天
                     * @return DayOfWeek 快照定期备份在一星期哪一天
                     */
                    std::string GetDayOfWeek() const;

                    /**
                     * 设置快照定期备份在一星期哪一天
                     * @param DayOfWeek 快照定期备份在一星期哪一天
                     */
                    void SetDayOfWeek(const std::string& _dayOfWeek);

                    /**
                     * 判断参数 DayOfWeek 是否已赋值
                     * @return DayOfWeek 是否已赋值
                     */
                    bool DayOfWeekHasBeenSet() const;

                    /**
                     * 获取快照定期备份在一天的哪一小时
                     * @return Hour 快照定期备份在一天的哪一小时
                     */
                    std::string GetHour() const;

                    /**
                     * 设置快照定期备份在一天的哪一小时
                     * @param Hour 快照定期备份在一天的哪一小时
                     */
                    void SetHour(const std::string& _hour);

                    /**
                     * 判断参数 Hour 是否已赋值
                     * @return Hour 是否已赋值
                     */
                    bool HourHasBeenSet() const;

                    /**
                     * 获取快照保留日期
                     * @return AliveDays 快照保留日期
                     */
                    uint64_t GetAliveDays() const;

                    /**
                     * 设置快照保留日期
                     * @param AliveDays 快照保留日期
                     */
                    void SetAliveDays(const uint64_t& _aliveDays);

                    /**
                     * 判断参数 AliveDays 是否已赋值
                     * @return AliveDays 是否已赋值
                     */
                    bool AliveDaysHasBeenSet() const;

                    /**
                     * 获取是否激活定期快照功能
                     * @return IsActivated 是否激活定期快照功能
                     */
                    uint64_t GetIsActivated() const;

                    /**
                     * 设置是否激活定期快照功能
                     * @param IsActivated 是否激活定期快照功能
                     */
                    void SetIsActivated(const uint64_t& _isActivated);

                    /**
                     * 判断参数 IsActivated 是否已赋值
                     * @return IsActivated 是否已赋值
                     */
                    bool IsActivatedHasBeenSet() const;

                    /**
                     * 获取定期快照在每月的第几天创建快照，该参数与DayOfWeek互斥
                     * @return DayOfMonth 定期快照在每月的第几天创建快照，该参数与DayOfWeek互斥
                     */
                    std::string GetDayOfMonth() const;

                    /**
                     * 设置定期快照在每月的第几天创建快照，该参数与DayOfWeek互斥
                     * @param DayOfMonth 定期快照在每月的第几天创建快照，该参数与DayOfWeek互斥
                     */
                    void SetDayOfMonth(const std::string& _dayOfMonth);

                    /**
                     * 判断参数 DayOfMonth 是否已赋值
                     * @return DayOfMonth 是否已赋值
                     */
                    bool DayOfMonthHasBeenSet() const;

                    /**
                     * 获取间隔天数定期执行快照，该参数与DayOfWeek,DayOfMonth 互斥
                     * @return IntervalDays 间隔天数定期执行快照，该参数与DayOfWeek,DayOfMonth 互斥
                     */
                    uint64_t GetIntervalDays() const;

                    /**
                     * 设置间隔天数定期执行快照，该参数与DayOfWeek,DayOfMonth 互斥
                     * @param IntervalDays 间隔天数定期执行快照，该参数与DayOfWeek,DayOfMonth 互斥
                     */
                    void SetIntervalDays(const uint64_t& _intervalDays);

                    /**
                     * 判断参数 IntervalDays 是否已赋值
                     * @return IntervalDays 是否已赋值
                     */
                    bool IntervalDaysHasBeenSet() const;

                private:

                    /**
                     * 快照策略ID
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                    /**
                     * 快照策略名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 快照定期备份在一星期哪一天
                     */
                    std::string m_dayOfWeek;
                    bool m_dayOfWeekHasBeenSet;

                    /**
                     * 快照定期备份在一天的哪一小时
                     */
                    std::string m_hour;
                    bool m_hourHasBeenSet;

                    /**
                     * 快照保留日期
                     */
                    uint64_t m_aliveDays;
                    bool m_aliveDaysHasBeenSet;

                    /**
                     * 是否激活定期快照功能
                     */
                    uint64_t m_isActivated;
                    bool m_isActivatedHasBeenSet;

                    /**
                     * 定期快照在每月的第几天创建快照，该参数与DayOfWeek互斥
                     */
                    std::string m_dayOfMonth;
                    bool m_dayOfMonthHasBeenSet;

                    /**
                     * 间隔天数定期执行快照，该参数与DayOfWeek,DayOfMonth 互斥
                     */
                    uint64_t m_intervalDays;
                    bool m_intervalDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_UPDATEAUTOSNAPSHOTPOLICYREQUEST_H_
