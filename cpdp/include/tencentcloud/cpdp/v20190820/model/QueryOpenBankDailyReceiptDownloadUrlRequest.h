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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKDAILYRECEIPTDOWNLOADURLREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKDAILYRECEIPTDOWNLOADURLREQUEST_H_

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
                * QueryOpenBankDailyReceiptDownloadUrl请求参数结构体
                */
                class QueryOpenBankDailyReceiptDownloadUrlRequest : public AbstractModel
                {
                public:
                    QueryOpenBankDailyReceiptDownloadUrlRequest();
                    ~QueryOpenBankDailyReceiptDownloadUrlRequest() = default;
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
                     * 获取云企付渠道子商户号。入驻在渠道商户下的子商户ID，如付款方的商户ID，对应创建支付订单中接口参数中的PayerInfo中的payerId。
                     * @return ChannelSubMerchantId 云企付渠道子商户号。入驻在渠道商户下的子商户ID，如付款方的商户ID，对应创建支付订单中接口参数中的PayerInfo中的payerId。
                     * 
                     */
                    std::string GetChannelSubMerchantId() const;

                    /**
                     * 设置云企付渠道子商户号。入驻在渠道商户下的子商户ID，如付款方的商户ID，对应创建支付订单中接口参数中的PayerInfo中的payerId。
                     * @param _channelSubMerchantId 云企付渠道子商户号。入驻在渠道商户下的子商户ID，如付款方的商户ID，对应创建支付订单中接口参数中的PayerInfo中的payerId。
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
                     * 获取付款方式。如
__EBANK_PAYMENT__:ebank付款
__OPENBANK_PAYMENT__: openbank付款
                     * @return PaymentMethod 付款方式。如
__EBANK_PAYMENT__:ebank付款
__OPENBANK_PAYMENT__: openbank付款
                     * 
                     */
                    std::string GetPaymentMethod() const;

                    /**
                     * 设置付款方式。如
__EBANK_PAYMENT__:ebank付款
__OPENBANK_PAYMENT__: openbank付款
                     * @param _paymentMethod 付款方式。如
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
                     * 获取绑卡序列号，银行卡唯一标记，资金账户ID，用于区分商户绑定多卡或多账户场景
                     * @return BindSerialNo 绑卡序列号，银行卡唯一标记，资金账户ID，用于区分商户绑定多卡或多账户场景
                     * 
                     */
                    std::string GetBindSerialNo() const;

                    /**
                     * 设置绑卡序列号，银行卡唯一标记，资金账户ID，用于区分商户绑定多卡或多账户场景
                     * @param _bindSerialNo 绑卡序列号，银行卡唯一标记，资金账户ID，用于区分商户绑定多卡或多账户场景
                     * 
                     */
                    void SetBindSerialNo(const std::string& _bindSerialNo);

                    /**
                     * 判断参数 BindSerialNo 是否已赋值
                     * @return BindSerialNo 是否已赋值
                     * 
                     */
                    bool BindSerialNoHasBeenSet() const;

                    /**
                     * 获取查询日期，D日查询D-1日的回单文件
                     * @return QueryDate 查询日期，D日查询D-1日的回单文件
                     * 
                     */
                    std::string GetQueryDate() const;

                    /**
                     * 设置查询日期，D日查询D-1日的回单文件
                     * @param _queryDate 查询日期，D日查询D-1日的回单文件
                     * 
                     */
                    void SetQueryDate(const std::string& _queryDate);

                    /**
                     * 判断参数 QueryDate 是否已赋值
                     * @return QueryDate 是否已赋值
                     * 
                     */
                    bool QueryDateHasBeenSet() const;

                    /**
                     * 获取环境类型
release:生产环境
sandbox:沙箱环境
缺省默认为生产环境
                     * @return Environment 环境类型
release:生产环境
sandbox:沙箱环境
缺省默认为生产环境
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境类型
release:生产环境
sandbox:沙箱环境
缺省默认为生产环境
                     * @param _environment 环境类型
release:生产环境
sandbox:沙箱环境
缺省默认为生产环境
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
                     * 云企付渠道子商户号。入驻在渠道商户下的子商户ID，如付款方的商户ID，对应创建支付订单中接口参数中的PayerInfo中的payerId。
                     */
                    std::string m_channelSubMerchantId;
                    bool m_channelSubMerchantIdHasBeenSet;

                    /**
                     * 渠道名称。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 付款方式。如
__EBANK_PAYMENT__:ebank付款
__OPENBANK_PAYMENT__: openbank付款
                     */
                    std::string m_paymentMethod;
                    bool m_paymentMethodHasBeenSet;

                    /**
                     * 绑卡序列号，银行卡唯一标记，资金账户ID，用于区分商户绑定多卡或多账户场景
                     */
                    std::string m_bindSerialNo;
                    bool m_bindSerialNoHasBeenSet;

                    /**
                     * 查询日期，D日查询D-1日的回单文件
                     */
                    std::string m_queryDate;
                    bool m_queryDateHasBeenSet;

                    /**
                     * 环境类型
release:生产环境
sandbox:沙箱环境
缺省默认为生产环境
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKDAILYRECEIPTDOWNLOADURLREQUEST_H_
