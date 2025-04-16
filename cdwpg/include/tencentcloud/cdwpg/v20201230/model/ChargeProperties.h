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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_CHARGEPROPERTIES_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_CHARGEPROPERTIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * 计费时间参数
                */
                class ChargeProperties : public AbstractModel
                {
                public:
                    ChargeProperties();
                    ~ChargeProperties() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取1-需要自动续期
                     * @return RenewFlag 1-需要自动续期
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置1-需要自动续期
                     * @param _renewFlag 1-需要自动续期
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取订单时间范围
                     * @return TimeSpan 订单时间范围
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置订单时间范围
                     * @param _timeSpan 订单时间范围
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取时间单位，一般为h和m
                     * @return TimeUnit 时间单位，一般为h和m
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置时间单位，一般为h和m
                     * @param _timeUnit 时间单位，一般为h和m
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取计费类型0-按量计费，1-包年包月
                     * @return PayMode 计费类型0-按量计费，1-包年包月
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置计费类型0-按量计费，1-包年包月
                     * @param _payMode 计费类型0-按量计费，1-包年包月
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取PREPAID、POSTPAID_BY_HOUR
                     * @return ChargeType PREPAID、POSTPAID_BY_HOUR
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置PREPAID、POSTPAID_BY_HOUR
                     * @param _chargeType PREPAID、POSTPAID_BY_HOUR
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                private:

                    /**
                     * 1-需要自动续期
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 订单时间范围
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 时间单位，一般为h和m
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 计费类型0-按量计费，1-包年包月
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * PREPAID、POSTPAID_BY_HOUR
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_CHARGEPROPERTIES_H_
