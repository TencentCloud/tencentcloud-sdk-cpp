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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEACCOUNTBALANCERESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEACCOUNTBALANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeAccountBalance返回参数结构体
                */
                class DescribeAccountBalanceResponse : public AbstractModel
                {
                public:
                    DescribeAccountBalanceResponse();
                    ~DescribeAccountBalanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取接口做过变更,为兼容老接口,本字段与RealBalance相同,为当前真实可用余额,单位 分
                     * @return Balance 接口做过变更,为兼容老接口,本字段与RealBalance相同,为当前真实可用余额,单位 分
                     * 
                     */
                    int64_t GetBalance() const;

                    /**
                     * 判断参数 Balance 是否已赋值
                     * @return Balance 是否已赋值
                     * 
                     */
                    bool BalanceHasBeenSet() const;

                    /**
                     * 获取查询的用户Uin
                     * @return Uin 查询的用户Uin
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取当前真实可用余额,单位 分
                     * @return RealBalance 当前真实可用余额,单位 分
                     * 
                     */
                    double GetRealBalance() const;

                    /**
                     * 判断参数 RealBalance 是否已赋值
                     * @return RealBalance 是否已赋值
                     * 
                     */
                    bool RealBalanceHasBeenSet() const;

                    /**
                     * 获取现金账户余额,单位 分
                     * @return CashAccountBalance 现金账户余额,单位 分
                     * 
                     */
                    double GetCashAccountBalance() const;

                    /**
                     * 判断参数 CashAccountBalance 是否已赋值
                     * @return CashAccountBalance 是否已赋值
                     * 
                     */
                    bool CashAccountBalanceHasBeenSet() const;

                    /**
                     * 获取收益转入账户余额,单位 分
                     * @return IncomeIntoAccountBalance 收益转入账户余额,单位 分
                     * 
                     */
                    double GetIncomeIntoAccountBalance() const;

                    /**
                     * 判断参数 IncomeIntoAccountBalance 是否已赋值
                     * @return IncomeIntoAccountBalance 是否已赋值
                     * 
                     */
                    bool IncomeIntoAccountBalanceHasBeenSet() const;

                    /**
                     * 获取赠送账户余额,单位 分
                     * @return PresentAccountBalance 赠送账户余额,单位 分
                     * 
                     */
                    double GetPresentAccountBalance() const;

                    /**
                     * 判断参数 PresentAccountBalance 是否已赋值
                     * @return PresentAccountBalance 是否已赋值
                     * 
                     */
                    bool PresentAccountBalanceHasBeenSet() const;

                    /**
                     * 获取冻结金额,单位 分
                     * @return FreezeAmount 冻结金额,单位 分
                     * 
                     */
                    double GetFreezeAmount() const;

                    /**
                     * 判断参数 FreezeAmount 是否已赋值
                     * @return FreezeAmount 是否已赋值
                     * 
                     */
                    bool FreezeAmountHasBeenSet() const;

                    /**
                     * 获取欠费金额,单位 分
                     * @return OweAmount 欠费金额,单位 分
                     * 
                     */
                    double GetOweAmount() const;

                    /**
                     * 判断参数 OweAmount 是否已赋值
                     * @return OweAmount 是否已赋值
                     * 
                     */
                    bool OweAmountHasBeenSet() const;

                    /**
                     * 获取是否允许欠费消费
                     * @return IsAllowArrears 是否允许欠费消费
                     * @deprecated
                     */
                    bool GetIsAllowArrears() const;

                    /**
                     * 判断参数 IsAllowArrears 是否已赋值
                     * @return IsAllowArrears 是否已赋值
                     * @deprecated
                     */
                    bool IsAllowArrearsHasBeenSet() const;

                    /**
                     * 获取是否限制信用额度
                     * @return IsCreditLimited 是否限制信用额度
                     * @deprecated
                     */
                    bool GetIsCreditLimited() const;

                    /**
                     * 判断参数 IsCreditLimited 是否已赋值
                     * @return IsCreditLimited 是否已赋值
                     * @deprecated
                     */
                    bool IsCreditLimitedHasBeenSet() const;

                    /**
                     * 获取信用额度,单位 分
                     * @return CreditAmount 信用额度,单位 分
                     * 
                     */
                    double GetCreditAmount() const;

                    /**
                     * 判断参数 CreditAmount 是否已赋值
                     * @return CreditAmount 是否已赋值
                     * 
                     */
                    bool CreditAmountHasBeenSet() const;

                    /**
                     * 获取可用信用额度,单位 分
                     * @return CreditBalance 可用信用额度,单位 分
                     * 
                     */
                    double GetCreditBalance() const;

                    /**
                     * 判断参数 CreditBalance 是否已赋值
                     * @return CreditBalance 是否已赋值
                     * 
                     */
                    bool CreditBalanceHasBeenSet() const;

                    /**
                     * 获取真实可用信用额度,单位 分
                     * @return RealCreditBalance 真实可用信用额度,单位 分
                     * 
                     */
                    double GetRealCreditBalance() const;

                    /**
                     * 判断参数 RealCreditBalance 是否已赋值
                     * @return RealCreditBalance 是否已赋值
                     * 
                     */
                    bool RealCreditBalanceHasBeenSet() const;

                private:

                    /**
                     * 接口做过变更,为兼容老接口,本字段与RealBalance相同,为当前真实可用余额,单位 分
                     */
                    int64_t m_balance;
                    bool m_balanceHasBeenSet;

                    /**
                     * 查询的用户Uin
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 当前真实可用余额,单位 分
                     */
                    double m_realBalance;
                    bool m_realBalanceHasBeenSet;

                    /**
                     * 现金账户余额,单位 分
                     */
                    double m_cashAccountBalance;
                    bool m_cashAccountBalanceHasBeenSet;

                    /**
                     * 收益转入账户余额,单位 分
                     */
                    double m_incomeIntoAccountBalance;
                    bool m_incomeIntoAccountBalanceHasBeenSet;

                    /**
                     * 赠送账户余额,单位 分
                     */
                    double m_presentAccountBalance;
                    bool m_presentAccountBalanceHasBeenSet;

                    /**
                     * 冻结金额,单位 分
                     */
                    double m_freezeAmount;
                    bool m_freezeAmountHasBeenSet;

                    /**
                     * 欠费金额,单位 分
                     */
                    double m_oweAmount;
                    bool m_oweAmountHasBeenSet;

                    /**
                     * 是否允许欠费消费
                     */
                    bool m_isAllowArrears;
                    bool m_isAllowArrearsHasBeenSet;

                    /**
                     * 是否限制信用额度
                     */
                    bool m_isCreditLimited;
                    bool m_isCreditLimitedHasBeenSet;

                    /**
                     * 信用额度,单位 分
                     */
                    double m_creditAmount;
                    bool m_creditAmountHasBeenSet;

                    /**
                     * 可用信用额度,单位 分
                     */
                    double m_creditBalance;
                    bool m_creditBalanceHasBeenSet;

                    /**
                     * 真实可用信用额度,单位 分
                     */
                    double m_realCreditBalance;
                    bool m_realCreditBalanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEACCOUNTBALANCERESPONSE_H_
