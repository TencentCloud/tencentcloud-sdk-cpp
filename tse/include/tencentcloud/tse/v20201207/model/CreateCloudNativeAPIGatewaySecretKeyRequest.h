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
                     * 获取密钥类型： ApiKey
                     * @return SecretType 密钥类型： ApiKey
                     * 
                     */
                    std::string GetSecretType() const;

                    /**
                     * 设置密钥类型： ApiKey
                     * @param _secretType 密钥类型： ApiKey
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
                     * 获取密钥名字
                     * @return Name 密钥名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置密钥名字
                     * @param _name 密钥名字
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
                     * 获取生成方式：  

密钥类型 Consumer 时选项：  

- KMS
- System 系统  
- Custom  自定义  

密钥类型是 LLM 时选项 

- KMS 
- Custom  自定义 
                     * @return GenerateType 生成方式：  

密钥类型 Consumer 时选项：  

- KMS
- System 系统  
- Custom  自定义  

密钥类型是 LLM 时选项 

- KMS 
- Custom  自定义 
                     * 
                     */
                    std::string GetGenerateType() const;

                    /**
                     * 设置生成方式：  

密钥类型 Consumer 时选项：  

- KMS
- System 系统  
- Custom  自定义  

密钥类型是 LLM 时选项 

- KMS 
- Custom  自定义 
                     * @param _generateType 生成方式：  

密钥类型 Consumer 时选项：  

- KMS
- System 系统  
- Custom  自定义  

密钥类型是 LLM 时选项 

- KMS 
- Custom  自定义 
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
                     * 获取资源类型：
- Consumer 消费者
- LLM 模型服务
                     * @return ResourceType 资源类型：
- Consumer 消费者
- LLM 模型服务
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型：
- Consumer 消费者
- LLM 模型服务
                     * @param _resourceType 资源类型：
- Consumer 消费者
- LLM 模型服务
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
                     * 获取KMS 的凭证名字， GenerateType 时 kms 必填
                     * @return KmsKeyName KMS 的凭证名字， GenerateType 时 kms 必填
                     * 
                     */
                    std::string GetKmsKeyName() const;

                    /**
                     * 设置KMS 的凭证名字， GenerateType 时 kms 必填
                     * @param _kmsKeyName KMS 的凭证名字， GenerateType 时 kms 必填
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
                     * 获取KMS 的凭证版本， GenerateType 时 kms 必填
                     * @return KmsKeyVersion KMS 的凭证版本， GenerateType 时 kms 必填
                     * 
                     */
                    std::string GetKmsKeyVersion() const;

                    /**
                     * 设置KMS 的凭证版本， GenerateType 时 kms 必填
                     * @param _kmsKeyVersion KMS 的凭证版本， GenerateType 时 kms 必填
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
                     * 获取GenerateType 等于 Custom 是必填
                     * @return SecretValue GenerateType 等于 Custom 是必填
                     * 
                     */
                    std::string GetSecretValue() const;

                    /**
                     * 设置GenerateType 等于 Custom 是必填
                     * @param _secretValue GenerateType 等于 Custom 是必填
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
                     * 实例 ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 密钥类型： ApiKey
                     */
                    std::string m_secretType;
                    bool m_secretTypeHasBeenSet;

                    /**
                     * 密钥名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 生成方式：  

密钥类型 Consumer 时选项：  

- KMS
- System 系统  
- Custom  自定义  

密钥类型是 LLM 时选项 

- KMS 
- Custom  自定义 
                     */
                    std::string m_generateType;
                    bool m_generateTypeHasBeenSet;

                    /**
                     * 资源类型：
- Consumer 消费者
- LLM 模型服务
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * KMS 的凭证名字， GenerateType 时 kms 必填
                     */
                    std::string m_kmsKeyName;
                    bool m_kmsKeyNameHasBeenSet;

                    /**
                     * KMS 的凭证版本， GenerateType 时 kms 必填
                     */
                    std::string m_kmsKeyVersion;
                    bool m_kmsKeyVersionHasBeenSet;

                    /**
                     * GenerateType 等于 Custom 是必填
                     */
                    std::string m_secretValue;
                    bool m_secretValueHasBeenSet;

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

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYSECRETKEYREQUEST_H_
