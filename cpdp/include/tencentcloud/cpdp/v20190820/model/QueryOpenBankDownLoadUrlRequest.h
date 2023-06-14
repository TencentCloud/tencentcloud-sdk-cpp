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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKDOWNLOADURLREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKDOWNLOADURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * QueryOpenBankDownLoadUrl请求参数结构体
                */
                class QueryOpenBankDownLoadUrlRequest : public AbstractModel
                {
                public:
                    QueryOpenBankDownLoadUrlRequest();
                    ~QueryOpenBankDownLoadUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道商户号，外部接入平台方入驻云企付平台后下发。
EBANK_PAYMENT支付方式下，填写渠道商户号；
SAFT_ISV支付方式下，填写渠道子商户号。
                     * @return ChannelMerchantId 渠道商户号，外部接入平台方入驻云企付平台后下发。
EBANK_PAYMENT支付方式下，填写渠道商户号；
SAFT_ISV支付方式下，填写渠道子商户号。
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置渠道商户号，外部接入平台方入驻云企付平台后下发。
EBANK_PAYMENT支付方式下，填写渠道商户号；
SAFT_ISV支付方式下，填写渠道子商户号。
                     * @param _channelMerchantId 渠道商户号，外部接入平台方入驻云企付平台后下发。
EBANK_PAYMENT支付方式下，填写渠道商户号；
SAFT_ISV支付方式下，填写渠道子商户号。
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
                     * 获取账单日期,yyyy-MM-dd。
                     * @return BillDate 账单日期,yyyy-MM-dd。
                     * 
                     */
                    std::string GetBillDate() const;

                    /**
                     * 设置账单日期,yyyy-MM-dd。
                     * @param _billDate 账单日期,yyyy-MM-dd。
                     * 
                     */
                    void SetBillDate(const std::string& _billDate);

                    /**
                     * 判断参数 BillDate 是否已赋值
                     * @return BillDate 是否已赋值
                     * 
                     */
                    bool BillDateHasBeenSet() const;

                    /**
                     * 获取账单类型，默认交易账单。
                     * @return BillType 账单类型，默认交易账单。
                     * 
                     */
                    std::string GetBillType() const;

                    /**
                     * 设置账单类型，默认交易账单。
                     * @param _billType 账单类型，默认交易账单。
                     * 
                     */
                    void SetBillType(const std::string& _billType);

                    /**
                     * 判断参数 BillType 是否已赋值
                     * @return BillType 是否已赋值
                     * 
                     */
                    bool BillTypeHasBeenSet() const;

                    /**
                     * 获取接入环境。沙箱环境填 sandbox。缺省默认调用生产环境。
                     * @return Environment 接入环境。沙箱环境填 sandbox。缺省默认调用生产环境。
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置接入环境。沙箱环境填 sandbox。缺省默认调用生产环境。
                     * @param _environment 接入环境。沙箱环境填 sandbox。缺省默认调用生产环境。
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取渠道名称。不填默认为商企付。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
                     * @return ChannelName 渠道名称。不填默认为商企付。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名称。不填默认为商企付。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
                     * @param _channelName 渠道名称。不填默认为商企付。
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
                     * 获取支付方式。不填默认为ebank支付。
__EBANK_PAYMENT__: ebank支付
__OPENBANK_PAYMENT__: openbank支付
__SAFT_ISV__: 人资ISV支付
                     * @return PaymentMethod 支付方式。不填默认为ebank支付。
__EBANK_PAYMENT__: ebank支付
__OPENBANK_PAYMENT__: openbank支付
__SAFT_ISV__: 人资ISV支付
                     * 
                     */
                    std::string GetPaymentMethod() const;

                    /**
                     * 设置支付方式。不填默认为ebank支付。
__EBANK_PAYMENT__: ebank支付
__OPENBANK_PAYMENT__: openbank支付
__SAFT_ISV__: 人资ISV支付
                     * @param _paymentMethod 支付方式。不填默认为ebank支付。
__EBANK_PAYMENT__: ebank支付
__OPENBANK_PAYMENT__: openbank支付
__SAFT_ISV__: 人资ISV支付
                     * 
                     */
                    void SetPaymentMethod(const std::string& _paymentMethod);

                    /**
                     * 判断参数 PaymentMethod 是否已赋值
                     * @return PaymentMethod 是否已赋值
                     * 
                     */
                    bool PaymentMethodHasBeenSet() const;

                private:

                    /**
                     * 渠道商户号，外部接入平台方入驻云企付平台后下发。
EBANK_PAYMENT支付方式下，填写渠道商户号；
SAFT_ISV支付方式下，填写渠道子商户号。
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 账单日期,yyyy-MM-dd。
                     */
                    std::string m_billDate;
                    bool m_billDateHasBeenSet;

                    /**
                     * 账单类型，默认交易账单。
                     */
                    std::string m_billType;
                    bool m_billTypeHasBeenSet;

                    /**
                     * 接入环境。沙箱环境填 sandbox。缺省默认调用生产环境。
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * 渠道名称。不填默认为商企付。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 支付方式。不填默认为ebank支付。
__EBANK_PAYMENT__: ebank支付
__OPENBANK_PAYMENT__: openbank支付
__SAFT_ISV__: 人资ISV支付
                     */
                    std::string m_paymentMethod;
                    bool m_paymentMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKDOWNLOADURLREQUEST_H_
