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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYDECLAREDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYDECLAREDATA_H_

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
                * 成功申报材料查询数据
                */
                class QueryDeclareData : public AbstractModel
                {
                public:
                    QueryDeclareData();
                    ~QueryDeclareData() = default;
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
                     * 获取对接方汇出指令编号
                     * @return TransactionId 对接方汇出指令编号
                     * 
                     */
                    std::string GetTransactionId() const;

                    /**
                     * 设置对接方汇出指令编号
                     * @param _transactionId 对接方汇出指令编号
                     * 
                     */
                    void SetTransactionId(const std::string& _transactionId);

                    /**
                     * 判断参数 TransactionId 是否已赋值
                     * @return TransactionId 是否已赋值
                     * 
                     */
                    bool TransactionIdHasBeenSet() const;

                    /**
                     * 获取申报流水号
                     * @return DeclareId 申报流水号
                     * 
                     */
                    std::string GetDeclareId() const;

                    /**
                     * 设置申报流水号
                     * @param _declareId 申报流水号
                     * 
                     */
                    void SetDeclareId(const std::string& _declareId);

                    /**
                     * 判断参数 DeclareId 是否已赋值
                     * @return DeclareId 是否已赋值
                     * 
                     */
                    bool DeclareIdHasBeenSet() const;

                    /**
                     * 获取原申报流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginalDeclareId 原申报流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginalDeclareId() const;

                    /**
                     * 设置原申报流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originalDeclareId 原申报流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginalDeclareId(const std::string& _originalDeclareId);

                    /**
                     * 判断参数 OriginalDeclareId 是否已赋值
                     * @return OriginalDeclareId 是否已赋值
                     * 
                     */
                    bool OriginalDeclareIdHasBeenSet() const;

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
                     * 获取源币种
                     * @return SourceCurrency 源币种
                     * 
                     */
                    std::string GetSourceCurrency() const;

                    /**
                     * 设置源币种
                     * @param _sourceCurrency 源币种
                     * 
                     */
                    void SetSourceCurrency(const std::string& _sourceCurrency);

                    /**
                     * 判断参数 SourceCurrency 是否已赋值
                     * @return SourceCurrency 是否已赋值
                     * 
                     */
                    bool SourceCurrencyHasBeenSet() const;

                    /**
                     * 获取源金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceAmount 源金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceAmount() const;

                    /**
                     * 设置源金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceAmount 源金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceAmount(const std::string& _sourceAmount);

                    /**
                     * 判断参数 SourceAmount 是否已赋值
                     * @return SourceAmount 是否已赋值
                     * 
                     */
                    bool SourceAmountHasBeenSet() const;

                    /**
                     * 获取目的币种
                     * @return TargetCurrency 目的币种
                     * 
                     */
                    std::string GetTargetCurrency() const;

                    /**
                     * 设置目的币种
                     * @param _targetCurrency 目的币种
                     * 
                     */
                    void SetTargetCurrency(const std::string& _targetCurrency);

                    /**
                     * 判断参数 TargetCurrency 是否已赋值
                     * @return TargetCurrency 是否已赋值
                     * 
                     */
                    bool TargetCurrencyHasBeenSet() const;

                    /**
                     * 获取目的金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetAmount 目的金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetAmount() const;

                    /**
                     * 设置目的金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetAmount 目的金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetAmount(const std::string& _targetAmount);

                    /**
                     * 判断参数 TargetAmount 是否已赋值
                     * @return TargetAmount 是否已赋值
                     * 
                     */
                    bool TargetAmountHasBeenSet() const;

                    /**
                     * 获取交易编码
                     * @return TradeCode 交易编码
                     * 
                     */
                    std::string GetTradeCode() const;

                    /**
                     * 设置交易编码
                     * @param _tradeCode 交易编码
                     * 
                     */
                    void SetTradeCode(const std::string& _tradeCode);

                    /**
                     * 判断参数 TradeCode 是否已赋值
                     * @return TradeCode 是否已赋值
                     * 
                     */
                    bool TradeCodeHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
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

                private:

                    /**
                     * 商户号
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 对接方汇出指令编号
                     */
                    std::string m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * 申报流水号
                     */
                    std::string m_declareId;
                    bool m_declareIdHasBeenSet;

                    /**
                     * 原申报流水号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originalDeclareId;
                    bool m_originalDeclareIdHasBeenSet;

                    /**
                     * 付款人ID
                     */
                    std::string m_payerId;
                    bool m_payerIdHasBeenSet;

                    /**
                     * 源币种
                     */
                    std::string m_sourceCurrency;
                    bool m_sourceCurrencyHasBeenSet;

                    /**
                     * 源金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceAmount;
                    bool m_sourceAmountHasBeenSet;

                    /**
                     * 目的币种
                     */
                    std::string m_targetCurrency;
                    bool m_targetCurrencyHasBeenSet;

                    /**
                     * 目的金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetAmount;
                    bool m_targetAmountHasBeenSet;

                    /**
                     * 交易编码
                     */
                    std::string m_tradeCode;
                    bool m_tradeCodeHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYDECLAREDATA_H_
