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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_PLATFORMACCOUNTBALANCERESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_PLATFORMACCOUNTBALANCERESULT_H_

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
                * 平台账户余额信息
                */
                class PlatformAccountBalanceResult : public AbstractModel
                {
                public:
                    PlatformAccountBalanceResult();
                    ~PlatformAccountBalanceResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                    std::string GetIncomeType() const;

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
                    void SetIncomeType(const std::string& _incomeType);

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

                private:

                    /**
                     * 收入类型
LABOR:劳务所得
OCCASION:偶然所得
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_incomeType;
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
                     * 提现中余额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inPayBalance;
                    bool m_inPayBalanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_PLATFORMACCOUNTBALANCERESULT_H_
