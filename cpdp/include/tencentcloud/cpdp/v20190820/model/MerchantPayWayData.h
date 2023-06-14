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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_MERCHANTPAYWAYDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_MERCHANTPAYWAYDATA_H_

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
                * 商户支付方式数据
                */
                class MerchantPayWayData : public AbstractModel
                {
                public:
                    MerchantPayWayData();
                    ~MerchantPayWayData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取支付币种
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayCurrency 支付币种
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayCurrency() const;

                    /**
                     * 设置支付币种
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payCurrency 支付币种
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayCurrency(const std::string& _payCurrency);

                    /**
                     * 判断参数 PayCurrency 是否已赋值
                     * @return PayCurrency 是否已赋值
                     * 
                     */
                    bool PayCurrencyHasBeenSet() const;

                    /**
                     * 获取支付图标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayIcon 支付图标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayIcon() const;

                    /**
                     * 设置支付图标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payIcon 支付图标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayIcon(const std::string& _payIcon);

                    /**
                     * 判断参数 PayIcon 是否已赋值
                     * @return PayIcon 是否已赋值
                     * 
                     */
                    bool PayIconHasBeenSet() const;

                    /**
                     * 获取支付名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayInternalName 支付名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayInternalName() const;

                    /**
                     * 设置支付名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payInternalName 支付名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayInternalName(const std::string& _payInternalName);

                    /**
                     * 判断参数 PayInternalName 是否已赋值
                     * @return PayInternalName 是否已赋值
                     * 
                     */
                    bool PayInternalNameHasBeenSet() const;

                    /**
                     * 获取支付简称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayName 支付简称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayName() const;

                    /**
                     * 设置支付简称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payName 支付简称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayName(const std::string& _payName);

                    /**
                     * 判断参数 PayName 是否已赋值
                     * @return PayName 是否已赋值
                     * 
                     */
                    bool PayNameHasBeenSet() const;

                    /**
                     * 获取是否支持退款
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaySplitRefund 是否支持退款
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaySplitRefund() const;

                    /**
                     * 设置是否支持退款
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paySplitRefund 是否支持退款
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaySplitRefund(const std::string& _paySplitRefund);

                    /**
                     * 判断参数 PaySplitRefund 是否已赋值
                     * @return PaySplitRefund 是否已赋值
                     * 
                     */
                    bool PaySplitRefundHasBeenSet() const;

                    /**
                     * 获取支付标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayTag 支付标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayTag() const;

                    /**
                     * 设置支付标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payTag 支付标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayTag(const std::string& _payTag);

                    /**
                     * 判断参数 PayTag 是否已赋值
                     * @return PayTag 是否已赋值
                     * 
                     */
                    bool PayTagHasBeenSet() const;

                    /**
                     * 获取支付凭证图标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayTicketIcon 支付凭证图标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayTicketIcon() const;

                    /**
                     * 设置支付凭证图标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payTicketIcon 支付凭证图标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayTicketIcon(const std::string& _payTicketIcon);

                    /**
                     * 判断参数 PayTicketIcon 是否已赋值
                     * @return PayTicketIcon 是否已赋值
                     * 
                     */
                    bool PayTicketIconHasBeenSet() const;

                    /**
                     * 获取支付类型，逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayType 支付类型，逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置支付类型，逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payType 支付类型，逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayType(const std::string& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取凭证名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TicketName 凭证名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTicketName() const;

                    /**
                     * 设置凭证名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ticketName 凭证名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTicketName(const std::string& _ticketName);

                    /**
                     * 判断参数 TicketName 是否已赋值
                     * @return TicketName 是否已赋值
                     * 
                     */
                    bool TicketNameHasBeenSet() const;

                private:

                    /**
                     * 支付币种
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payCurrency;
                    bool m_payCurrencyHasBeenSet;

                    /**
                     * 支付图标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payIcon;
                    bool m_payIconHasBeenSet;

                    /**
                     * 支付名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payInternalName;
                    bool m_payInternalNameHasBeenSet;

                    /**
                     * 支付简称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payName;
                    bool m_payNameHasBeenSet;

                    /**
                     * 是否支持退款
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paySplitRefund;
                    bool m_paySplitRefundHasBeenSet;

                    /**
                     * 支付标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payTag;
                    bool m_payTagHasBeenSet;

                    /**
                     * 支付凭证图标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payTicketIcon;
                    bool m_payTicketIconHasBeenSet;

                    /**
                     * 支付类型，逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 凭证名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ticketName;
                    bool m_ticketNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_MERCHANTPAYWAYDATA_H_
