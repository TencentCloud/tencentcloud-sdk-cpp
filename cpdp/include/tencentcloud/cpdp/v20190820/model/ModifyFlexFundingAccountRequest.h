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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_MODIFYFLEXFUNDINGACCOUNTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_MODIFYFLEXFUNDINGACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyFlexFundingAccount请求参数结构体
                */
                class ModifyFlexFundingAccountRequest : public AbstractModel
                {
                public:
                    ModifyFlexFundingAccountRequest();
                    ~ModifyFlexFundingAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取收款用户ID
                     * @return PayeeId 收款用户ID
                     * 
                     */
                    std::string GetPayeeId() const;

                    /**
                     * 设置收款用户ID
                     * @param _payeeId 收款用户ID
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
                     * 获取收款用户资金账户ID
                     * @return FundingAccountBindSerialNo 收款用户资金账户ID
                     * 
                     */
                    std::string GetFundingAccountBindSerialNo() const;

                    /**
                     * 设置收款用户资金账户ID
                     * @param _fundingAccountBindSerialNo 收款用户资金账户ID
                     * 
                     */
                    void SetFundingAccountBindSerialNo(const std::string& _fundingAccountBindSerialNo);

                    /**
                     * 判断参数 FundingAccountBindSerialNo 是否已赋值
                     * @return FundingAccountBindSerialNo 是否已赋值
                     * 
                     */
                    bool FundingAccountBindSerialNoHasBeenSet() const;

                    /**
                     * 获取资金账户类型
PINGAN_BANK:平安银行
                     * @return FundingAccountType 资金账户类型
PINGAN_BANK:平安银行
                     * 
                     */
                    std::string GetFundingAccountType() const;

                    /**
                     * 设置资金账户类型
PINGAN_BANK:平安银行
                     * @param _fundingAccountType 资金账户类型
PINGAN_BANK:平安银行
                     * 
                     */
                    void SetFundingAccountType(const std::string& _fundingAccountType);

                    /**
                     * 判断参数 FundingAccountType 是否已赋值
                     * @return FundingAccountType 是否已赋值
                     * 
                     */
                    bool FundingAccountTypeHasBeenSet() const;

                    /**
                     * 获取收款资金账户手机号
                     * @return PhoneNo 收款资金账户手机号
                     * 
                     */
                    std::string GetPhoneNo() const;

                    /**
                     * 设置收款资金账户手机号
                     * @param _phoneNo 收款资金账户手机号
                     * 
                     */
                    void SetPhoneNo(const std::string& _phoneNo);

                    /**
                     * 判断参数 PhoneNo 是否已赋值
                     * @return PhoneNo 是否已赋值
                     * 
                     */
                    bool PhoneNoHasBeenSet() const;

                    /**
                     * 获取收款资金账户姓名
                     * @return FundingAccountName 收款资金账户姓名
                     * 
                     */
                    std::string GetFundingAccountName() const;

                    /**
                     * 设置收款资金账户姓名
                     * @param _fundingAccountName 收款资金账户姓名
                     * 
                     */
                    void SetFundingAccountName(const std::string& _fundingAccountName);

                    /**
                     * 判断参数 FundingAccountName 是否已赋值
                     * @return FundingAccountName 是否已赋值
                     * 
                     */
                    bool FundingAccountNameHasBeenSet() const;

                    /**
                     * 获取收款资金账户号
                     * @return FundingAccountNo 收款资金账户号
                     * 
                     */
                    std::string GetFundingAccountNo() const;

                    /**
                     * 设置收款资金账户号
                     * @param _fundingAccountNo 收款资金账户号
                     * 
                     */
                    void SetFundingAccountNo(const std::string& _fundingAccountNo);

                    /**
                     * 判断参数 FundingAccountNo 是否已赋值
                     * @return FundingAccountNo 是否已赋值
                     * 
                     */
                    bool FundingAccountNoHasBeenSet() const;

                    /**
                     * 获取环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * @return Environment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * @param _environment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取开户支行名
                     * @return BankBranchName 开户支行名
                     * 
                     */
                    std::string GetBankBranchName() const;

                    /**
                     * 设置开户支行名
                     * @param _bankBranchName 开户支行名
                     * 
                     */
                    void SetBankBranchName(const std::string& _bankBranchName);

                    /**
                     * 判断参数 BankBranchName 是否已赋值
                     * @return BankBranchName 是否已赋值
                     * 
                     */
                    bool BankBranchNameHasBeenSet() const;

                private:

                    /**
                     * 收款用户ID
                     */
                    std::string m_payeeId;
                    bool m_payeeIdHasBeenSet;

                    /**
                     * 收款用户资金账户ID
                     */
                    std::string m_fundingAccountBindSerialNo;
                    bool m_fundingAccountBindSerialNoHasBeenSet;

                    /**
                     * 资金账户类型
PINGAN_BANK:平安银行
                     */
                    std::string m_fundingAccountType;
                    bool m_fundingAccountTypeHasBeenSet;

                    /**
                     * 收款资金账户手机号
                     */
                    std::string m_phoneNo;
                    bool m_phoneNoHasBeenSet;

                    /**
                     * 收款资金账户姓名
                     */
                    std::string m_fundingAccountName;
                    bool m_fundingAccountNameHasBeenSet;

                    /**
                     * 收款资金账户号
                     */
                    std::string m_fundingAccountNo;
                    bool m_fundingAccountNoHasBeenSet;

                    /**
                     * 环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * 开户支行名
                     */
                    std::string m_bankBranchName;
                    bool m_bankBranchNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_MODIFYFLEXFUNDINGACCOUNTREQUEST_H_
