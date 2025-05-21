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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_INSTANCECHARGEPREPAID_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_INSTANCECHARGEPREPAID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * 实例预付费入参
                */
                class InstanceChargePrepaid : public AbstractModel
                {
                public:
                    InstanceChargePrepaid();
                    ~InstanceChargePrepaid() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时长，默认值：1
                     * @return Period 时长，默认值：1
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置时长，默认值：1
                     * @param _period 时长，默认值：1
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取续费标志可选参数：
NOTIFY_AND_MANUAL_RENEW：表示默认状态(用户未设置，即初始状态：若用户有预付费不停服特权，也会对该值进行自动续费)
NOTIFY_AND_AUTO_RENEW：表示自动续费
DISABLE_NOTIFY_AND_MANUAL_RENEW：表示明确不自动续费(用户设置)
默认值：NOTIFY_AND_MANUAL_RENEW

                     * @return RenewFlag 续费标志可选参数：
NOTIFY_AND_MANUAL_RENEW：表示默认状态(用户未设置，即初始状态：若用户有预付费不停服特权，也会对该值进行自动续费)
NOTIFY_AND_AUTO_RENEW：表示自动续费
DISABLE_NOTIFY_AND_MANUAL_RENEW：表示明确不自动续费(用户设置)
默认值：NOTIFY_AND_MANUAL_RENEW

                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置续费标志可选参数：
NOTIFY_AND_MANUAL_RENEW：表示默认状态(用户未设置，即初始状态：若用户有预付费不停服特权，也会对该值进行自动续费)
NOTIFY_AND_AUTO_RENEW：表示自动续费
DISABLE_NOTIFY_AND_MANUAL_RENEW：表示明确不自动续费(用户设置)
默认值：NOTIFY_AND_MANUAL_RENEW

                     * @param _renewFlag 续费标志可选参数：
NOTIFY_AND_MANUAL_RENEW：表示默认状态(用户未设置，即初始状态：若用户有预付费不停服特权，也会对该值进行自动续费)
NOTIFY_AND_AUTO_RENEW：表示自动续费
DISABLE_NOTIFY_AND_MANUAL_RENEW：表示明确不自动续费(用户设置)
默认值：NOTIFY_AND_MANUAL_RENEW

                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取时长单位，枚举： MONTH, DAY, HOUR；释义：月，日，小时
                     * @return TimeUnit 时长单位，枚举： MONTH, DAY, HOUR；释义：月，日，小时
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置时长单位，枚举： MONTH, DAY, HOUR；释义：月，日，小时
                     * @param _timeUnit 时长单位，枚举： MONTH, DAY, HOUR；释义：月，日，小时
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                private:

                    /**
                     * 时长，默认值：1
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 续费标志可选参数：
NOTIFY_AND_MANUAL_RENEW：表示默认状态(用户未设置，即初始状态：若用户有预付费不停服特权，也会对该值进行自动续费)
NOTIFY_AND_AUTO_RENEW：表示自动续费
DISABLE_NOTIFY_AND_MANUAL_RENEW：表示明确不自动续费(用户设置)
默认值：NOTIFY_AND_MANUAL_RENEW

                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 时长单位，枚举： MONTH, DAY, HOUR；释义：月，日，小时
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_INSTANCECHARGEPREPAID_H_
