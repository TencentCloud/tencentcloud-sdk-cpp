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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CONTRACTPAYLISTRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CONTRACTPAYLISTRESULT_H_

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
                * 合同-支付方式列表响应对象
                */
                class ContractPayListResult : public AbstractModel
                {
                public:
                    ContractPayListResult();
                    ~ContractPayListResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取支付方式编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentId 支付方式编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentId() const;

                    /**
                     * 设置支付方式编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentId 支付方式编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentId(const std::string& _paymentId);

                    /**
                     * 判断参数 PaymentId 是否已赋值
                     * @return PaymentId 是否已赋值
                     * 
                     */
                    bool PaymentIdHasBeenSet() const;

                    /**
                     * 获取支持的交易类型（多个以小写逗号分开，0现金，1刷卡，2主扫，3被扫，4JSPAY，5预授权）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentType 支持的交易类型（多个以小写逗号分开，0现金，1刷卡，2主扫，3被扫，4JSPAY，5预授权）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentType() const;

                    /**
                     * 设置支持的交易类型（多个以小写逗号分开，0现金，1刷卡，2主扫，3被扫，4JSPAY，5预授权）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentType 支持的交易类型（多个以小写逗号分开，0现金，1刷卡，2主扫，3被扫，4JSPAY，5预授权）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentType(const std::string& _paymentType);

                    /**
                     * 判断参数 PaymentType 是否已赋值
                     * @return PaymentType 是否已赋值
                     * 
                     */
                    bool PaymentTypeHasBeenSet() const;

                    /**
                     * 获取支付标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentTag 支付标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentTag() const;

                    /**
                     * 设置支付标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentTag 支付标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentTag(const std::string& _paymentTag);

                    /**
                     * 判断参数 PaymentTag 是否已赋值
                     * @return PaymentTag 是否已赋值
                     * 
                     */
                    bool PaymentTagHasBeenSet() const;

                    /**
                     * 获取支付方式图片url路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentIcon 支付方式图片url路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentIcon() const;

                    /**
                     * 设置支付方式图片url路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentIcon 支付方式图片url路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentIcon(const std::string& _paymentIcon);

                    /**
                     * 判断参数 PaymentIcon 是否已赋值
                     * @return PaymentIcon 是否已赋值
                     * 
                     */
                    bool PaymentIconHasBeenSet() const;

                    /**
                     * 获取付款方式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentName 付款方式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentName() const;

                    /**
                     * 设置付款方式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentName 付款方式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentName(const std::string& _paymentName);

                    /**
                     * 判断参数 PaymentName 是否已赋值
                     * @return PaymentName 是否已赋值
                     * 
                     */
                    bool PaymentNameHasBeenSet() const;

                    /**
                     * 获取付款方式名称（内部名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentInternalName 付款方式名称（内部名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentInternalName() const;

                    /**
                     * 设置付款方式名称（内部名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentInternalName 付款方式名称（内部名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentInternalName(const std::string& _paymentInternalName);

                    /**
                     * 判断参数 PaymentInternalName 是否已赋值
                     * @return PaymentInternalName 是否已赋值
                     * 
                     */
                    bool PaymentInternalNameHasBeenSet() const;

                    /**
                     * 获取支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentOptionOne 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentOptionOne() const;

                    /**
                     * 设置支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentOptionOne 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentOptionOne(const std::string& _paymentOptionOne);

                    /**
                     * 判断参数 PaymentOptionOne 是否已赋值
                     * @return PaymentOptionOne 是否已赋值
                     * 
                     */
                    bool PaymentOptionOneHasBeenSet() const;

                    /**
                     * 获取支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentOptionTwo 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentOptionTwo() const;

                    /**
                     * 设置支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentOptionTwo 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentOptionTwo(const std::string& _paymentOptionTwo);

                    /**
                     * 判断参数 PaymentOptionTwo 是否已赋值
                     * @return PaymentOptionTwo 是否已赋值
                     * 
                     */
                    bool PaymentOptionTwoHasBeenSet() const;

                    /**
                     * 获取支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentOptionThree 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentOptionThree() const;

                    /**
                     * 设置支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentOptionThree 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentOptionThree(const std::string& _paymentOptionThree);

                    /**
                     * 判断参数 PaymentOptionThree 是否已赋值
                     * @return PaymentOptionThree 是否已赋值
                     * 
                     */
                    bool PaymentOptionThreeHasBeenSet() const;

                    /**
                     * 获取支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentOptionFour 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentOptionFour() const;

                    /**
                     * 设置支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentOptionFour 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentOptionFour(const std::string& _paymentOptionFour);

                    /**
                     * 判断参数 PaymentOptionFour 是否已赋值
                     * @return PaymentOptionFour 是否已赋值
                     * 
                     */
                    bool PaymentOptionFourHasBeenSet() const;

                    /**
                     * 获取支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentOptionFive 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentOptionFive() const;

                    /**
                     * 设置支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentOptionFive 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentOptionFive(const std::string& _paymentOptionFive);

                    /**
                     * 判断参数 PaymentOptionFive 是否已赋值
                     * @return PaymentOptionFive 是否已赋值
                     * 
                     */
                    bool PaymentOptionFiveHasBeenSet() const;

                    /**
                     * 获取支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentOptionSix 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentOptionSix() const;

                    /**
                     * 设置支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentOptionSix 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentOptionSix(const std::string& _paymentOptionSix);

                    /**
                     * 判断参数 PaymentOptionSix 是否已赋值
                     * @return PaymentOptionSix 是否已赋值
                     * 
                     */
                    bool PaymentOptionSixHasBeenSet() const;

                    /**
                     * 获取支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentOptionSeven 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentOptionSeven() const;

                    /**
                     * 设置支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentOptionSeven 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentOptionSeven(const std::string& _paymentOptionSeven);

                    /**
                     * 判断参数 PaymentOptionSeven 是否已赋值
                     * @return PaymentOptionSeven 是否已赋值
                     * 
                     */
                    bool PaymentOptionSevenHasBeenSet() const;

                    /**
                     * 获取支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentOptionOther 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentOptionOther() const;

                    /**
                     * 设置支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentOptionOther 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentOptionOther(const std::string& _paymentOptionOther);

                    /**
                     * 判断参数 PaymentOptionOther 是否已赋值
                     * @return PaymentOptionOther 是否已赋值
                     * 
                     */
                    bool PaymentOptionOtherHasBeenSet() const;

                    /**
                     * 获取支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentOptionNine 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentOptionNine() const;

                    /**
                     * 设置支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentOptionNine 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentOptionNine(const std::string& _paymentOptionNine);

                    /**
                     * 判断参数 PaymentOptionNine 是否已赋值
                     * @return PaymentOptionNine 是否已赋值
                     * 
                     */
                    bool PaymentOptionNineHasBeenSet() const;

                    /**
                     * 获取支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentOptionTen 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentOptionTen() const;

                    /**
                     * 设置支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentOptionTen 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentOptionTen(const std::string& _paymentOptionTen);

                    /**
                     * 判断参数 PaymentOptionTen 是否已赋值
                     * @return PaymentOptionTen 是否已赋值
                     * 
                     */
                    bool PaymentOptionTenHasBeenSet() const;

                private:

                    /**
                     * 支付方式编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentId;
                    bool m_paymentIdHasBeenSet;

                    /**
                     * 支持的交易类型（多个以小写逗号分开，0现金，1刷卡，2主扫，3被扫，4JSPAY，5预授权）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentType;
                    bool m_paymentTypeHasBeenSet;

                    /**
                     * 支付标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentTag;
                    bool m_paymentTagHasBeenSet;

                    /**
                     * 支付方式图片url路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentIcon;
                    bool m_paymentIconHasBeenSet;

                    /**
                     * 付款方式名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentName;
                    bool m_paymentNameHasBeenSet;

                    /**
                     * 付款方式名称（内部名称）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentInternalName;
                    bool m_paymentInternalNameHasBeenSet;

                    /**
                     * 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentOptionOne;
                    bool m_paymentOptionOneHasBeenSet;

                    /**
                     * 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentOptionTwo;
                    bool m_paymentOptionTwoHasBeenSet;

                    /**
                     * 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentOptionThree;
                    bool m_paymentOptionThreeHasBeenSet;

                    /**
                     * 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentOptionFour;
                    bool m_paymentOptionFourHasBeenSet;

                    /**
                     * 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentOptionFive;
                    bool m_paymentOptionFiveHasBeenSet;

                    /**
                     * 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentOptionSix;
                    bool m_paymentOptionSixHasBeenSet;

                    /**
                     * 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentOptionSeven;
                    bool m_paymentOptionSevenHasBeenSet;

                    /**
                     * 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentOptionOther;
                    bool m_paymentOptionOtherHasBeenSet;

                    /**
                     * 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentOptionNine;
                    bool m_paymentOptionNineHasBeenSet;

                    /**
                     * 支付方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentOptionTen;
                    bool m_paymentOptionTenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CONTRACTPAYLISTRESULT_H_
