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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEORGMEMBERACCOUNTBALANCEDATA_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEORGMEMBERACCOUNTBALANCEDATA_H_

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
                * DescribeOrgMemberAccountBalanceData
                */
                class DescribeOrgMemberAccountBalanceData : public AbstractModel
                {
                public:
                    DescribeOrgMemberAccountBalanceData();
                    ~DescribeOrgMemberAccountBalanceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>成员账号Uin</p>
                     * @return MemberUin <p>成员账号Uin</p>
                     * 
                     */
                    std::string GetMemberUin() const;

                    /**
                     * 设置<p>成员账号Uin</p>
                     * @param _memberUin <p>成员账号Uin</p>
                     * 
                     */
                    void SetMemberUin(const std::string& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取<p>成员名称</p>
                     * @return MemberName <p>成员名称</p>
                     * 
                     */
                    std::string GetMemberName() const;

                    /**
                     * 设置<p>成员名称</p>
                     * @param _memberName <p>成员名称</p>
                     * 
                     */
                    void SetMemberName(const std::string& _memberName);

                    /**
                     * 判断参数 MemberName 是否已赋值
                     * @return MemberName 是否已赋值
                     * 
                     */
                    bool MemberNameHasBeenSet() const;

                    /**
                     * 获取<p>是否为信用账户</p>
                     * @return IsCreditAccount <p>是否为信用账户</p>
                     * 
                     */
                    bool GetIsCreditAccount() const;

                    /**
                     * 设置<p>是否为信用账户</p>
                     * @param _isCreditAccount <p>是否为信用账户</p>
                     * 
                     */
                    void SetIsCreditAccount(const bool& _isCreditAccount);

                    /**
                     * 判断参数 IsCreditAccount 是否已赋值
                     * @return IsCreditAccount 是否已赋值
                     * 
                     */
                    bool IsCreditAccountHasBeenSet() const;

                    /**
                     * 获取<p>当前真实可用余额</p><p>单位：分</p>
                     * @return RealBalance <p>当前真实可用余额</p><p>单位：分</p>
                     * 
                     */
                    double GetRealBalance() const;

                    /**
                     * 设置<p>当前真实可用余额</p><p>单位：分</p>
                     * @param _realBalance <p>当前真实可用余额</p><p>单位：分</p>
                     * 
                     */
                    void SetRealBalance(const double& _realBalance);

                    /**
                     * 判断参数 RealBalance 是否已赋值
                     * @return RealBalance 是否已赋值
                     * 
                     */
                    bool RealBalanceHasBeenSet() const;

                    /**
                     * 获取<p>现金账户余额</p><p>单位：分</p>
                     * @return CashAccountBalance <p>现金账户余额</p><p>单位：分</p>
                     * 
                     */
                    double GetCashAccountBalance() const;

                    /**
                     * 设置<p>现金账户余额</p><p>单位：分</p>
                     * @param _cashAccountBalance <p>现金账户余额</p><p>单位：分</p>
                     * 
                     */
                    void SetCashAccountBalance(const double& _cashAccountBalance);

                    /**
                     * 判断参数 CashAccountBalance 是否已赋值
                     * @return CashAccountBalance 是否已赋值
                     * 
                     */
                    bool CashAccountBalanceHasBeenSet() const;

                    /**
                     * 获取<p>信用额度</p><p>单位：分</p><p>信用额度 = 基础信用额度 + 临时信用额度</p>
                     * @return CreditAmount <p>信用额度</p><p>单位：分</p><p>信用额度 = 基础信用额度 + 临时信用额度</p>
                     * 
                     */
                    double GetCreditAmount() const;

                    /**
                     * 设置<p>信用额度</p><p>单位：分</p><p>信用额度 = 基础信用额度 + 临时信用额度</p>
                     * @param _creditAmount <p>信用额度</p><p>单位：分</p><p>信用额度 = 基础信用额度 + 临时信用额度</p>
                     * 
                     */
                    void SetCreditAmount(const double& _creditAmount);

                    /**
                     * 判断参数 CreditAmount 是否已赋值
                     * @return CreditAmount 是否已赋值
                     * 
                     */
                    bool CreditAmountHasBeenSet() const;

                    /**
                     * 获取<p>临时信用额度</p><p>单位：分</p>
                     * @return TempCredit <p>临时信用额度</p><p>单位：分</p>
                     * 
                     */
                    double GetTempCredit() const;

                    /**
                     * 设置<p>临时信用额度</p><p>单位：分</p>
                     * @param _tempCredit <p>临时信用额度</p><p>单位：分</p>
                     * 
                     */
                    void SetTempCredit(const double& _tempCredit);

                    /**
                     * 判断参数 TempCredit 是否已赋值
                     * @return TempCredit 是否已赋值
                     * 
                     */
                    bool TempCreditHasBeenSet() const;

                    /**
                     * 获取<p>基础信用额度</p><p>单位：分</p>
                     * @return BasicCreditAmount <p>基础信用额度</p><p>单位：分</p>
                     * 
                     */
                    double GetBasicCreditAmount() const;

                    /**
                     * 设置<p>基础信用额度</p><p>单位：分</p>
                     * @param _basicCreditAmount <p>基础信用额度</p><p>单位：分</p>
                     * 
                     */
                    void SetBasicCreditAmount(const double& _basicCreditAmount);

                    /**
                     * 判断参数 BasicCreditAmount 是否已赋值
                     * @return BasicCreditAmount 是否已赋值
                     * 
                     */
                    bool BasicCreditAmountHasBeenSet() const;

                    /**
                     * 获取<p>欠费金额</p><p>单位：分</p>
                     * @return OweAmount <p>欠费金额</p><p>单位：分</p>
                     * 
                     */
                    double GetOweAmount() const;

                    /**
                     * 设置<p>欠费金额</p><p>单位：分</p>
                     * @param _oweAmount <p>欠费金额</p><p>单位：分</p>
                     * 
                     */
                    void SetOweAmount(const double& _oweAmount);

                    /**
                     * 判断参数 OweAmount 是否已赋值
                     * @return OweAmount 是否已赋值
                     * 
                     */
                    bool OweAmountHasBeenSet() const;

                private:

                    /**
                     * <p>成员账号Uin</p>
                     */
                    std::string m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * <p>成员名称</p>
                     */
                    std::string m_memberName;
                    bool m_memberNameHasBeenSet;

                    /**
                     * <p>是否为信用账户</p>
                     */
                    bool m_isCreditAccount;
                    bool m_isCreditAccountHasBeenSet;

                    /**
                     * <p>当前真实可用余额</p><p>单位：分</p>
                     */
                    double m_realBalance;
                    bool m_realBalanceHasBeenSet;

                    /**
                     * <p>现金账户余额</p><p>单位：分</p>
                     */
                    double m_cashAccountBalance;
                    bool m_cashAccountBalanceHasBeenSet;

                    /**
                     * <p>信用额度</p><p>单位：分</p><p>信用额度 = 基础信用额度 + 临时信用额度</p>
                     */
                    double m_creditAmount;
                    bool m_creditAmountHasBeenSet;

                    /**
                     * <p>临时信用额度</p><p>单位：分</p>
                     */
                    double m_tempCredit;
                    bool m_tempCreditHasBeenSet;

                    /**
                     * <p>基础信用额度</p><p>单位：分</p>
                     */
                    double m_basicCreditAmount;
                    bool m_basicCreditAmountHasBeenSet;

                    /**
                     * <p>欠费金额</p><p>单位：分</p>
                     */
                    double m_oweAmount;
                    bool m_oweAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEORGMEMBERACCOUNTBALANCEDATA_H_
