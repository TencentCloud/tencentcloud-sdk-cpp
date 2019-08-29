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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEUSERINFORESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEUSERINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeUserInfo返回参数结构体
                */
                class DescribeUserInfoResponse : public AbstractModel
                {
                public:
                    DescribeUserInfoResponse();
                    ~DescribeUserInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取用户状态，取值：
<li>Normal：正常 ；</li>
<li> Closed：下线；</li>
<li> Arrearage：欠费停服。</li>
                     * @return Status 用户状态，取值：
<li>Normal：正常 ；</li>
<li> Closed：下线；</li>
<li> Arrearage：欠费停服。</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取用户付费类型，取值：
<li>DailyPayment：日结付费 ；</li>
<li>MonthlyPayment：月结付费。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentType 用户付费类型，取值：
<li>DailyPayment：日结付费 ；</li>
<li>MonthlyPayment：月结付费。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPaymentType() const;

                    /**
                     * 判断参数 PaymentType 是否已赋值
                     * @return PaymentType 是否已赋值
                     */
                    bool PaymentTypeHasBeenSet() const;

                private:

                    /**
                     * 用户状态，取值：
<li>Normal：正常 ；</li>
<li> Closed：下线；</li>
<li> Arrearage：欠费停服。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 用户付费类型，取值：
<li>DailyPayment：日结付费 ；</li>
<li>MonthlyPayment：月结付费。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentType;
                    bool m_paymentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEUSERINFORESPONSE_H_
