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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CHARGEPROPERTIES_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CHARGEPROPERTIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 集群计费相关信息
                */
                class ChargeProperties : public AbstractModel
                {
                public:
                    ChargeProperties();
                    ~ChargeProperties() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计费类型，“PREPAID” 预付费，“POSTPAID_BY_HOUR” 后付费
                     * @return ChargeType 计费类型，“PREPAID” 预付费，“POSTPAID_BY_HOUR” 后付费
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置计费类型，“PREPAID” 预付费，“POSTPAID_BY_HOUR” 后付费
                     * @param _chargeType 计费类型，“PREPAID” 预付费，“POSTPAID_BY_HOUR” 后付费
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取是否自动续费，1表示自动续费开启
                     * @return RenewFlag 是否自动续费，1表示自动续费开启
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置是否自动续费，1表示自动续费开启
                     * @param _renewFlag 是否自动续费，1表示自动续费开启
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
                     * 获取计费时间长度
                     * @return TimeSpan 计费时间长度
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置计费时间长度
                     * @param _timeSpan 计费时间长度
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
                     * 获取计费时间单位，“m”表示月等
                     * @return TimeUnit 计费时间单位，“m”表示月等
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置计费时间单位，“m”表示月等
                     * @param _timeUnit 计费时间单位，“m”表示月等
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
                     * 计费类型，“PREPAID” 预付费，“POSTPAID_BY_HOUR” 后付费
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 是否自动续费，1表示自动续费开启
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 计费时间长度
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 计费时间单位，“m”表示月等
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CHARGEPROPERTIES_H_
