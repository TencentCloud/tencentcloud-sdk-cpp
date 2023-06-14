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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_BALANCETRANSACTION_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_BALANCETRANSACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * 账户流水
                */
                class BalanceTransaction : public AbstractModel
                {
                public:
                    BalanceTransaction();
                    ~BalanceTransaction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账户类型：1-设备接入 2-云存。
                     * @return AccountType 账户类型：1-设备接入 2-云存。
                     * 
                     */
                    uint64_t GetAccountType() const;

                    /**
                     * 设置账户类型：1-设备接入 2-云存。
                     * @param _accountType 账户类型：1-设备接入 2-云存。
                     * 
                     */
                    void SetAccountType(const uint64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取账户变更类型：Rechareg-充值；CreateOrder-新购。
                     * @return Operation 账户变更类型：Rechareg-充值；CreateOrder-新购。
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置账户变更类型：Rechareg-充值；CreateOrder-新购。
                     * @param _operation 账户变更类型：Rechareg-充值；CreateOrder-新购。
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取流水ID。
                     * @return DealId 流水ID。
                     * 
                     */
                    std::string GetDealId() const;

                    /**
                     * 设置流水ID。
                     * @param _dealId 流水ID。
                     * 
                     */
                    void SetDealId(const std::string& _dealId);

                    /**
                     * 判断参数 DealId 是否已赋值
                     * @return DealId 是否已赋值
                     * 
                     */
                    bool DealIdHasBeenSet() const;

                    /**
                     * 获取变更金额，单位：分（人民币）。
                     * @return Amount 变更金额，单位：分（人民币）。
                     * 
                     */
                    uint64_t GetAmount() const;

                    /**
                     * 设置变更金额，单位：分（人民币）。
                     * @param _amount 变更金额，单位：分（人民币）。
                     * 
                     */
                    void SetAmount(const uint64_t& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                    /**
                     * 获取变更后账户余额，单位：分（人民币）。
                     * @return Balance 变更后账户余额，单位：分（人民币）。
                     * 
                     */
                    uint64_t GetBalance() const;

                    /**
                     * 设置变更后账户余额，单位：分（人民币）。
                     * @param _balance 变更后账户余额，单位：分（人民币）。
                     * 
                     */
                    void SetBalance(const uint64_t& _balance);

                    /**
                     * 判断参数 Balance 是否已赋值
                     * @return Balance 是否已赋值
                     * 
                     */
                    bool BalanceHasBeenSet() const;

                    /**
                     * 获取变更时间。
                     * @return OperationTime 变更时间。
                     * 
                     */
                    int64_t GetOperationTime() const;

                    /**
                     * 设置变更时间。
                     * @param _operationTime 变更时间。
                     * 
                     */
                    void SetOperationTime(const int64_t& _operationTime);

                    /**
                     * 判断参数 OperationTime 是否已赋值
                     * @return OperationTime 是否已赋值
                     * 
                     */
                    bool OperationTimeHasBeenSet() const;

                private:

                    /**
                     * 账户类型：1-设备接入 2-云存。
                     */
                    uint64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 账户变更类型：Rechareg-充值；CreateOrder-新购。
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 流水ID。
                     */
                    std::string m_dealId;
                    bool m_dealIdHasBeenSet;

                    /**
                     * 变更金额，单位：分（人民币）。
                     */
                    uint64_t m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * 变更后账户余额，单位：分（人民币）。
                     */
                    uint64_t m_balance;
                    bool m_balanceHasBeenSet;

                    /**
                     * 变更时间。
                     */
                    int64_t m_operationTime;
                    bool m_operationTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_BALANCETRANSACTION_H_
