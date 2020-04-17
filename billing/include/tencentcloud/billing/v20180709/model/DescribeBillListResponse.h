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


                    /**
                     * 获取收支明细列表
                     * @return TransactionList 收支明细列表
                     */
                    std::vector<BillTransactionInfo> GetTransactionList() const;

                    /**
                     * 判断参数 TransactionList 是否已赋值
                     * @return TransactionList 是否已赋值
                     */
                    bool TransactionListHasBeenSet() const;

                    /**
                     * 获取总条数
                     * @return Total 总条数
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取退费总额，单位（分）
                     * @return ReturnAmount 退费总额，单位（分）
                     */
                    double GetReturnAmount() const;

                    /**
                     * 判断参数 ReturnAmount 是否已赋值
                     * @return ReturnAmount 是否已赋值
                     */
                    bool ReturnAmountHasBeenSet() const;

                    /**
                     * 获取充值总额，单位（分）
                     * @return RechargeAmount 充值总额，单位（分）
                     */
                    double GetRechargeAmount() const;

                    /**
                     * 判断参数 RechargeAmount 是否已赋值
                     * @return RechargeAmount 是否已赋值
                     */
                    bool RechargeAmountHasBeenSet() const;

                    /**
                     * 获取冻结总额，单位（分）
                     * @return BlockAmount 冻结总额，单位（分）
                     */
                    double GetBlockAmount() const;

                    /**
                     * 判断参数 BlockAmount 是否已赋值
                     * @return BlockAmount 是否已赋值
                     */
                    bool BlockAmountHasBeenSet() const;

                    /**
                     * 获取解冻总额，单位（分）
                     * @return UnblockAmount 解冻总额，单位（分）
                     */
                    double GetUnblockAmount() const;

                    /**
                     * 判断参数 UnblockAmount 是否已赋值
                     * @return UnblockAmount 是否已赋值
                     */
                    bool UnblockAmountHasBeenSet() const;

                    /**
                     * 获取扣费总额，单位（分）
                     * @return DeductAmount 扣费总额，单位（分）
                     */
                    double GetDeductAmount() const;

                    /**
                     * 判断参数 DeductAmount 是否已赋值
                     * @return DeductAmount 是否已赋值
                     */
                    bool DeductAmountHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLLISTRESPONSE_H_
