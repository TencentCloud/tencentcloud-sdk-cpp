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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBELOGINCONFIGRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBELOGINCONFIGRESPONSE_H_

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
                * DescribeLoginConfig返回参数结构体
                */
                class DescribeLoginConfigResponse : public AbstractModel
                {
                public:
                    DescribeLoginConfigResponse();
                    ~DescribeLoginConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否开启邮箱登录方式。true 表示已开启，允许用户使用邮箱和密码进行登录；false 表示已关闭。
                     * @return EmailLogin 是否开启邮箱登录方式。true 表示已开启，允许用户使用邮箱和密码进行登录；false 表示已关闭。
                     * 
                     */
                    bool GetEmailLogin() const;

                    /**
                     * 判断参数 EmailLogin 是否已赋值
                     * @return EmailLogin 是否已赋值
                     * 
                     */
                    bool EmailLoginHasBeenSet() const;

                    /**
                     * 获取是否开启匿名登录方式。true 表示已开启，允许用户无需注册即可以匿名身份登录；false 表示已关闭。
                     * @return AnonymousLogin 是否开启匿名登录方式。true 表示已开启，允许用户无需注册即可以匿名身份登录；false 表示已关闭。
                     * 
                     */
                    bool GetAnonymousLogin() const;

                    /**
                     * 判断参数 AnonymousLogin 是否已赋值
                     * @return AnonymousLogin 是否已赋值
                     * 
                     */
                    bool AnonymousLoginHasBeenSet() const;

                    /**
                     * 获取是否开启用户名密码登录方式。true 表示已开启，允许用户使用用户名和密码进行登录；false 表示已关闭。
                     * @return UserNameLogin 是否开启用户名密码登录方式。true 表示已开启，允许用户使用用户名和密码进行登录；false 表示已关闭。
                     * 
                     */
                    bool GetUserNameLogin() const;

                    /**
                     * 判断参数 UserNameLogin 是否已赋值
                     * @return UserNameLogin 是否已赋值
                     * 
                     */
                    bool UserNameLoginHasBeenSet() const;

                    /**
                     * 获取短信验证码发送配置，包含短信发送通道类型、自定义 APIs 数据源、调用方法及每日发送限额等信息。
                     * @return SmsVerificationConfig 短信验证码发送配置，包含短信发送通道类型、自定义 APIs 数据源、调用方法及每日发送限额等信息。
                     * 
                     */
                    VerificationConfig GetSmsVerificationConfig() const;

                    /**
                     * 判断参数 SmsVerificationConfig 是否已赋值
                     * @return SmsVerificationConfig 是否已赋值
                     * 
                     */
                    bool SmsVerificationConfigHasBeenSet() const;

                    /**
                     * 获取是否开启手机号短信登录方式。true 表示已开启，允许用户使用手机号和短信验证码进行登录和注册；false 表示已关闭。
                     * @return PhoneNumberLogin 是否开启手机号短信登录方式。true 表示已开启，允许用户使用手机号和短信验证码进行登录和注册；false 表示已关闭。
                     * 
                     */
                    bool GetPhoneNumberLogin() const;

                    /**
                     * 判断参数 PhoneNumberLogin 是否已赋值
                     * @return PhoneNumberLogin 是否已赋值
                     * 
                     */
                    bool PhoneNumberLoginHasBeenSet() const;

                    /**
                     * 获取MFA 多因子认证登录配置，包含 MFA 开关及各验证方式（短信、邮箱、TOTP、强制绑定手机号）的启用状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MfaConfig MFA 多因子认证登录配置，包含 MFA 开关及各验证方式（短信、邮箱、TOTP、强制绑定手机号）的启用状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MFALoginConfig GetMfaConfig() const;

                    /**
                     * 判断参数 MfaConfig 是否已赋值
                     * @return MfaConfig 是否已赋值
                     * 
                     */
                    bool MfaConfigHasBeenSet() const;

                    /**
                     * 获取密码修改策略配置，包含首次登录强制修改密码开关及定期修改密码策略（周期和时间单位）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PwdUpdateStrategy 密码修改策略配置，包含首次登录强制修改密码开关及定期修改密码策略（周期和时间单位）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PasswordUpdateLoginConfig GetPwdUpdateStrategy() const;

                    /**
                     * 判断参数 PwdUpdateStrategy 是否已赋值
                     * @return PwdUpdateStrategy 是否已赋值
                     * 
                     */
                    bool PwdUpdateStrategyHasBeenSet() const;

                private:

                    /**
                     * 是否开启邮箱登录方式。true 表示已开启，允许用户使用邮箱和密码进行登录；false 表示已关闭。
                     */
                    bool m_emailLogin;
                    bool m_emailLoginHasBeenSet;

                    /**
                     * 是否开启匿名登录方式。true 表示已开启，允许用户无需注册即可以匿名身份登录；false 表示已关闭。
                     */
                    bool m_anonymousLogin;
                    bool m_anonymousLoginHasBeenSet;

                    /**
                     * 是否开启用户名密码登录方式。true 表示已开启，允许用户使用用户名和密码进行登录；false 表示已关闭。
                     */
                    bool m_userNameLogin;
                    bool m_userNameLoginHasBeenSet;

                    /**
                     * 短信验证码发送配置，包含短信发送通道类型、自定义 APIs 数据源、调用方法及每日发送限额等信息。
                     */
                    VerificationConfig m_smsVerificationConfig;
                    bool m_smsVerificationConfigHasBeenSet;

                    /**
                     * 是否开启手机号短信登录方式。true 表示已开启，允许用户使用手机号和短信验证码进行登录和注册；false 表示已关闭。
                     */
                    bool m_phoneNumberLogin;
                    bool m_phoneNumberLoginHasBeenSet;

                    /**
                     * MFA 多因子认证登录配置，包含 MFA 开关及各验证方式（短信、邮箱、TOTP、强制绑定手机号）的启用状态。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MFALoginConfig m_mfaConfig;
                    bool m_mfaConfigHasBeenSet;

                    /**
                     * 密码修改策略配置，包含首次登录强制修改密码开关及定期修改密码策略（周期和时间单位）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PasswordUpdateLoginConfig m_pwdUpdateStrategy;
                    bool m_pwdUpdateStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBELOGINCONFIGRESPONSE_H_
