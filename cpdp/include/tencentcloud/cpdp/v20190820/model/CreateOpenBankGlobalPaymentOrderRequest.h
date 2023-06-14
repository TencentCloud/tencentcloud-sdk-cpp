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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKGLOBALPAYMENTORDERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKGLOBALPAYMENTORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankGoodsInfo.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankShippingInfo.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankBillingInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * CreateOpenBankGlobalPaymentOrder请求参数结构体
                */
                class CreateOpenBankGlobalPaymentOrderRequest : public AbstractModel
                {
                public:
                    CreateOpenBankGlobalPaymentOrderRequest();
                    ~CreateOpenBankGlobalPaymentOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道商户号
                     * @return ChannelMerchantId 渠道商户号
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置渠道商户号
                     * @param _channelMerchantId 渠道商户号
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
                     * 获取渠道名称
                     * @return ChannelName 渠道名称
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名称
                     * @param _channelName 渠道名称
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
                     * 获取付款方式
                     * @return PayType 付款方式
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置付款方式
                     * @param _payType 付款方式
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
                     * 获取外部商户订单号,只能是数字、大小写字母，且在同一个接入平台下唯一
                     * @return OutOrderId 外部商户订单号,只能是数字、大小写字母，且在同一个接入平台下唯一
                     * 
                     */
                    std::string GetOutOrderId() const;

                    /**
                     * 设置外部商户订单号,只能是数字、大小写字母，且在同一个接入平台下唯一
                     * @param _outOrderId 外部商户订单号,只能是数字、大小写字母，且在同一个接入平台下唯一
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
                     * 获取付款金额，单位分
                     * @return TotalAmount 付款金额，单位分
                     * 
                     */
                    int64_t GetTotalAmount() const;

                    /**
                     * 设置付款金额，单位分
                     * @param _totalAmount 付款金额，单位分
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
                     * 获取支付币种，参考附录：货币代码
                     * @return Currency 支付币种，参考附录：货币代码
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置支付币种，参考附录：货币代码
                     * @param _currency 支付币种，参考附录：货币代码
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
                     * 获取支付成功回调地址。
                     * @return NotifyUrl 支付成功回调地址。
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置支付成功回调地址。
                     * @param _notifyUrl 支付成功回调地址。
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
                     * 获取前端跳转地址。通联支付成功后，支付网关跳回商户的地址
                     * @return FrontUrl 前端跳转地址。通联支付成功后，支付网关跳回商户的地址
                     * 
                     */
                    std::string GetFrontUrl() const;

                    /**
                     * 设置前端跳转地址。通联支付成功后，支付网关跳回商户的地址
                     * @param _frontUrl 前端跳转地址。通联支付成功后，支付网关跳回商户的地址
                     * 
                     */
                    void SetFrontUrl(const std::string& _frontUrl);

                    /**
                     * 判断参数 FrontUrl 是否已赋值
                     * @return FrontUrl 是否已赋值
                     * 
                     */
                    bool FrontUrlHasBeenSet() const;

                    /**
                     * 获取网站语言。收银台显示语言，见附录网站语言
                     * @return FrontLanguage 网站语言。收银台显示语言，见附录网站语言
                     * 
                     */
                    std::string GetFrontLanguage() const;

                    /**
                     * 设置网站语言。收银台显示语言，见附录网站语言
                     * @param _frontLanguage 网站语言。收银台显示语言，见附录网站语言
                     * 
                     */
                    void SetFrontLanguage(const std::string& _frontLanguage);

                    /**
                     * 判断参数 FrontLanguage 是否已赋值
                     * @return FrontLanguage 是否已赋值
                     * 
                     */
                    bool FrontLanguageHasBeenSet() const;

                    /**
                     * 获取付款备注
                     * @return Remark 付款备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置付款备注
                     * @param _remark 付款备注
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
                     * 获取第三方拓展信息信息
                     * @return ExternalPaymentData 第三方拓展信息信息
                     * 
                     */
                    std::string GetExternalPaymentData() const;

                    /**
                     * 设置第三方拓展信息信息
                     * @param _externalPaymentData 第三方拓展信息信息
                     * 
                     */
                    void SetExternalPaymentData(const std::string& _externalPaymentData);

                    /**
                     * 判断参数 ExternalPaymentData 是否已赋值
                     * @return ExternalPaymentData 是否已赋值
                     * 
                     */
                    bool ExternalPaymentDataHasBeenSet() const;

                    /**
                     * 获取商品信息
                     * @return GoodsInfos 商品信息
                     * 
                     */
                    std::vector<OpenBankGoodsInfo> GetGoodsInfos() const;

                    /**
                     * 设置商品信息
                     * @param _goodsInfos 商品信息
                     * 
                     */
                    void SetGoodsInfos(const std::vector<OpenBankGoodsInfo>& _goodsInfos);

                    /**
                     * 判断参数 GoodsInfos 是否已赋值
                     * @return GoodsInfos 是否已赋值
                     * 
                     */
                    bool GoodsInfosHasBeenSet() const;

                    /**
                     * 获取邮寄信息
                     * @return ShippingInfo 邮寄信息
                     * 
                     */
                    OpenBankShippingInfo GetShippingInfo() const;

                    /**
                     * 设置邮寄信息
                     * @param _shippingInfo 邮寄信息
                     * 
                     */
                    void SetShippingInfo(const OpenBankShippingInfo& _shippingInfo);

                    /**
                     * 判断参数 ShippingInfo 是否已赋值
                     * @return ShippingInfo 是否已赋值
                     * 
                     */
                    bool ShippingInfoHasBeenSet() const;

                    /**
                     * 获取账单信息
                     * @return BillingInfo 账单信息
                     * 
                     */
                    OpenBankBillingInfo GetBillingInfo() const;

                    /**
                     * 设置账单信息
                     * @param _billingInfo 账单信息
                     * 
                     */
                    void SetBillingInfo(const OpenBankBillingInfo& _billingInfo);

                    /**
                     * 判断参数 BillingInfo 是否已赋值
                     * @return BillingInfo 是否已赋值
                     * 
                     */
                    bool BillingInfoHasBeenSet() const;

                    /**
                     * 获取环境类型
__release__:生产环境
__sandbox__:沙箱环境
缺省默认为生产环境
                     * @return Environment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
缺省默认为生产环境
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境类型
__release__:生产环境
__sandbox__:沙箱环境
缺省默认为生产环境
                     * @param _environment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
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
                     * 渠道商户号
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 渠道名称
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 付款方式
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 外部商户订单号,只能是数字、大小写字母，且在同一个接入平台下唯一
                     */
                    std::string m_outOrderId;
                    bool m_outOrderIdHasBeenSet;

                    /**
                     * 付款金额，单位分
                     */
                    int64_t m_totalAmount;
                    bool m_totalAmountHasBeenSet;

                    /**
                     * 支付币种，参考附录：货币代码
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * 渠道子商户号
                     */
                    std::string m_channelSubMerchantId;
                    bool m_channelSubMerchantIdHasBeenSet;

                    /**
                     * 支付成功回调地址。
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * 前端跳转地址。通联支付成功后，支付网关跳回商户的地址
                     */
                    std::string m_frontUrl;
                    bool m_frontUrlHasBeenSet;

                    /**
                     * 网站语言。收银台显示语言，见附录网站语言
                     */
                    std::string m_frontLanguage;
                    bool m_frontLanguageHasBeenSet;

                    /**
                     * 付款备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 第三方拓展信息信息
                     */
                    std::string m_externalPaymentData;
                    bool m_externalPaymentDataHasBeenSet;

                    /**
                     * 商品信息
                     */
                    std::vector<OpenBankGoodsInfo> m_goodsInfos;
                    bool m_goodsInfosHasBeenSet;

                    /**
                     * 邮寄信息
                     */
                    OpenBankShippingInfo m_shippingInfo;
                    bool m_shippingInfoHasBeenSet;

                    /**
                     * 账单信息
                     */
                    OpenBankBillingInfo m_billingInfo;
                    bool m_billingInfoHasBeenSet;

                    /**
                     * 环境类型
__release__:生产环境
__sandbox__:沙箱环境
缺省默认为生产环境
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKGLOBALPAYMENTORDERREQUEST_H_
