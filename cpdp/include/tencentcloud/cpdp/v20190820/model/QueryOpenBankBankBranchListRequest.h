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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKBANKBRANCHLISTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKBANKBRANCHLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/Paging.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryOpenBankBankBranchList请求参数结构体
                */
                class QueryOpenBankBankBranchListRequest : public AbstractModel
                {
                public:
                    QueryOpenBankBankBranchListRequest();
                    ~QueryOpenBankBankBranchListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道商户ID。
                     * @return ChannelMerchantId 渠道商户ID。
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置渠道商户ID。
                     * @param _channelMerchantId 渠道商户ID。
                     * 
                     */
                    void SetChannelMerchantId(const std::string& _channelMerchantId);

                    /**
                     * 判断参数 ChannelMerchantId 是否已赋值
                     * @return ChannelMerchantId 是否已赋值
                     * 
                     */
                    bool ChannelMerchantIdHasBeenSet() const;

                    /**
                     * 获取渠道名称。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
                     * @return ChannelName 渠道名称。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名称。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
                     * @param _channelName 渠道名称。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取支付方式。
__EBANK_PAYMENT__:ebank付款
__OPENBANK_PAYMENT__: openbank付款
                     * @return PaymentMethod 支付方式。
__EBANK_PAYMENT__:ebank付款
__OPENBANK_PAYMENT__: openbank付款
                     * 
                     */
                    std::string GetPaymentMethod() const;

                    /**
                     * 设置支付方式。
__EBANK_PAYMENT__:ebank付款
__OPENBANK_PAYMENT__: openbank付款
                     * @param _paymentMethod 支付方式。
__EBANK_PAYMENT__:ebank付款
__OPENBANK_PAYMENT__: openbank付款
                     * 
                     */
                    void SetPaymentMethod(const std::string& _paymentMethod);

                    /**
                     * 判断参数 PaymentMethod 是否已赋值
                     * @return PaymentMethod 是否已赋值
                     * 
                     */
                    bool PaymentMethodHasBeenSet() const;

                    /**
                     * 获取支行名称。
                     * @return BankBranchName 支行名称。
                     * 
                     */
                    std::string GetBankBranchName() const;

                    /**
                     * 设置支行名称。
                     * @param _bankBranchName 支行名称。
                     * 
                     */
                    void SetBankBranchName(const std::string& _bankBranchName);

                    /**
                     * 判断参数 BankBranchName 是否已赋值
                     * @return BankBranchName 是否已赋值
                     * 
                     */
                    bool BankBranchNameHasBeenSet() const;

                    /**
                     * 获取银行简称。
                     * @return BankAbbreviation 银行简称。
                     * 
                     */
                    std::string GetBankAbbreviation() const;

                    /**
                     * 设置银行简称。
                     * @param _bankAbbreviation 银行简称。
                     * 
                     */
                    void SetBankAbbreviation(const std::string& _bankAbbreviation);

                    /**
                     * 判断参数 BankAbbreviation 是否已赋值
                     * @return BankAbbreviation 是否已赋值
                     * 
                     */
                    bool BankAbbreviationHasBeenSet() const;

                    /**
                     * 获取页码。Index和Count必须大于等于1。Count建议不超过100。
                     * @return PageNumber 页码。Index和Count必须大于等于1。Count建议不超过100。
                     * 
                     */
                    Paging GetPageNumber() const;

                    /**
                     * 设置页码。Index和Count必须大于等于1。Count建议不超过100。
                     * @param _pageNumber 页码。Index和Count必须大于等于1。Count建议不超过100。
                     * 
                     */
                    void SetPageNumber(const Paging& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @return Environment 环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @param _environment 环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                private:

                    /**
                     * 渠道商户ID。
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 渠道名称。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 支付方式。
__EBANK_PAYMENT__:ebank付款
__OPENBANK_PAYMENT__: openbank付款
                     */
                    std::string m_paymentMethod;
                    bool m_paymentMethodHasBeenSet;

                    /**
                     * 支行名称。
                     */
                    std::string m_bankBranchName;
                    bool m_bankBranchNameHasBeenSet;

                    /**
                     * 银行简称。
                     */
                    std::string m_bankAbbreviation;
                    bool m_bankAbbreviationHasBeenSet;

                    /**
                     * 页码。Index和Count必须大于等于1。Count建议不超过100。
                     */
                    Paging m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKBANKBRANCHLISTREQUEST_H_
