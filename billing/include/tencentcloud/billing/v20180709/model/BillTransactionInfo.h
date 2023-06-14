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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BILLTRANSACTIONINFO_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BILLTRANSACTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 收支明细的流水信息
                */
                class BillTransactionInfo : public AbstractModel
                {
                public:
                    BillTransactionInfo();
                    ~BillTransactionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取收支类型：deduct 扣费, recharge 充值, return 退费， block 冻结, unblock 解冻
                     * @return ActionType 收支类型：deduct 扣费, recharge 充值, return 退费， block 冻结, unblock 解冻
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置收支类型：deduct 扣费, recharge 充值, return 退费， block 冻结, unblock 解冻
                     * @param _actionType 收支类型：deduct 扣费, recharge 充值, return 退费， block 冻结, unblock 解冻
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取流水金额，单位（分）；正数表示入账，负数表示出账
                     * @return Amount 流水金额，单位（分）；正数表示入账，负数表示出账
                     * 
                     */
                    int64_t GetAmount() const;

                    /**
                     * 设置流水金额，单位（分）；正数表示入账，负数表示出账
                     * @param _amount 流水金额，单位（分）；正数表示入账，负数表示出账
                     * 
                     */
                    void SetAmount(const int64_t& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                    /**
                     * 获取可用余额，单位（分）；正数表示入账，负数表示出账
                     * @return Balance 可用余额，单位（分）；正数表示入账，负数表示出账
                     * 
                     */
                    int64_t GetBalance() const;

                    /**
                     * 设置可用余额，单位（分）；正数表示入账，负数表示出账
                     * @param _balance 可用余额，单位（分）；正数表示入账，负数表示出账
                     * 
                     */
                    void SetBalance(const int64_t& _balance);

                    /**
                     * 判断参数 Balance 是否已赋值
                     * @return Balance 是否已赋值
                     * 
                     */
                    bool BalanceHasBeenSet() const;

                    /**
                     * 获取流水号，如20190131020000236005203583326401
                     * @return BillId 流水号，如20190131020000236005203583326401
                     * 
                     */
                    std::string GetBillId() const;

                    /**
                     * 设置流水号，如20190131020000236005203583326401
                     * @param _billId 流水号，如20190131020000236005203583326401
                     * 
                     */
                    void SetBillId(const std::string& _billId);

                    /**
                     * 判断参数 BillId 是否已赋值
                     * @return BillId 是否已赋值
                     * 
                     */
                    bool BillIdHasBeenSet() const;

                    /**
                     * 获取描述信息
                     * @return OperationInfo 描述信息
                     * 
                     */
                    std::string GetOperationInfo() const;

                    /**
                     * 设置描述信息
                     * @param _operationInfo 描述信息
                     * 
                     */
                    void SetOperationInfo(const std::string& _operationInfo);

                    /**
                     * 判断参数 OperationInfo 是否已赋值
                     * @return OperationInfo 是否已赋值
                     * 
                     */
                    bool OperationInfoHasBeenSet() const;

                    /**
                     * 获取操作时间"2019-01-31 23:35:10.000"
                     * @return OperationTime 操作时间"2019-01-31 23:35:10.000"
                     * 
                     */
                    std::string GetOperationTime() const;

                    /**
                     * 设置操作时间"2019-01-31 23:35:10.000"
                     * @param _operationTime 操作时间"2019-01-31 23:35:10.000"
                     * 
                     */
                    void SetOperationTime(const std::string& _operationTime);

                    /**
                     * 判断参数 OperationTime 是否已赋值
                     * @return OperationTime 是否已赋值
                     * 
                     */
                    bool OperationTimeHasBeenSet() const;

                    /**
                     * 获取现金账户余额，单位（分）
                     * @return Cash 现金账户余额，单位（分）
                     * 
                     */
                    int64_t GetCash() const;

                    /**
                     * 设置现金账户余额，单位（分）
                     * @param _cash 现金账户余额，单位（分）
                     * 
                     */
                    void SetCash(const int64_t& _cash);

                    /**
                     * 判断参数 Cash 是否已赋值
                     * @return Cash 是否已赋值
                     * 
                     */
                    bool CashHasBeenSet() const;

                    /**
                     * 获取赠送金余额，单位（分）
                     * @return Incentive 赠送金余额，单位（分）
                     * 
                     */
                    int64_t GetIncentive() const;

                    /**
                     * 设置赠送金余额，单位（分）
                     * @param _incentive 赠送金余额，单位（分）
                     * 
                     */
                    void SetIncentive(const int64_t& _incentive);

                    /**
                     * 判断参数 Incentive 是否已赋值
                     * @return Incentive 是否已赋值
                     * 
                     */
                    bool IncentiveHasBeenSet() const;

                    /**
                     * 获取冻结余额，单位（分）
                     * @return Freezing 冻结余额，单位（分）
                     * 
                     */
                    int64_t GetFreezing() const;

                    /**
                     * 设置冻结余额，单位（分）
                     * @param _freezing 冻结余额，单位（分）
                     * 
                     */
                    void SetFreezing(const int64_t& _freezing);

                    /**
                     * 判断参数 Freezing 是否已赋值
                     * @return Freezing 是否已赋值
                     * 
                     */
                    bool FreezingHasBeenSet() const;

                    /**
                     * 获取交易渠道
                     * @return PayChannel 交易渠道
                     * 
                     */
                    std::string GetPayChannel() const;

                    /**
                     * 设置交易渠道
                     * @param _payChannel 交易渠道
                     * 
                     */
                    void SetPayChannel(const std::string& _payChannel);

                    /**
                     * 判断参数 PayChannel 是否已赋值
                     * @return PayChannel 是否已赋值
                     * 
                     */
                    bool PayChannelHasBeenSet() const;

                    /**
                     * 获取扣费模式：trade 包年包月(预付费)，hourh  按量-小时结，hourd 按量-日结，hourm 按量-月结，month 按量-月结
                     * @return DeductMode 扣费模式：trade 包年包月(预付费)，hourh  按量-小时结，hourd 按量-日结，hourm 按量-月结，month 按量-月结
                     * 
                     */
                    std::string GetDeductMode() const;

                    /**
                     * 设置扣费模式：trade 包年包月(预付费)，hourh  按量-小时结，hourd 按量-日结，hourm 按量-月结，month 按量-月结
                     * @param _deductMode 扣费模式：trade 包年包月(预付费)，hourh  按量-小时结，hourd 按量-日结，hourm 按量-月结，month 按量-月结
                     * 
                     */
                    void SetDeductMode(const std::string& _deductMode);

                    /**
                     * 判断参数 DeductMode 是否已赋值
                     * @return DeductMode 是否已赋值
                     * 
                     */
                    bool DeductModeHasBeenSet() const;

                private:

                    /**
                     * 收支类型：deduct 扣费, recharge 充值, return 退费， block 冻结, unblock 解冻
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 流水金额，单位（分）；正数表示入账，负数表示出账
                     */
                    int64_t m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * 可用余额，单位（分）；正数表示入账，负数表示出账
                     */
                    int64_t m_balance;
                    bool m_balanceHasBeenSet;

                    /**
                     * 流水号，如20190131020000236005203583326401
                     */
                    std::string m_billId;
                    bool m_billIdHasBeenSet;

                    /**
                     * 描述信息
                     */
                    std::string m_operationInfo;
                    bool m_operationInfoHasBeenSet;

                    /**
                     * 操作时间"2019-01-31 23:35:10.000"
                     */
                    std::string m_operationTime;
                    bool m_operationTimeHasBeenSet;

                    /**
                     * 现金账户余额，单位（分）
                     */
                    int64_t m_cash;
                    bool m_cashHasBeenSet;

                    /**
                     * 赠送金余额，单位（分）
                     */
                    int64_t m_incentive;
                    bool m_incentiveHasBeenSet;

                    /**
                     * 冻结余额，单位（分）
                     */
                    int64_t m_freezing;
                    bool m_freezingHasBeenSet;

                    /**
                     * 交易渠道
                     */
                    std::string m_payChannel;
                    bool m_payChannelHasBeenSet;

                    /**
                     * 扣费模式：trade 包年包月(预付费)，hourh  按量-小时结，hourd 按量-日结，hourm 按量-月结，month 按量-月结
                     */
                    std::string m_deductMode;
                    bool m_deductModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BILLTRANSACTIONINFO_H_
