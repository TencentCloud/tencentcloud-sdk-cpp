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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKRECHARGEORDERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKRECHARGEORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankRechargePayeeInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * CreateOpenBankRechargeOrder请求参数结构体
                */
                class CreateOpenBankRechargeOrderRequest : public AbstractModel
                {
                public:
                    CreateOpenBankRechargeOrderRequest();
                    ~CreateOpenBankRechargeOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云企付渠道商户号。外部接入平台入驻云企付平台后下发。
                     * @return ChannelMerchantId 云企付渠道商户号。外部接入平台入驻云企付平台后下发。
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置云企付渠道商户号。外部接入平台入驻云企付平台后下发。
                     * @param _channelMerchantId 云企付渠道商户号。外部接入平台入驻云企付平台后下发。
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
                     * 获取外部订单号,只能是数字、大小写字母，且在同一个接入平台下唯一，限定长度40位。
                     * @return OutOrderId 外部订单号,只能是数字、大小写字母，且在同一个接入平台下唯一，限定长度40位。
                     * 
                     */
                    std::string GetOutOrderId() const;

                    /**
                     * 设置外部订单号,只能是数字、大小写字母，且在同一个接入平台下唯一，限定长度40位。
                     * @param _outOrderId 外部订单号,只能是数字、大小写字母，且在同一个接入平台下唯一，限定长度40位。
                     * 
                     */
                    void SetOutOrderId(const std::string& _outOrderId);

                    /**
                     * 判断参数 OutOrderId 是否已赋值
                     * @return OutOrderId 是否已赋值
                     * 
                     */
                    bool OutOrderIdHasBeenSet() const;

                    /**
                     * 获取付款金额，单位分。
                     * @return TotalAmount 付款金额，单位分。
                     * 
                     */
                    int64_t GetTotalAmount() const;

                    /**
                     * 设置付款金额，单位分。
                     * @param _totalAmount 付款金额，单位分。
                     * 
                     */
                    void SetTotalAmount(const int64_t& _totalAmount);

                    /**
                     * 判断参数 TotalAmount 是否已赋值
                     * @return TotalAmount 是否已赋值
                     * 
                     */
                    bool TotalAmountHasBeenSet() const;

                    /**
                     * 获取固定值CNY。
                     * @return Currency 固定值CNY。
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置固定值CNY。
                     * @param _currency 固定值CNY。
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取订单过期时间，yyyy-MM-dd HH:mm:ss格式。
                     * @return ExpireTime 订单过期时间，yyyy-MM-dd HH:mm:ss格式。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置订单过期时间，yyyy-MM-dd HH:mm:ss格式。
                     * @param _expireTime 订单过期时间，yyyy-MM-dd HH:mm:ss格式。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

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
                     * 获取渠道名称。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
                     * @return PaymentMethod 渠道名称。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
                     * 
                     */
                    std::string GetPaymentMethod() const;

                    /**
                     * 设置渠道名称。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
                     * @param _paymentMethod 渠道名称。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
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
                     * 获取收款方信息。
                     * @return PayeeInfo 收款方信息。
                     * 
                     */
                    OpenBankRechargePayeeInfo GetPayeeInfo() const;

                    /**
                     * 设置收款方信息。
                     * @param _payeeInfo 收款方信息。
                     * 
                     */
                    void SetPayeeInfo(const OpenBankRechargePayeeInfo& _payeeInfo);

                    /**
                     * 判断参数 PayeeInfo 是否已赋值
                     * @return PayeeInfo 是否已赋值
                     * 
                     */
                    bool PayeeInfoHasBeenSet() const;

                    /**
                     * 获取渠道子商户号
                     * @return ChannelSubMerchantId 渠道子商户号
                     * 
                     */
                    std::string GetChannelSubMerchantId() const;

                    /**
                     * 设置渠道子商户号
                     * @param _channelSubMerchantId 渠道子商户号
                     * 
                     */
                    void SetChannelSubMerchantId(const std::string& _channelSubMerchantId);

                    /**
                     * 判断参数 ChannelSubMerchantId 是否已赋值
                     * @return ChannelSubMerchantId 是否已赋值
                     * 
                     */
                    bool ChannelSubMerchantIdHasBeenSet() const;

                    /**
                     * 获取通知地址，如www.test.com。
                     * @return NotifyUrl 通知地址，如www.test.com。
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置通知地址，如www.test.com。
                     * @param _notifyUrl 通知地址，如www.test.com。
                     * 
                     */
                    void SetNotifyUrl(const std::string& _notifyUrl);

                    /**
                     * 判断参数 NotifyUrl 是否已赋值
                     * @return NotifyUrl 是否已赋值
                     * 
                     */
                    bool NotifyUrlHasBeenSet() const;

                    /**
                     * 获取备注信息。限制200个字符。
                     * @return Remark 备注信息。限制200个字符。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息。限制200个字符。
                     * @param _remark 备注信息。限制200个字符。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

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
                     * 云企付渠道商户号。外部接入平台入驻云企付平台后下发。
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 外部订单号,只能是数字、大小写字母，且在同一个接入平台下唯一，限定长度40位。
                     */
                    std::string m_outOrderId;
                    bool m_outOrderIdHasBeenSet;

                    /**
                     * 付款金额，单位分。
                     */
                    int64_t m_totalAmount;
                    bool m_totalAmountHasBeenSet;

                    /**
                     * 固定值CNY。
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * 订单过期时间，yyyy-MM-dd HH:mm:ss格式。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 渠道名称。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 渠道名称。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
                     */
                    std::string m_paymentMethod;
                    bool m_paymentMethodHasBeenSet;

                    /**
                     * 收款方信息。
                     */
                    OpenBankRechargePayeeInfo m_payeeInfo;
                    bool m_payeeInfoHasBeenSet;

                    /**
                     * 渠道子商户号
                     */
                    std::string m_channelSubMerchantId;
                    bool m_channelSubMerchantIdHasBeenSet;

                    /**
                     * 通知地址，如www.test.com。
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * 备注信息。限制200个字符。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKRECHARGEORDERREQUEST_H_
