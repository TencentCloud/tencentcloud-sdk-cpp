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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEEACCOUNTBALANCERESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEEACCOUNTBALANCERESULT_H_

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
                * 账户余额信息
                */
                class PayeeAccountBalanceResult : public AbstractModel
                {
                public:
                    PayeeAccountBalanceResult();
                    ~PayeeAccountBalanceResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountId 账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountId() const;

                    /**
                     * 设置账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountId 账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountId(const std::string& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                    /**
                     * 获取收入类型
LABOR:劳务所得
OCCASION:偶然所得
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IncomeType 收入类型
LABOR:劳务所得
OCCASION:偶然所得
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIncomeType() const;

                    /**
                     * 设置收入类型
LABOR:劳务所得
OCCASION:偶然所得
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _incomeType 收入类型
LABOR:劳务所得
OCCASION:偶然所得
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIncomeType(const int64_t& _incomeType);

                    /**
                     * 判断参数 IncomeType 是否已赋值
                     * @return IncomeType 是否已赋值
                     * 
                     */
                    bool IncomeTypeHasBeenSet() const;

                    /**
                     * 获取总余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Balance 总余额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBalance() const;

                    /**
                     * 设置总余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _balance 总余额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBalance(const std::string& _balance);

                    /**
                     * 判断参数 Balance 是否已赋值
                     * @return Balance 是否已赋值
                     * 
                     */
                    bool BalanceHasBeenSet() const;

                    /**
                     * 获取系统冻结余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SystemFreezeBalance 系统冻结余额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSystemFreezeBalance() const;

                    /**
                     * 设置系统冻结余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _systemFreezeBalance 系统冻结余额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSystemFreezeBalance(const std::string& _systemFreezeBalance);

                    /**
                     * 判断参数 SystemFreezeBalance 是否已赋值
                     * @return SystemFreezeBalance 是否已赋值
                     * 
                     */
                    bool SystemFreezeBalanceHasBeenSet() const;

                    /**
                     * 获取人工冻结余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ManualFreezeBalance 人工冻结余额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetManualFreezeBalance() const;

                    /**
                     * 设置人工冻结余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _manualFreezeBalance 人工冻结余额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetManualFreezeBalance(const std::string& _manualFreezeBalance);

                    /**
                     * 判断参数 ManualFreezeBalance 是否已赋值
                     * @return ManualFreezeBalance 是否已赋值
                     * 
                     */
                    bool ManualFreezeBalanceHasBeenSet() const;

                    /**
                     * 获取可提现余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayableBalance 可提现余额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayableBalance() const;

                    /**
                     * 设置可提现余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payableBalance 可提现余额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayableBalance(const std::string& _payableBalance);

                    /**
                     * 判断参数 PayableBalance 是否已赋值
                     * @return PayableBalance 是否已赋值
                     * 
                     */
                    bool PayableBalanceHasBeenSet() const;

                    /**
                     * 获取已提现余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaidBalance 已提现余额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaidBalance() const;

                    /**
                     * 设置已提现余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paidBalance 已提现余额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaidBalance(const std::string& _paidBalance);

                    /**
                     * 判断参数 PaidBalance 是否已赋值
                     * @return PaidBalance 是否已赋值
                     * 
                     */
                    bool PaidBalanceHasBeenSet() const;

                    /**
                     * 获取提现中余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InPayBalance 提现中余额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInPayBalance() const;

                    /**
                     * 设置提现中余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inPayBalance 提现中余额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInPayBalance(const std::string& _inPayBalance);

                    /**
                     * 判断参数 InPayBalance 是否已赋值
                     * @return InPayBalance 是否已赋值
                     * 
                     */
                    bool InPayBalanceHasBeenSet() const;

                    /**
                     * 获取累计结算金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SumSettlementAmount 累计结算金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSumSettlementAmount() const;

                    /**
                     * 设置累计结算金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sumSettlementAmount 累计结算金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSumSettlementAmount(const std::string& _sumSettlementAmount);

                    /**
                     * 判断参数 SumSettlementAmount 是否已赋值
                     * @return SumSettlementAmount 是否已赋值
                     * 
                     */
                    bool SumSettlementAmountHasBeenSet() const;

                    /**
                     * 获取已缴个税
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaidIncomeTax 已缴个税
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaidIncomeTax() const;

                    /**
                     * 设置已缴个税
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paidIncomeTax 已缴个税
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaidIncomeTax(const std::string& _paidIncomeTax);

                    /**
                     * 判断参数 PaidIncomeTax 是否已赋值
                     * @return PaidIncomeTax 是否已赋值
                     * 
                     */
                    bool PaidIncomeTaxHasBeenSet() const;

                    /**
                     * 获取提现中个税
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InPayIncomeTax 提现中个税
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInPayIncomeTax() const;

                    /**
                     * 设置提现中个税
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inPayIncomeTax 提现中个税
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInPayIncomeTax(const std::string& _inPayIncomeTax);

                    /**
                     * 判断参数 InPayIncomeTax 是否已赋值
                     * @return InPayIncomeTax 是否已赋值
                     * 
                     */
                    bool InPayIncomeTaxHasBeenSet() const;

                    /**
                     * 获取已缴增值税
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaidValueAddedTax 已缴增值税
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaidValueAddedTax() const;

                    /**
                     * 设置已缴增值税
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paidValueAddedTax 已缴增值税
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaidValueAddedTax(const std::string& _paidValueAddedTax);

                    /**
                     * 判断参数 PaidValueAddedTax 是否已赋值
                     * @return PaidValueAddedTax 是否已赋值
                     * 
                     */
                    bool PaidValueAddedTaxHasBeenSet() const;

                    /**
                     * 获取提现中增值税
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InPayValueAddedTax 提现中增值税
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInPayValueAddedTax() const;

                    /**
                     * 设置提现中增值税
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inPayValueAddedTax 提现中增值税
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInPayValueAddedTax(const std::string& _inPayValueAddedTax);

                    /**
                     * 判断参数 InPayValueAddedTax 是否已赋值
                     * @return InPayValueAddedTax 是否已赋值
                     * 
                     */
                    bool InPayValueAddedTaxHasBeenSet() const;

                    /**
                     * 获取已缴附加税
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaidAttachTax 已缴附加税
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaidAttachTax() const;

                    /**
                     * 设置已缴附加税
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paidAttachTax 已缴附加税
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaidAttachTax(const std::string& _paidAttachTax);

                    /**
                     * 判断参数 PaidAttachTax 是否已赋值
                     * @return PaidAttachTax 是否已赋值
                     * 
                     */
                    bool PaidAttachTaxHasBeenSet() const;

                    /**
                     * 获取提现中附加税
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InPayAttachTax 提现中附加税
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInPayAttachTax() const;

                    /**
                     * 设置提现中附加税
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inPayAttachTax 提现中附加税
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInPayAttachTax(const std::string& _inPayAttachTax);

                    /**
                     * 判断参数 InPayAttachTax 是否已赋值
                     * @return InPayAttachTax 是否已赋值
                     * 
                     */
                    bool InPayAttachTaxHasBeenSet() const;

                private:

                    /**
                     * 账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * 收入类型
LABOR:劳务所得
OCCASION:偶然所得
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_incomeType;
                    bool m_incomeTypeHasBeenSet;

                    /**
                     * 总余额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_balance;
                    bool m_balanceHasBeenSet;

                    /**
                     * 系统冻结余额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_systemFreezeBalance;
                    bool m_systemFreezeBalanceHasBeenSet;

                    /**
                     * 人工冻结余额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_manualFreezeBalance;
                    bool m_manualFreezeBalanceHasBeenSet;

                    /**
                     * 可提现余额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payableBalance;
                    bool m_payableBalanceHasBeenSet;

                    /**
                     * 已提现余额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paidBalance;
                    bool m_paidBalanceHasBeenSet;

                    /**
                     * 提现中余额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inPayBalance;
                    bool m_inPayBalanceHasBeenSet;

                    /**
                     * 累计结算金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sumSettlementAmount;
                    bool m_sumSettlementAmountHasBeenSet;

                    /**
                     * 已缴个税
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paidIncomeTax;
                    bool m_paidIncomeTaxHasBeenSet;

                    /**
                     * 提现中个税
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inPayIncomeTax;
                    bool m_inPayIncomeTaxHasBeenSet;

                    /**
                     * 已缴增值税
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paidValueAddedTax;
                    bool m_paidValueAddedTaxHasBeenSet;

                    /**
                     * 提现中增值税
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inPayValueAddedTax;
                    bool m_inPayValueAddedTaxHasBeenSet;

                    /**
                     * 已缴附加税
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paidAttachTax;
                    bool m_paidAttachTaxHasBeenSet;

                    /**
                     * 提现中附加税
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inPayAttachTax;
                    bool m_inPayAttachTaxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEEACCOUNTBALANCERESULT_H_
