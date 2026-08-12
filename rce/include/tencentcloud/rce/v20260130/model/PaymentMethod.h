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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_PAYMENTMETHOD_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_PAYMENTMETHOD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Card.h>
#include <tencentcloud/rce/v20260130/model/Wallet.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 支付方式，支持多种支付方式
                */
                class PaymentMethod : public AbstractModel
                {
                public:
                    PaymentMethod();
                    ~PaymentMethod() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>支付方式</p><p>枚举值：</p><ul><li>cash： 现金</li><li>check： 支票</li><li>credit_card： 信用卡</li><li>debit_card： 借记卡</li><li>crypto_currency： 加密货币</li><li>digital_wallet： 数字钱包</li><li>gift_card： 礼品卡</li><li>points： 积分</li><li>in_app_purchase： APP内购买</li><li>electronic_fund_transfer： 电子资金转账</li><li>financing： 融资</li><li>invoice： 发票</li><li>prepaid_card： 预付卡</li><li>sepa_credit： SEPA信用转账</li></ul>
                     * @return PaymentType <p>支付方式</p><p>枚举值：</p><ul><li>cash： 现金</li><li>check： 支票</li><li>credit_card： 信用卡</li><li>debit_card： 借记卡</li><li>crypto_currency： 加密货币</li><li>digital_wallet： 数字钱包</li><li>gift_card： 礼品卡</li><li>points： 积分</li><li>in_app_purchase： APP内购买</li><li>electronic_fund_transfer： 电子资金转账</li><li>financing： 融资</li><li>invoice： 发票</li><li>prepaid_card： 预付卡</li><li>sepa_credit： SEPA信用转账</li></ul>
                     * 
                     */
                    std::string GetPaymentType() const;

                    /**
                     * 设置<p>支付方式</p><p>枚举值：</p><ul><li>cash： 现金</li><li>check： 支票</li><li>credit_card： 信用卡</li><li>debit_card： 借记卡</li><li>crypto_currency： 加密货币</li><li>digital_wallet： 数字钱包</li><li>gift_card： 礼品卡</li><li>points： 积分</li><li>in_app_purchase： APP内购买</li><li>electronic_fund_transfer： 电子资金转账</li><li>financing： 融资</li><li>invoice： 发票</li><li>prepaid_card： 预付卡</li><li>sepa_credit： SEPA信用转账</li></ul>
                     * @param _paymentType <p>支付方式</p><p>枚举值：</p><ul><li>cash： 现金</li><li>check： 支票</li><li>credit_card： 信用卡</li><li>debit_card： 借记卡</li><li>crypto_currency： 加密货币</li><li>digital_wallet： 数字钱包</li><li>gift_card： 礼品卡</li><li>points： 积分</li><li>in_app_purchase： APP内购买</li><li>electronic_fund_transfer： 电子资金转账</li><li>financing： 融资</li><li>invoice： 发票</li><li>prepaid_card： 预付卡</li><li>sepa_credit： SEPA信用转账</li></ul>
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
                     * 获取<p>支付渠道</p>
                     * @return PaymentChannel <p>支付渠道</p>
                     * 
                     */
                    std::string GetPaymentChannel() const;

                    /**
                     * 设置<p>支付渠道</p>
                     * @param _paymentChannel <p>支付渠道</p>
                     * 
                     */
                    void SetPaymentChannel(const std::string& _paymentChannel);

                    /**
                     * 判断参数 PaymentChannel 是否已赋值
                     * @return PaymentChannel 是否已赋值
                     * 
                     */
                    bool PaymentChannelHasBeenSet() const;

                    /**
                     * 获取<p>银行卡信息，当用支付方式是credit_card、debit_card时必填</p>
                     * @return Card <p>银行卡信息，当用支付方式是credit_card、debit_card时必填</p>
                     * 
                     */
                    Card GetCard() const;

                    /**
                     * 设置<p>银行卡信息，当用支付方式是credit_card、debit_card时必填</p>
                     * @param _card <p>银行卡信息，当用支付方式是credit_card、debit_card时必填</p>
                     * 
                     */
                    void SetCard(const Card& _card);

                    /**
                     * 判断参数 Card 是否已赋值
                     * @return Card 是否已赋值
                     * 
                     */
                    bool CardHasBeenSet() const;

                    /**
                     * 获取<p>SEPA直接借记授权</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * @return SEPADirectDebitMandate <p>SEPA直接借记授权</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * 
                     */
                    bool GetSEPADirectDebitMandate() const;

                    /**
                     * 设置<p>SEPA直接借记授权</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * @param _sEPADirectDebitMandate <p>SEPA直接借记授权</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * 
                     */
                    void SetSEPADirectDebitMandate(const bool& _sEPADirectDebitMandate);

                    /**
                     * 判断参数 SEPADirectDebitMandate 是否已赋值
                     * @return SEPADirectDebitMandate 是否已赋值
                     * 
                     */
                    bool SEPADirectDebitMandateHasBeenSet() const;

                    /**
                     * 获取<p>数字钱包</p>
                     * @return DigitalWallet <p>数字钱包</p>
                     * 
                     */
                    Wallet GetDigitalWallet() const;

                    /**
                     * 设置<p>数字钱包</p>
                     * @param _digitalWallet <p>数字钱包</p>
                     * 
                     */
                    void SetDigitalWallet(const Wallet& _digitalWallet);

                    /**
                     * 判断参数 DigitalWallet 是否已赋值
                     * @return DigitalWallet 是否已赋值
                     * 
                     */
                    bool DigitalWalletHasBeenSet() const;

                private:

                    /**
                     * <p>支付方式</p><p>枚举值：</p><ul><li>cash： 现金</li><li>check： 支票</li><li>credit_card： 信用卡</li><li>debit_card： 借记卡</li><li>crypto_currency： 加密货币</li><li>digital_wallet： 数字钱包</li><li>gift_card： 礼品卡</li><li>points： 积分</li><li>in_app_purchase： APP内购买</li><li>electronic_fund_transfer： 电子资金转账</li><li>financing： 融资</li><li>invoice： 发票</li><li>prepaid_card： 预付卡</li><li>sepa_credit： SEPA信用转账</li></ul>
                     */
                    std::string m_paymentType;
                    bool m_paymentTypeHasBeenSet;

                    /**
                     * <p>支付渠道</p>
                     */
                    std::string m_paymentChannel;
                    bool m_paymentChannelHasBeenSet;

                    /**
                     * <p>银行卡信息，当用支付方式是credit_card、debit_card时必填</p>
                     */
                    Card m_card;
                    bool m_cardHasBeenSet;

                    /**
                     * <p>SEPA直接借记授权</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     */
                    bool m_sEPADirectDebitMandate;
                    bool m_sEPADirectDebitMandateHasBeenSet;

                    /**
                     * <p>数字钱包</p>
                     */
                    Wallet m_digitalWallet;
                    bool m_digitalWalletHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_PAYMENTMETHOD_H_
