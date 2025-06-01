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
                     * 获取解绑的快照策略ID，可以通过[DescribeAutoSnapshotPolicies](https://cloud.tencent.com/document/api/582/80208) 查询获取
                     * @return AutoSnapshotPolicyId 解绑的快照策略ID，可以通过[DescribeAutoSnapshotPolicies](https://cloud.tencent.com/document/api/582/80208) 查询获取
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置解绑的快照策略ID，可以通过[DescribeAutoSnapshotPolicies](https://cloud.tencent.com/document/api/582/80208) 查询获取
                     * @param _autoSnapshotPolicyId 解绑的快照策略ID，可以通过[DescribeAutoSnapshotPolicies](https://cloud.tencent.com/document/api/582/80208) 查询获取
                     * 
                     */
                    void SetAutoSnapshotPolicyId(const std::string& _autoSnapshotPolicyId);

                    /**
                     * 判断参数 AutoSnapshotPolicyId 是否已赋值
                     * @return AutoSnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取快照策略名称，不超过64个字符
                     * @return PolicyName 快照策略名称，不超过64个字符
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置快照策略名称，不超过64个字符
                     * @param _policyName 快照策略名称，不超过64个字符
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
                     * 获取快照定期备份，按照星期一到星期日。 1代表星期一，7代表星期日，与DayOfMonth，IntervalDays 三者选一个
                     * @return DayOfWeek 快照定期备份，按照星期一到星期日。 1代表星期一，7代表星期日，与DayOfMonth，IntervalDays 三者选一个
                     * 
                     */
                    std::string GetDayOfWeek() const;

                    /**
                     * 设置快照定期备份，按照星期一到星期日。 1代表星期一，7代表星期日，与DayOfMonth，IntervalDays 三者选一个
                     * @param _dayOfWeek 快照定期备份，按照星期一到星期日。 1代表星期一，7代表星期日，与DayOfMonth，IntervalDays 三者选一个
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
                     * 获取快照定期备份在一天的哪一小时
                     * @return Hour 快照定期备份在一天的哪一小时
                     * 
                     */
                    std::string GetHour() const;

                    /**
                     * 设置快照定期备份在一天的哪一小时
                     * @param _hour 快照定期备份在一天的哪一小时
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
                     * 获取快照保留天数
                     * @return AliveDays 快照保留天数
                     * 
                     */
                    uint64_t GetAliveDays() const;

                    /**
                     * 设置快照保留天数
                     * @param _aliveDays 快照保留天数
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
                     * 获取是否激活定期快照功能；1代表激活，0代表未激活
                     * @return IsActivated 是否激活定期快照功能；1代表激活，0代表未激活
                     * 
                     */
                    uint64_t GetIsActivated() const;

                    /**
                     * 设置是否激活定期快照功能；1代表激活，0代表未激活
                     * @param _isActivated 是否激活定期快照功能；1代表激活，0代表未激活
                     * 
                     */
                    void SetIsActivated(const uint64_t& _isActivated);

                    /**
                     * 判断参数 IsActivated 是否已赋值
                     * @return IsActivated 是否已赋值
                     * 
                     */
                    bool IsActivatedHasBeenSet() const;

                    /**
                     * 获取定期快照在每月的第几天创建快照，该参数与DayOfWeek,IntervalDays 三者选一
                     * @return DayOfMonth 定期快照在每月的第几天创建快照，该参数与DayOfWeek,IntervalDays 三者选一
                     * 
                     */
                    std::string GetDayOfMonth() const;

                    /**
                     * 设置定期快照在每月的第几天创建快照，该参数与DayOfWeek,IntervalDays 三者选一
                     * @param _dayOfMonth 定期快照在每月的第几天创建快照，该参数与DayOfWeek,IntervalDays 三者选一
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
                     * 获取间隔天数定期执行快照，该参数与DayOfWeek,DayOfMonth 三者选一
                     * @return IntervalDays 间隔天数定期执行快照，该参数与DayOfWeek,DayOfMonth 三者选一
                     * 
                     */
                    uint64_t GetIntervalDays() const;

                    /**
                     * 设置间隔天数定期执行快照，该参数与DayOfWeek,DayOfMonth 三者选一
                     * @param _intervalDays 间隔天数定期执行快照，该参数与DayOfWeek,DayOfMonth 三者选一
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
                     * 解绑的快照策略ID，可以通过[DescribeAutoSnapshotPolicies](https://cloud.tencent.com/document/api/582/80208) 查询获取
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                    /**
                     * 快照策略名称，不超过64个字符
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 快照定期备份，按照星期一到星期日。 1代表星期一，7代表星期日，与DayOfMonth，IntervalDays 三者选一个
                     */
                    std::string m_dayOfWeek;
                    bool m_dayOfWeekHasBeenSet;

                    /**
                     * 快照定期备份在一天的哪一小时
                     */
                    std::string m_hour;
                    bool m_hourHasBeenSet;

                    /**
                     * 快照保留天数
                     */
                    uint64_t m_aliveDays;
                    bool m_aliveDaysHasBeenSet;

                    /**
                     * 是否激活定期快照功能；1代表激活，0代表未激活
                     */
                    uint64_t m_isActivated;
                    bool m_isActivatedHasBeenSet;

                    /**
                     * 定期快照在每月的第几天创建快照，该参数与DayOfWeek,IntervalDays 三者选一
                     */
                    std::string m_dayOfMonth;
                    bool m_dayOfMonthHasBeenSet;

                    /**
                     * 间隔天数定期执行快照，该参数与DayOfWeek,DayOfMonth 三者选一
                     */
                    uint64_t m_intervalDays;
                    bool m_intervalDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_UPDATEAUTOSNAPSHOTPOLICYREQUEST_H_
