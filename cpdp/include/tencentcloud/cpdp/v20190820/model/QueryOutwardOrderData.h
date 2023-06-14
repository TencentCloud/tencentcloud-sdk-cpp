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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOUTWARDORDERDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOUTWARDORDERDATA_H_

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
                * 查询汇出数据
                */
                class QueryOutwardOrderData : public AbstractModel
                {
                public:
                    QueryOutwardOrderData();
                    ~QueryOutwardOrderData() = default;
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
                     * 获取财务日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AcctDate 财务日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAcctDate() const;

                    /**
                     * 设置财务日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _acctDate 财务日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAcctDate(const std::string& _acctDate);

                    /**
                     * 判断参数 AcctDate 是否已赋值
                     * @return AcctDate 是否已赋值
                     * 
                     */
                    bool AcctDateHasBeenSet() const;

                    /**
                     * 获取定价币种
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PricingCurrency 定价币种
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPricingCurrency() const;

                    /**
                     * 设置定价币种
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pricingCurrency 定价币种
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPricingCurrency(const std::string& _pricingCurrency);

                    /**
                     * 判断参数 PricingCurrency 是否已赋值
                     * @return PricingCurrency 是否已赋值
                     * 
                     */
                    bool PricingCurrencyHasBeenSet() const;

                    /**
                     * 获取源币种
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceCurrency 源币种
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceCurrency() const;

                    /**
                     * 设置源币种
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceCurrency 源币种
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetCurrency 目的币种
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetCurrency() const;

                    /**
                     * 设置目的币种
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetCurrency 目的币种
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取汇率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FxRate 汇率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFxRate() const;

                    /**
                     * 设置汇率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fxRate 汇率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFxRate(const std::string& _fxRate);

                    /**
                     * 判断参数 FxRate 是否已赋值
                     * @return FxRate 是否已赋值
                     * 
                     */
                    bool FxRateHasBeenSet() const;

                    /**
                     * 获取指令状态
                     * @return Status 指令状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置指令状态
                     * @param _status 指令状态
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
                     * 获取退汇金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RefundAmount 退汇金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRefundAmount() const;

                    /**
                     * 设置退汇金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _refundAmount 退汇金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRefundAmount(const std::string& _refundAmount);

                    /**
                     * 判断参数 RefundAmount 是否已赋值
                     * @return RefundAmount 是否已赋值
                     * 
                     */
                    bool RefundAmountHasBeenSet() const;

                    /**
                     * 获取退汇币种
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RefundCurrency 退汇币种
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRefundCurrency() const;

                    /**
                     * 设置退汇币种
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _refundCurrency 退汇币种
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRefundCurrency(const std::string& _refundCurrency);

                    /**
                     * 判断参数 RefundCurrency 是否已赋值
                     * @return RefundCurrency 是否已赋值
                     * 
                     */
                    bool RefundCurrencyHasBeenSet() const;

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
                     * 财务日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_acctDate;
                    bool m_acctDateHasBeenSet;

                    /**
                     * 定价币种
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pricingCurrency;
                    bool m_pricingCurrencyHasBeenSet;

                    /**
                     * 源币种
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 汇率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fxRate;
                    bool m_fxRateHasBeenSet;

                    /**
                     * 指令状态
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
                     * 退汇金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_refundAmount;
                    bool m_refundAmountHasBeenSet;

                    /**
                     * 退汇币种
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_refundCurrency;
                    bool m_refundCurrencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOUTWARDORDERDATA_H_
