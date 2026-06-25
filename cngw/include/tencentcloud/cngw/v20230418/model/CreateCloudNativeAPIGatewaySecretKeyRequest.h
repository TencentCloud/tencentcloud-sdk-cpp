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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CREATECLOUDNATIVEAPIGATEWAYSECRETKEYREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CREATECLOUDNATIVEAPIGATEWAYSECRETKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
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
                     * 获取实例 ID
                     * @return GatewayId 实例 ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置实例 ID
                     * @param _gatewayId 实例 ID
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

                private:

                    /**
                     * 实例 ID
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CREATECLOUDNATIVEAPIGATEWAYSECRETKEYREQUEST_H_
