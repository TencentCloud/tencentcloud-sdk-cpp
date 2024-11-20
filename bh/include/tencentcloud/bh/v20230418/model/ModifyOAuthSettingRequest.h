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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_MODIFYOAUTHSETTINGREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_MODIFYOAUTHSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ModifyOAuthSetting请求参数结构体
                */
                class ModifyOAuthSettingRequest : public AbstractModel
                {
                public:
                    ModifyOAuthSettingRequest();
                    ~ModifyOAuthSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否开启OAuth认证，false-不开启，true-开启。
                     * @return Enable 是否开启OAuth认证，false-不开启，true-开启。
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置是否开启OAuth认证，false-不开启，true-开启。
                     * @param _enable 是否开启OAuth认证，false-不开启，true-开启。
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取OAuth认证方式。
                     * @return AuthMethod OAuth认证方式。
                     * 
                     */
                    std::string GetAuthMethod() const;

                    /**
                     * 设置OAuth认证方式。
                     * @param _authMethod OAuth认证方式。
                     * 
                     */
                    void SetAuthMethod(const std::string& _authMethod);

                    /**
                     * 判断参数 AuthMethod 是否已赋值
                     * @return AuthMethod 是否已赋值
                     * 
                     */
                    bool AuthMethodHasBeenSet() const;

                    /**
                     * 获取OAuth认证客户端Id
                     * @return ClientId OAuth认证客户端Id
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置OAuth认证客户端Id
                     * @param _clientId OAuth认证客户端Id
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取OAuth认证客户端密钥
                     * @return ClientSecret OAuth认证客户端密钥
                     * 
                     */
                    std::string GetClientSecret() const;

                    /**
                     * 设置OAuth认证客户端密钥
                     * @param _clientSecret OAuth认证客户端密钥
                     * 
                     */
                    void SetClientSecret(const std::string& _clientSecret);

                    /**
                     * 判断参数 ClientSecret 是否已赋值
                     * @return ClientSecret 是否已赋值
                     * 
                     */
                    bool ClientSecretHasBeenSet() const;

                    /**
                     * 获取获取OAuth认证授权码URL
                     * @return CodeUrl 获取OAuth认证授权码URL
                     * 
                     */
                    std::string GetCodeUrl() const;

                    /**
                     * 设置获取OAuth认证授权码URL
                     * @param _codeUrl 获取OAuth认证授权码URL
                     * 
                     */
                    void SetCodeUrl(const std::string& _codeUrl);

                    /**
                     * 判断参数 CodeUrl 是否已赋值
                     * @return CodeUrl 是否已赋值
                     * 
                     */
                    bool CodeUrlHasBeenSet() const;

                    /**
                     * 获取获取OAuth令牌URL
                     * @return TokenUrl 获取OAuth令牌URL
                     * 
                     */
                    std::string GetTokenUrl() const;

                    /**
                     * 设置获取OAuth令牌URL
                     * @param _tokenUrl 获取OAuth令牌URL
                     * 
                     */
                    void SetTokenUrl(const std::string& _tokenUrl);

                    /**
                     * 判断参数 TokenUrl 是否已赋值
                     * @return TokenUrl 是否已赋值
                     * 
                     */
                    bool TokenUrlHasBeenSet() const;

                    /**
                     * 获取获取OAuth用户信息URL
                     * @return UserInfoUrl 获取OAuth用户信息URL
                     * 
                     */
                    std::string GetUserInfoUrl() const;

                    /**
                     * 设置获取OAuth用户信息URL
                     * @param _userInfoUrl 获取OAuth用户信息URL
                     * 
                     */
                    void SetUserInfoUrl(const std::string& _userInfoUrl);

                    /**
                     * 判断参数 UserInfoUrl 是否已赋值
                     * @return UserInfoUrl 是否已赋值
                     * 
                     */
                    bool UserInfoUrlHasBeenSet() const;

                    /**
                     * 获取使用Okta认证时指定范围。为空时默认使用 openid、profile、email。
                     * @return Scopes 使用Okta认证时指定范围。为空时默认使用 openid、profile、email。
                     * 
                     */
                    std::vector<std::string> GetScopes() const;

                    /**
                     * 设置使用Okta认证时指定范围。为空时默认使用 openid、profile、email。
                     * @param _scopes 使用Okta认证时指定范围。为空时默认使用 openid、profile、email。
                     * 
                     */
                    void SetScopes(const std::vector<std::string>& _scopes);

                    /**
                     * 判断参数 Scopes 是否已赋值
                     * @return Scopes 是否已赋值
                     * 
                     */
                    bool ScopesHasBeenSet() const;

                private:

                    /**
                     * 是否开启OAuth认证，false-不开启，true-开启。
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * OAuth认证方式。
                     */
                    std::string m_authMethod;
                    bool m_authMethodHasBeenSet;

                    /**
                     * OAuth认证客户端Id
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * OAuth认证客户端密钥
                     */
                    std::string m_clientSecret;
                    bool m_clientSecretHasBeenSet;

                    /**
                     * 获取OAuth认证授权码URL
                     */
                    std::string m_codeUrl;
                    bool m_codeUrlHasBeenSet;

                    /**
                     * 获取OAuth令牌URL
                     */
                    std::string m_tokenUrl;
                    bool m_tokenUrlHasBeenSet;

                    /**
                     * 获取OAuth用户信息URL
                     */
                    std::string m_userInfoUrl;
                    bool m_userInfoUrlHasBeenSet;

                    /**
                     * 使用Okta认证时指定范围。为空时默认使用 openid、profile、email。
                     */
                    std::vector<std::string> m_scopes;
                    bool m_scopesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_MODIFYOAUTHSETTINGREQUEST_H_
