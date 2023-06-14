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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKBILLDATAPAGEREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKBILLDATAPAGEREQUEST_H_

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
                * QueryOpenBankBillDataPage请求参数结构体
                */
                class QueryOpenBankBillDataPageRequest : public AbstractModel
                {
                public:
                    QueryOpenBankBillDataPageRequest();
                    ~QueryOpenBankBillDataPageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道商户号，外部接入平台方入驻云企付平台后下发。
EBANK_PAYMENT支付方式下，填写渠道商户号；
SAFT_ISV支付方式下，填写渠道子商户号;
HELIPAY渠道下，填写渠道子商户号。
                     * @return ChannelMerchantId 渠道商户号，外部接入平台方入驻云企付平台后下发。
EBANK_PAYMENT支付方式下，填写渠道商户号；
SAFT_ISV支付方式下，填写渠道子商户号;
HELIPAY渠道下，填写渠道子商户号。
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置渠道商户号，外部接入平台方入驻云企付平台后下发。
EBANK_PAYMENT支付方式下，填写渠道商户号；
SAFT_ISV支付方式下，填写渠道子商户号;
HELIPAY渠道下，填写渠道子商户号。
                     * @param _channelMerchantId 渠道商户号，外部接入平台方入驻云企付平台后下发。
EBANK_PAYMENT支付方式下，填写渠道商户号；
SAFT_ISV支付方式下，填写渠道子商户号;
HELIPAY渠道下，填写渠道子商户号。
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
                     * 获取渠道名称。详见附录-云企付枚举类说明-ChannelName。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
HELIPAY：合利宝
                     * @return ChannelName 渠道名称。详见附录-云企付枚举类说明-ChannelName。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
HELIPAY：合利宝
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名称。详见附录-云企付枚举类说明-ChannelName。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
HELIPAY：合利宝
                     * @param _channelName 渠道名称。详见附录-云企付枚举类说明-ChannelName。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
HELIPAY：合利宝
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
                     * 获取分页页码。
                     * @return PageNo 分页页码。
                     * 
                     */
                    uint64_t GetPageNo() const;

                    /**
                     * 设置分页页码。
                     * @param _pageNo 分页页码。
                     * 
                     */
                    void SetPageNo(const uint64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取分页大小，最大1000。
                     * @return PageSize 分页大小，最大1000。
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页大小，最大1000。
                     * @param _pageSize 分页大小，最大1000。
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

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
                     * 获取支付方式。详见附录-云企付枚举类说明-PaymentMethod。
                     * @return PaymentMethod 支付方式。详见附录-云企付枚举类说明-PaymentMethod。
                     * 
                     */
                    std::string GetPaymentMethod() const;

                    /**
                     * 设置支付方式。详见附录-云企付枚举类说明-PaymentMethod。
                     * @param _paymentMethod 支付方式。详见附录-云企付枚举类说明-PaymentMethod。
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
                     * 渠道商户号，外部接入平台方入驻云企付平台后下发。
EBANK_PAYMENT支付方式下，填写渠道商户号；
SAFT_ISV支付方式下，填写渠道子商户号;
HELIPAY渠道下，填写渠道子商户号。
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 账单日期,yyyy-MM-dd。
                     */
                    std::string m_billDate;
                    bool m_billDateHasBeenSet;

                    /**
                     * 渠道名称。详见附录-云企付枚举类说明-ChannelName。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
HELIPAY：合利宝
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 分页页码。
                     */
                    uint64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 分页大小，最大1000。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 账单类型，默认交易账单。
                     */
                    std::string m_billType;
                    bool m_billTypeHasBeenSet;

                    /**
                     * 支付方式。详见附录-云企付枚举类说明-PaymentMethod。
                     */
                    std::string m_paymentMethod;
                    bool m_paymentMethodHasBeenSet;

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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKBILLDATAPAGEREQUEST_H_
