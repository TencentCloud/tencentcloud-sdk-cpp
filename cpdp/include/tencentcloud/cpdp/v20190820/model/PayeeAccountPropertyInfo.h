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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEEACCOUNTPROPERTYINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEEACCOUNTPROPERTYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 账户属性信息
                */
                class PayeeAccountPropertyInfo : public AbstractModel
                {
                public:
                    PayeeAccountPropertyInfo();
                    ~PayeeAccountPropertyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取结算权益状态
ENABLE:启用
DISABLE:停用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SettleRightStatus 结算权益状态
ENABLE:启用
DISABLE:停用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSettleRightStatus() const;

                    /**
                     * 设置结算权益状态
ENABLE:启用
DISABLE:停用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _settleRightStatus 结算权益状态
ENABLE:启用
DISABLE:停用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSettleRightStatus(const std::string& _settleRightStatus);

                    /**
                     * 判断参数 SettleRightStatus 是否已赋值
                     * @return SettleRightStatus 是否已赋值
                     * 
                     */
                    bool SettleRightStatusHasBeenSet() const;

                    /**
                     * 获取付款权益状态
ENABLE:启用
DISABLE:停用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentRightStatus 付款权益状态
ENABLE:启用
DISABLE:停用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentRightStatus() const;

                    /**
                     * 设置付款权益状态
ENABLE:启用
DISABLE:停用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentRightStatus 付款权益状态
ENABLE:启用
DISABLE:停用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentRightStatus(const std::string& _paymentRightStatus);

                    /**
                     * 判断参数 PaymentRightStatus 是否已赋值
                     * @return PaymentRightStatus 是否已赋值
                     * 
                     */
                    bool PaymentRightStatusHasBeenSet() const;

                private:

                    /**
                     * 结算权益状态
ENABLE:启用
DISABLE:停用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_settleRightStatus;
                    bool m_settleRightStatusHasBeenSet;

                    /**
                     * 付款权益状态
ENABLE:启用
DISABLE:停用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentRightStatus;
                    bool m_paymentRightStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEEACCOUNTPROPERTYINFO_H_
