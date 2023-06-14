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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKPAYERINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKPAYERINFO_H_

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
                * 云企付-付款人信息
                */
                class OpenBankPayerInfo : public AbstractModel
                {
                public:
                    OpenBankPayerInfo();
                    ~OpenBankPayerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取付款方唯一标识。当TENPAY时，必填上送
付款方入驻云企付商户ID。
                     * @return PayerId 付款方唯一标识。当TENPAY时，必填上送
付款方入驻云企付商户ID。
                     * 
                     */
                    std::string GetPayerId() const;

                    /**
                     * 设置付款方唯一标识。当TENPAY时，必填上送
付款方入驻云企付商户ID。
                     * @param _payerId 付款方唯一标识。当TENPAY时，必填上送
付款方入驻云企付商户ID。
                     * 
                     */
                    void SetPayerId(const std::string& _payerId);

                    /**
                     * 判断参数 PayerId 是否已赋值
                     * @return PayerId 是否已赋值
                     * 
                     */
                    bool PayerIdHasBeenSet() const;

                    /**
                     * 获取付款方名称。当TENPAY上送付款方入驻云企付的商户名称。
                     * @return PayerName 付款方名称。当TENPAY上送付款方入驻云企付的商户名称。
                     * 
                     */
                    std::string GetPayerName() const;

                    /**
                     * 设置付款方名称。当TENPAY上送付款方入驻云企付的商户名称。
                     * @param _payerName 付款方名称。当TENPAY上送付款方入驻云企付的商户名称。
                     * 
                     */
                    void SetPayerName(const std::string& _payerName);

                    /**
                     * 判断参数 PayerName 是否已赋值
                     * @return PayerName 是否已赋值
                     * 
                     */
                    bool PayerNameHasBeenSet() const;

                    /**
                     * 获取付款方付款账户标识。
当付款方式为OPENBANK_PAYMENT时，必输表示企业账户ID；当付款方式为SAFT_ISV时，必须上送付款方的渠道电子记账本ID；当付款方式为ONLINEBANK，上送付款方银行编号BankId。
                     * @return BindSerialNo 付款方付款账户标识。
当付款方式为OPENBANK_PAYMENT时，必输表示企业账户ID；当付款方式为SAFT_ISV时，必须上送付款方的渠道电子记账本ID；当付款方式为ONLINEBANK，上送付款方银行编号BankId。
                     * 
                     */
                    std::string GetBindSerialNo() const;

                    /**
                     * 设置付款方付款账户标识。
当付款方式为OPENBANK_PAYMENT时，必输表示企业账户ID；当付款方式为SAFT_ISV时，必须上送付款方的渠道电子记账本ID；当付款方式为ONLINEBANK，上送付款方银行编号BankId。
                     * @param _bindSerialNo 付款方付款账户标识。
当付款方式为OPENBANK_PAYMENT时，必输表示企业账户ID；当付款方式为SAFT_ISV时，必须上送付款方的渠道电子记账本ID；当付款方式为ONLINEBANK，上送付款方银行编号BankId。
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
                     * 获取付款账户标识类型
BANK_ACCOUNT：绑定银行账户
ACCOUNT_BOOK_ID：电子记账本ID。
当付款方式为SAFT_ISV时，必须上送类型为ACCOUNT_BOOK_ID。
                     * @return AccountType 付款账户标识类型
BANK_ACCOUNT：绑定银行账户
ACCOUNT_BOOK_ID：电子记账本ID。
当付款方式为SAFT_ISV时，必须上送类型为ACCOUNT_BOOK_ID。
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置付款账户标识类型
BANK_ACCOUNT：绑定银行账户
ACCOUNT_BOOK_ID：电子记账本ID。
当付款方式为SAFT_ISV时，必须上送类型为ACCOUNT_BOOK_ID。
                     * @param _accountType 付款账户标识类型
BANK_ACCOUNT：绑定银行账户
ACCOUNT_BOOK_ID：电子记账本ID。
当付款方式为SAFT_ISV时，必须上送类型为ACCOUNT_BOOK_ID。
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
                     * 获取付款卡类型。汇付渠道必填。
DEBIT_CARD：借记卡
CREDIT_CARD：信用卡
                     * @return BankCardType 付款卡类型。汇付渠道必填。
DEBIT_CARD：借记卡
CREDIT_CARD：信用卡
                     * 
                     */
                    std::string GetBankCardType() const;

                    /**
                     * 设置付款卡类型。汇付渠道必填。
DEBIT_CARD：借记卡
CREDIT_CARD：信用卡
                     * @param _bankCardType 付款卡类型。汇付渠道必填。
DEBIT_CARD：借记卡
CREDIT_CARD：信用卡
                     * 
                     */
                    void SetBankCardType(const std::string& _bankCardType);

                    /**
                     * 判断参数 BankCardType 是否已赋值
                     * @return BankCardType 是否已赋值
                     * 
                     */
                    bool BankCardTypeHasBeenSet() const;

                private:

                    /**
                     * 付款方唯一标识。当TENPAY时，必填上送
付款方入驻云企付商户ID。
                     */
                    std::string m_payerId;
                    bool m_payerIdHasBeenSet;

                    /**
                     * 付款方名称。当TENPAY上送付款方入驻云企付的商户名称。
                     */
                    std::string m_payerName;
                    bool m_payerNameHasBeenSet;

                    /**
                     * 付款方付款账户标识。
当付款方式为OPENBANK_PAYMENT时，必输表示企业账户ID；当付款方式为SAFT_ISV时，必须上送付款方的渠道电子记账本ID；当付款方式为ONLINEBANK，上送付款方银行编号BankId。
                     */
                    std::string m_bindSerialNo;
                    bool m_bindSerialNoHasBeenSet;

                    /**
                     * 付款账户标识类型
BANK_ACCOUNT：绑定银行账户
ACCOUNT_BOOK_ID：电子记账本ID。
当付款方式为SAFT_ISV时，必须上送类型为ACCOUNT_BOOK_ID。
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 付款卡类型。汇付渠道必填。
DEBIT_CARD：借记卡
CREDIT_CARD：信用卡
                     */
                    std::string m_bankCardType;
                    bool m_bankCardTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKPAYERINFO_H_
