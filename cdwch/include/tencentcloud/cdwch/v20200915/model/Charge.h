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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_CHARGE_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_CHARGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * 集群计费相关信息

                */
                class Charge : public AbstractModel
                {
                public:
                    Charge();
                    ~Charge() = default;
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
                     * 获取PREPAID需要传递，是否自动续费，1表示自动续费开启
                     * @return RenewFlag PREPAID需要传递，是否自动续费，1表示自动续费开启
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置PREPAID需要传递，是否自动续费，1表示自动续费开启
                     * @param _renewFlag PREPAID需要传递，是否自动续费，1表示自动续费开启
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
                     * 获取预付费需要传递，计费时间长度，多少个月
                     * @return TimeSpan 预付费需要传递，计费时间长度，多少个月
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置预付费需要传递，计费时间长度，多少个月
                     * @param _timeSpan 预付费需要传递，计费时间长度，多少个月
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                private:

                    /**
                     * 计费类型，“PREPAID” 预付费，“POSTPAID_BY_HOUR” 后付费
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * PREPAID需要传递，是否自动续费，1表示自动续费开启
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 预付费需要传递，计费时间长度，多少个月
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_CHARGE_H_
