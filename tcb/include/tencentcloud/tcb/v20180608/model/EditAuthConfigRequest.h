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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_EDITAUTHCONFIGREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_EDITAUTHCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * EditAuthConfig请求参数结构体
                */
                class EditAuthConfigRequest : public AbstractModel
                {
                public:
                    EditAuthConfigRequest();
                    ~EditAuthConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境id
                     * @return EnvId 环境id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id
                     * @param _envId 环境id
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
                     * 获取手机号登录配置 "TRUE",  "FALSE", "LOGIN_ONLY"
                     * @return PhoneNumberLogin 手机号登录配置 "TRUE",  "FALSE", "LOGIN_ONLY"
                     * 
                     */
                    std::string GetPhoneNumberLogin() const;

                    /**
                     * 设置手机号登录配置 "TRUE",  "FALSE", "LOGIN_ONLY"
                     * @param _phoneNumberLogin 手机号登录配置 "TRUE",  "FALSE", "LOGIN_ONLY"
                     * 
                     */
                    void SetPhoneNumberLogin(const std::string& _phoneNumberLogin);

                    /**
                     * 判断参数 PhoneNumberLogin 是否已赋值
                     * @return PhoneNumberLogin 是否已赋值
                     * 
                     */
                    bool PhoneNumberLoginHasBeenSet() const;

                    /**
                     * 获取匿名登录配置 "TRUE",  "FALSE"
                     * @return AnonymousLogin 匿名登录配置 "TRUE",  "FALSE"
                     * 
                     */
                    std::string GetAnonymousLogin() const;

                    /**
                     * 设置匿名登录配置 "TRUE",  "FALSE"
                     * @param _anonymousLogin 匿名登录配置 "TRUE",  "FALSE"
                     * 
                     */
                    void SetAnonymousLogin(const std::string& _anonymousLogin);

                    /**
                     * 判断参数 AnonymousLogin 是否已赋值
                     * @return AnonymousLogin 是否已赋值
                     * 
                     */
                    bool AnonymousLoginHasBeenSet() const;

                    /**
                     * 获取用户名密码登录配置 "TRUE",  "FALSE"
                     * @return UsernameLogin 用户名密码登录配置 "TRUE",  "FALSE"
                     * 
                     */
                    std::string GetUsernameLogin() const;

                    /**
                     * 设置用户名密码登录配置 "TRUE",  "FALSE"
                     * @param _usernameLogin 用户名密码登录配置 "TRUE",  "FALSE"
                     * 
                     */
                    void SetUsernameLogin(const std::string& _usernameLogin);

                    /**
                     * 判断参数 UsernameLogin 是否已赋值
                     * @return UsernameLogin 是否已赋值
                     * 
                     */
                    bool UsernameLoginHasBeenSet() const;

                private:

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 手机号登录配置 "TRUE",  "FALSE", "LOGIN_ONLY"
                     */
                    std::string m_phoneNumberLogin;
                    bool m_phoneNumberLoginHasBeenSet;

                    /**
                     * 匿名登录配置 "TRUE",  "FALSE"
                     */
                    std::string m_anonymousLogin;
                    bool m_anonymousLoginHasBeenSet;

                    /**
                     * 用户名密码登录配置 "TRUE",  "FALSE"
                     */
                    std::string m_usernameLogin;
                    bool m_usernameLoginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_EDITAUTHCONFIGREQUEST_H_
