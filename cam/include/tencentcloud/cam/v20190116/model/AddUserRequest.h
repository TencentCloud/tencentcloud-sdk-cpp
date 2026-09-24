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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_ADDUSERREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_ADDUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * AddUser请求参数结构体
                */
                class AddUserRequest : public AbstractModel
                {
                public:
                    AddUserRequest();
                    ~AddUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>子用户用户名</p>
                     * @return Name <p>子用户用户名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>子用户用户名</p>
                     * @param _name <p>子用户用户名</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>子用户备注</p>
                     * @return Remark <p>子用户备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>子用户备注</p>
                     * @param _remark <p>子用户备注</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>子用户是否可以登录控制台。传0子用户无法登录控制台，传1子用户可以登录控制台。</p>
                     * @return ConsoleLogin <p>子用户是否可以登录控制台。传0子用户无法登录控制台，传1子用户可以登录控制台。</p>
                     * 
                     */
                    uint64_t GetConsoleLogin() const;

                    /**
                     * 设置<p>子用户是否可以登录控制台。传0子用户无法登录控制台，传1子用户可以登录控制台。</p>
                     * @param _consoleLogin <p>子用户是否可以登录控制台。传0子用户无法登录控制台，传1子用户可以登录控制台。</p>
                     * 
                     */
                    void SetConsoleLogin(const uint64_t& _consoleLogin);

                    /**
                     * 判断参数 ConsoleLogin 是否已赋值
                     * @return ConsoleLogin 是否已赋值
                     * 
                     */
                    bool ConsoleLoginHasBeenSet() const;

                    /**
                     * 获取<p>是否生成子用户密钥。传0不生成子用户密钥，传1生成子用户密钥。</p>
                     * @return UseApi <p>是否生成子用户密钥。传0不生成子用户密钥，传1生成子用户密钥。</p>
                     * 
                     */
                    uint64_t GetUseApi() const;

                    /**
                     * 设置<p>是否生成子用户密钥。传0不生成子用户密钥，传1生成子用户密钥。</p>
                     * @param _useApi <p>是否生成子用户密钥。传0不生成子用户密钥，传1生成子用户密钥。</p>
                     * 
                     */
                    void SetUseApi(const uint64_t& _useApi);

                    /**
                     * 判断参数 UseApi 是否已赋值
                     * @return UseApi 是否已赋值
                     * 
                     */
                    bool UseApiHasBeenSet() const;

                    /**
                     * 获取<p>子用户控制台登录密码，若未进行密码规则设置则默认密码规则为8位以上同时包含大小写字母、数字和特殊字符。只有可以登录控制台时才有效，如果传空并且上面指定允许登录控制台，则自动生成随机密码，随机密码规则为32位包含大小写字母、数字和特殊字符。</p>
                     * @return Password <p>子用户控制台登录密码，若未进行密码规则设置则默认密码规则为8位以上同时包含大小写字母、数字和特殊字符。只有可以登录控制台时才有效，如果传空并且上面指定允许登录控制台，则自动生成随机密码，随机密码规则为32位包含大小写字母、数字和特殊字符。</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>子用户控制台登录密码，若未进行密码规则设置则默认密码规则为8位以上同时包含大小写字母、数字和特殊字符。只有可以登录控制台时才有效，如果传空并且上面指定允许登录控制台，则自动生成随机密码，随机密码规则为32位包含大小写字母、数字和特殊字符。</p>
                     * @param _password <p>子用户控制台登录密码，若未进行密码规则设置则默认密码规则为8位以上同时包含大小写字母、数字和特殊字符。只有可以登录控制台时才有效，如果传空并且上面指定允许登录控制台，则自动生成随机密码，随机密码规则为32位包含大小写字母、数字和特殊字符。</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>子用户是否要在下次登录时重置密码。传0子用户下次登录控制台不需重置密码，传1子用户下次登录控制台需要重置密码。</p>
                     * @return NeedResetPassword <p>子用户是否要在下次登录时重置密码。传0子用户下次登录控制台不需重置密码，传1子用户下次登录控制台需要重置密码。</p>
                     * 
                     */
                    uint64_t GetNeedResetPassword() const;

                    /**
                     * 设置<p>子用户是否要在下次登录时重置密码。传0子用户下次登录控制台不需重置密码，传1子用户下次登录控制台需要重置密码。</p>
                     * @param _needResetPassword <p>子用户是否要在下次登录时重置密码。传0子用户下次登录控制台不需重置密码，传1子用户下次登录控制台需要重置密码。</p>
                     * 
                     */
                    void SetNeedResetPassword(const uint64_t& _needResetPassword);

                    /**
                     * 判断参数 NeedResetPassword 是否已赋值
                     * @return NeedResetPassword 是否已赋值
                     * 
                     */
                    bool NeedResetPasswordHasBeenSet() const;

                    /**
                     * 获取<p>手机号</p>
                     * @return PhoneNum <p>手机号</p>
                     * 
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 设置<p>手机号</p>
                     * @param _phoneNum <p>手机号</p>
                     * 
                     */
                    void SetPhoneNum(const std::string& _phoneNum);

                    /**
                     * 判断参数 PhoneNum 是否已赋值
                     * @return PhoneNum 是否已赋值
                     * 
                     */
                    bool PhoneNumHasBeenSet() const;

                    /**
                     * 获取<p>区号</p>
                     * @return CountryCode <p>区号</p>
                     * 
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 设置<p>区号</p>
                     * @param _countryCode <p>区号</p>
                     * 
                     */
                    void SetCountryCode(const std::string& _countryCode);

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     * 
                     */
                    bool CountryCodeHasBeenSet() const;

                    /**
                     * 获取<p>邮箱</p>
                     * @return Email <p>邮箱</p>
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置<p>邮箱</p>
                     * @param _email <p>邮箱</p>
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                private:

                    /**
                     * <p>子用户用户名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>子用户备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>子用户是否可以登录控制台。传0子用户无法登录控制台，传1子用户可以登录控制台。</p>
                     */
                    uint64_t m_consoleLogin;
                    bool m_consoleLoginHasBeenSet;

                    /**
                     * <p>是否生成子用户密钥。传0不生成子用户密钥，传1生成子用户密钥。</p>
                     */
                    uint64_t m_useApi;
                    bool m_useApiHasBeenSet;

                    /**
                     * <p>子用户控制台登录密码，若未进行密码规则设置则默认密码规则为8位以上同时包含大小写字母、数字和特殊字符。只有可以登录控制台时才有效，如果传空并且上面指定允许登录控制台，则自动生成随机密码，随机密码规则为32位包含大小写字母、数字和特殊字符。</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>子用户是否要在下次登录时重置密码。传0子用户下次登录控制台不需重置密码，传1子用户下次登录控制台需要重置密码。</p>
                     */
                    uint64_t m_needResetPassword;
                    bool m_needResetPasswordHasBeenSet;

                    /**
                     * <p>手机号</p>
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                    /**
                     * <p>区号</p>
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * <p>邮箱</p>
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_ADDUSERREQUEST_H_
