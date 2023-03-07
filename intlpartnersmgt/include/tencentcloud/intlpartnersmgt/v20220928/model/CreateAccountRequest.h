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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_CREATEACCOUNTREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_CREATEACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * CreateAccount请求参数结构体
                */
                class CreateAccountRequest : public AbstractModel
                {
                public:
                    CreateAccountRequest();
                    ~CreateAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取新建客户的账户类型标识。本接口取值为：personal或company
                     * @return AccountType 新建客户的账户类型标识。本接口取值为：personal或company
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置新建客户的账户类型标识。本接口取值为：personal或company
                     * @param AccountType 新建客户的账户类型标识。本接口取值为：personal或company
                     */
                    void SetAccountType(const std::string& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取注册邮件地址。需要调用方保证邮件地址的有效性和正确性。
需要满足邮件的格式。如：account@qq.com
                     * @return Mail 注册邮件地址。需要调用方保证邮件地址的有效性和正确性。
需要满足邮件的格式。如：account@qq.com
                     */
                    std::string GetMail() const;

                    /**
                     * 设置注册邮件地址。需要调用方保证邮件地址的有效性和正确性。
需要满足邮件的格式。如：account@qq.com
                     * @param Mail 注册邮件地址。需要调用方保证邮件地址的有效性和正确性。
需要满足邮件的格式。如：account@qq.com
                     */
                    void SetMail(const std::string& _mail);

                    /**
                     * 判断参数 Mail 是否已赋值
                     * @return Mail 是否已赋值
                     */
                    bool MailHasBeenSet() const;

                    /**
                     * 获取账户密码。
长度限制：[8,20]。
需同时包含数字、字母以及特殊符号（!@#$%^&*()等非空格）
                     * @return Password 账户密码。
长度限制：[8,20]。
需同时包含数字、字母以及特殊符号（!@#$%^&*()等非空格）
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置账户密码。
长度限制：[8,20]。
需同时包含数字、字母以及特殊符号（!@#$%^&*()等非空格）
                     * @param Password 账户密码。
长度限制：[8,20]。
需同时包含数字、字母以及特殊符号（!@#$%^&*()等非空格）
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取二次确认密码。必须和Password值相同
                     * @return ConfirmPassword 二次确认密码。必须和Password值相同
                     */
                    std::string GetConfirmPassword() const;

                    /**
                     * 设置二次确认密码。必须和Password值相同
                     * @param ConfirmPassword 二次确认密码。必须和Password值相同
                     */
                    void SetConfirmPassword(const std::string& _confirmPassword);

                    /**
                     * 判断参数 ConfirmPassword 是否已赋值
                     * @return ConfirmPassword 是否已赋值
                     */
                    bool ConfirmPasswordHasBeenSet() const;

                    /**
                     * 获取客户手机号码。需要调用方保证手机号码的有效性和正确性。
长度限制：[1,32]。支持全球手机号。如18888888888
                     * @return PhoneNum 客户手机号码。需要调用方保证手机号码的有效性和正确性。
长度限制：[1,32]。支持全球手机号。如18888888888
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 设置客户手机号码。需要调用方保证手机号码的有效性和正确性。
长度限制：[1,32]。支持全球手机号。如18888888888
                     * @param PhoneNum 客户手机号码。需要调用方保证手机号码的有效性和正确性。
长度限制：[1,32]。支持全球手机号。如18888888888
                     */
                    void SetPhoneNum(const std::string& _phoneNum);

                    /**
                     * 判断参数 PhoneNum 是否已赋值
                     * @return PhoneNum 是否已赋值
                     */
                    bool PhoneNumHasBeenSet() const;

                    /**
                     * 获取客户的国家/地区代码。取值参考获取国家/地区码接口GetCountryCodes。如852
                     * @return CountryCode 客户的国家/地区代码。取值参考获取国家/地区码接口GetCountryCodes。如852
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 设置客户的国家/地区代码。取值参考获取国家/地区码接口GetCountryCodes。如852
                     * @param CountryCode 客户的国家/地区代码。取值参考获取国家/地区码接口GetCountryCodes。如852
                     */
                    void SetCountryCode(const std::string& _countryCode);

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     */
                    bool CountryCodeHasBeenSet() const;

                    /**
                     * 获取客户的IOS2标准国家/地区代码。参考获取国家/地区码接口GetCountryCodes。需要与CountryCode值对应。如HK
                     * @return Area 客户的IOS2标准国家/地区代码。参考获取国家/地区码接口GetCountryCodes。需要与CountryCode值对应。如HK
                     */
                    std::string GetArea() const;

                    /**
                     * 设置客户的IOS2标准国家/地区代码。参考获取国家/地区码接口GetCountryCodes。需要与CountryCode值对应。如HK
                     * @param Area 客户的IOS2标准国家/地区代码。参考获取国家/地区码接口GetCountryCodes。需要与CountryCode值对应。如HK
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取拓展字段，默认为空
                     * @return Extended 拓展字段，默认为空
                     */
                    std::string GetExtended() const;

                    /**
                     * 设置拓展字段，默认为空
                     * @param Extended 拓展字段，默认为空
                     */
                    void SetExtended(const std::string& _extended);

                    /**
                     * 判断参数 Extended 是否已赋值
                     * @return Extended 是否已赋值
                     */
                    bool ExtendedHasBeenSet() const;

                private:

                    /**
                     * 新建客户的账户类型标识。本接口取值为：personal或company
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 注册邮件地址。需要调用方保证邮件地址的有效性和正确性。
需要满足邮件的格式。如：account@qq.com
                     */
                    std::string m_mail;
                    bool m_mailHasBeenSet;

                    /**
                     * 账户密码。
长度限制：[8,20]。
需同时包含数字、字母以及特殊符号（!@#$%^&*()等非空格）
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 二次确认密码。必须和Password值相同
                     */
                    std::string m_confirmPassword;
                    bool m_confirmPasswordHasBeenSet;

                    /**
                     * 客户手机号码。需要调用方保证手机号码的有效性和正确性。
长度限制：[1,32]。支持全球手机号。如18888888888
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                    /**
                     * 客户的国家/地区代码。取值参考获取国家/地区码接口GetCountryCodes。如852
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * 客户的IOS2标准国家/地区代码。参考获取国家/地区码接口GetCountryCodes。需要与CountryCode值对应。如HK
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 拓展字段，默认为空
                     */
                    std::string m_extended;
                    bool m_extendedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_CREATEACCOUNTREQUEST_H_
