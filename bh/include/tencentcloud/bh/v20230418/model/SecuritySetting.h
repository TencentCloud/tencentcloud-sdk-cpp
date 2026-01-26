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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_SECURITYSETTING_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_SECURITYSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/AuthModeSetting.h>
#include <tencentcloud/bh/v20230418/model/PasswordSetting.h>
#include <tencentcloud/bh/v20230418/model/LoginSetting.h>
#include <tencentcloud/bh/v20230418/model/LDAPSetting.h>
#include <tencentcloud/bh/v20230418/model/OAuthSetting.h>
#include <tencentcloud/bh/v20230418/model/ReconnectionSetting.h>
#include <tencentcloud/bh/v20230418/model/EnvInternetAccessSetting.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 系统安全设置
                */
                class SecuritySetting : public AbstractModel
                {
                public:
                    SecuritySetting();
                    ~SecuritySetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取认证方式设置
                     * @return AuthMode 认证方式设置
                     * 
                     */
                    AuthModeSetting GetAuthMode() const;

                    /**
                     * 设置认证方式设置
                     * @param _authMode 认证方式设置
                     * 
                     */
                    void SetAuthMode(const AuthModeSetting& _authMode);

                    /**
                     * 判断参数 AuthMode 是否已赋值
                     * @return AuthMode 是否已赋值
                     * 
                     */
                    bool AuthModeHasBeenSet() const;

                    /**
                     * 获取密码安全设置
                     * @return Password 密码安全设置
                     * 
                     */
                    PasswordSetting GetPassword() const;

                    /**
                     * 设置密码安全设置
                     * @param _password 密码安全设置
                     * 
                     */
                    void SetPassword(const PasswordSetting& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取登录安全设置
                     * @return Login 登录安全设置
                     * 
                     */
                    LoginSetting GetLogin() const;

                    /**
                     * 设置登录安全设置
                     * @param _login 登录安全设置
                     * 
                     */
                    void SetLogin(const LoginSetting& _login);

                    /**
                     * 判断参数 Login 是否已赋值
                     * @return Login 是否已赋值
                     * 
                     */
                    bool LoginHasBeenSet() const;

                    /**
                     * 获取LDAP配置信息
                     * @return LDAP LDAP配置信息
                     * 
                     */
                    LDAPSetting GetLDAP() const;

                    /**
                     * 设置LDAP配置信息
                     * @param _lDAP LDAP配置信息
                     * 
                     */
                    void SetLDAP(const LDAPSetting& _lDAP);

                    /**
                     * 判断参数 LDAP 是否已赋值
                     * @return LDAP 是否已赋值
                     * 
                     */
                    bool LDAPHasBeenSet() const;

                    /**
                     * 获取OAuth配置信息
                     * @return OAuth OAuth配置信息
                     * 
                     */
                    OAuthSetting GetOAuth() const;

                    /**
                     * 设置OAuth配置信息
                     * @param _oAuth OAuth配置信息
                     * 
                     */
                    void SetOAuth(const OAuthSetting& _oAuth);

                    /**
                     * 判断参数 OAuth 是否已赋值
                     * @return OAuth 是否已赋值
                     * 
                     */
                    bool OAuthHasBeenSet() const;

                    /**
                     * 获取国密认证方式设置
                     * @return AuthModeGM 国密认证方式设置
                     * 
                     */
                    AuthModeSetting GetAuthModeGM() const;

                    /**
                     * 设置国密认证方式设置
                     * @param _authModeGM 国密认证方式设置
                     * 
                     */
                    void SetAuthModeGM(const AuthModeSetting& _authModeGM);

                    /**
                     * 判断参数 AuthModeGM 是否已赋值
                     * @return AuthModeGM 是否已赋值
                     * 
                     */
                    bool AuthModeGMHasBeenSet() const;

                    /**
                     * 获取资产重连次数
                     * @return Reconnection 资产重连次数
                     * 
                     */
                    ReconnectionSetting GetReconnection() const;

                    /**
                     * 设置资产重连次数
                     * @param _reconnection 资产重连次数
                     * 
                     */
                    void SetReconnection(const ReconnectionSetting& _reconnection);

                    /**
                     * 判断参数 Reconnection 是否已赋值
                     * @return Reconnection 是否已赋值
                     * 
                     */
                    bool ReconnectionHasBeenSet() const;

                    /**
                     * 获取大区环境网络设置
                     * @return EnvInternetAccess 大区环境网络设置
                     * 
                     */
                    EnvInternetAccessSetting GetEnvInternetAccess() const;

                    /**
                     * 设置大区环境网络设置
                     * @param _envInternetAccess 大区环境网络设置
                     * 
                     */
                    void SetEnvInternetAccess(const EnvInternetAccessSetting& _envInternetAccess);

                    /**
                     * 判断参数 EnvInternetAccess 是否已赋值
                     * @return EnvInternetAccess 是否已赋值
                     * 
                     */
                    bool EnvInternetAccessHasBeenSet() const;

                private:

                    /**
                     * 认证方式设置
                     */
                    AuthModeSetting m_authMode;
                    bool m_authModeHasBeenSet;

                    /**
                     * 密码安全设置
                     */
                    PasswordSetting m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 登录安全设置
                     */
                    LoginSetting m_login;
                    bool m_loginHasBeenSet;

                    /**
                     * LDAP配置信息
                     */
                    LDAPSetting m_lDAP;
                    bool m_lDAPHasBeenSet;

                    /**
                     * OAuth配置信息
                     */
                    OAuthSetting m_oAuth;
                    bool m_oAuthHasBeenSet;

                    /**
                     * 国密认证方式设置
                     */
                    AuthModeSetting m_authModeGM;
                    bool m_authModeGMHasBeenSet;

                    /**
                     * 资产重连次数
                     */
                    ReconnectionSetting m_reconnection;
                    bool m_reconnectionHasBeenSet;

                    /**
                     * 大区环境网络设置
                     */
                    EnvInternetAccessSetting m_envInternetAccess;
                    bool m_envInternetAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_SECURITYSETTING_H_
