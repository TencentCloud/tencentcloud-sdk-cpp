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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLLISTRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BillTransactionInfo.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBillList返回参数结构体
                */
                class DescribeBillListResponse : public AbstractModel
                {
                public:
                    DescribeBillListResponse();
                    ~DescribeBillListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取收支明细列表
                     * @return TransactionList 收支明细列表
                     * 
                     */
                    std::vector<BillTransactionInfo> GetTransactionList() const;

                    /**
                     * 判断参数 TransactionList 是否已赋值
                     * @return TransactionList 是否已赋值
                     * 
                     */
                    bool TransactionListHasBeenSet() const;

                    /**
                     * 获取总条数
                     * @return Total 总条数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取退费总额，单位（分）
                     * @return ReturnAmount 退费总额，单位（分）
                     * 
                     */
                    double GetReturnAmount() const;

                    /**
                     * 判断参数 ReturnAmount 是否已赋值
                     * @return ReturnAmount 是否已赋值
                     * 
                     */
                    bool ReturnAmountHasBeenSet() const;

                    /**
                     * 获取充值总额，单位（分）
                     * @return RechargeAmount 充值总额，单位（分）
                     * 
                     */
                    double GetRechargeAmount() const;

                    /**
                     * 判断参数 RechargeAmount 是否已赋值
                     * @return RechargeAmount 是否已赋值
                     * 
                     */
                    bool RechargeAmountHasBeenSet() const;

                    /**
                     * 获取冻结总额，单位（分）
                     * @return BlockAmount 冻结总额，单位（分）
                     * 
                     */
                    double GetBlockAmount() const;

                    /**
                     * 判断参数 BlockAmount 是否已赋值
                     * @return BlockAmount 是否已赋值
                     * 
                     */
                    bool BlockAmountHasBeenSet() const;

                    /**
                     * 获取解冻总额，单位（分）
                     * @return UnblockAmount 解冻总额，单位（分）
                     * 
                     */
                    double GetUnblockAmount() const;

                    /**
                     * 判断参数 UnblockAmount 是否已赋值
                     * @return UnblockAmount 是否已赋值
                     * 
                     */
                    bool UnblockAmountHasBeenSet() const;

                    /**
                     * 获取扣费总额，单位（分）
                     * @return DeductAmount 扣费总额，单位（分）
                     * 
                     */
                    double GetDeductAmount() const;

                    /**
                     * 判断参数 DeductAmount 是否已赋值
                     * @return DeductAmount 是否已赋值
                     * 
                     */
                    bool DeductAmountHasBeenSet() const;

                    /**
                     * 获取资金转入总额，单位（分）
                     * @return AgentInAmount 资金转入总额，单位（分）
                     * 
                     */
                    double GetAgentInAmount() const;

                    /**
                     * 判断参数 AgentInAmount 是否已赋值
                     * @return AgentInAmount 是否已赋值
                     * 
                     */
                    bool AgentInAmountHasBeenSet() const;

                    /**
                     * 获取垫付充值总额，单位（分）
                     * @return AdvanceRechargeAmount 垫付充值总额，单位（分）
                     * 
                     */
                    double GetAdvanceRechargeAmount() const;

                    /**
                     * 判断参数 AdvanceRechargeAmount 是否已赋值
                     * @return AdvanceRechargeAmount 是否已赋值
                     * 
                     */
                    bool AdvanceRechargeAmountHasBeenSet() const;

                    /**
                     * 获取提现扣减总额，单位（分）
                     * @return WithdrawAmount 提现扣减总额，单位（分）
                     * 
                     */
                    double GetWithdrawAmount() const;

                    /**
                     * 判断参数 WithdrawAmount 是否已赋值
                     * @return WithdrawAmount 是否已赋值
                     * 
                     */
                    bool WithdrawAmountHasBeenSet() const;

                    /**
                     * 获取资金转出总额，单位（分）
                     * @return AgentOutAmount 资金转出总额，单位（分）
                     * 
                     */
                    double GetAgentOutAmount() const;

                    /**
                     * 判断参数 AgentOutAmount 是否已赋值
                     * @return AgentOutAmount 是否已赋值
                     * 
                     */
                    bool AgentOutAmountHasBeenSet() const;

                    /**
                     * 获取还垫付总额，单位（分）
                     * @return AdvancePayAmount 还垫付总额，单位（分）
                     * 
                     */
                    double GetAdvancePayAmount() const;

                    /**
                     * 判断参数 AdvancePayAmount 是否已赋值
                     * @return AdvancePayAmount 是否已赋值
                     * 
                     */
                    bool AdvancePayAmountHasBeenSet() const;

                private:

                    /**
                     * 收支明细列表
                     */
                    std::vector<BillTransactionInfo> m_transactionList;
                    bool m_transactionListHasBeenSet;

                    /**
                     * 总条数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 退费总额，单位（分）
                     */
                    double m_returnAmount;
                    bool m_returnAmountHasBeenSet;

                    /**
                     * 充值总额，单位（分）
                     */
                    double m_rechargeAmount;
                    bool m_rechargeAmountHasBeenSet;

                    /**
                     * 冻结总额，单位（分）
                     */
                    double m_blockAmount;
                    bool m_blockAmountHasBeenSet;

                    /**
                     * 解冻总额，单位（分）
                     */
                    double m_unblockAmount;
                    bool m_unblockAmountHasBeenSet;

                    /**
                     * 扣费总额，单位（分）
                     */
                    double m_deductAmount;
                    bool m_deductAmountHasBeenSet;

                    /**
                     * 资金转入总额，单位（分）
                     */
                    double m_agentInAmount;
                    bool m_agentInAmountHasBeenSet;

                    /**
                     * 垫付充值总额，单位（分）
                     */
                    double m_advanceRechargeAmount;
                    bool m_advanceRechargeAmountHasBeenSet;

                    /**
                     * 提现扣减总额，单位（分）
                     */
                    double m_withdrawAmount;
                    bool m_withdrawAmountHasBeenSet;

                    /**
                     * 资金转出总额，单位（分）
                     */
                    double m_agentOutAmount;
                    bool m_agentOutAmountHasBeenSet;

                    /**
                     * 还垫付总额，单位（分）
                     */
                    double m_advancePayAmount;
                    bool m_advancePayAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLLISTRESPONSE_H_
