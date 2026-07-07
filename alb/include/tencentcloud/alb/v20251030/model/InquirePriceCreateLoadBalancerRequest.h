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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_INQUIREPRICECREATELOADBALANCERREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_INQUIREPRICECREATELOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * InquirePriceCreateLoadBalancer请求参数结构体
                */
                class InquirePriceCreateLoadBalancerRequest : public AbstractModel
                {
                public:
                    InquirePriceCreateLoadBalancerRequest();
                    ~InquirePriceCreateLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例的计费类型。默认POSTPAID_BY_HOUR，仅取值 POSTPAID_BY_HOUR：表示按量计费。
                     * @return ChargeType 实例的计费类型。默认POSTPAID_BY_HOUR，仅取值 POSTPAID_BY_HOUR：表示按量计费。
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置实例的计费类型。默认POSTPAID_BY_HOUR，仅取值 POSTPAID_BY_HOUR：表示按量计费。
                     * @param _chargeType 实例的计费类型。默认POSTPAID_BY_HOUR，仅取值 POSTPAID_BY_HOUR：表示按量计费。
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
                     * 实例的计费类型。默认POSTPAID_BY_HOUR，仅取值 POSTPAID_BY_HOUR：表示按量计费。
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_INQUIREPRICECREATELOADBALANCERREQUEST_H_
