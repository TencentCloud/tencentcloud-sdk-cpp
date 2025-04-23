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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_CREATESSHKEYPAIRSECRETREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_CREATESSHKEYPAIRSECRETREQUEST_H_

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
                * CreateSSHKeyPairSecret请求参数结构体
                */
                class CreateSSHKeyPairSecretRequest : public AbstractModel
                {
                public:
                    CreateSSHKeyPairSecretRequest();
                    ~CreateSSHKeyPairSecretRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取凭据名称，同一region内不可重复，最长128字节，使用字母、数字或者 - _ 的组合，第一个字符必须为字母或者数字。
                     * @return SecretName 凭据名称，同一region内不可重复，最长128字节，使用字母、数字或者 - _ 的组合，第一个字符必须为字母或者数字。
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置凭据名称，同一region内不可重复，最长128字节，使用字母、数字或者 - _ 的组合，第一个字符必须为字母或者数字。
                     * @param _secretName 凭据名称，同一region内不可重复，最长128字节，使用字母、数字或者 - _ 的组合，第一个字符必须为字母或者数字。
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
                     * 获取密钥对创建后所属的项目ID。
                     * @return ProjectId 密钥对创建后所属的项目ID。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置密钥对创建后所属的项目ID。
                     * @param _projectId 密钥对创建后所属的项目ID。
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

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
                     * 获取指定对凭据进行加密的KMS CMK。
如果为空则表示使用Secrets Manager为您默认创建的CMK进行加密。
您也可以指定在同region 下自行创建的KMS CMK进行加密。
                     * @return KmsKeyId 指定对凭据进行加密的KMS CMK。
如果为空则表示使用Secrets Manager为您默认创建的CMK进行加密。
您也可以指定在同region 下自行创建的KMS CMK进行加密。
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置指定对凭据进行加密的KMS CMK。
如果为空则表示使用Secrets Manager为您默认创建的CMK进行加密。
您也可以指定在同region 下自行创建的KMS CMK进行加密。
                     * @param _kmsKeyId 指定对凭据进行加密的KMS CMK。
如果为空则表示使用Secrets Manager为您默认创建的CMK进行加密。
您也可以指定在同region 下自行创建的KMS CMK进行加密。
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
                     * 获取标签列表。
                     * @return Tags 标签列表。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表。
                     * @param _tags 标签列表。
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
                     * 获取用户自定义输入的SSH密钥对的名称，可由数字，字母和下划线组成，只能以数字和字母开头，长度不超过25个字符。
                     * @return SSHKeyName 用户自定义输入的SSH密钥对的名称，可由数字，字母和下划线组成，只能以数字和字母开头，长度不超过25个字符。
                     * 
                     */
                    std::string GetSSHKeyName() const;

                    /**
                     * 设置用户自定义输入的SSH密钥对的名称，可由数字，字母和下划线组成，只能以数字和字母开头，长度不超过25个字符。
                     * @param _sSHKeyName 用户自定义输入的SSH密钥对的名称，可由数字，字母和下划线组成，只能以数字和字母开头，长度不超过25个字符。
                     * 
                     */
                    void SetSSHKeyName(const std::string& _sSHKeyName);

                    /**
                     * 判断参数 SSHKeyName 是否已赋值
                     * @return SSHKeyName 是否已赋值
                     * 
                     */
                    bool SSHKeyNameHasBeenSet() const;

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
                     * 凭据名称，同一region内不可重复，最长128字节，使用字母、数字或者 - _ 的组合，第一个字符必须为字母或者数字。
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * 密钥对创建后所属的项目ID。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 描述信息，用于详细描述用途等，最大支持2048字节。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 指定对凭据进行加密的KMS CMK。
如果为空则表示使用Secrets Manager为您默认创建的CMK进行加密。
您也可以指定在同region 下自行创建的KMS CMK进行加密。
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * 标签列表。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 用户自定义输入的SSH密钥对的名称，可由数字，字母和下划线组成，只能以数字和字母开头，长度不超过25个字符。
                     */
                    std::string m_sSHKeyName;
                    bool m_sSHKeyNameHasBeenSet;

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

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_CREATESSHKEYPAIRSECRETREQUEST_H_
