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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKPROFITSHAREPAYEERESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKPROFITSHAREPAYEERESULT_H_

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
                * 绑定分账收款方查询响应
                */
                class QueryOpenBankProfitSharePayeeResult : public AbstractModel
                {
                public:
                    QueryOpenBankProfitSharePayeeResult();
                    ~QueryOpenBankProfitSharePayeeResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账户ID（受益ID）
                     * @return AccountId 账户ID（受益ID）
                     * 
                     */
                    std::string GetAccountId() const;

                    /**
                     * 设置账户ID（受益ID）
                     * @param _accountId 账户ID（受益ID）
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
                     * 获取账户号。通联国际指客户银行账户号
                     * @return AccountNo 账户号。通联国际指客户银行账户号
                     * 
                     */
                    std::string GetAccountNo() const;

                    /**
                     * 设置账户号。通联国际指客户银行账户号
                     * @param _accountNo 账户号。通联国际指客户银行账户号
                     * 
                     */
                    void SetAccountNo(const std::string& _accountNo);

                    /**
                     * 判断参数 AccountNo 是否已赋值
                     * @return AccountNo 是否已赋值
                     * 
                     */
                    bool AccountNoHasBeenSet() const;

                    /**
                     * 获取账户货币。参考附录“币种类型”。
                     * @return Currency 账户货币。参考附录“币种类型”。
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置账户货币。参考附录“币种类型”。
                     * @param _currency 账户货币。参考附录“币种类型”。
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取收款人账户名称
                     * @return AccountName 收款人账户名称
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置收款人账户名称
                     * @param _accountName 收款人账户名称
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取银行名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BankName 银行名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBankName() const;

                    /**
                     * 设置银行名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bankName 银行名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBankName(const std::string& _bankName);

                    /**
                     * 判断参数 BankName 是否已赋值
                     * @return BankName 是否已赋值
                     * 
                     */
                    bool BankNameHasBeenSet() const;

                    /**
                     * 获取账户类型。
00:借记卡
01:存折 
02:信用卡 
03:准贷记卡 
04:预付卡费 
05:境外卡
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nature 账户类型。
00:借记卡
01:存折 
02:信用卡 
03:准贷记卡 
04:预付卡费 
05:境外卡
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNature() const;

                    /**
                     * 设置账户类型。
00:借记卡
01:存折 
02:信用卡 
03:准贷记卡 
04:预付卡费 
05:境外卡
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nature 账户类型。
00:借记卡
01:存折 
02:信用卡 
03:准贷记卡 
04:预付卡费 
05:境外卡
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNature(const std::string& _nature);

                    /**
                     * 判断参数 Nature 是否已赋值
                     * @return Nature 是否已赋值
                     * 
                     */
                    bool NatureHasBeenSet() const;

                    /**
                     * 获取状态
0-待审核；1-审核通过；2-审核不通过 3-关联实体未审核
                     * @return BindState 状态
0-待审核；1-审核通过；2-审核不通过 3-关联实体未审核
                     * 
                     */
                    std::string GetBindState() const;

                    /**
                     * 设置状态
0-待审核；1-审核通过；2-审核不通过 3-关联实体未审核
                     * @param _bindState 状态
0-待审核；1-审核通过；2-审核不通过 3-关联实体未审核
                     * 
                     */
                    void SetBindState(const std::string& _bindState);

                    /**
                     * 判断参数 BindState 是否已赋值
                     * @return BindState 是否已赋值
                     * 
                     */
                    bool BindStateHasBeenSet() const;

                    /**
                     * 获取状态描述
                     * @return StateExplain 状态描述
                     * 
                     */
                    std::string GetStateExplain() const;

                    /**
                     * 设置状态描述
                     * @param _stateExplain 状态描述
                     * 
                     */
                    void SetStateExplain(const std::string& _stateExplain);

                    /**
                     * 判断参数 StateExplain 是否已赋值
                     * @return StateExplain 是否已赋值
                     * 
                     */
                    bool StateExplainHasBeenSet() const;

                private:

                    /**
                     * 账户ID（受益ID）
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * 账户号。通联国际指客户银行账户号
                     */
                    std::string m_accountNo;
                    bool m_accountNoHasBeenSet;

                    /**
                     * 账户货币。参考附录“币种类型”。
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * 收款人账户名称
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 银行名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bankName;
                    bool m_bankNameHasBeenSet;

                    /**
                     * 账户类型。
00:借记卡
01:存折 
02:信用卡 
03:准贷记卡 
04:预付卡费 
05:境外卡
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nature;
                    bool m_natureHasBeenSet;

                    /**
                     * 状态
0-待审核；1-审核通过；2-审核不通过 3-关联实体未审核
                     */
                    std::string m_bindState;
                    bool m_bindStateHasBeenSet;

                    /**
                     * 状态描述
                     */
                    std::string m_stateExplain;
                    bool m_stateExplainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKPROFITSHAREPAYEERESULT_H_
