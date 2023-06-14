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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKEXTERNALSUBMERCHANTBANKACCOUNTDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKEXTERNALSUBMERCHANTBANKACCOUNTDATA_H_

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
                * 第三方子商户银行卡列表查询返回数据
                */
                class QueryOpenBankExternalSubMerchantBankAccountData : public AbstractModel
                {
                public:
                    QueryOpenBankExternalSubMerchantBankAccountData();
                    ~QueryOpenBankExternalSubMerchantBankAccountData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开户银行。
                     * @return AccountBank 开户银行。
                     * 
                     */
                    std::string GetAccountBank() const;

                    /**
                     * 设置开户银行。
                     * @param _accountBank 开户银行。
                     * 
                     */
                    void SetAccountBank(const std::string& _accountBank);

                    /**
                     * 判断参数 AccountBank 是否已赋值
                     * @return AccountBank 是否已赋值
                     * 
                     */
                    bool AccountBankHasBeenSet() const;

                    /**
                     * 获取绑卡序列号。
                     * @return BindSerialNo 绑卡序列号。
                     * 
                     */
                    std::string GetBindSerialNo() const;

                    /**
                     * 设置绑卡序列号。
                     * @param _bindSerialNo 绑卡序列号。
                     * 
                     */
                    void SetBindSerialNo(const std::string& _bindSerialNo);

                    /**
                     * 判断参数 BindSerialNo 是否已赋值
                     * @return BindSerialNo 是否已赋值
                     * 
                     */
                    bool BindSerialNoHasBeenSet() const;

                    /**
                     * 获取账号类型。
__COLLECT_MONEY__: 收款卡
__PAYMENT__: 付款卡
                     * @return AccountType 账号类型。
__COLLECT_MONEY__: 收款卡
__PAYMENT__: 付款卡
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置账号类型。
__COLLECT_MONEY__: 收款卡
__PAYMENT__: 付款卡
                     * @param _accountType 账号类型。
__COLLECT_MONEY__: 收款卡
__PAYMENT__: 付款卡
                     * 
                     */
                    void SetAccountType(const std::string& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取支行号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BankBranchId 支行号。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBankBranchId() const;

                    /**
                     * 设置支行号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bankBranchId 支行号。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBankBranchId(const std::string& _bankBranchId);

                    /**
                     * 判断参数 BankBranchId 是否已赋值
                     * @return BankBranchId 是否已赋值
                     * 
                     */
                    bool BankBranchIdHasBeenSet() const;

                    /**
                     * 获取银行卡卡后四位。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountNumberLastFour 银行卡卡后四位。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountNumberLastFour() const;

                    /**
                     * 设置银行卡卡后四位。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountNumberLastFour 银行卡卡后四位。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountNumberLastFour(const std::string& _accountNumberLastFour);

                    /**
                     * 判断参数 AccountNumberLastFour 是否已赋值
                     * @return AccountNumberLastFour 是否已赋值
                     * 
                     */
                    bool AccountNumberLastFourHasBeenSet() const;

                private:

                    /**
                     * 开户银行。
                     */
                    std::string m_accountBank;
                    bool m_accountBankHasBeenSet;

                    /**
                     * 绑卡序列号。
                     */
                    std::string m_bindSerialNo;
                    bool m_bindSerialNoHasBeenSet;

                    /**
                     * 账号类型。
__COLLECT_MONEY__: 收款卡
__PAYMENT__: 付款卡
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 支行号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bankBranchId;
                    bool m_bankBranchIdHasBeenSet;

                    /**
                     * 银行卡卡后四位。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountNumberLastFour;
                    bool m_accountNumberLastFourHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKEXTERNALSUBMERCHANTBANKACCOUNTDATA_H_
