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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRADEDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRADEDATA_H_

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
                * 贸易材料明细查询数据
                */
                class QueryTradeData : public AbstractModel
                {
                public:
                    QueryTradeData();
                    ~QueryTradeData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取商户号
                     * @return MerchantId 商户号
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置商户号
                     * @param _merchantId 商户号
                     * 
                     */
                    void SetMerchantId(const std::string& _merchantId);

                    /**
                     * 判断参数 MerchantId 是否已赋值
                     * @return MerchantId 是否已赋值
                     * 
                     */
                    bool MerchantIdHasBeenSet() const;

                    /**
                     * 获取贸易材料流水号
                     * @return TradeFileId 贸易材料流水号
                     * 
                     */
                    std::string GetTradeFileId() const;

                    /**
                     * 设置贸易材料流水号
                     * @param _tradeFileId 贸易材料流水号
                     * 
                     */
                    void SetTradeFileId(const std::string& _tradeFileId);

                    /**
                     * 判断参数 TradeFileId 是否已赋值
                     * @return TradeFileId 是否已赋值
                     * 
                     */
                    bool TradeFileIdHasBeenSet() const;

                    /**
                     * 获取贸易材料订单号
                     * @return TradeOrderId 贸易材料订单号
                     * 
                     */
                    std::string GetTradeOrderId() const;

                    /**
                     * 设置贸易材料订单号
                     * @param _tradeOrderId 贸易材料订单号
                     * 
                     */
                    void SetTradeOrderId(const std::string& _tradeOrderId);

                    /**
                     * 判断参数 TradeOrderId 是否已赋值
                     * @return TradeOrderId 是否已赋值
                     * 
                     */
                    bool TradeOrderIdHasBeenSet() const;

                    /**
                     * 获取审核状态
                     * @return Status 审核状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置审核状态
                     * @param _status 审核状态
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
                     * 获取失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailReason 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failReason 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取付款人ID
                     * @return PayerId 付款人ID
                     * 
                     */
                    std::string GetPayerId() const;

                    /**
                     * 设置付款人ID
                     * @param _payerId 付款人ID
                     * 
                     */
                    void SetPayerId(const std::string& _payerId);

                    /**
                     * 判断参数 PayerId 是否已赋值
                     * @return PayerId 是否已赋值
                     * 
                     */
                    bool PayerIdHasBeenSet() const;

                    /**
                     * 获取收款人姓名
                     * @return PayeeName 收款人姓名
                     * 
                     */
                    std::string GetPayeeName() const;

                    /**
                     * 设置收款人姓名
                     * @param _payeeName 收款人姓名
                     * 
                     */
                    void SetPayeeName(const std::string& _payeeName);

                    /**
                     * 判断参数 PayeeName 是否已赋值
                     * @return PayeeName 是否已赋值
                     * 
                     */
                    bool PayeeNameHasBeenSet() const;

                    /**
                     * 获取收款人常驻国家或地区编码
                     * @return PayeeCountryCode 收款人常驻国家或地区编码
                     * 
                     */
                    std::string GetPayeeCountryCode() const;

                    /**
                     * 设置收款人常驻国家或地区编码
                     * @param _payeeCountryCode 收款人常驻国家或地区编码
                     * 
                     */
                    void SetPayeeCountryCode(const std::string& _payeeCountryCode);

                    /**
                     * 判断参数 PayeeCountryCode 是否已赋值
                     * @return PayeeCountryCode 是否已赋值
                     * 
                     */
                    bool PayeeCountryCodeHasBeenSet() const;

                    /**
                     * 获取交易类型
                     * @return TradeType 交易类型
                     * 
                     */
                    std::string GetTradeType() const;

                    /**
                     * 设置交易类型
                     * @param _tradeType 交易类型
                     * 
                     */
                    void SetTradeType(const std::string& _tradeType);

                    /**
                     * 判断参数 TradeType 是否已赋值
                     * @return TradeType 是否已赋值
                     * 
                     */
                    bool TradeTypeHasBeenSet() const;

                    /**
                     * 获取交易日期
                     * @return TradeTime 交易日期
                     * 
                     */
                    std::string GetTradeTime() const;

                    /**
                     * 设置交易日期
                     * @param _tradeTime 交易日期
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
                     * 获取交易币种
                     * @return TradeCurrency 交易币种
                     * 
                     */
                    std::string GetTradeCurrency() const;

                    /**
                     * 设置交易币种
                     * @param _tradeCurrency 交易币种
                     * 
                     */
                    void SetTradeCurrency(const std::string& _tradeCurrency);

                    /**
                     * 判断参数 TradeCurrency 是否已赋值
                     * @return TradeCurrency 是否已赋值
                     * 
                     */
                    bool TradeCurrencyHasBeenSet() const;

                    /**
                     * 获取交易金额
                     * @return TradeAmount 交易金额
                     * 
                     */
                    std::string GetTradeAmount() const;

                    /**
                     * 设置交易金额
                     * @param _tradeAmount 交易金额
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
                     * 获取交易名称
                     * @return TradeName 交易名称
                     * 
                     */
                    std::string GetTradeName() const;

                    /**
                     * 设置交易名称
                     * @param _tradeName 交易名称
                     * 
                     */
                    void SetTradeName(const std::string& _tradeName);

                    /**
                     * 判断参数 TradeName 是否已赋值
                     * @return TradeName 是否已赋值
                     * 
                     */
                    bool TradeNameHasBeenSet() const;

                    /**
                     * 获取交易数量
                     * @return TradeCount 交易数量
                     * 
                     */
                    int64_t GetTradeCount() const;

                    /**
                     * 设置交易数量
                     * @param _tradeCount 交易数量
                     * 
                     */
                    void SetTradeCount(const int64_t& _tradeCount);

                    /**
                     * 判断参数 TradeCount 是否已赋值
                     * @return TradeCount 是否已赋值
                     * 
                     */
                    bool TradeCountHasBeenSet() const;

                    /**
                     * 获取货贸承运人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GoodsCarrier 货贸承运人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGoodsCarrier() const;

                    /**
                     * 设置货贸承运人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _goodsCarrier 货贸承运人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGoodsCarrier(const std::string& _goodsCarrier);

                    /**
                     * 判断参数 GoodsCarrier 是否已赋值
                     * @return GoodsCarrier 是否已赋值
                     * 
                     */
                    bool GoodsCarrierHasBeenSet() const;

                    /**
                     * 获取服贸交易细节
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceDetail 服贸交易细节
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceDetail() const;

                    /**
                     * 设置服贸交易细节
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceDetail 服贸交易细节
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceDetail(const std::string& _serviceDetail);

                    /**
                     * 判断参数 ServiceDetail 是否已赋值
                     * @return ServiceDetail 是否已赋值
                     * 
                     */
                    bool ServiceDetailHasBeenSet() const;

                    /**
                     * 获取服贸服务时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceTime 服贸服务时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceTime() const;

                    /**
                     * 设置服贸服务时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceTime 服贸服务时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceTime(const std::string& _serviceTime);

                    /**
                     * 判断参数 ServiceTime 是否已赋值
                     * @return ServiceTime 是否已赋值
                     * 
                     */
                    bool ServiceTimeHasBeenSet() const;

                private:

                    /**
                     * 商户号
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 贸易材料流水号
                     */
                    std::string m_tradeFileId;
                    bool m_tradeFileIdHasBeenSet;

                    /**
                     * 贸易材料订单号
                     */
                    std::string m_tradeOrderId;
                    bool m_tradeOrderIdHasBeenSet;

                    /**
                     * 审核状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * 付款人ID
                     */
                    std::string m_payerId;
                    bool m_payerIdHasBeenSet;

                    /**
                     * 收款人姓名
                     */
                    std::string m_payeeName;
                    bool m_payeeNameHasBeenSet;

                    /**
                     * 收款人常驻国家或地区编码
                     */
                    std::string m_payeeCountryCode;
                    bool m_payeeCountryCodeHasBeenSet;

                    /**
                     * 交易类型
                     */
                    std::string m_tradeType;
                    bool m_tradeTypeHasBeenSet;

                    /**
                     * 交易日期
                     */
                    std::string m_tradeTime;
                    bool m_tradeTimeHasBeenSet;

                    /**
                     * 交易币种
                     */
                    std::string m_tradeCurrency;
                    bool m_tradeCurrencyHasBeenSet;

                    /**
                     * 交易金额
                     */
                    std::string m_tradeAmount;
                    bool m_tradeAmountHasBeenSet;

                    /**
                     * 交易名称
                     */
                    std::string m_tradeName;
                    bool m_tradeNameHasBeenSet;

                    /**
                     * 交易数量
                     */
                    int64_t m_tradeCount;
                    bool m_tradeCountHasBeenSet;

                    /**
                     * 货贸承运人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_goodsCarrier;
                    bool m_goodsCarrierHasBeenSet;

                    /**
                     * 服贸交易细节
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceDetail;
                    bool m_serviceDetailHasBeenSet;

                    /**
                     * 服贸服务时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceTime;
                    bool m_serviceTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRADEDATA_H_
