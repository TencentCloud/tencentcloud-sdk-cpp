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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_PAYORDERRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_PAYORDERRESULT_H_

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
                * 订单支付响应对象
                */
                class PayOrderResult : public AbstractModel
                {
                public:
                    PayOrderResult();
                    ~PayOrderResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取付款订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderNo 付款订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrderNo() const;

                    /**
                     * 设置付款订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orderNo 付款订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrderNo(const std::string& _orderNo);

                    /**
                     * 判断参数 OrderNo 是否已赋值
                     * @return OrderNo 是否已赋值
                     * 
                     */
                    bool OrderNoHasBeenSet() const;

                    /**
                     * 获取开发者流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeveloperNo 开发者流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeveloperNo() const;

                    /**
                     * 设置开发者流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _developerNo 开发者流水号
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取交易优惠金额（免充值券）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TradeDiscountAmount 交易优惠金额（免充值券）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTradeDiscountAmount() const;

                    /**
                     * 设置交易优惠金额（免充值券）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tradeDiscountAmount 交易优惠金额（免充值券）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTradeDiscountAmount(const std::string& _tradeDiscountAmount);

                    /**
                     * 判断参数 TradeDiscountAmount 是否已赋值
                     * @return TradeDiscountAmount 是否已赋值
                     * 
                     */
                    bool TradeDiscountAmountHasBeenSet() const;

                    /**
                     * 获取付款方式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayName 付款方式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayName() const;

                    /**
                     * 设置付款方式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payName 付款方式名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取商户流水号（从1开始自增长不重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderMerchantId 商户流水号（从1开始自增长不重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrderMerchantId() const;

                    /**
                     * 设置商户流水号（从1开始自增长不重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orderMerchantId 商户流水号（从1开始自增长不重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrderMerchantId(const std::string& _orderMerchantId);

                    /**
                     * 判断参数 OrderMerchantId 是否已赋值
                     * @return OrderMerchantId 是否已赋值
                     * 
                     */
                    bool OrderMerchantIdHasBeenSet() const;

                    /**
                     * 获取交易帐号（银行卡号、支付宝帐号、微信帐号等，某些收单机构没有此数据）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TradeAccount 交易帐号（银行卡号、支付宝帐号、微信帐号等，某些收单机构没有此数据）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTradeAccount() const;

                    /**
                     * 设置交易帐号（银行卡号、支付宝帐号、微信帐号等，某些收单机构没有此数据）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tradeAccount 交易帐号（银行卡号、支付宝帐号、微信帐号等，某些收单机构没有此数据）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取实际交易金额（以分为单位，没有小数点）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TradeAmount 实际交易金额（以分为单位，没有小数点）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTradeAmount() const;

                    /**
                     * 设置实际交易金额（以分为单位，没有小数点）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tradeAmount 实际交易金额（以分为单位，没有小数点）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取币种签名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrencySign 币种签名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCurrencySign() const;

                    /**
                     * 设置币种签名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currencySign 币种签名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurrencySign(const std::string& _currencySign);

                    /**
                     * 判断参数 CurrencySign 是否已赋值
                     * @return CurrencySign 是否已赋值
                     * 
                     */
                    bool CurrencySignHasBeenSet() const;

                    /**
                     * 获取付款完成时间（以收单机构为准）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TradePayTime 付款完成时间（以收单机构为准）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTradePayTime() const;

                    /**
                     * 设置付款完成时间（以收单机构为准）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tradePayTime 付款完成时间（以收单机构为准）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTradePayTime(const std::string& _tradePayTime);

                    /**
                     * 判断参数 TradePayTime 是否已赋值
                     * @return TradePayTime 是否已赋值
                     * 
                     */
                    bool TradePayTimeHasBeenSet() const;

                    /**
                     * 获取门店流水号（从1开始自增长不重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShopOrderId 门店流水号（从1开始自增长不重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShopOrderId() const;

                    /**
                     * 设置门店流水号（从1开始自增长不重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shopOrderId 门店流水号（从1开始自增长不重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShopOrderId(const std::string& _shopOrderId);

                    /**
                     * 判断参数 ShopOrderId 是否已赋值
                     * @return ShopOrderId 是否已赋值
                     * 
                     */
                    bool ShopOrderIdHasBeenSet() const;

                    /**
                     * 获取支付标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayTag 支付标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayTag() const;

                    /**
                     * 设置支付标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payTag 支付标签
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取订单状态（1交易成功，2待支付，4已取消，9等待用户输入密码确认
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 订单状态（1交易成功，2待支付，4已取消，9等待用户输入密码确认
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置订单状态（1交易成功，2待支付，4已取消，9等待用户输入密码确认
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 订单状态（1交易成功，2待支付，4已取消，9等待用户输入密码确认
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取币种代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderCurrency 币种代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrderCurrency() const;

                    /**
                     * 设置币种代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orderCurrency 币种代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrderCurrency(const std::string& _orderCurrency);

                    /**
                     * 判断参数 OrderCurrency 是否已赋值
                     * @return OrderCurrency 是否已赋值
                     * 
                     */
                    bool OrderCurrencyHasBeenSet() const;

                    /**
                     * 获取二维码字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TradeQrcode 二维码字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTradeQrcode() const;

                    /**
                     * 设置二维码字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tradeQrcode 二维码字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTradeQrcode(const std::string& _tradeQrcode);

                    /**
                     * 判断参数 TradeQrcode 是否已赋值
                     * @return TradeQrcode 是否已赋值
                     * 
                     */
                    bool TradeQrcodeHasBeenSet() const;

                    /**
                     * 获取微信返回调起小程序/原生JS支付的appid参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WechatAppId 微信返回调起小程序/原生JS支付的appid参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWechatAppId() const;

                    /**
                     * 设置微信返回调起小程序/原生JS支付的appid参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wechatAppId 微信返回调起小程序/原生JS支付的appid参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWechatAppId(const std::string& _wechatAppId);

                    /**
                     * 判断参数 WechatAppId 是否已赋值
                     * @return WechatAppId 是否已赋值
                     * 
                     */
                    bool WechatAppIdHasBeenSet() const;

                    /**
                     * 获取微信返回调起小程序/原生JS支付的timeStamp参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WechatTimeStamp 微信返回调起小程序/原生JS支付的timeStamp参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWechatTimeStamp() const;

                    /**
                     * 设置微信返回调起小程序/原生JS支付的timeStamp参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wechatTimeStamp 微信返回调起小程序/原生JS支付的timeStamp参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWechatTimeStamp(const std::string& _wechatTimeStamp);

                    /**
                     * 判断参数 WechatTimeStamp 是否已赋值
                     * @return WechatTimeStamp 是否已赋值
                     * 
                     */
                    bool WechatTimeStampHasBeenSet() const;

                    /**
                     * 获取微信返回调起小程序/原生JS支付的nonceStr参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WechatNonceStr 微信返回调起小程序/原生JS支付的nonceStr参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWechatNonceStr() const;

                    /**
                     * 设置微信返回调起小程序/原生JS支付的nonceStr参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wechatNonceStr 微信返回调起小程序/原生JS支付的nonceStr参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWechatNonceStr(const std::string& _wechatNonceStr);

                    /**
                     * 判断参数 WechatNonceStr 是否已赋值
                     * @return WechatNonceStr 是否已赋值
                     * 
                     */
                    bool WechatNonceStrHasBeenSet() const;

                    /**
                     * 获取微信返回调起小程序/原生JS支付的signType参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WechatSignType 微信返回调起小程序/原生JS支付的signType参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWechatSignType() const;

                    /**
                     * 设置微信返回调起小程序/原生JS支付的signType参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wechatSignType 微信返回调起小程序/原生JS支付的signType参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWechatSignType(const std::string& _wechatSignType);

                    /**
                     * 判断参数 WechatSignType 是否已赋值
                     * @return WechatSignType 是否已赋值
                     * 
                     */
                    bool WechatSignTypeHasBeenSet() const;

                    /**
                     * 获取微信返回调起小程序/原生JS支付的package参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WechatPackage 微信返回调起小程序/原生JS支付的package参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWechatPackage() const;

                    /**
                     * 设置微信返回调起小程序/原生JS支付的package参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wechatPackage 微信返回调起小程序/原生JS支付的package参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWechatPackage(const std::string& _wechatPackage);

                    /**
                     * 判断参数 WechatPackage 是否已赋值
                     * @return WechatPackage 是否已赋值
                     * 
                     */
                    bool WechatPackageHasBeenSet() const;

                    /**
                     * 获取微信返回调起小程序/原生JS支付的paySign参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WechatPaySign 微信返回调起小程序/原生JS支付的paySign参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWechatPaySign() const;

                    /**
                     * 设置微信返回调起小程序/原生JS支付的paySign参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wechatPaySign 微信返回调起小程序/原生JS支付的paySign参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWechatPaySign(const std::string& _wechatPaySign);

                    /**
                     * 判断参数 WechatPaySign 是否已赋值
                     * @return WechatPaySign 是否已赋值
                     * 
                     */
                    bool WechatPaySignHasBeenSet() const;

                private:

                    /**
                     * 付款订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orderNo;
                    bool m_orderNoHasBeenSet;

                    /**
                     * 开发者流水号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_developerNo;
                    bool m_developerNoHasBeenSet;

                    /**
                     * 交易优惠金额（免充值券）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tradeDiscountAmount;
                    bool m_tradeDiscountAmountHasBeenSet;

                    /**
                     * 付款方式名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payName;
                    bool m_payNameHasBeenSet;

                    /**
                     * 商户流水号（从1开始自增长不重复）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orderMerchantId;
                    bool m_orderMerchantIdHasBeenSet;

                    /**
                     * 交易帐号（银行卡号、支付宝帐号、微信帐号等，某些收单机构没有此数据）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tradeAccount;
                    bool m_tradeAccountHasBeenSet;

                    /**
                     * 实际交易金额（以分为单位，没有小数点）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tradeAmount;
                    bool m_tradeAmountHasBeenSet;

                    /**
                     * 币种签名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_currencySign;
                    bool m_currencySignHasBeenSet;

                    /**
                     * 付款完成时间（以收单机构为准）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tradePayTime;
                    bool m_tradePayTimeHasBeenSet;

                    /**
                     * 门店流水号（从1开始自增长不重复）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shopOrderId;
                    bool m_shopOrderIdHasBeenSet;

                    /**
                     * 支付标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payTag;
                    bool m_payTagHasBeenSet;

                    /**
                     * 订单状态（1交易成功，2待支付，4已取消，9等待用户输入密码确认
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 币种代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orderCurrency;
                    bool m_orderCurrencyHasBeenSet;

                    /**
                     * 二维码字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tradeQrcode;
                    bool m_tradeQrcodeHasBeenSet;

                    /**
                     * 微信返回调起小程序/原生JS支付的appid参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wechatAppId;
                    bool m_wechatAppIdHasBeenSet;

                    /**
                     * 微信返回调起小程序/原生JS支付的timeStamp参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wechatTimeStamp;
                    bool m_wechatTimeStampHasBeenSet;

                    /**
                     * 微信返回调起小程序/原生JS支付的nonceStr参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wechatNonceStr;
                    bool m_wechatNonceStrHasBeenSet;

                    /**
                     * 微信返回调起小程序/原生JS支付的signType参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wechatSignType;
                    bool m_wechatSignTypeHasBeenSet;

                    /**
                     * 微信返回调起小程序/原生JS支付的package参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wechatPackage;
                    bool m_wechatPackageHasBeenSet;

                    /**
                     * 微信返回调起小程序/原生JS支付的paySign参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wechatPaySign;
                    bool m_wechatPaySignHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_PAYORDERRESULT_H_
