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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_CREATESECRETREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_CREATESECRETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssm/v20190923/model/Tag.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * CreateSecret请求参数结构体
                */
                class CreateSecretRequest : public AbstractModel
                {
                public:
                    CreateSecretRequest();
                    ~CreateSecretRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取凭据名称，同一region内不可重复，最长128字节，使用字母、数字或者 - _ 的组合，第一个字符必须为字母或者数字。一旦创建不可修改。
                     * @return SecretName 凭据名称，同一region内不可重复，最长128字节，使用字母、数字或者 - _ 的组合，第一个字符必须为字母或者数字。一旦创建不可修改。
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置凭据名称，同一region内不可重复，最长128字节，使用字母、数字或者 - _ 的组合，第一个字符必须为字母或者数字。一旦创建不可修改。
                     * @param _secretName 凭据名称，同一region内不可重复，最长128字节，使用字母、数字或者 - _ 的组合，第一个字符必须为字母或者数字。一旦创建不可修改。
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取凭据版本，查询凭据信息时需要根据SecretName 和 VersionId进行查询，最长64 字节，使用字母、数字或者 - _ . 的组合并且以字母或数字开头。若为空，则使用默认的初始凭据版本号。可选，若为空或该凭据为云产品类凭据，则该版本号默认为 SSM_Current。
                     * @return VersionId 凭据版本，查询凭据信息时需要根据SecretName 和 VersionId进行查询，最长64 字节，使用字母、数字或者 - _ . 的组合并且以字母或数字开头。若为空，则使用默认的初始凭据版本号。可选，若为空或该凭据为云产品类凭据，则该版本号默认为 SSM_Current。
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置凭据版本，查询凭据信息时需要根据SecretName 和 VersionId进行查询，最长64 字节，使用字母、数字或者 - _ . 的组合并且以字母或数字开头。若为空，则使用默认的初始凭据版本号。可选，若为空或该凭据为云产品类凭据，则该版本号默认为 SSM_Current。
                     * @param _versionId 凭据版本，查询凭据信息时需要根据SecretName 和 VersionId进行查询，最长64 字节，使用字母、数字或者 - _ . 的组合并且以字母或数字开头。若为空，则使用默认的初始凭据版本号。可选，若为空或该凭据为云产品类凭据，则该版本号默认为 SSM_Current。
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取描述信息，用于详细描述用途等，最大支持2048字节。
                     * @return Description 描述信息，用于详细描述用途等，最大支持2048字节。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息，用于详细描述用途等，最大支持2048字节。
                     * @param _description 描述信息，用于详细描述用途等，最大支持2048字节。
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
                     * 获取指定对凭据进行加密的KMS CMK。如果为空则表示使用Secrets Manager为您默认创建的CMK进行加密。您也可以指定在同region 下自行创建的KMS CMK进行加密。
                     * @return KmsKeyId 指定对凭据进行加密的KMS CMK。如果为空则表示使用Secrets Manager为您默认创建的CMK进行加密。您也可以指定在同region 下自行创建的KMS CMK进行加密。
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置指定对凭据进行加密的KMS CMK。如果为空则表示使用Secrets Manager为您默认创建的CMK进行加密。您也可以指定在同region 下自行创建的KMS CMK进行加密。
                     * @param _kmsKeyId 指定对凭据进行加密的KMS CMK。如果为空则表示使用Secrets Manager为您默认创建的CMK进行加密。您也可以指定在同region 下自行创建的KMS CMK进行加密。
                     * 
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                    /**
                     * 获取凭据类型，默认为0自定义凭据。
                     * @return SecretType 凭据类型，默认为0自定义凭据。
                     * 
                     */
                    uint64_t GetSecretType() const;

                    /**
                     * 设置凭据类型，默认为0自定义凭据。
                     * @param _secretType 凭据类型，默认为0自定义凭据。
                     * 
                     */
                    void SetSecretType(const uint64_t& _secretType);

                    /**
                     * 判断参数 SecretType 是否已赋值
                     * @return SecretType 是否已赋值
                     * 
                     */
                    bool SecretTypeHasBeenSet() const;

                    /**
                     * 获取二进制凭据信息base64编码后的明文。SecretBinary 和 SecretString 必须且只能设置一个，最大支持32KB字节。
                     * @return SecretBinary 二进制凭据信息base64编码后的明文。SecretBinary 和 SecretString 必须且只能设置一个，最大支持32KB字节。
                     * 
                     */
                    std::string GetSecretBinary() const;

                    /**
                     * 设置二进制凭据信息base64编码后的明文。SecretBinary 和 SecretString 必须且只能设置一个，最大支持32KB字节。
                     * @param _secretBinary 二进制凭据信息base64编码后的明文。SecretBinary 和 SecretString 必须且只能设置一个，最大支持32KB字节。
                     * 
                     */
                    void SetSecretBinary(const std::string& _secretBinary);

                    /**
                     * 判断参数 SecretBinary 是否已赋值
                     * @return SecretBinary 是否已赋值
                     * 
                     */
                    bool SecretBinaryHasBeenSet() const;

                    /**
                     * 获取文本类型凭据信息明文（不需要进行base64编码）。SecretBinary 和 SecretString 必须且只能设置一个，最大支持32KB字节。
                     * @return SecretString 文本类型凭据信息明文（不需要进行base64编码）。SecretBinary 和 SecretString 必须且只能设置一个，最大支持32KB字节。
                     * 
                     */
                    std::string GetSecretString() const;

                    /**
                     * 设置文本类型凭据信息明文（不需要进行base64编码）。SecretBinary 和 SecretString 必须且只能设置一个，最大支持32KB字节。
                     * @param _secretString 文本类型凭据信息明文（不需要进行base64编码）。SecretBinary 和 SecretString 必须且只能设置一个，最大支持32KB字节。
                     * 
                     */
                    void SetSecretString(const std::string& _secretString);

                    /**
                     * 判断参数 SecretString 是否已赋值
                     * @return SecretString 是否已赋值
                     * 
                     */
                    bool SecretStringHasBeenSet() const;

                    /**
                     * 获取JSON 格式字符串，用于指定特定凭据类型的额外配置。
                     * @return AdditionalConfig JSON 格式字符串，用于指定特定凭据类型的额外配置。
                     * 
                     */
                    std::string GetAdditionalConfig() const;

                    /**
                     * 设置JSON 格式字符串，用于指定特定凭据类型的额外配置。
                     * @param _additionalConfig JSON 格式字符串，用于指定特定凭据类型的额外配置。
                     * 
                     */
                    void SetAdditionalConfig(const std::string& _additionalConfig);

                    /**
                     * 判断参数 AdditionalConfig 是否已赋值
                     * @return AdditionalConfig 是否已赋值
                     * 
                     */
                    bool AdditionalConfigHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return Tags 标签列表
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表
                     * @param _tags 标签列表
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取KMS的独享集群的ID。当KmsKeyId为空,并且用户的KMS存在有效的HsmClusterId时有效。
                     * @return KmsHsmClusterId KMS的独享集群的ID。当KmsKeyId为空,并且用户的KMS存在有效的HsmClusterId时有效。
                     * 
                     */
                    std::string GetKmsHsmClusterId() const;

                    /**
                     * 设置KMS的独享集群的ID。当KmsKeyId为空,并且用户的KMS存在有效的HsmClusterId时有效。
                     * @param _kmsHsmClusterId KMS的独享集群的ID。当KmsKeyId为空,并且用户的KMS存在有效的HsmClusterId时有效。
                     * 
                     */
                    void SetKmsHsmClusterId(const std::string& _kmsHsmClusterId);

                    /**
                     * 判断参数 KmsHsmClusterId 是否已赋值
                     * @return KmsHsmClusterId 是否已赋值
                     * 
                     */
                    bool KmsHsmClusterIdHasBeenSet() const;

                private:

                    /**
                     * 凭据名称，同一region内不可重复，最长128字节，使用字母、数字或者 - _ 的组合，第一个字符必须为字母或者数字。一旦创建不可修改。
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * 凭据版本，查询凭据信息时需要根据SecretName 和 VersionId进行查询，最长64 字节，使用字母、数字或者 - _ . 的组合并且以字母或数字开头。若为空，则使用默认的初始凭据版本号。可选，若为空或该凭据为云产品类凭据，则该版本号默认为 SSM_Current。
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * 描述信息，用于详细描述用途等，最大支持2048字节。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 指定对凭据进行加密的KMS CMK。如果为空则表示使用Secrets Manager为您默认创建的CMK进行加密。您也可以指定在同region 下自行创建的KMS CMK进行加密。
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * 凭据类型，默认为0自定义凭据。
                     */
                    uint64_t m_secretType;
                    bool m_secretTypeHasBeenSet;

                    /**
                     * 二进制凭据信息base64编码后的明文。SecretBinary 和 SecretString 必须且只能设置一个，最大支持32KB字节。
                     */
                    std::string m_secretBinary;
                    bool m_secretBinaryHasBeenSet;

                    /**
                     * 文本类型凭据信息明文（不需要进行base64编码）。SecretBinary 和 SecretString 必须且只能设置一个，最大支持32KB字节。
                     */
                    std::string m_secretString;
                    bool m_secretStringHasBeenSet;

                    /**
                     * JSON 格式字符串，用于指定特定凭据类型的额外配置。
                     */
                    std::string m_additionalConfig;
                    bool m_additionalConfigHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * KMS的独享集群的ID。当KmsKeyId为空,并且用户的KMS存在有效的HsmClusterId时有效。
                     */
                    std::string m_kmsHsmClusterId;
                    bool m_kmsHsmClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_CREATESECRETREQUEST_H_
