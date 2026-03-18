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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_PROVIDERREQUESTPARAMETERSMAP_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_PROVIDERREQUESTPARAMETERSMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 三方认证入参映射。如果您的对接方不标准，则可以使用这个参数。默认情况下，该参数可以为空。比如：github,google,apple 接入，这些参数为空，但是国内的腾讯，新浪等则需要配置该参数。原因主要是：腾讯等公司在实现oauth时，未能完全遵循oauth标准。
                */
                class ProviderRequestParametersMap : public AbstractModel
                {
                public:
                    ProviderRequestParametersMap();
                    ~ProviderRequestParametersMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取OAuth 标准协议中的 client_id。不同第三方平台的字段名称可能不同，例如微信平台对应 appid、新浪微博对应 app_id。
                     * @return ClientId OAuth 标准协议中的 client_id。不同第三方平台的字段名称可能不同，例如微信平台对应 appid、新浪微博对应 app_id。
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置OAuth 标准协议中的 client_id。不同第三方平台的字段名称可能不同，例如微信平台对应 appid、新浪微博对应 app_id。
                     * @param _clientId OAuth 标准协议中的 client_id。不同第三方平台的字段名称可能不同，例如微信平台对应 appid、新浪微博对应 app_id。
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
                     * 获取OAuth 标准协议中的 client_secret，用于身份认证源的密钥鉴权。请妥善保管，避免泄露。
                     * @return ClientSecret OAuth 标准协议中的 client_secret，用于身份认证源的密钥鉴权。请妥善保管，避免泄露。
                     * 
                     */
                    std::string GetClientSecret() const;

                    /**
                     * 设置OAuth 标准协议中的 client_secret，用于身份认证源的密钥鉴权。请妥善保管，避免泄露。
                     * @param _clientSecret OAuth 标准协议中的 client_secret，用于身份认证源的密钥鉴权。请妥善保管，避免泄露。
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
                     * 获取OAuth 标准协议中的 redirect_uri，即授权回调地址。用户完成第三方认证后将重定向至该地址。
                     * @return RedirectUri OAuth 标准协议中的 redirect_uri，即授权回调地址。用户完成第三方认证后将重定向至该地址。
                     * 
                     */
                    std::string GetRedirectUri() const;

                    /**
                     * 设置OAuth 标准协议中的 redirect_uri，即授权回调地址。用户完成第三方认证后将重定向至该地址。
                     * @param _redirectUri OAuth 标准协议中的 redirect_uri，即授权回调地址。用户完成第三方认证后将重定向至该地址。
                     * 
                     */
                    void SetRedirectUri(const std::string& _redirectUri);

                    /**
                     * 判断参数 RedirectUri 是否已赋值
                     * @return RedirectUri 是否已赋值
                     * 
                     */
                    bool RedirectUriHasBeenSet() const;

                    /**
                     * 获取身份源注册用户时自动绑定的角色 ID。配置后，通过该身份源注册的新用户将自动关联指定角色。
                     * @return RegisterUserRoleId 身份源注册用户时自动绑定的角色 ID。配置后，通过该身份源注册的新用户将自动关联指定角色。
                     * 
                     */
                    std::string GetRegisterUserRoleId() const;

                    /**
                     * 设置身份源注册用户时自动绑定的角色 ID。配置后，通过该身份源注册的新用户将自动关联指定角色。
                     * @param _registerUserRoleId 身份源注册用户时自动绑定的角色 ID。配置后，通过该身份源注册的新用户将自动关联指定角色。
                     * 
                     */
                    void SetRegisterUserRoleId(const std::string& _registerUserRoleId);

                    /**
                     * 判断参数 RegisterUserRoleId 是否已赋值
                     * @return RegisterUserRoleId 是否已赋值
                     * 
                     */
                    bool RegisterUserRoleIdHasBeenSet() const;

                    /**
                     * 获取身份源注册用户时是否自动授予许可证。取值范围：
TRUE：自动授权许可证
FALSE：不自动授权（默认值）
                     * @return RegisterUserAutoLicense 身份源注册用户时是否自动授予许可证。取值范围：
TRUE：自动授权许可证
FALSE：不自动授权（默认值）
                     * 
                     */
                    std::string GetRegisterUserAutoLicense() const;

                    /**
                     * 设置身份源注册用户时是否自动授予许可证。取值范围：
TRUE：自动授权许可证
FALSE：不自动授权（默认值）
                     * @param _registerUserAutoLicense 身份源注册用户时是否自动授予许可证。取值范围：
TRUE：自动授权许可证
FALSE：不自动授权（默认值）
                     * 
                     */
                    void SetRegisterUserAutoLicense(const std::string& _registerUserAutoLicense);

                    /**
                     * 判断参数 RegisterUserAutoLicense 是否已赋值
                     * @return RegisterUserAutoLicense 是否已赋值
                     * 
                     */
                    bool RegisterUserAutoLicenseHasBeenSet() const;

                    /**
                     * 获取OAuth 获取 Token 时认证信息的请求位置。取值范围：
URL：将认证信息放在请求 URL 参数中
Headers：将认证信息放在请求 Header 中
Body：将认证信息放在请求 Body 中
                     * @return AuthPosition OAuth 获取 Token 时认证信息的请求位置。取值范围：
URL：将认证信息放在请求 URL 参数中
Headers：将认证信息放在请求 Header 中
Body：将认证信息放在请求 Body 中
                     * 
                     */
                    std::string GetAuthPosition() const;

                    /**
                     * 设置OAuth 获取 Token 时认证信息的请求位置。取值范围：
URL：将认证信息放在请求 URL 参数中
Headers：将认证信息放在请求 Header 中
Body：将认证信息放在请求 Body 中
                     * @param _authPosition OAuth 获取 Token 时认证信息的请求位置。取值范围：
URL：将认证信息放在请求 URL 参数中
Headers：将认证信息放在请求 Header 中
Body：将认证信息放在请求 Body 中
                     * 
                     */
                    void SetAuthPosition(const std::string& _authPosition);

                    /**
                     * 判断参数 AuthPosition 是否已赋值
                     * @return AuthPosition 是否已赋值
                     * 
                     */
                    bool AuthPositionHasBeenSet() const;

                    /**
                     * 获取OAuth 授权模式匹配的参数字段名。用于指定获取 Token 请求中 grant_type 参数对应的字段名称。
                     * @return GrantType OAuth 授权模式匹配的参数字段名。用于指定获取 Token 请求中 grant_type 参数对应的字段名称。
                     * 
                     */
                    std::string GetGrantType() const;

                    /**
                     * 设置OAuth 授权模式匹配的参数字段名。用于指定获取 Token 请求中 grant_type 参数对应的字段名称。
                     * @param _grantType OAuth 授权模式匹配的参数字段名。用于指定获取 Token 请求中 grant_type 参数对应的字段名称。
                     * 
                     */
                    void SetGrantType(const std::string& _grantType);

                    /**
                     * 判断参数 GrantType 是否已赋值
                     * @return GrantType 是否已赋值
                     * 
                     */
                    bool GrantTypeHasBeenSet() const;

                    /**
                     * 获取OAuth 授权模式类型。用于指定 grant_type 的值，例如 client_credentials 表示客户端凭证模式。
                     * @return ClientCredentials OAuth 授权模式类型。用于指定 grant_type 的值，例如 client_credentials 表示客户端凭证模式。
                     * 
                     */
                    std::string GetClientCredentials() const;

                    /**
                     * 设置OAuth 授权模式类型。用于指定 grant_type 的值，例如 client_credentials 表示客户端凭证模式。
                     * @param _clientCredentials OAuth 授权模式类型。用于指定 grant_type 的值，例如 client_credentials 表示客户端凭证模式。
                     * 
                     */
                    void SetClientCredentials(const std::string& _clientCredentials);

                    /**
                     * 判断参数 ClientCredentials 是否已赋值
                     * @return ClientCredentials 是否已赋值
                     * 
                     */
                    bool ClientCredentialsHasBeenSet() const;

                    /**
                     * 获取OAuth 返回中 access_token 的映射字段名。若第三方平台返回的 Token 字段名不是标准的 access_token，可通过此字段指定实际字段名。
                     * @return AccessToken OAuth 返回中 access_token 的映射字段名。若第三方平台返回的 Token 字段名不是标准的 access_token，可通过此字段指定实际字段名。
                     * 
                     */
                    std::string GetAccessToken() const;

                    /**
                     * 设置OAuth 返回中 access_token 的映射字段名。若第三方平台返回的 Token 字段名不是标准的 access_token，可通过此字段指定实际字段名。
                     * @param _accessToken OAuth 返回中 access_token 的映射字段名。若第三方平台返回的 Token 字段名不是标准的 access_token，可通过此字段指定实际字段名。
                     * 
                     */
                    void SetAccessToken(const std::string& _accessToken);

                    /**
                     * 判断参数 AccessToken 是否已赋值
                     * @return AccessToken 是否已赋值
                     * 
                     */
                    bool AccessTokenHasBeenSet() const;

                    /**
                     * 获取OAuth 返回中 Token 有效期的映射字段名。若第三方平台返回的有效期字段名不是标准的 expires_in，可通过此字段指定实际字段名。
                     * @return ExpiresIn OAuth 返回中 Token 有效期的映射字段名。若第三方平台返回的有效期字段名不是标准的 expires_in，可通过此字段指定实际字段名。
                     * 
                     */
                    std::string GetExpiresIn() const;

                    /**
                     * 设置OAuth 返回中 Token 有效期的映射字段名。若第三方平台返回的有效期字段名不是标准的 expires_in，可通过此字段指定实际字段名。
                     * @param _expiresIn OAuth 返回中 Token 有效期的映射字段名。若第三方平台返回的有效期字段名不是标准的 expires_in，可通过此字段指定实际字段名。
                     * 
                     */
                    void SetExpiresIn(const std::string& _expiresIn);

                    /**
                     * 判断参数 ExpiresIn 是否已赋值
                     * @return ExpiresIn 是否已赋值
                     * 
                     */
                    bool ExpiresInHasBeenSet() const;

                    /**
                     * 获取身份源注册用户时的用户类型。取值范围：
externalUser：外部用户
internalUser：内部用户
默认值为 externalUser。
                     * @return RegisterUserType 身份源注册用户时的用户类型。取值范围：
externalUser：外部用户
internalUser：内部用户
默认值为 externalUser。
                     * 
                     */
                    std::string GetRegisterUserType() const;

                    /**
                     * 设置身份源注册用户时的用户类型。取值范围：
externalUser：外部用户
internalUser：内部用户
默认值为 externalUser。
                     * @param _registerUserType 身份源注册用户时的用户类型。取值范围：
externalUser：外部用户
internalUser：内部用户
默认值为 externalUser。
                     * 
                     */
                    void SetRegisterUserType(const std::string& _registerUserType);

                    /**
                     * 判断参数 RegisterUserType 是否已赋值
                     * @return RegisterUserType 是否已赋值
                     * 
                     */
                    bool RegisterUserTypeHasBeenSet() const;

                private:

                    /**
                     * OAuth 标准协议中的 client_id。不同第三方平台的字段名称可能不同，例如微信平台对应 appid、新浪微博对应 app_id。
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * OAuth 标准协议中的 client_secret，用于身份认证源的密钥鉴权。请妥善保管，避免泄露。
                     */
                    std::string m_clientSecret;
                    bool m_clientSecretHasBeenSet;

                    /**
                     * OAuth 标准协议中的 redirect_uri，即授权回调地址。用户完成第三方认证后将重定向至该地址。
                     */
                    std::string m_redirectUri;
                    bool m_redirectUriHasBeenSet;

                    /**
                     * 身份源注册用户时自动绑定的角色 ID。配置后，通过该身份源注册的新用户将自动关联指定角色。
                     */
                    std::string m_registerUserRoleId;
                    bool m_registerUserRoleIdHasBeenSet;

                    /**
                     * 身份源注册用户时是否自动授予许可证。取值范围：
TRUE：自动授权许可证
FALSE：不自动授权（默认值）
                     */
                    std::string m_registerUserAutoLicense;
                    bool m_registerUserAutoLicenseHasBeenSet;

                    /**
                     * OAuth 获取 Token 时认证信息的请求位置。取值范围：
URL：将认证信息放在请求 URL 参数中
Headers：将认证信息放在请求 Header 中
Body：将认证信息放在请求 Body 中
                     */
                    std::string m_authPosition;
                    bool m_authPositionHasBeenSet;

                    /**
                     * OAuth 授权模式匹配的参数字段名。用于指定获取 Token 请求中 grant_type 参数对应的字段名称。
                     */
                    std::string m_grantType;
                    bool m_grantTypeHasBeenSet;

                    /**
                     * OAuth 授权模式类型。用于指定 grant_type 的值，例如 client_credentials 表示客户端凭证模式。
                     */
                    std::string m_clientCredentials;
                    bool m_clientCredentialsHasBeenSet;

                    /**
                     * OAuth 返回中 access_token 的映射字段名。若第三方平台返回的 Token 字段名不是标准的 access_token，可通过此字段指定实际字段名。
                     */
                    std::string m_accessToken;
                    bool m_accessTokenHasBeenSet;

                    /**
                     * OAuth 返回中 Token 有效期的映射字段名。若第三方平台返回的有效期字段名不是标准的 expires_in，可通过此字段指定实际字段名。
                     */
                    std::string m_expiresIn;
                    bool m_expiresInHasBeenSet;

                    /**
                     * 身份源注册用户时的用户类型。取值范围：
externalUser：外部用户
internalUser：内部用户
默认值为 externalUser。
                     */
                    std::string m_registerUserType;
                    bool m_registerUserTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_PROVIDERREQUESTPARAMETERSMAP_H_
