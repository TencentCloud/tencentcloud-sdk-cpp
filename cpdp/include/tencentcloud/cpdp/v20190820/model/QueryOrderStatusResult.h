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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYORDERSTATUSRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYORDERSTATUSRESULT_H_

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
                * 查询订单付款状态响应对象
                */
                class QueryOrderStatusResult : public AbstractModel
                {
                public:
                    QueryOrderStatusResult();
                    ~QueryOrderStatusResult() = default;
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
                     * 获取开始交易时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TradeTime 开始交易时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTradeTime() const;

                    /**
                     * 设置开始交易时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tradeTime 开始交易时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTradeTime(const std::string& _tradeTime);

                    /**
                     * 判断参数 TradeTime 是否已赋值
                     * @return TradeTime 是否已赋值
                     * 
                     */
                    bool TradeTimeHasBeenSet() const;

                    /**
                     * 获取折扣金额（以分为单位，没有小数点）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiscountAmount 折扣金额（以分为单位，没有小数点）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiscountAmount() const;

                    /**
                     * 设置折扣金额（以分为单位，没有小数点）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _discountAmount 折扣金额（以分为单位，没有小数点）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取商户号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MerchantNo 商户号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMerchantNo() const;

                    /**
                     * 设置商户号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _merchantNo 商户号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMerchantNo(const std::string& _merchantNo);

                    /**
                     * 判断参数 MerchantNo 是否已赋值
                     * @return MerchantNo 是否已赋值
                     * 
                     */
                    bool MerchantNoHasBeenSet() const;

                    /**
                     * 获取订单备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 订单备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置订单备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 订单备注
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取订单标题
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderName 订单标题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrderName() const;

                    /**
                     * 设置订单标题
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orderName 订单标题
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取原始金额（以分为单位，没有小数点）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginalAmount 原始金额（以分为单位，没有小数点）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginalAmount() const;

                    /**
                     * 设置原始金额（以分为单位，没有小数点）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originalAmount 原始金额（以分为单位，没有小数点）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取门店编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShopNo 门店编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShopNo() const;

                    /**
                     * 设置门店编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shopNo 门店编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShopNo(const std::string& _shopNo);

                    /**
                     * 判断参数 ShopNo 是否已赋值
                     * @return ShopNo 是否已赋值
                     * 
                     */
                    bool ShopNoHasBeenSet() const;

                    /**
                     * 获取收单机构原始交易数据，如果返回非标准json数据，请自行转换
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TradeResult 收单机构原始交易数据，如果返回非标准json数据，请自行转换
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTradeResult() const;

                    /**
                     * 设置收单机构原始交易数据，如果返回非标准json数据，请自行转换
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tradeResult 收单机构原始交易数据，如果返回非标准json数据，请自行转换
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取订单流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderId 订单流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orderId 订单流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取订单类型（1消费，2辙单）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderType 订单类型（1消费，2辙单）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置订单类型（1消费，2辙单）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orderType 订单类型（1消费，2辙单）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取收单机构交易号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TradeNo 收单机构交易号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTradeNo() const;

                    /**
                     * 设置收单机构交易号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tradeNo 收单机构交易号
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取原始订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginalOrderNo 原始订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginalOrderNo() const;

                    /**
                     * 设置原始订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originalOrderNo 原始订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginalOrderNo(const std::string& _originalOrderNo);

                    /**
                     * 判断参数 OriginalOrderNo 是否已赋值
                     * @return OriginalOrderNo 是否已赋值
                     * 
                     */
                    bool OriginalOrderNoHasBeenSet() const;

                    /**
                     * 获取订单标记，订单附加数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tag 订单标记，订单附加数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置订单标记，订单附加数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tag 订单标记，订单附加数据
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取下单时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddTime 下单时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置下单时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _addTime 下单时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取收银员编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CashierId 收银员编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCashierId() const;

                    /**
                     * 设置收银员编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cashierId 收银员编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCashierId(const std::string& _cashierId);

                    /**
                     * 判断参数 CashierId 是否已赋值
                     * @return CashierId 是否已赋值
                     * 
                     */
                    bool CashierIdHasBeenSet() const;

                    /**
                     * 获取收银员名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CashierRealName 收银员名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCashierRealName() const;

                    /**
                     * 设置收银员名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cashierRealName 收银员名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCashierRealName(const std::string& _cashierRealName);

                    /**
                     * 判断参数 CashierRealName 是否已赋值
                     * @return CashierRealName 是否已赋值
                     * 
                     */
                    bool CashierRealNameHasBeenSet() const;

                    /**
                     * 获取店铺全称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShopFullName 店铺全称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShopFullName() const;

                    /**
                     * 设置店铺全称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shopFullName 店铺全称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShopFullName(const std::string& _shopFullName);

                    /**
                     * 判断参数 ShopFullName 是否已赋值
                     * @return ShopFullName 是否已赋值
                     * 
                     */
                    bool ShopFullNameHasBeenSet() const;

                    /**
                     * 获取店铺名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShopName 店铺名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShopName() const;

                    /**
                     * 设置店铺名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shopName 店铺名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShopName(const std::string& _shopName);

                    /**
                     * 判断参数 ShopName 是否已赋值
                     * @return ShopName 是否已赋值
                     * 
                     */
                    bool ShopNameHasBeenSet() const;

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
                     * 开始交易时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tradeTime;
                    bool m_tradeTimeHasBeenSet;

                    /**
                     * 折扣金额（以分为单位，没有小数点）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_discountAmount;
                    bool m_discountAmountHasBeenSet;

                    /**
                     * 商户号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_merchantNo;
                    bool m_merchantNoHasBeenSet;

                    /**
                     * 订单备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 订单标题
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orderName;
                    bool m_orderNameHasBeenSet;

                    /**
                     * 原始金额（以分为单位，没有小数点）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originalAmount;
                    bool m_originalAmountHasBeenSet;

                    /**
                     * 门店编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shopNo;
                    bool m_shopNoHasBeenSet;

                    /**
                     * 收单机构原始交易数据，如果返回非标准json数据，请自行转换
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tradeResult;
                    bool m_tradeResultHasBeenSet;

                    /**
                     * 订单流水号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 订单类型（1消费，2辙单）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 收单机构交易号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tradeNo;
                    bool m_tradeNoHasBeenSet;

                    /**
                     * 原始订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originalOrderNo;
                    bool m_originalOrderNoHasBeenSet;

                    /**
                     * 订单标记，订单附加数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 下单时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 收银员编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cashierId;
                    bool m_cashierIdHasBeenSet;

                    /**
                     * 收银员名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cashierRealName;
                    bool m_cashierRealNameHasBeenSet;

                    /**
                     * 店铺全称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shopFullName;
                    bool m_shopFullNameHasBeenSet;

                    /**
                     * 店铺名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shopName;
                    bool m_shopNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYORDERSTATUSRESULT_H_
