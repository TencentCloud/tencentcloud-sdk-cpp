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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYSECRETKEYREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYSECRETKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/AIGWJWTCredentialConfig.h>
#include <tencentcloud/tse/v20201207/model/AIGWOAuthCredentialConfig.h>
#include <tencentcloud/tse/v20201207/model/AIGWOIDCCredentialConfig.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * CreateCloudNativeAPIGatewaySecretKey请求参数结构体
                */
                class CreateCloudNativeAPIGatewaySecretKeyRequest : public AbstractModel
                {
                public:
                    CreateCloudNativeAPIGatewaySecretKeyRequest();
                    ~CreateCloudNativeAPIGatewaySecretKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID</p>
                     * @return GatewayId <p>实例 ID</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>实例 ID</p>
                     * @param _gatewayId <p>实例 ID</p>
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>密钥协议类型。</p><p>枚举值：</p><ul><li>ApiKey</li><li>Basic</li><li>Hmac</li><li>OAuth2</li><li>JWT</li></ul>
                     * @return SecretType <p>密钥协议类型。</p><p>枚举值：</p><ul><li>ApiKey</li><li>Basic</li><li>Hmac</li><li>OAuth2</li><li>JWT</li></ul>
                     * 
                     */
                    std::string GetSecretType() const;

                    /**
                     * 设置<p>密钥协议类型。</p><p>枚举值：</p><ul><li>ApiKey</li><li>Basic</li><li>Hmac</li><li>OAuth2</li><li>JWT</li></ul>
                     * @param _secretType <p>密钥协议类型。</p><p>枚举值：</p><ul><li>ApiKey</li><li>Basic</li><li>Hmac</li><li>OAuth2</li><li>JWT</li></ul>
                     * 
                     */
                    void SetSecretType(const std::string& _secretType);

                    /**
                     * 判断参数 SecretType 是否已赋值
                     * @return SecretType 是否已赋值
                     * 
                     */
                    bool SecretTypeHasBeenSet() const;

                    /**
                     * 获取<p>密钥名称，2-60 字符。</p>
                     * @return Name <p>密钥名称，2-60 字符。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>密钥名称，2-60 字符。</p>
                     * @param _name <p>密钥名称，2-60 字符。</p>
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
                     * 获取<p>密钥生成方式。</p><p>枚举值：</p><ul><li>System：系统自动生成</li><li>Custom：用户自定义（需传 SecretValue）</li><li>KMS：使用 KMS 密钥（需传 KmsKeyName 与 KmsKeyVersion）</li></ul>
                     * @return GenerateType <p>密钥生成方式。</p><p>枚举值：</p><ul><li>System：系统自动生成</li><li>Custom：用户自定义（需传 SecretValue）</li><li>KMS：使用 KMS 密钥（需传 KmsKeyName 与 KmsKeyVersion）</li></ul>
                     * 
                     */
                    std::string GetGenerateType() const;

                    /**
                     * 设置<p>密钥生成方式。</p><p>枚举值：</p><ul><li>System：系统自动生成</li><li>Custom：用户自定义（需传 SecretValue）</li><li>KMS：使用 KMS 密钥（需传 KmsKeyName 与 KmsKeyVersion）</li></ul>
                     * @param _generateType <p>密钥生成方式。</p><p>枚举值：</p><ul><li>System：系统自动生成</li><li>Custom：用户自定义（需传 SecretValue）</li><li>KMS：使用 KMS 密钥（需传 KmsKeyName 与 KmsKeyVersion）</li></ul>
                     * 
                     */
                    void SetGenerateType(const std::string& _generateType);

                    /**
                     * 判断参数 GenerateType 是否已赋值
                     * @return GenerateType 是否已赋值
                     * 
                     */
                    bool GenerateTypeHasBeenSet() const;

                    /**
                     * 获取<p>密钥归属资源类型。</p><p>枚举值：</p><ul><li>Consumer：消费者</li><li>ModelService：模型服务</li></ul>
                     * @return ResourceType <p>密钥归属资源类型。</p><p>枚举值：</p><ul><li>Consumer：消费者</li><li>ModelService：模型服务</li></ul>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>密钥归属资源类型。</p><p>枚举值：</p><ul><li>Consumer：消费者</li><li>ModelService：模型服务</li></ul>
                     * @param _resourceType <p>密钥归属资源类型。</p><p>枚举值：</p><ul><li>Consumer：消费者</li><li>ModelService：模型服务</li></ul>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>KMS 密钥名称。GenerateType=KMS 时必填。</p>
                     * @return KmsKeyName <p>KMS 密钥名称。GenerateType=KMS 时必填。</p>
                     * 
                     */
                    std::string GetKmsKeyName() const;

                    /**
                     * 设置<p>KMS 密钥名称。GenerateType=KMS 时必填。</p>
                     * @param _kmsKeyName <p>KMS 密钥名称。GenerateType=KMS 时必填。</p>
                     * 
                     */
                    void SetKmsKeyName(const std::string& _kmsKeyName);

                    /**
                     * 判断参数 KmsKeyName 是否已赋值
                     * @return KmsKeyName 是否已赋值
                     * 
                     */
                    bool KmsKeyNameHasBeenSet() const;

                    /**
                     * 获取<p>KMS 密钥版本。GenerateType=KMS 时必填。</p>
                     * @return KmsKeyVersion <p>KMS 密钥版本。GenerateType=KMS 时必填。</p>
                     * 
                     */
                    std::string GetKmsKeyVersion() const;

                    /**
                     * 设置<p>KMS 密钥版本。GenerateType=KMS 时必填。</p>
                     * @param _kmsKeyVersion <p>KMS 密钥版本。GenerateType=KMS 时必填。</p>
                     * 
                     */
                    void SetKmsKeyVersion(const std::string& _kmsKeyVersion);

                    /**
                     * 判断参数 KmsKeyVersion 是否已赋值
                     * @return KmsKeyVersion 是否已赋值
                     * 
                     */
                    bool KmsKeyVersionHasBeenSet() const;

                    /**
                     * 获取<p>密钥值，长度 8-256。GenerateType=Custom 时必填。</p>
                     * @return SecretValue <p>密钥值，长度 8-256。GenerateType=Custom 时必填。</p>
                     * 
                     */
                    std::string GetSecretValue() const;

                    /**
                     * 设置<p>密钥值，长度 8-256。GenerateType=Custom 时必填。</p>
                     * @param _secretValue <p>密钥值，长度 8-256。GenerateType=Custom 时必填。</p>
                     * 
                     */
                    void SetSecretValue(const std::string& _secretValue);

                    /**
                     * 判断参数 SecretValue 是否已赋值
                     * @return SecretValue 是否已赋值
                     * 
                     */
                    bool SecretValueHasBeenSet() const;

                    /**
                     * 获取<p>密钥描述。最长 200 字符。</p>
                     * @return Description <p>密钥描述。最长 200 字符。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>密钥描述。最长 200 字符。</p>
                     * @param _description <p>密钥描述。最长 200 字符。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>JWT凭证配置</p>
                     * @return JWTCredentialConfig <p>JWT凭证配置</p>
                     * 
                     */
                    AIGWJWTCredentialConfig GetJWTCredentialConfig() const;

                    /**
                     * 设置<p>JWT凭证配置</p>
                     * @param _jWTCredentialConfig <p>JWT凭证配置</p>
                     * 
                     */
                    void SetJWTCredentialConfig(const AIGWJWTCredentialConfig& _jWTCredentialConfig);

                    /**
                     * 判断参数 JWTCredentialConfig 是否已赋值
                     * @return JWTCredentialConfig 是否已赋值
                     * 
                     */
                    bool JWTCredentialConfigHasBeenSet() const;

                    /**
                     * 获取<p>OAuth2.0凭证配置</p>
                     * @return OAuthCredentialConfig <p>OAuth2.0凭证配置</p>
                     * 
                     */
                    AIGWOAuthCredentialConfig GetOAuthCredentialConfig() const;

                    /**
                     * 设置<p>OAuth2.0凭证配置</p>
                     * @param _oAuthCredentialConfig <p>OAuth2.0凭证配置</p>
                     * 
                     */
                    void SetOAuthCredentialConfig(const AIGWOAuthCredentialConfig& _oAuthCredentialConfig);

                    /**
                     * 判断参数 OAuthCredentialConfig 是否已赋值
                     * @return OAuthCredentialConfig 是否已赋值
                     * 
                     */
                    bool OAuthCredentialConfigHasBeenSet() const;

                    /**
                     * 获取<p>OIDC凭证配置</p>
                     * @return OIDCCredentialConfig <p>OIDC凭证配置</p>
                     * 
                     */
                    AIGWOIDCCredentialConfig GetOIDCCredentialConfig() const;

                    /**
                     * 设置<p>OIDC凭证配置</p>
                     * @param _oIDCCredentialConfig <p>OIDC凭证配置</p>
                     * 
                     */
                    void SetOIDCCredentialConfig(const AIGWOIDCCredentialConfig& _oIDCCredentialConfig);

                    /**
                     * 判断参数 OIDCCredentialConfig 是否已赋值
                     * @return OIDCCredentialConfig 是否已赋值
                     * 
                     */
                    bool OIDCCredentialConfigHasBeenSet() const;

                    /**
                     * 获取<p>第三方平台类型</p><p>枚举值：</p><ul><li>Dify： Dify平台</li></ul>
                     * @return Provider <p>第三方平台类型</p><p>枚举值：</p><ul><li>Dify： Dify平台</li></ul>
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置<p>第三方平台类型</p><p>枚举值：</p><ul><li>Dify： Dify平台</li></ul>
                     * @param _provider <p>第三方平台类型</p><p>枚举值：</p><ul><li>Dify： Dify平台</li></ul>
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>密钥协议类型。</p><p>枚举值：</p><ul><li>ApiKey</li><li>Basic</li><li>Hmac</li><li>OAuth2</li><li>JWT</li></ul>
                     */
                    std::string m_secretType;
                    bool m_secretTypeHasBeenSet;

                    /**
                     * <p>密钥名称，2-60 字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>密钥生成方式。</p><p>枚举值：</p><ul><li>System：系统自动生成</li><li>Custom：用户自定义（需传 SecretValue）</li><li>KMS：使用 KMS 密钥（需传 KmsKeyName 与 KmsKeyVersion）</li></ul>
                     */
                    std::string m_generateType;
                    bool m_generateTypeHasBeenSet;

                    /**
                     * <p>密钥归属资源类型。</p><p>枚举值：</p><ul><li>Consumer：消费者</li><li>ModelService：模型服务</li></ul>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>KMS 密钥名称。GenerateType=KMS 时必填。</p>
                     */
                    std::string m_kmsKeyName;
                    bool m_kmsKeyNameHasBeenSet;

                    /**
                     * <p>KMS 密钥版本。GenerateType=KMS 时必填。</p>
                     */
                    std::string m_kmsKeyVersion;
                    bool m_kmsKeyVersionHasBeenSet;

                    /**
                     * <p>密钥值，长度 8-256。GenerateType=Custom 时必填。</p>
                     */
                    std::string m_secretValue;
                    bool m_secretValueHasBeenSet;

                    /**
                     * <p>密钥描述。最长 200 字符。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>JWT凭证配置</p>
                     */
                    AIGWJWTCredentialConfig m_jWTCredentialConfig;
                    bool m_jWTCredentialConfigHasBeenSet;

                    /**
                     * <p>OAuth2.0凭证配置</p>
                     */
                    AIGWOAuthCredentialConfig m_oAuthCredentialConfig;
                    bool m_oAuthCredentialConfigHasBeenSet;

                    /**
                     * <p>OIDC凭证配置</p>
                     */
                    AIGWOIDCCredentialConfig m_oIDCCredentialConfig;
                    bool m_oIDCCredentialConfigHasBeenSet;

                    /**
                     * <p>第三方平台类型</p><p>枚举值：</p><ul><li>Dify： Dify平台</li></ul>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYSECRETKEYREQUEST_H_
