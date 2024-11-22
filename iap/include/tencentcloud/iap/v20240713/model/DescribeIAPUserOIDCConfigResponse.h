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

#ifndef TENCENTCLOUD_IAP_V20240713_MODEL_DESCRIBEIAPUSEROIDCCONFIGRESPONSE_H_
#define TENCENTCLOUD_IAP_V20240713_MODEL_DESCRIBEIAPUSEROIDCCONFIGRESPONSE_H_

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
                * DescribeIAPUserOIDCConfig返回参数结构体
                */
                class DescribeIAPUserOIDCConfigResponse : public AbstractModel
                {
                public:
                    DescribeIAPUserOIDCConfigResponse();
                    ~DescribeIAPUserOIDCConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取身份提供商类型。 13：IAP用户OIDC身份提供商
                     * @return ProviderType 身份提供商类型。 13：IAP用户OIDC身份提供商
                     * 
                     */
                    uint64_t GetProviderType() const;

                    /**
                     * 判断参数 ProviderType 是否已赋值
                     * @return ProviderType 是否已赋值
                     * 
                     */
                    bool ProviderTypeHasBeenSet() const;

                    /**
                     * 获取身份提供商URL
                     * @return IdentityUrl 身份提供商URL
                     * 
                     */
                    std::string GetIdentityUrl() const;

                    /**
                     * 判断参数 IdentityUrl 是否已赋值
                     * @return IdentityUrl 是否已赋值
                     * 
                     */
                    bool IdentityUrlHasBeenSet() const;

                    /**
                     * 获取签名公钥
                     * @return IdentityKey 签名公钥
                     * 
                     */
                    std::string GetIdentityKey() const;

                    /**
                     * 判断参数 IdentityKey 是否已赋值
                     * @return IdentityKey 是否已赋值
                     * 
                     */
                    bool IdentityKeyHasBeenSet() const;

                    /**
                     * 获取客户端id
                     * @return ClientId 客户端id
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取状态：0:未设置，11:已开启，2:已禁用
                     * @return Status 状态：0:未设置，11:已开启，2:已禁用
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取HTTPS CA证书的验证指纹，允许英文字母和数字，每个指纹长度为40个字符，最多5个指纹。
                     * @return Fingerprints HTTPS CA证书的验证指纹，允许英文字母和数字，每个指纹长度为40个字符，最多5个指纹。
                     * 
                     */
                    std::vector<std::string> GetFingerprints() const;

                    /**
                     * 判断参数 Fingerprints 是否已赋值
                     * @return Fingerprints 是否已赋值
                     * 
                     */
                    bool FingerprintsHasBeenSet() const;

                    /**
                     * 获取是否需要开启自动使用OIDC签名公钥，1:需要，2:不需要，默认不需要
                     * @return EnableAutoPublicKey 是否需要开启自动使用OIDC签名公钥，1:需要，2:不需要，默认不需要
                     * 
                     */
                    uint64_t GetEnableAutoPublicKey() const;

                    /**
                     * 判断参数 EnableAutoPublicKey 是否已赋值
                     * @return EnableAutoPublicKey 是否已赋值
                     * 
                     */
                    bool EnableAutoPublicKeyHasBeenSet() const;

                    /**
                     * 获取授权请求Endpoint
                     * @return AuthorizationEndpoint 授权请求Endpoint
                     * 
                     */
                    std::string GetAuthorizationEndpoint() const;

                    /**
                     * 判断参数 AuthorizationEndpoint 是否已赋值
                     * @return AuthorizationEndpoint 是否已赋值
                     * 
                     */
                    bool AuthorizationEndpointHasBeenSet() const;

                    /**
                     * 获取授权请求Scope
                     * @return Scope 授权请求Scope
                     * 
                     */
                    std::vector<std::string> GetScope() const;

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取授权请求Response type
                     * @return ResponseType 授权请求Response type
                     * 
                     */
                    std::string GetResponseType() const;

                    /**
                     * 判断参数 ResponseType 是否已赋值
                     * @return ResponseType 是否已赋值
                     * 
                     */
                    bool ResponseTypeHasBeenSet() const;

                    /**
                     * 获取授权请求Response mode
                     * @return ResponseMode 授权请求Response mode
                     * 
                     */
                    std::string GetResponseMode() const;

                    /**
                     * 判断参数 ResponseMode 是否已赋值
                     * @return ResponseMode 是否已赋值
                     * 
                     */
                    bool ResponseModeHasBeenSet() const;

                    /**
                     * 获取映射字段名称
                     * @return MappingFiled 映射字段名称
                     * 
                     */
                    std::string GetMappingFiled() const;

                    /**
                     * 判断参数 MappingFiled 是否已赋值
                     * @return MappingFiled 是否已赋值
                     * 
                     */
                    bool MappingFiledHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 身份提供商类型。 13：IAP用户OIDC身份提供商
                     */
                    uint64_t m_providerType;
                    bool m_providerTypeHasBeenSet;

                    /**
                     * 身份提供商URL
                     */
                    std::string m_identityUrl;
                    bool m_identityUrlHasBeenSet;

                    /**
                     * 签名公钥
                     */
                    std::string m_identityKey;
                    bool m_identityKeyHasBeenSet;

                    /**
                     * 客户端id
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 状态：0:未设置，11:已开启，2:已禁用
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * HTTPS CA证书的验证指纹，允许英文字母和数字，每个指纹长度为40个字符，最多5个指纹。
                     */
                    std::vector<std::string> m_fingerprints;
                    bool m_fingerprintsHasBeenSet;

                    /**
                     * 是否需要开启自动使用OIDC签名公钥，1:需要，2:不需要，默认不需要
                     */
                    uint64_t m_enableAutoPublicKey;
                    bool m_enableAutoPublicKeyHasBeenSet;

                    /**
                     * 授权请求Endpoint
                     */
                    std::string m_authorizationEndpoint;
                    bool m_authorizationEndpointHasBeenSet;

                    /**
                     * 授权请求Scope
                     */
                    std::vector<std::string> m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 授权请求Response type
                     */
                    std::string m_responseType;
                    bool m_responseTypeHasBeenSet;

                    /**
                     * 授权请求Response mode
                     */
                    std::string m_responseMode;
                    bool m_responseModeHasBeenSet;

                    /**
                     * 映射字段名称
                     */
                    std::string m_mappingFiled;
                    bool m_mappingFiledHasBeenSet;

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

#endif // !TENCENTCLOUD_IAP_V20240713_MODEL_DESCRIBEIAPUSEROIDCCONFIGRESPONSE_H_
