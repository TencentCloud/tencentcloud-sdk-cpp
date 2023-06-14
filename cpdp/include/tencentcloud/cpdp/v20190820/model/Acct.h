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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_ACCT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_ACCT_H_

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
                * 账户信息
                */
                class Acct : public AbstractModel
                {
                public:
                    Acct();
                    ~Acct() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取STRING(50)，见证子账户的账号（可重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAcctNo STRING(50)，见证子账户的账号（可重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAcctNo() const;

                    /**
                     * 设置STRING(50)，见证子账户的账号（可重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAcctNo STRING(50)，见证子账户的账号（可重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubAcctNo(const std::string& _subAcctNo);

                    /**
                     * 判断参数 SubAcctNo 是否已赋值
                     * @return SubAcctNo 是否已赋值
                     * 
                     */
                    bool SubAcctNoHasBeenSet() const;

                    /**
                     * 获取STRING(10)，见证子账户的属性（可重复。1: 普通会员子账号; 2: 挂账子账号; 3: 手续费子账号; 4: 利息子账号; 5: 平台担保子账号）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAcctProperty STRING(10)，见证子账户的属性（可重复。1: 普通会员子账号; 2: 挂账子账号; 3: 手续费子账号; 4: 利息子账号; 5: 平台担保子账号）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAcctProperty() const;

                    /**
                     * 设置STRING(10)，见证子账户的属性（可重复。1: 普通会员子账号; 2: 挂账子账号; 3: 手续费子账号; 4: 利息子账号; 5: 平台担保子账号）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAcctProperty STRING(10)，见证子账户的属性（可重复。1: 普通会员子账号; 2: 挂账子账号; 3: 手续费子账号; 4: 利息子账号; 5: 平台担保子账号）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubAcctProperty(const std::string& _subAcctProperty);

                    /**
                     * 判断参数 SubAcctProperty 是否已赋值
                     * @return SubAcctProperty 是否已赋值
                     * 
                     */
                    bool SubAcctPropertyHasBeenSet() const;

                    /**
                     * 获取STRING(32)，交易网会员代码（可重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranNetMemberCode STRING(32)，交易网会员代码（可重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTranNetMemberCode() const;

                    /**
                     * 设置STRING(32)，交易网会员代码（可重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tranNetMemberCode STRING(32)，交易网会员代码（可重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTranNetMemberCode(const std::string& _tranNetMemberCode);

                    /**
                     * 判断参数 TranNetMemberCode 是否已赋值
                     * @return TranNetMemberCode 是否已赋值
                     * 
                     */
                    bool TranNetMemberCodeHasBeenSet() const;

                    /**
                     * 获取STRING(150)，见证子账户的名称（可重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAcctName STRING(150)，见证子账户的名称（可重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAcctName() const;

                    /**
                     * 设置STRING(150)，见证子账户的名称（可重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAcctName STRING(150)，见证子账户的名称（可重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubAcctName(const std::string& _subAcctName);

                    /**
                     * 判断参数 SubAcctName 是否已赋值
                     * @return SubAcctName 是否已赋值
                     * 
                     */
                    bool SubAcctNameHasBeenSet() const;

                    /**
                     * 获取STRING(20)，见证子账户可用余额（可重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AcctAvailBal STRING(20)，见证子账户可用余额（可重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAcctAvailBal() const;

                    /**
                     * 设置STRING(20)，见证子账户可用余额（可重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _acctAvailBal STRING(20)，见证子账户可用余额（可重复）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAcctAvailBal(const std::string& _acctAvailBal);

                    /**
                     * 判断参数 AcctAvailBal 是否已赋值
                     * @return AcctAvailBal 是否已赋值
                     * 
                     */
                    bool AcctAvailBalHasBeenSet() const;

                    /**
                     * 获取STRING(20)，见证子账户可提现金额（可重复。开户日期或修改日期）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CashAmt STRING(20)，见证子账户可提现金额（可重复。开户日期或修改日期）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCashAmt() const;

                    /**
                     * 设置STRING(20)，见证子账户可提现金额（可重复。开户日期或修改日期）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cashAmt STRING(20)，见证子账户可提现金额（可重复。开户日期或修改日期）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCashAmt(const std::string& _cashAmt);

                    /**
                     * 判断参数 CashAmt 是否已赋值
                     * @return CashAmt 是否已赋值
                     * 
                     */
                    bool CashAmtHasBeenSet() const;

                    /**
                     * 获取STRING(8)，维护日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaintenanceDate STRING(8)，维护日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMaintenanceDate() const;

                    /**
                     * 设置STRING(8)，维护日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maintenanceDate STRING(8)，维护日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaintenanceDate(const std::string& _maintenanceDate);

                    /**
                     * 判断参数 MaintenanceDate 是否已赋值
                     * @return MaintenanceDate 是否已赋值
                     * 
                     */
                    bool MaintenanceDateHasBeenSet() const;

                private:

                    /**
                     * STRING(50)，见证子账户的账号（可重复）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAcctNo;
                    bool m_subAcctNoHasBeenSet;

                    /**
                     * STRING(10)，见证子账户的属性（可重复。1: 普通会员子账号; 2: 挂账子账号; 3: 手续费子账号; 4: 利息子账号; 5: 平台担保子账号）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAcctProperty;
                    bool m_subAcctPropertyHasBeenSet;

                    /**
                     * STRING(32)，交易网会员代码（可重复）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tranNetMemberCode;
                    bool m_tranNetMemberCodeHasBeenSet;

                    /**
                     * STRING(150)，见证子账户的名称（可重复）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAcctName;
                    bool m_subAcctNameHasBeenSet;

                    /**
                     * STRING(20)，见证子账户可用余额（可重复）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_acctAvailBal;
                    bool m_acctAvailBalHasBeenSet;

                    /**
                     * STRING(20)，见证子账户可提现金额（可重复。开户日期或修改日期）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cashAmt;
                    bool m_cashAmtHasBeenSet;

                    /**
                     * STRING(8)，维护日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_maintenanceDate;
                    bool m_maintenanceDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_ACCT_H_
