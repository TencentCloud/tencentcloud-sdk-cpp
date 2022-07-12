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
                     */
                    std::string GetAccountId() const;

                    /**
                     * 设置账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AccountId 账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAccountId(const std::string& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
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
                     */
                    int64_t GetIncomeType() const;

                    /**
                     * 设置收入类型
LABOR:劳务所得
OCCASION:偶然所得
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IncomeType 收入类型
LABOR:劳务所得
OCCASION:偶然所得
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIncomeType(const int64_t& _incomeType);

                    /**
                     * 判断参数 IncomeType 是否已赋值
                     * @return IncomeType 是否已赋值
                     */
                    bool IncomeTypeHasBeenSet() const;

                    /**
                     * 获取总余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Balance 总余额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBalance() const;

                    /**
                     * 设置总余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Balance 总余额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBalance(const std::string& _balance);

                    /**
                     * 判断参数 Balance 是否已赋值
                     * @return Balance 是否已赋值
                     */
                    bool BalanceHasBeenSet() const;

                    /**
                     * 获取系统冻结余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SystemFreezeBalance 系统冻结余额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSystemFreezeBalance() const;

                    /**
                     * 设置系统冻结余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SystemFreezeBalance 系统冻结余额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSystemFreezeBalance(const std::string& _systemFreezeBalance);

                    /**
                     * 判断参数 SystemFreezeBalance 是否已赋值
                     * @return SystemFreezeBalance 是否已赋值
                     */
                    bool SystemFreezeBalanceHasBeenSet() const;

                    /**
                     * 获取人工冻结余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ManualFreezeBalance 人工冻结余额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetManualFreezeBalance() const;

                    /**
                     * 设置人工冻结余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ManualFreezeBalance 人工冻结余额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetManualFreezeBalance(const std::string& _manualFreezeBalance);

                    /**
                     * 判断参数 ManualFreezeBalance 是否已赋值
                     * @return ManualFreezeBalance 是否已赋值
                     */
                    bool ManualFreezeBalanceHasBeenSet() const;

                    /**
                     * 获取可提现余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayableBalance 可提现余额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPayableBalance() const;

                    /**
                     * 设置可提现余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PayableBalance 可提现余额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPayableBalance(const std::string& _payableBalance);

                    /**
                     * 判断参数 PayableBalance 是否已赋值
                     * @return PayableBalance 是否已赋值
                     */
                    bool PayableBalanceHasBeenSet() const;

                    /**
                     * 获取已提现余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaidBalance 已提现余额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPaidBalance() const;

                    /**
                     * 设置已提现余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PaidBalance 已提现余额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPaidBalance(const std::string& _paidBalance);

                    /**
                     * 判断参数 PaidBalance 是否已赋值
                     * @return PaidBalance 是否已赋值
                     */
                    bool PaidBalanceHasBeenSet() const;

                    /**
                     * 获取提现中余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InPayBalance 提现中余额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInPayBalance() const;

                    /**
                     * 设置提现中余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InPayBalance 提现中余额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInPayBalance(const std::string& _inPayBalance);

                    /**
                     * 判断参数 InPayBalance 是否已赋值
                     * @return InPayBalance 是否已赋值
                     */
                    bool InPayBalanceHasBeenSet() const;

                    /**
                     * 获取累计结算金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SumSettlementAmount 累计结算金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSumSettlementAmount() const;

                    /**
                     * 设置累计结算金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SumSettlementAmount 累计结算金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSumSettlementAmount(const std::string& _sumSettlementAmount);

                    /**
                     * 判断参数 SumSettlementAmount 是否已赋值
                     * @return SumSettlementAmount 是否已赋值
                     */
                    bool SumSettlementAmountHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEEACCOUNTBALANCERESULT_H_
