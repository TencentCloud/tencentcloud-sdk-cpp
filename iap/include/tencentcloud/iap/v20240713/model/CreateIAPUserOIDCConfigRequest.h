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

#ifndef TENCENTCLOUD_IAP_V20240713_MODEL_CREATEIAPUSEROIDCCONFIGREQUEST_H_
#define TENCENTCLOUD_IAP_V20240713_MODEL_CREATEIAPUSEROIDCCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iap
    {
        namespace V20240713
        {
            namespace Model
            {
                /**
                * CreateIAPUserOIDCConfig请求参数结构体
                */
                class CreateIAPUserOIDCConfigRequest : public AbstractModel
                {
                public:
                    CreateIAPUserOIDCConfigRequest();
                    ~CreateIAPUserOIDCConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取身份提供商URL。OpenID Connect身份提供商标识。对应企业IdP提供的Openid-configuration中"issuer"字段的值。
                     * @return IdentityUrl 身份提供商URL。OpenID Connect身份提供商标识。对应企业IdP提供的Openid-configuration中"issuer"字段的值。
                     * 
                     */
                    std::string GetIdentityUrl() const;

                    /**
                     * 设置身份提供商URL。OpenID Connect身份提供商标识。对应企业IdP提供的Openid-configuration中"issuer"字段的值。
                     * @param _identityUrl 身份提供商URL。OpenID Connect身份提供商标识。对应企业IdP提供的Openid-configuration中"issuer"字段的值。
                     * 
                     */
                    void SetIdentityUrl(const std::string& _identityUrl);

                    /**
                     * 判断参数 IdentityUrl 是否已赋值
                     * @return IdentityUrl 是否已赋值
                     * 
                     */
                    bool IdentityUrlHasBeenSet() const;

                    /**
                     * 获取客户端ID，在OpenID Connect身份提供商注册的客户端ID。
                     * @return ClientId 客户端ID，在OpenID Connect身份提供商注册的客户端ID。
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置客户端ID，在OpenID Connect身份提供商注册的客户端ID。
                     * @param _clientId 客户端ID，在OpenID Connect身份提供商注册的客户端ID。
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
                     * 获取授权请求Endpoint，OpenID Connect身份提供商授权地址。对应企业IdP提供的Openid-configuration中"authorization_endpoint"字段的值。
                     * @return AuthorizationEndpoint 授权请求Endpoint，OpenID Connect身份提供商授权地址。对应企业IdP提供的Openid-configuration中"authorization_endpoint"字段的值。
                     * 
                     */
                    std::string GetAuthorizationEndpoint() const;

                    /**
                     * 设置授权请求Endpoint，OpenID Connect身份提供商授权地址。对应企业IdP提供的Openid-configuration中"authorization_endpoint"字段的值。
                     * @param _authorizationEndpoint 授权请求Endpoint，OpenID Connect身份提供商授权地址。对应企业IdP提供的Openid-configuration中"authorization_endpoint"字段的值。
                     * 
                     */
                    void SetAuthorizationEndpoint(const std::string& _authorizationEndpoint);

                    /**
                     * 判断参数 AuthorizationEndpoint 是否已赋值
                     * @return AuthorizationEndpoint 是否已赋值
                     * 
                     */
                    bool AuthorizationEndpointHasBeenSet() const;

                    /**
                     * 获取授权请求Response type，固定值id_token
                     * @return ResponseType 授权请求Response type，固定值id_token
                     * 
                     */
                    std::string GetResponseType() const;

                    /**
                     * 设置授权请求Response type，固定值id_token
                     * @param _responseType 授权请求Response type，固定值id_token
                     * 
                     */
                    void SetResponseType(const std::string& _responseType);

                    /**
                     * 判断参数 ResponseType 是否已赋值
                     * @return ResponseType 是否已赋值
                     * 
                     */
                    bool ResponseTypeHasBeenSet() const;

                    /**
                     * 获取授权请求Response mode。授权请求返回模式，form_post和fragment两种可选模式，推荐选择form_post模式。
                     * @return ResponseMode 授权请求Response mode。授权请求返回模式，form_post和fragment两种可选模式，推荐选择form_post模式。
                     * 
                     */
                    std::string GetResponseMode() const;

                    /**
                     * 设置授权请求Response mode。授权请求返回模式，form_post和fragment两种可选模式，推荐选择form_post模式。
                     * @param _responseMode 授权请求Response mode。授权请求返回模式，form_post和fragment两种可选模式，推荐选择form_post模式。
                     * 
                     */
                    void SetResponseMode(const std::string& _responseMode);

                    /**
                     * 判断参数 ResponseMode 是否已赋值
                     * @return ResponseMode 是否已赋值
                     * 
                     */
                    bool ResponseModeHasBeenSet() const;

                    /**
                     * 获取映射字段名称。IdP的id_token中哪一个字段映射到子用户的用户名，通常是sub或者name字段
                     * @return MappingFiled 映射字段名称。IdP的id_token中哪一个字段映射到子用户的用户名，通常是sub或者name字段
                     * 
                     */
                    std::string GetMappingFiled() const;

                    /**
                     * 设置映射字段名称。IdP的id_token中哪一个字段映射到子用户的用户名，通常是sub或者name字段
                     * @param _mappingFiled 映射字段名称。IdP的id_token中哪一个字段映射到子用户的用户名，通常是sub或者name字段
                     * 
                     */
                    void SetMappingFiled(const std::string& _mappingFiled);

                    /**
                     * 判断参数 MappingFiled 是否已赋值
                     * @return MappingFiled 是否已赋值
                     * 
                     */
                    bool MappingFiledHasBeenSet() const;

                    /**
                     * 获取签名公钥，需要base64_encode。验证OpenID Connect身份提供商ID Token签名的公钥。为了您的账号安全，建议您定期轮换签名公钥。
                     * @return IdentityKey 签名公钥，需要base64_encode。验证OpenID Connect身份提供商ID Token签名的公钥。为了您的账号安全，建议您定期轮换签名公钥。
                     * 
                     */
                    std::string GetIdentityKey() const;

                    /**
                     * 设置签名公钥，需要base64_encode。验证OpenID Connect身份提供商ID Token签名的公钥。为了您的账号安全，建议您定期轮换签名公钥。
                     * @param _identityKey 签名公钥，需要base64_encode。验证OpenID Connect身份提供商ID Token签名的公钥。为了您的账号安全，建议您定期轮换签名公钥。
                     * 
                     */
                    void SetIdentityKey(const std::string& _identityKey);

                    /**
                     * 判断参数 IdentityKey 是否已赋值
                     * @return IdentityKey 是否已赋值
                     * 
                     */
                    bool IdentityKeyHasBeenSet() const;

                    /**
                     * 获取授权请求Scope。openid; email;profile。授权请求信息范围。默认必选openid。
                     * @return Scope 授权请求Scope。openid; email;profile。授权请求信息范围。默认必选openid。
                     * 
                     */
                    std::vector<std::string> GetScope() const;

                    /**
                     * 设置授权请求Scope。openid; email;profile。授权请求信息范围。默认必选openid。
                     * @param _scope 授权请求Scope。openid; email;profile。授权请求信息范围。默认必选openid。
                     * 
                     */
                    void SetScope(const std::vector<std::string>& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 身份提供商URL。OpenID Connect身份提供商标识。对应企业IdP提供的Openid-configuration中"issuer"字段的值。
                     */
                    std::string m_identityUrl;
                    bool m_identityUrlHasBeenSet;

                    /**
                     * 客户端ID，在OpenID Connect身份提供商注册的客户端ID。
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 授权请求Endpoint，OpenID Connect身份提供商授权地址。对应企业IdP提供的Openid-configuration中"authorization_endpoint"字段的值。
                     */
                    std::string m_authorizationEndpoint;
                    bool m_authorizationEndpointHasBeenSet;

                    /**
                     * 授权请求Response type，固定值id_token
                     */
                    std::string m_responseType;
                    bool m_responseTypeHasBeenSet;

                    /**
                     * 授权请求Response mode。授权请求返回模式，form_post和fragment两种可选模式，推荐选择form_post模式。
                     */
                    std::string m_responseMode;
                    bool m_responseModeHasBeenSet;

                    /**
                     * 映射字段名称。IdP的id_token中哪一个字段映射到子用户的用户名，通常是sub或者name字段
                     */
                    std::string m_mappingFiled;
                    bool m_mappingFiledHasBeenSet;

                    /**
                     * 签名公钥，需要base64_encode。验证OpenID Connect身份提供商ID Token签名的公钥。为了您的账号安全，建议您定期轮换签名公钥。
                     */
                    std::string m_identityKey;
                    bool m_identityKeyHasBeenSet;

                    /**
                     * 授权请求Scope。openid; email;profile。授权请求信息范围。默认必选openid。
                     */
                    std::vector<std::string> m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAP_V20240713_MODEL_CREATEIAPUSEROIDCCONFIGREQUEST_H_
