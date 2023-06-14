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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_PAYDATARESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_PAYDATARESULT_H_

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
                * pay支付方式json数据
                */
                class PayDataResult : public AbstractModel
                {
                public:
                    PayDataResult();
                    ~PayDataResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取支付标签（唯一性）
                     * @return PaymentTag 支付标签（唯一性）
                     * 
                     */
                    std::string GetPaymentTag() const;

                    /**
                     * 设置支付标签（唯一性）
                     * @param _paymentTag 支付标签（唯一性）
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
                     * 获取添加合同时需要隐藏的选项（多个以小写逗号分开）
                     * @return PaymentOptionHide 添加合同时需要隐藏的选项（多个以小写逗号分开）
                     * 
                     */
                    std::string GetPaymentOptionHide() const;

                    /**
                     * 设置添加合同时需要隐藏的选项（多个以小写逗号分开）
                     * @param _paymentOptionHide 添加合同时需要隐藏的选项（多个以小写逗号分开）
                     * 
                     */
                    void SetPaymentOptionHide(const std::string& _paymentOptionHide);

                    /**
                     * 判断参数 PaymentOptionHide 是否已赋值
                     * @return PaymentOptionHide 是否已赋值
                     * 
                     */
                    bool PaymentOptionHideHasBeenSet() const;

                    /**
                     * 获取支付方式图片url路径
                     * @return PaymentIcon 支付方式图片url路径
                     * 
                     */
                    std::string GetPaymentIcon() const;

                    /**
                     * 设置支付方式图片url路径
                     * @param _paymentIcon 支付方式图片url路径
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
                     * 获取合同选项名称6
                     * @return PaymentOptionSix 合同选项名称6
                     * 
                     */
                    std::string GetPaymentOptionSix() const;

                    /**
                     * 设置合同选项名称6
                     * @param _paymentOptionSix 合同选项名称6
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
                     * 获取付款方式名称
                     * @return PaymentName 付款方式名称
                     * 
                     */
                    std::string GetPaymentName() const;

                    /**
                     * 设置付款方式名称
                     * @param _paymentName 付款方式名称
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
                     * 获取合同选项名称7
                     * @return PaymentOptionSeven 合同选项名称7
                     * 
                     */
                    std::string GetPaymentOptionSeven() const;

                    /**
                     * 设置合同选项名称7
                     * @param _paymentOptionSeven 合同选项名称7
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
                     * 获取合同选项名称8
                     * @return PaymentOptionOther 合同选项名称8
                     * 
                     */
                    std::string GetPaymentOptionOther() const;

                    /**
                     * 设置合同选项名称8
                     * @param _paymentOptionOther 合同选项名称8
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
                     * 获取合同选项名称2
                     * @return PaymentOptionTwo 合同选项名称2
                     * 
                     */
                    std::string GetPaymentOptionTwo() const;

                    /**
                     * 设置合同选项名称2
                     * @param _paymentOptionTwo 合同选项名称2
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
                     * 获取合同选项名称1
                     * @return PaymentOptionOne 合同选项名称1
                     * 
                     */
                    std::string GetPaymentOptionOne() const;

                    /**
                     * 设置合同选项名称1
                     * @param _paymentOptionOne 合同选项名称1
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
                     * 获取是否开启智能扣率（1是，0否）
                     * @return PaymentDiscountFee 是否开启智能扣率（1是，0否）
                     * 
                     */
                    std::string GetPaymentDiscountFee() const;

                    /**
                     * 设置是否开启智能扣率（1是，0否）
                     * @param _paymentDiscountFee 是否开启智能扣率（1是，0否）
                     * 
                     */
                    void SetPaymentDiscountFee(const std::string& _paymentDiscountFee);

                    /**
                     * 判断参数 PaymentDiscountFee 是否已赋值
                     * @return PaymentDiscountFee 是否已赋值
                     * 
                     */
                    bool PaymentDiscountFeeHasBeenSet() const;

                    /**
                     * 获取支持的交易类型（多个以小写逗号分开，0现金，1刷卡，2主扫，3被扫，4JSPAY，5预授权）
                     * @return PaymentType 支持的交易类型（多个以小写逗号分开，0现金，1刷卡，2主扫，3被扫，4JSPAY，5预授权）
                     * 
                     */
                    std::string GetPaymentType() const;

                    /**
                     * 设置支持的交易类型（多个以小写逗号分开，0现金，1刷卡，2主扫，3被扫，4JSPAY，5预授权）
                     * @param _paymentType 支持的交易类型（多个以小写逗号分开，0现金，1刷卡，2主扫，3被扫，4JSPAY，5预授权）
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
                     * 获取合同选项名称5
                     * @return PaymentOptionFive 合同选项名称5
                     * 
                     */
                    std::string GetPaymentOptionFive() const;

                    /**
                     * 设置合同选项名称5
                     * @param _paymentOptionFive 合同选项名称5
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
                     * 获取合同选项名称9
                     * @return PaymentOptionNine 合同选项名称9
                     * 
                     */
                    std::string GetPaymentOptionNine() const;

                    /**
                     * 设置合同选项名称9
                     * @param _paymentOptionNine 合同选项名称9
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
                     * 获取支付方式编号
                     * @return PaymentId 支付方式编号
                     * 
                     */
                    std::string GetPaymentId() const;

                    /**
                     * 设置支付方式编号
                     * @param _paymentId 支付方式编号
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
                     * 获取合同选项名称3
                     * @return PaymentOptionThree 合同选项名称3
                     * 
                     */
                    std::string GetPaymentOptionThree() const;

                    /**
                     * 设置合同选项名称3
                     * @param _paymentOptionThree 合同选项名称3
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
                     * 获取付款方式名称（内部名称）
                     * @return PaymentInternalName 付款方式名称（内部名称）
                     * 
                     */
                    std::string GetPaymentInternalName() const;

                    /**
                     * 设置付款方式名称（内部名称）
                     * @param _paymentInternalName 付款方式名称（内部名称）
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
                     * 获取合同选项名称4
                     * @return PaymentOptionFour 合同选项名称4
                     * 
                     */
                    std::string GetPaymentOptionFour() const;

                    /**
                     * 设置合同选项名称4
                     * @param _paymentOptionFour 合同选项名称4
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
                     * 获取合同选项名称10
                     * @return PaymentOptionTen 合同选项名称10
                     * 
                     */
                    std::string GetPaymentOptionTen() const;

                    /**
                     * 设置合同选项名称10
                     * @param _paymentOptionTen 合同选项名称10
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
                     * 支付标签（唯一性）
                     */
                    std::string m_paymentTag;
                    bool m_paymentTagHasBeenSet;

                    /**
                     * 添加合同时需要隐藏的选项（多个以小写逗号分开）
                     */
                    std::string m_paymentOptionHide;
                    bool m_paymentOptionHideHasBeenSet;

                    /**
                     * 支付方式图片url路径
                     */
                    std::string m_paymentIcon;
                    bool m_paymentIconHasBeenSet;

                    /**
                     * 合同选项名称6
                     */
                    std::string m_paymentOptionSix;
                    bool m_paymentOptionSixHasBeenSet;

                    /**
                     * 付款方式名称
                     */
                    std::string m_paymentName;
                    bool m_paymentNameHasBeenSet;

                    /**
                     * 合同选项名称7
                     */
                    std::string m_paymentOptionSeven;
                    bool m_paymentOptionSevenHasBeenSet;

                    /**
                     * 合同选项名称8
                     */
                    std::string m_paymentOptionOther;
                    bool m_paymentOptionOtherHasBeenSet;

                    /**
                     * 合同选项名称2
                     */
                    std::string m_paymentOptionTwo;
                    bool m_paymentOptionTwoHasBeenSet;

                    /**
                     * 合同选项名称1
                     */
                    std::string m_paymentOptionOne;
                    bool m_paymentOptionOneHasBeenSet;

                    /**
                     * 是否开启智能扣率（1是，0否）
                     */
                    std::string m_paymentDiscountFee;
                    bool m_paymentDiscountFeeHasBeenSet;

                    /**
                     * 支持的交易类型（多个以小写逗号分开，0现金，1刷卡，2主扫，3被扫，4JSPAY，5预授权）
                     */
                    std::string m_paymentType;
                    bool m_paymentTypeHasBeenSet;

                    /**
                     * 合同选项名称5
                     */
                    std::string m_paymentOptionFive;
                    bool m_paymentOptionFiveHasBeenSet;

                    /**
                     * 合同选项名称9
                     */
                    std::string m_paymentOptionNine;
                    bool m_paymentOptionNineHasBeenSet;

                    /**
                     * 支付方式编号
                     */
                    std::string m_paymentId;
                    bool m_paymentIdHasBeenSet;

                    /**
                     * 合同选项名称3
                     */
                    std::string m_paymentOptionThree;
                    bool m_paymentOptionThreeHasBeenSet;

                    /**
                     * 付款方式名称（内部名称）
                     */
                    std::string m_paymentInternalName;
                    bool m_paymentInternalNameHasBeenSet;

                    /**
                     * 合同选项名称4
                     */
                    std::string m_paymentOptionFour;
                    bool m_paymentOptionFourHasBeenSet;

                    /**
                     * 合同选项名称10
                     */
                    std::string m_paymentOptionTen;
                    bool m_paymentOptionTenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_PAYDATARESULT_H_
