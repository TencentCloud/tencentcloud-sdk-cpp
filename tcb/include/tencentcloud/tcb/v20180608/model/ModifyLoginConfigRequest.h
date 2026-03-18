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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYLOGINCONFIGREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYLOGINCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/VerificationConfig.h>
#include <tencentcloud/tcb/v20180608/model/MFALoginConfig.h>
#include <tencentcloud/tcb/v20180608/model/PasswordUpdateLoginConfig.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * ModifyLoginConfig请求参数结构体
                */
                class ModifyLoginConfigRequest : public AbstractModel
                {
                public:
                    ModifyLoginConfigRequest();
                    ~ModifyLoginConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境 ID，用于指定需要修改登录策略的云开发环境。
                     * @return EnvId 环境 ID，用于指定需要修改登录策略的云开发环境。
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境 ID，用于指定需要修改登录策略的云开发环境。
                     * @param _envId 环境 ID，用于指定需要修改登录策略的云开发环境。
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取手机号短信登录开关。设置为 true 开启手机号短信登录，允许用户使用手机号和短信验证码进行登录和注册；设置为 false 关闭手机号短信登录。
                     * @return PhoneNumberLogin 手机号短信登录开关。设置为 true 开启手机号短信登录，允许用户使用手机号和短信验证码进行登录和注册；设置为 false 关闭手机号短信登录。
                     * 
                     */
                    bool GetPhoneNumberLogin() const;

                    /**
                     * 设置手机号短信登录开关。设置为 true 开启手机号短信登录，允许用户使用手机号和短信验证码进行登录和注册；设置为 false 关闭手机号短信登录。
                     * @param _phoneNumberLogin 手机号短信登录开关。设置为 true 开启手机号短信登录，允许用户使用手机号和短信验证码进行登录和注册；设置为 false 关闭手机号短信登录。
                     * 
                     */
                    void SetPhoneNumberLogin(const bool& _phoneNumberLogin);

                    /**
                     * 判断参数 PhoneNumberLogin 是否已赋值
                     * @return PhoneNumberLogin 是否已赋值
                     * 
                     */
                    bool PhoneNumberLoginHasBeenSet() const;

                    /**
                     * 获取邮箱登录开关。设置为 true 开启邮箱登录，允许用户使用邮箱和密码进行登录和注册；设置为 false 关闭邮箱登录。
                     * @return EmailLogin 邮箱登录开关。设置为 true 开启邮箱登录，允许用户使用邮箱和密码进行登录和注册；设置为 false 关闭邮箱登录。
                     * 
                     */
                    bool GetEmailLogin() const;

                    /**
                     * 设置邮箱登录开关。设置为 true 开启邮箱登录，允许用户使用邮箱和密码进行登录和注册；设置为 false 关闭邮箱登录。
                     * @param _emailLogin 邮箱登录开关。设置为 true 开启邮箱登录，允许用户使用邮箱和密码进行登录和注册；设置为 false 关闭邮箱登录。
                     * 
                     */
                    void SetEmailLogin(const bool& _emailLogin);

                    /**
                     * 判断参数 EmailLogin 是否已赋值
                     * @return EmailLogin 是否已赋值
                     * 
                     */
                    bool EmailLoginHasBeenSet() const;

                    /**
                     * 获取用户名密码登录开关。设置为 true 开启用户名密码登录，允许用户使用用户名和密码进行登录和注册；设置为 false 关闭用户名密码登录。
                     * @return UserNameLogin 用户名密码登录开关。设置为 true 开启用户名密码登录，允许用户使用用户名和密码进行登录和注册；设置为 false 关闭用户名密码登录。
                     * 
                     */
                    bool GetUserNameLogin() const;

                    /**
                     * 设置用户名密码登录开关。设置为 true 开启用户名密码登录，允许用户使用用户名和密码进行登录和注册；设置为 false 关闭用户名密码登录。
                     * @param _userNameLogin 用户名密码登录开关。设置为 true 开启用户名密码登录，允许用户使用用户名和密码进行登录和注册；设置为 false 关闭用户名密码登录。
                     * 
                     */
                    void SetUserNameLogin(const bool& _userNameLogin);

                    /**
                     * 判断参数 UserNameLogin 是否已赋值
                     * @return UserNameLogin 是否已赋值
                     * 
                     */
                    bool UserNameLoginHasBeenSet() const;

                    /**
                     * 获取匿名登录开关。设置为 true 开启匿名登录，允许用户无需注册即可以匿名身份访问应用；设置为 false 关闭匿名登录。
                     * @return AnonymousLogin 匿名登录开关。设置为 true 开启匿名登录，允许用户无需注册即可以匿名身份访问应用；设置为 false 关闭匿名登录。
                     * 
                     */
                    bool GetAnonymousLogin() const;

                    /**
                     * 设置匿名登录开关。设置为 true 开启匿名登录，允许用户无需注册即可以匿名身份访问应用；设置为 false 关闭匿名登录。
                     * @param _anonymousLogin 匿名登录开关。设置为 true 开启匿名登录，允许用户无需注册即可以匿名身份访问应用；设置为 false 关闭匿名登录。
                     * 
                     */
                    void SetAnonymousLogin(const bool& _anonymousLogin);

                    /**
                     * 判断参数 AnonymousLogin 是否已赋值
                     * @return AnonymousLogin 是否已赋值
                     * 
                     */
                    bool AnonymousLoginHasBeenSet() const;

                    /**
                     * 获取短信验证码发送配置，用于设置短信验证码的发送通道类型和日发送限额。不传则不修改当前配置。
                     * @return SmsVerificationConfig 短信验证码发送配置，用于设置短信验证码的发送通道类型和日发送限额。不传则不修改当前配置。
                     * 
                     */
                    VerificationConfig GetSmsVerificationConfig() const;

                    /**
                     * 设置短信验证码发送配置，用于设置短信验证码的发送通道类型和日发送限额。不传则不修改当前配置。
                     * @param _smsVerificationConfig 短信验证码发送配置，用于设置短信验证码的发送通道类型和日发送限额。不传则不修改当前配置。
                     * 
                     */
                    void SetSmsVerificationConfig(const VerificationConfig& _smsVerificationConfig);

                    /**
                     * 判断参数 SmsVerificationConfig 是否已赋值
                     * @return SmsVerificationConfig 是否已赋值
                     * 
                     */
                    bool SmsVerificationConfigHasBeenSet() const;

                    /**
                     * 获取MFA 多因子认证登录配置，用于设置多因子认证开关及验证方式（短信、邮箱、TOTP、强制绑定手机号）。不传则不修改当前配置。
                     * @return MfaConfig MFA 多因子认证登录配置，用于设置多因子认证开关及验证方式（短信、邮箱、TOTP、强制绑定手机号）。不传则不修改当前配置。
                     * 
                     */
                    MFALoginConfig GetMfaConfig() const;

                    /**
                     * 设置MFA 多因子认证登录配置，用于设置多因子认证开关及验证方式（短信、邮箱、TOTP、强制绑定手机号）。不传则不修改当前配置。
                     * @param _mfaConfig MFA 多因子认证登录配置，用于设置多因子认证开关及验证方式（短信、邮箱、TOTP、强制绑定手机号）。不传则不修改当前配置。
                     * 
                     */
                    void SetMfaConfig(const MFALoginConfig& _mfaConfig);

                    /**
                     * 判断参数 MfaConfig 是否已赋值
                     * @return MfaConfig 是否已赋值
                     * 
                     */
                    bool MfaConfigHasBeenSet() const;

                    /**
                     * 获取密码更新策略配置，用于设置首次登录强制修改密码和定期强制修改密码策略。不传则不修改当前配置。
                     * @return PwdUpdateStrategy 密码更新策略配置，用于设置首次登录强制修改密码和定期强制修改密码策略。不传则不修改当前配置。
                     * 
                     */
                    PasswordUpdateLoginConfig GetPwdUpdateStrategy() const;

                    /**
                     * 设置密码更新策略配置，用于设置首次登录强制修改密码和定期强制修改密码策略。不传则不修改当前配置。
                     * @param _pwdUpdateStrategy 密码更新策略配置，用于设置首次登录强制修改密码和定期强制修改密码策略。不传则不修改当前配置。
                     * 
                     */
                    void SetPwdUpdateStrategy(const PasswordUpdateLoginConfig& _pwdUpdateStrategy);

                    /**
                     * 判断参数 PwdUpdateStrategy 是否已赋值
                     * @return PwdUpdateStrategy 是否已赋值
                     * 
                     */
                    bool PwdUpdateStrategyHasBeenSet() const;

                private:

                    /**
                     * 环境 ID，用于指定需要修改登录策略的云开发环境。
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 手机号短信登录开关。设置为 true 开启手机号短信登录，允许用户使用手机号和短信验证码进行登录和注册；设置为 false 关闭手机号短信登录。
                     */
                    bool m_phoneNumberLogin;
                    bool m_phoneNumberLoginHasBeenSet;

                    /**
                     * 邮箱登录开关。设置为 true 开启邮箱登录，允许用户使用邮箱和密码进行登录和注册；设置为 false 关闭邮箱登录。
                     */
                    bool m_emailLogin;
                    bool m_emailLoginHasBeenSet;

                    /**
                     * 用户名密码登录开关。设置为 true 开启用户名密码登录，允许用户使用用户名和密码进行登录和注册；设置为 false 关闭用户名密码登录。
                     */
                    bool m_userNameLogin;
                    bool m_userNameLoginHasBeenSet;

                    /**
                     * 匿名登录开关。设置为 true 开启匿名登录，允许用户无需注册即可以匿名身份访问应用；设置为 false 关闭匿名登录。
                     */
                    bool m_anonymousLogin;
                    bool m_anonymousLoginHasBeenSet;

                    /**
                     * 短信验证码发送配置，用于设置短信验证码的发送通道类型和日发送限额。不传则不修改当前配置。
                     */
                    VerificationConfig m_smsVerificationConfig;
                    bool m_smsVerificationConfigHasBeenSet;

                    /**
                     * MFA 多因子认证登录配置，用于设置多因子认证开关及验证方式（短信、邮箱、TOTP、强制绑定手机号）。不传则不修改当前配置。
                     */
                    MFALoginConfig m_mfaConfig;
                    bool m_mfaConfigHasBeenSet;

                    /**
                     * 密码更新策略配置，用于设置首次登录强制修改密码和定期强制修改密码策略。不传则不修改当前配置。
                     */
                    PasswordUpdateLoginConfig m_pwdUpdateStrategy;
                    bool m_pwdUpdateStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYLOGINCONFIGREQUEST_H_
