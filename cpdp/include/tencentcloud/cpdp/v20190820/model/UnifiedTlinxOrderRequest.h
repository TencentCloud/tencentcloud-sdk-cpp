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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_UNIFIEDTLINXORDERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_UNIFIEDTLINXORDERREQUEST_H_

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
                * UnifiedTlinxOrder请求参数结构体
                */
                class UnifiedTlinxOrderRequest : public AbstractModel
                {
                public:
                    UnifiedTlinxOrderRequest();
                    ~UnifiedTlinxOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取使用门店OpenId
                     * @return OpenId 使用门店OpenId
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置使用门店OpenId
                     * @param _openId 使用门店OpenId
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取使用门店OpenKey
                     * @return OpenKey 使用门店OpenKey
                     * 
                     */
                    std::string GetOpenKey() const;

                    /**
                     * 设置使用门店OpenKey
                     * @param _openKey 使用门店OpenKey
                     * 
                     */
                    void SetOpenKey(const std::string& _openKey);

                    /**
                     * 判断参数 OpenKey 是否已赋值
                     * @return OpenKey 是否已赋值
                     * 
                     */
                    bool OpenKeyHasBeenSet() const;

                    /**
                     * 获取开发者流水号
                     * @return DeveloperNo 开发者流水号
                     * 
                     */
                    std::string GetDeveloperNo() const;

                    /**
                     * 设置开发者流水号
                     * @param _developerNo 开发者流水号
                     * 
                     */
                    void SetDeveloperNo(const std::string& _developerNo);

                    /**
                     * 判断参数 DeveloperNo 是否已赋值
                     * @return DeveloperNo 是否已赋值
                     * 
                     */
                    bool DeveloperNoHasBeenSet() const;

                    /**
                     * 获取支付标签
                     * @return PayTag 支付标签
                     * 
                     */
                    std::string GetPayTag() const;

                    /**
                     * 设置支付标签
                     * @param _payTag 支付标签
                     * 
                     */
                    void SetPayTag(const std::string& _payTag);

                    /**
                     * 判断参数 PayTag 是否已赋值
                     * @return PayTag 是否已赋值
                     * 
                     */
                    bool PayTagHasBeenSet() const;

                    /**
                     * 获取实际交易金额（以分为单位，没有小数点）
                     * @return TradeAmount 实际交易金额（以分为单位，没有小数点）
                     * 
                     */
                    std::string GetTradeAmount() const;

                    /**
                     * 设置实际交易金额（以分为单位，没有小数点）
                     * @param _tradeAmount 实际交易金额（以分为单位，没有小数点）
                     * 
                     */
                    void SetTradeAmount(const std::string& _tradeAmount);

                    /**
                     * 判断参数 TradeAmount 是否已赋值
                     * @return TradeAmount 是否已赋值
                     * 
                     */
                    bool TradeAmountHasBeenSet() const;

                    /**
                     * 获取交易结果异步通知url地址
                     * @return NotifyUrl 交易结果异步通知url地址
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置交易结果异步通知url地址
                     * @param _notifyUrl 交易结果异步通知url地址
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
                     * 获取付款方式名称(当PayTag为Diy时，PayName不能为空)
                     * @return PayName 付款方式名称(当PayTag为Diy时，PayName不能为空)
                     * 
                     */
                    std::string GetPayName() const;

                    /**
                     * 设置付款方式名称(当PayTag为Diy时，PayName不能为空)
                     * @param _payName 付款方式名称(当PayTag为Diy时，PayName不能为空)
                     * 
                     */
                    void SetPayName(const std::string& _payName);

                    /**
                     * 判断参数 PayName 是否已赋值
                     * @return PayName 是否已赋值
                     * 
                     */
                    bool PayNameHasBeenSet() const;

                    /**
                     * 获取公众号支付时，支付成功后跳转url地址
                     * @return JumpUrl 公众号支付时，支付成功后跳转url地址
                     * 
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置公众号支付时，支付成功后跳转url地址
                     * @param _jumpUrl 公众号支付时，支付成功后跳转url地址
                     * 
                     */
                    void SetJumpUrl(const std::string& _jumpUrl);

                    /**
                     * 判断参数 JumpUrl 是否已赋值
                     * @return JumpUrl 是否已赋值
                     * 
                     */
                    bool JumpUrlHasBeenSet() const;

                    /**
                     * 获取订单名称（描述）
                     * @return OrderName 订单名称（描述）
                     * 
                     */
                    std::string GetOrderName() const;

                    /**
                     * 设置订单名称（描述）
                     * @param _orderName 订单名称（描述）
                     * 
                     */
                    void SetOrderName(const std::string& _orderName);

                    /**
                     * 判断参数 OrderName 是否已赋值
                     * @return OrderName 是否已赋值
                     * 
                     */
                    bool OrderNameHasBeenSet() const;

                    /**
                     * 获取原始交易金额（以分为单位，没有小数点）
                     * @return OriginalAmount 原始交易金额（以分为单位，没有小数点）
                     * 
                     */
                    std::string GetOriginalAmount() const;

                    /**
                     * 设置原始交易金额（以分为单位，没有小数点）
                     * @param _originalAmount 原始交易金额（以分为单位，没有小数点）
                     * 
                     */
                    void SetOriginalAmount(const std::string& _originalAmount);

                    /**
                     * 判断参数 OriginalAmount 是否已赋值
                     * @return OriginalAmount 是否已赋值
                     * 
                     */
                    bool OriginalAmountHasBeenSet() const;

                    /**
                     * 获取抹零金额（以分为单位，没有小数点）
                     * @return IgnoreAmount 抹零金额（以分为单位，没有小数点）
                     * 
                     */
                    std::string GetIgnoreAmount() const;

                    /**
                     * 设置抹零金额（以分为单位，没有小数点）
                     * @param _ignoreAmount 抹零金额（以分为单位，没有小数点）
                     * 
                     */
                    void SetIgnoreAmount(const std::string& _ignoreAmount);

                    /**
                     * 判断参数 IgnoreAmount 是否已赋值
                     * @return IgnoreAmount 是否已赋值
                     * 
                     */
                    bool IgnoreAmountHasBeenSet() const;

                    /**
                     * 获取折扣金额（以分为单位，没有小数点）
                     * @return DiscountAmount 折扣金额（以分为单位，没有小数点）
                     * 
                     */
                    std::string GetDiscountAmount() const;

                    /**
                     * 设置折扣金额（以分为单位，没有小数点）
                     * @param _discountAmount 折扣金额（以分为单位，没有小数点）
                     * 
                     */
                    void SetDiscountAmount(const std::string& _discountAmount);

                    /**
                     * 判断参数 DiscountAmount 是否已赋值
                     * @return DiscountAmount 是否已赋值
                     * 
                     */
                    bool DiscountAmountHasBeenSet() const;

                    /**
                     * 获取交易帐号（银行卡号）
                     * @return TradeAccount 交易帐号（银行卡号）
                     * 
                     */
                    std::string GetTradeAccount() const;

                    /**
                     * 设置交易帐号（银行卡号）
                     * @param _tradeAccount 交易帐号（银行卡号）
                     * 
                     */
                    void SetTradeAccount(const std::string& _tradeAccount);

                    /**
                     * 判断参数 TradeAccount 是否已赋值
                     * @return TradeAccount 是否已赋值
                     * 
                     */
                    bool TradeAccountHasBeenSet() const;

                    /**
                     * 获取交易号（收单机构交易号）
                     * @return TradeNo 交易号（收单机构交易号）
                     * 
                     */
                    std::string GetTradeNo() const;

                    /**
                     * 设置交易号（收单机构交易号）
                     * @param _tradeNo 交易号（收单机构交易号）
                     * 
                     */
                    void SetTradeNo(const std::string& _tradeNo);

                    /**
                     * 判断参数 TradeNo 是否已赋值
                     * @return TradeNo 是否已赋值
                     * 
                     */
                    bool TradeNoHasBeenSet() const;

                    /**
                     * 获取条码支付的授权码（条码抢扫手机扫到的一串数字）
                     * @return AuthCode 条码支付的授权码（条码抢扫手机扫到的一串数字）
                     * 
                     */
                    std::string GetAuthCode() const;

                    /**
                     * 设置条码支付的授权码（条码抢扫手机扫到的一串数字）
                     * @param _authCode 条码支付的授权码（条码抢扫手机扫到的一串数字）
                     * 
                     */
                    void SetAuthCode(const std::string& _authCode);

                    /**
                     * 判断参数 AuthCode 是否已赋值
                     * @return AuthCode 是否已赋值
                     * 
                     */
                    bool AuthCodeHasBeenSet() const;

                    /**
                     * 获取订单标记，订单附加数据。
                     * @return Tag 订单标记，订单附加数据。
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置订单标记，订单附加数据。
                     * @param _tag 订单标记，订单附加数据。
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取订单备注
                     * @return Remark 订单备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置订单备注
                     * @param _remark 订单备注
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
                     * 获取收单机构原始交易报文，请转换为json
                     * @return TradeResult 收单机构原始交易报文，请转换为json
                     * 
                     */
                    std::string GetTradeResult() const;

                    /**
                     * 设置收单机构原始交易报文，请转换为json
                     * @param _tradeResult 收单机构原始交易报文，请转换为json
                     * 
                     */
                    void SetTradeResult(const std::string& _tradeResult);

                    /**
                     * 判断参数 TradeResult 是否已赋值
                     * @return TradeResult 是否已赋值
                     * 
                     */
                    bool TradeResultHasBeenSet() const;

                    /**
                     * 获取0-不分账，1-需分账。为1时标记为待分账订单，待分账订单不会进行清算。不传默认为不分账。
                     * @return Royalty 0-不分账，1-需分账。为1时标记为待分账订单，待分账订单不会进行清算。不传默认为不分账。
                     * 
                     */
                    std::string GetRoyalty() const;

                    /**
                     * 设置0-不分账，1-需分账。为1时标记为待分账订单，待分账订单不会进行清算。不传默认为不分账。
                     * @param _royalty 0-不分账，1-需分账。为1时标记为待分账订单，待分账订单不会进行清算。不传默认为不分账。
                     * 
                     */
                    void SetRoyalty(const std::string& _royalty);

                    /**
                     * 判断参数 Royalty 是否已赋值
                     * @return Royalty 是否已赋值
                     * 
                     */
                    bool RoyaltyHasBeenSet() const;

                    /**
                     * 获取小程序支付参数：填默认值 1
                     * @return Jsapi 小程序支付参数：填默认值 1
                     * 
                     */
                    std::string GetJsapi() const;

                    /**
                     * 设置小程序支付参数：填默认值 1
                     * @param _jsapi 小程序支付参数：填默认值 1
                     * 
                     */
                    void SetJsapi(const std::string& _jsapi);

                    /**
                     * 判断参数 Jsapi 是否已赋值
                     * @return Jsapi 是否已赋值
                     * 
                     */
                    bool JsapiHasBeenSet() const;

                    /**
                     * 获取小程序支付参数：
当前调起支付的小程序APPID
                     * @return SubAppId 小程序支付参数：
当前调起支付的小程序APPID
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置小程序支付参数：
当前调起支付的小程序APPID
                     * @param _subAppId 小程序支付参数：
当前调起支付的小程序APPID
                     * 
                     */
                    void SetSubAppId(const std::string& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取小程序支付参数:
用户在子商户appid下的唯一标识。
                     * @return SubOpenId 小程序支付参数:
用户在子商户appid下的唯一标识。
                     * 
                     */
                    std::string GetSubOpenId() const;

                    /**
                     * 设置小程序支付参数:
用户在子商户appid下的唯一标识。
                     * @param _subOpenId 小程序支付参数:
用户在子商户appid下的唯一标识。
                     * 
                     */
                    void SetSubOpenId(const std::string& _subOpenId);

                    /**
                     * 判断参数 SubOpenId 是否已赋值
                     * @return SubOpenId 是否已赋值
                     * 
                     */
                    bool SubOpenIdHasBeenSet() const;

                    /**
                     * 获取沙箱环境填sandbox，正式环境不填
                     * @return Profile 沙箱环境填sandbox，正式环境不填
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置沙箱环境填sandbox，正式环境不填
                     * @param _profile 沙箱环境填sandbox，正式环境不填
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * 使用门店OpenId
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 使用门店OpenKey
                     */
                    std::string m_openKey;
                    bool m_openKeyHasBeenSet;

                    /**
                     * 开发者流水号
                     */
                    std::string m_developerNo;
                    bool m_developerNoHasBeenSet;

                    /**
                     * 支付标签
                     */
                    std::string m_payTag;
                    bool m_payTagHasBeenSet;

                    /**
                     * 实际交易金额（以分为单位，没有小数点）
                     */
                    std::string m_tradeAmount;
                    bool m_tradeAmountHasBeenSet;

                    /**
                     * 交易结果异步通知url地址
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * 付款方式名称(当PayTag为Diy时，PayName不能为空)
                     */
                    std::string m_payName;
                    bool m_payNameHasBeenSet;

                    /**
                     * 公众号支付时，支付成功后跳转url地址
                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                    /**
                     * 订单名称（描述）
                     */
                    std::string m_orderName;
                    bool m_orderNameHasBeenSet;

                    /**
                     * 原始交易金额（以分为单位，没有小数点）
                     */
                    std::string m_originalAmount;
                    bool m_originalAmountHasBeenSet;

                    /**
                     * 抹零金额（以分为单位，没有小数点）
                     */
                    std::string m_ignoreAmount;
                    bool m_ignoreAmountHasBeenSet;

                    /**
                     * 折扣金额（以分为单位，没有小数点）
                     */
                    std::string m_discountAmount;
                    bool m_discountAmountHasBeenSet;

                    /**
                     * 交易帐号（银行卡号）
                     */
                    std::string m_tradeAccount;
                    bool m_tradeAccountHasBeenSet;

                    /**
                     * 交易号（收单机构交易号）
                     */
                    std::string m_tradeNo;
                    bool m_tradeNoHasBeenSet;

                    /**
                     * 条码支付的授权码（条码抢扫手机扫到的一串数字）
                     */
                    std::string m_authCode;
                    bool m_authCodeHasBeenSet;

                    /**
                     * 订单标记，订单附加数据。
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 订单备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 收单机构原始交易报文，请转换为json
                     */
                    std::string m_tradeResult;
                    bool m_tradeResultHasBeenSet;

                    /**
                     * 0-不分账，1-需分账。为1时标记为待分账订单，待分账订单不会进行清算。不传默认为不分账。
                     */
                    std::string m_royalty;
                    bool m_royaltyHasBeenSet;

                    /**
                     * 小程序支付参数：填默认值 1
                     */
                    std::string m_jsapi;
                    bool m_jsapiHasBeenSet;

                    /**
                     * 小程序支付参数：
当前调起支付的小程序APPID
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 小程序支付参数:
用户在子商户appid下的唯一标识。
                     */
                    std::string m_subOpenId;
                    bool m_subOpenIdHasBeenSet;

                    /**
                     * 沙箱环境填sandbox，正式环境不填
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_UNIFIEDTLINXORDERREQUEST_H_
