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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICESCALEOUTINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICESCALEOUTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * InquiryPriceScaleOutInstance请求参数结构体
                */
                class InquiryPriceScaleOutInstanceRequest : public AbstractModel
                {
                public:
                    InquiryPriceScaleOutInstanceRequest();
                    ~InquiryPriceScaleOutInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取时间单位。s:按量用例单位。m:包年包月用例单位
                     * @return TimeUnit 时间单位。s:按量用例单位。m:包年包月用例单位
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置时间单位。s:按量用例单位。m:包年包月用例单位
                     * @param TimeUnit 时间单位。s:按量用例单位。m:包年包月用例单位
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取时间长度。按量用例长度为3600。
                     * @return TimeSpan 时间长度。按量用例长度为3600。
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置时间长度。按量用例长度为3600。
                     * @param TimeSpan 时间长度。按量用例长度为3600。
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Zone ID
                     * @return ZoneId Zone ID
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置Zone ID
                     * @param ZoneId Zone ID
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取计费类型
                     * @return PayMode 计费类型
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置计费类型
                     * @param PayMode 计费类型
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取扩容Core节点个数
                     * @return CoreCount 扩容Core节点个数
                     */
                    uint64_t GetCoreCount() const;

                    /**
                     * 设置扩容Core节点个数
                     * @param CoreCount 扩容Core节点个数
                     */
                    void SetCoreCount(const uint64_t& _coreCount);

                    /**
                     * 判断参数 CoreCount 是否已赋值
                     * @return CoreCount 是否已赋值
                     */
                    bool CoreCountHasBeenSet() const;

                    /**
                     * 获取扩容Task节点个数
                     * @return TaskCount 扩容Task节点个数
                     */
                    uint64_t GetTaskCount() const;

                    /**
                     * 设置扩容Task节点个数
                     * @param TaskCount 扩容Task节点个数
                     */
                    void SetTaskCount(const uint64_t& _taskCount);

                    /**
                     * 判断参数 TaskCount 是否已赋值
                     * @return TaskCount 是否已赋值
                     */
                    bool TaskCountHasBeenSet() const;

                    /**
                     * 获取货币种类
                     * @return Currency 货币种类
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置货币种类
                     * @param Currency 货币种类
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     */
                    bool CurrencyHasBeenSet() const;

                private:

                    /**
                     * 时间单位。s:按量用例单位。m:包年包月用例单位
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 时间长度。按量用例长度为3600。
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Zone ID
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 计费类型
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 扩容Core节点个数
                     */
                    uint64_t m_coreCount;
                    bool m_coreCountHasBeenSet;

                    /**
                     * 扩容Task节点个数
                     */
                    uint64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * 货币种类
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICESCALEOUTINSTANCEREQUEST_H_
