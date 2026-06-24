/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
#include <tencentcloud/billing/v20180709/model/UinTempAmountModel.h>


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
                     * 获取<p>接口做过变更,为兼容老接口,本字段与RealBalance相同,为当前真实可用余额,单位 分</p>
                     * @return Balance <p>接口做过变更,为兼容老接口,本字段与RealBalance相同,为当前真实可用余额,单位 分</p>
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
                     * 获取<p>查询的用户Uin</p>
                     * @return Uin <p>查询的用户Uin</p>
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
                     * 获取<p>当前真实可用余额,单位 分。RealBalance=CashAccountBalance+IncomeIntoAccountBalance+PresentAccountBalance-FreezeAmount-OweAmount</p><p>单位：分</p>
                     * @return RealBalance <p>当前真实可用余额,单位 分。RealBalance=CashAccountBalance+IncomeIntoAccountBalance+PresentAccountBalance-FreezeAmount-OweAmount</p><p>单位：分</p>
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
                     * 获取<p>现金账户余额,单位 分</p>
                     * @return CashAccountBalance <p>现金账户余额,单位 分</p>
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
                     * 获取<p>收益转入账户余额,单位 分</p>
                     * @return IncomeIntoAccountBalance <p>收益转入账户余额,单位 分</p>
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
                     * 获取<p>赠送账户余额,单位 分</p>
                     * @return PresentAccountBalance <p>赠送账户余额,单位 分</p>
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
                     * 获取<p>冻结金额,单位 分</p>
                     * @return FreezeAmount <p>冻结金额,单位 分</p>
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
                     * 获取<p>欠费金额,单位 分</p>
                     * @return OweAmount <p>欠费金额,单位 分</p>
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
                     * 获取<p>是否允许欠费消费</p>
                     * @return IsAllowArrears <p>是否允许欠费消费</p>
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
                     * 获取<p>是否限制信用额度</p>
                     * @return IsCreditLimited <p>是否限制信用额度</p>
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
                     * 获取<p>信用额度,单位 分</p>
                     * @return CreditAmount <p>信用额度,单位 分</p>
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
                     * 获取<p>可用信用额度,单位 分。CreditBalance=CashAccountBalance+IncomeIntoAccountBalance+PresentAccountBalance+CreditAmount-OweAmount</p><p>单位：分</p>
                     * @return CreditBalance <p>可用信用额度,单位 分。CreditBalance=CashAccountBalance+IncomeIntoAccountBalance+PresentAccountBalance+CreditAmount-OweAmount</p><p>单位：分</p>
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
                     * 获取<p>真实可用信用额度,单位 分。RealCreditBalance=CreditBalance-FreezeAmount</p><p>单位：分</p>
                     * @return RealCreditBalance <p>真实可用信用额度,单位 分。RealCreditBalance=CreditBalance-FreezeAmount</p><p>单位：分</p>
                     * 
                     */
                    double GetRealCreditBalance() const;

                    /**
                     * 判断参数 RealCreditBalance 是否已赋值
                     * @return RealCreditBalance 是否已赋值
                     * 
                     */
                    bool RealCreditBalanceHasBeenSet() const;

                    /**
                     * 获取<p>临时额度，单位 分</p>
                     * @return TempCredit <p>临时额度，单位 分</p>
                     * 
                     */
                    double GetTempCredit() const;

                    /**
                     * 判断参数 TempCredit 是否已赋值
                     * @return TempCredit 是否已赋值
                     * 
                     */
                    bool TempCreditHasBeenSet() const;

                    /**
                     * 获取<p>临时额度详情</p>
                     * @return TempAmountInfoList <p>临时额度详情</p>
                     * 
                     */
                    std::vector<UinTempAmountModel> GetTempAmountInfoList() const;

                    /**
                     * 判断参数 TempAmountInfoList 是否已赋值
                     * @return TempAmountInfoList 是否已赋值
                     * 
                     */
                    bool TempAmountInfoListHasBeenSet() const;

                private:

                    /**
                     * <p>接口做过变更,为兼容老接口,本字段与RealBalance相同,为当前真实可用余额,单位 分</p>
                     */
                    int64_t m_balance;
                    bool m_balanceHasBeenSet;

                    /**
                     * <p>查询的用户Uin</p>
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>当前真实可用余额,单位 分。RealBalance=CashAccountBalance+IncomeIntoAccountBalance+PresentAccountBalance-FreezeAmount-OweAmount</p><p>单位：分</p>
                     */
                    double m_realBalance;
                    bool m_realBalanceHasBeenSet;

                    /**
                     * <p>现金账户余额,单位 分</p>
                     */
                    double m_cashAccountBalance;
                    bool m_cashAccountBalanceHasBeenSet;

                    /**
                     * <p>收益转入账户余额,单位 分</p>
                     */
                    double m_incomeIntoAccountBalance;
                    bool m_incomeIntoAccountBalanceHasBeenSet;

                    /**
                     * <p>赠送账户余额,单位 分</p>
                     */
                    double m_presentAccountBalance;
                    bool m_presentAccountBalanceHasBeenSet;

                    /**
                     * <p>冻结金额,单位 分</p>
                     */
                    double m_freezeAmount;
                    bool m_freezeAmountHasBeenSet;

                    /**
                     * <p>欠费金额,单位 分</p>
                     */
                    double m_oweAmount;
                    bool m_oweAmountHasBeenSet;

                    /**
                     * <p>是否允许欠费消费</p>
                     */
                    bool m_isAllowArrears;
                    bool m_isAllowArrearsHasBeenSet;

                    /**
                     * <p>是否限制信用额度</p>
                     */
                    bool m_isCreditLimited;
                    bool m_isCreditLimitedHasBeenSet;

                    /**
                     * <p>信用额度,单位 分</p>
                     */
                    double m_creditAmount;
                    bool m_creditAmountHasBeenSet;

                    /**
                     * <p>可用信用额度,单位 分。CreditBalance=CashAccountBalance+IncomeIntoAccountBalance+PresentAccountBalance+CreditAmount-OweAmount</p><p>单位：分</p>
                     */
                    double m_creditBalance;
                    bool m_creditBalanceHasBeenSet;

                    /**
                     * <p>真实可用信用额度,单位 分。RealCreditBalance=CreditBalance-FreezeAmount</p><p>单位：分</p>
                     */
                    double m_realCreditBalance;
                    bool m_realCreditBalanceHasBeenSet;

                    /**
                     * <p>临时额度，单位 分</p>
                     */
                    double m_tempCredit;
                    bool m_tempCreditHasBeenSet;

                    /**
                     * <p>临时额度详情</p>
                     */
                    std::vector<UinTempAmountModel> m_tempAmountInfoList;
                    bool m_tempAmountInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEACCOUNTBALANCERESPONSE_H_
