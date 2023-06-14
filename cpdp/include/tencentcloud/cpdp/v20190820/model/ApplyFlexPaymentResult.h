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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYFLEXPAYMENTRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYFLEXPAYMENTRESULT_H_

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
                * 付款结果
                */
                class ApplyFlexPaymentResult : public AbstractModel
                {
                public:
                    ApplyFlexPaymentResult();
                    ~ApplyFlexPaymentResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取订单ID
                     * @return OrderId 订单ID
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单ID
                     * @param _orderId 订单ID
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取税前金额
                     * @return AmountBeforeTax 税前金额
                     * 
                     */
                    std::string GetAmountBeforeTax() const;

                    /**
                     * 设置税前金额
                     * @param _amountBeforeTax 税前金额
                     * 
                     */
                    void SetAmountBeforeTax(const std::string& _amountBeforeTax);

                    /**
                     * 判断参数 AmountBeforeTax 是否已赋值
                     * @return AmountBeforeTax 是否已赋值
                     * 
                     */
                    bool AmountBeforeTaxHasBeenSet() const;

                    /**
                     * 获取税后金额
                     * @return AmountAfterTax 税后金额
                     * 
                     */
                    std::string GetAmountAfterTax() const;

                    /**
                     * 设置税后金额
                     * @param _amountAfterTax 税后金额
                     * 
                     */
                    void SetAmountAfterTax(const std::string& _amountAfterTax);

                    /**
                     * 判断参数 AmountAfterTax 是否已赋值
                     * @return AmountAfterTax 是否已赋值
                     * 
                     */
                    bool AmountAfterTaxHasBeenSet() const;

                    /**
                     * 获取税金
                     * @return Tax 税金
                     * 
                     */
                    std::string GetTax() const;

                    /**
                     * 设置税金
                     * @param _tax 税金
                     * 
                     */
                    void SetTax(const std::string& _tax);

                    /**
                     * 判断参数 Tax 是否已赋值
                     * @return Tax 是否已赋值
                     * 
                     */
                    bool TaxHasBeenSet() const;

                    /**
                     * 获取增值税
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vat 增值税
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVat() const;

                    /**
                     * 设置增值税
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vat 增值税
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVat(const std::string& _vat);

                    /**
                     * 判断参数 Vat 是否已赋值
                     * @return Vat 是否已赋值
                     * 
                     */
                    bool VatHasBeenSet() const;

                    /**
                     * 获取个人所得税
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndividualIncomeTax 个人所得税
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndividualIncomeTax() const;

                    /**
                     * 设置个人所得税
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _individualIncomeTax 个人所得税
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndividualIncomeTax(const std::string& _individualIncomeTax);

                    /**
                     * 判断参数 IndividualIncomeTax 是否已赋值
                     * @return IndividualIncomeTax 是否已赋值
                     * 
                     */
                    bool IndividualIncomeTaxHasBeenSet() const;

                    /**
                     * 获取附加税总税额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdditionalTaxSum 附加税总税额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAdditionalTaxSum() const;

                    /**
                     * 设置附加税总税额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _additionalTaxSum 附加税总税额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdditionalTaxSum(const std::string& _additionalTaxSum);

                    /**
                     * 判断参数 AdditionalTaxSum 是否已赋值
                     * @return AdditionalTaxSum 是否已赋值
                     * 
                     */
                    bool AdditionalTaxSumHasBeenSet() const;

                    /**
                     * 获取附加税税项。格式为JSON格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdditionalTaxItem 附加税税项。格式为JSON格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAdditionalTaxItem() const;

                    /**
                     * 设置附加税税项。格式为JSON格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _additionalTaxItem 附加税税项。格式为JSON格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdditionalTaxItem(const std::string& _additionalTaxItem);

                    /**
                     * 判断参数 AdditionalTaxItem 是否已赋值
                     * @return AdditionalTaxItem 是否已赋值
                     * 
                     */
                    bool AdditionalTaxItemHasBeenSet() const;

                private:

                    /**
                     * 订单ID
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 税前金额
                     */
                    std::string m_amountBeforeTax;
                    bool m_amountBeforeTaxHasBeenSet;

                    /**
                     * 税后金额
                     */
                    std::string m_amountAfterTax;
                    bool m_amountAfterTaxHasBeenSet;

                    /**
                     * 税金
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                    /**
                     * 增值税
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vat;
                    bool m_vatHasBeenSet;

                    /**
                     * 个人所得税
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_individualIncomeTax;
                    bool m_individualIncomeTaxHasBeenSet;

                    /**
                     * 附加税总税额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_additionalTaxSum;
                    bool m_additionalTaxSumHasBeenSet;

                    /**
                     * 附加税税项。格式为JSON格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_additionalTaxItem;
                    bool m_additionalTaxItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYFLEXPAYMENTRESULT_H_
