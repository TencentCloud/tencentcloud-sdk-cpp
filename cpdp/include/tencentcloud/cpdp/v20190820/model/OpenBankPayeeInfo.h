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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKPAYEEINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKPAYEEINFO_H_

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
                * 云企付-收款人信息
                */
                class OpenBankPayeeInfo : public AbstractModel
                {
                public:
                    OpenBankPayeeInfo();
                    ~OpenBankPayeeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取收款方唯一标识。
当渠道为TENPAY，付款方式为EBANK_PAYMENT，必填，上送收款方入驻云企付商户ID；
付款方式为OPENBANK_PAYMENT时，非必填，输入外部收款方的标识ID
渠道为WECHAT，付款方式为TRANS_TO_CHANGE时，上送微信OPEN_ID；
                     * @return PayeeId 收款方唯一标识。
当渠道为TENPAY，付款方式为EBANK_PAYMENT，必填，上送收款方入驻云企付商户ID；
付款方式为OPENBANK_PAYMENT时，非必填，输入外部收款方的标识ID
渠道为WECHAT，付款方式为TRANS_TO_CHANGE时，上送微信OPEN_ID；
                     * 
                     */
                    std::string GetPayeeId() const;

                    /**
                     * 设置收款方唯一标识。
当渠道为TENPAY，付款方式为EBANK_PAYMENT，必填，上送收款方入驻云企付商户ID；
付款方式为OPENBANK_PAYMENT时，非必填，输入外部收款方的标识ID
渠道为WECHAT，付款方式为TRANS_TO_CHANGE时，上送微信OPEN_ID；
                     * @param _payeeId 收款方唯一标识。
当渠道为TENPAY，付款方式为EBANK_PAYMENT，必填，上送收款方入驻云企付商户ID；
付款方式为OPENBANK_PAYMENT时，非必填，输入外部收款方的标识ID
渠道为WECHAT，付款方式为TRANS_TO_CHANGE时，上送微信OPEN_ID；
                     * 
                     */
                    void SetPayeeId(const std::string& _payeeId);

                    /**
                     * 判断参数 PayeeId 是否已赋值
                     * @return PayeeId 是否已赋值
                     * 
                     */
                    bool PayeeIdHasBeenSet() const;

                    /**
                     * 获取支行名称。
                     * @return BankBranchName 支行名称。
                     * 
                     */
                    std::string GetBankBranchName() const;

                    /**
                     * 设置支行名称。
                     * @param _bankBranchName 支行名称。
                     * 
                     */
                    void SetBankBranchName(const std::string& _bankBranchName);

                    /**
                     * 判断参数 BankBranchName 是否已赋值
                     * @return BankBranchName 是否已赋值
                     * 
                     */
                    bool BankBranchNameHasBeenSet() const;

                    /**
                     * 获取银行账号。渠道为TENPAY，付款方式为OPENBANK_PAYMENT时必选
                     * @return BankAccountNumber 银行账号。渠道为TENPAY，付款方式为OPENBANK_PAYMENT时必选
                     * 
                     */
                    std::string GetBankAccountNumber() const;

                    /**
                     * 设置银行账号。渠道为TENPAY，付款方式为OPENBANK_PAYMENT时必选
                     * @param _bankAccountNumber 银行账号。渠道为TENPAY，付款方式为OPENBANK_PAYMENT时必选
                     * 
                     */
                    void SetBankAccountNumber(const std::string& _bankAccountNumber);

                    /**
                     * 判断参数 BankAccountNumber 是否已赋值
                     * @return BankAccountNumber 是否已赋值
                     * 
                     */
                    bool BankAccountNumberHasBeenSet() const;

                    /**
                     * 获取收款方名称。
当渠道为TENPAY，付款方式为EBANK_PAYMENT时，上送收款方入驻云企付的商户名称；
渠道为TENPAY，付款方式为OPENBANK_PAYMENT时必选，上送收款方账户名称；
渠道为ALIPAY，付款方式为SAFT_ISV时，收款账户标识类型为ALIPAY_LOGON_ID时必传，上送收款方真实姓名。
渠道为WECHAT，付款方式为TRANS_TO_CHANGE时，上送收款人姓名。
                     * @return PayeeName 收款方名称。
当渠道为TENPAY，付款方式为EBANK_PAYMENT时，上送收款方入驻云企付的商户名称；
渠道为TENPAY，付款方式为OPENBANK_PAYMENT时必选，上送收款方账户名称；
渠道为ALIPAY，付款方式为SAFT_ISV时，收款账户标识类型为ALIPAY_LOGON_ID时必传，上送收款方真实姓名。
渠道为WECHAT，付款方式为TRANS_TO_CHANGE时，上送收款人姓名。
                     * 
                     */
                    std::string GetPayeeName() const;

                    /**
                     * 设置收款方名称。
当渠道为TENPAY，付款方式为EBANK_PAYMENT时，上送收款方入驻云企付的商户名称；
渠道为TENPAY，付款方式为OPENBANK_PAYMENT时必选，上送收款方账户名称；
渠道为ALIPAY，付款方式为SAFT_ISV时，收款账户标识类型为ALIPAY_LOGON_ID时必传，上送收款方真实姓名。
渠道为WECHAT，付款方式为TRANS_TO_CHANGE时，上送收款人姓名。
                     * @param _payeeName 收款方名称。
当渠道为TENPAY，付款方式为EBANK_PAYMENT时，上送收款方入驻云企付的商户名称；
渠道为TENPAY，付款方式为OPENBANK_PAYMENT时必选，上送收款方账户名称；
渠道为ALIPAY，付款方式为SAFT_ISV时，收款账户标识类型为ALIPAY_LOGON_ID时必传，上送收款方真实姓名。
渠道为WECHAT，付款方式为TRANS_TO_CHANGE时，上送收款人姓名。
                     * 
                     */
                    void SetPayeeName(const std::string& _payeeName);

                    /**
                     * 判断参数 PayeeName 是否已赋值
                     * @return PayeeName 是否已赋值
                     * 
                     */
                    bool PayeeNameHasBeenSet() const;

                    /**
                     * 获取联行号。渠道为TENPAY，付款方式为OPENBANK_PAYMENT时必选
                     * @return BankBranchId 联行号。渠道为TENPAY，付款方式为OPENBANK_PAYMENT时必选
                     * 
                     */
                    std::string GetBankBranchId() const;

                    /**
                     * 设置联行号。渠道为TENPAY，付款方式为OPENBANK_PAYMENT时必选
                     * @param _bankBranchId 联行号。渠道为TENPAY，付款方式为OPENBANK_PAYMENT时必选
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
                     * 获取收款方绑卡序列号。
当渠道为TENPAY，付款方式为EBANK_PAYMENT时，必填，上送收款方入驻云企付平台时，下发的绑卡序列号；当渠道为ALIPAY，付款方式为SAFT_ISV时，必填，根据收款账户标识类型上送。
                     * @return BindSerialNo 收款方绑卡序列号。
当渠道为TENPAY，付款方式为EBANK_PAYMENT时，必填，上送收款方入驻云企付平台时，下发的绑卡序列号；当渠道为ALIPAY，付款方式为SAFT_ISV时，必填，根据收款账户标识类型上送。
                     * 
                     */
                    std::string GetBindSerialNo() const;

                    /**
                     * 设置收款方绑卡序列号。
当渠道为TENPAY，付款方式为EBANK_PAYMENT时，必填，上送收款方入驻云企付平台时，下发的绑卡序列号；当渠道为ALIPAY，付款方式为SAFT_ISV时，必填，根据收款账户标识类型上送。
                     * @param _bindSerialNo 收款方绑卡序列号。
当渠道为TENPAY，付款方式为EBANK_PAYMENT时，必填，上送收款方入驻云企付平台时，下发的绑卡序列号；当渠道为ALIPAY，付款方式为SAFT_ISV时，必填，根据收款账户标识类型上送。
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
                     * 获取收款账户标识类型
BANK_ACCOUNT：绑定银行账户
ACCOUNT_BOOK_ID：电子记账本ID
ALIPAY_USER_ID：支付宝的会员ID
ALIPAY_LOGON_ID：支付宝登录号。
付款方式为SAFT_ISV时，必填。
                     * @return AccountType 收款账户标识类型
BANK_ACCOUNT：绑定银行账户
ACCOUNT_BOOK_ID：电子记账本ID
ALIPAY_USER_ID：支付宝的会员ID
ALIPAY_LOGON_ID：支付宝登录号。
付款方式为SAFT_ISV时，必填。
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置收款账户标识类型
BANK_ACCOUNT：绑定银行账户
ACCOUNT_BOOK_ID：电子记账本ID
ALIPAY_USER_ID：支付宝的会员ID
ALIPAY_LOGON_ID：支付宝登录号。
付款方式为SAFT_ISV时，必填。
                     * @param _accountType 收款账户标识类型
BANK_ACCOUNT：绑定银行账户
ACCOUNT_BOOK_ID：电子记账本ID
ALIPAY_USER_ID：支付宝的会员ID
ALIPAY_LOGON_ID：支付宝登录号。
付款方式为SAFT_ISV时，必填。
                     * 
                     */
                    void SetAccountType(const std::string& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                private:

                    /**
                     * 收款方唯一标识。
当渠道为TENPAY，付款方式为EBANK_PAYMENT，必填，上送收款方入驻云企付商户ID；
付款方式为OPENBANK_PAYMENT时，非必填，输入外部收款方的标识ID
渠道为WECHAT，付款方式为TRANS_TO_CHANGE时，上送微信OPEN_ID；
                     */
                    std::string m_payeeId;
                    bool m_payeeIdHasBeenSet;

                    /**
                     * 支行名称。
                     */
                    std::string m_bankBranchName;
                    bool m_bankBranchNameHasBeenSet;

                    /**
                     * 银行账号。渠道为TENPAY，付款方式为OPENBANK_PAYMENT时必选
                     */
                    std::string m_bankAccountNumber;
                    bool m_bankAccountNumberHasBeenSet;

                    /**
                     * 收款方名称。
当渠道为TENPAY，付款方式为EBANK_PAYMENT时，上送收款方入驻云企付的商户名称；
渠道为TENPAY，付款方式为OPENBANK_PAYMENT时必选，上送收款方账户名称；
渠道为ALIPAY，付款方式为SAFT_ISV时，收款账户标识类型为ALIPAY_LOGON_ID时必传，上送收款方真实姓名。
渠道为WECHAT，付款方式为TRANS_TO_CHANGE时，上送收款人姓名。
                     */
                    std::string m_payeeName;
                    bool m_payeeNameHasBeenSet;

                    /**
                     * 联行号。渠道为TENPAY，付款方式为OPENBANK_PAYMENT时必选
                     */
                    std::string m_bankBranchId;
                    bool m_bankBranchIdHasBeenSet;

                    /**
                     * 收款方绑卡序列号。
当渠道为TENPAY，付款方式为EBANK_PAYMENT时，必填，上送收款方入驻云企付平台时，下发的绑卡序列号；当渠道为ALIPAY，付款方式为SAFT_ISV时，必填，根据收款账户标识类型上送。
                     */
                    std::string m_bindSerialNo;
                    bool m_bindSerialNoHasBeenSet;

                    /**
                     * 收款账户标识类型
BANK_ACCOUNT：绑定银行账户
ACCOUNT_BOOK_ID：电子记账本ID
ALIPAY_USER_ID：支付宝的会员ID
ALIPAY_LOGON_ID：支付宝登录号。
付款方式为SAFT_ISV时，必填。
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKPAYEEINFO_H_
