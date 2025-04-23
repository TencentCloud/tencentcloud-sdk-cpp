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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_CREATEPRODUCTSECRETREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_CREATEPRODUCTSECRETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssm/v20190923/model/ProductPrivilegeUnit.h>
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
                * CreateProductSecret请求参数结构体
                */
                class CreateProductSecretRequest : public AbstractModel
                {
                public:
                    CreateProductSecretRequest();
                    ~CreateProductSecretRequest() = default;
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
                     * 获取用户账号名前缀，由用户自行指定，长度限定在8个字符以内，
可选字符集包括：
数字字符：[0, 9]，
小写字符：[a, z]，
大写字符：[A, Z]，
特殊字符(全英文符号)：下划线(_)，
前缀必须以大写或小写字母开头。
                     * @return UserNamePrefix 用户账号名前缀，由用户自行指定，长度限定在8个字符以内，
可选字符集包括：
数字字符：[0, 9]，
小写字符：[a, z]，
大写字符：[A, Z]，
特殊字符(全英文符号)：下划线(_)，
前缀必须以大写或小写字母开头。
                     * 
                     */
                    std::string GetUserNamePrefix() const;

                    /**
                     * 设置用户账号名前缀，由用户自行指定，长度限定在8个字符以内，
可选字符集包括：
数字字符：[0, 9]，
小写字符：[a, z]，
大写字符：[A, Z]，
特殊字符(全英文符号)：下划线(_)，
前缀必须以大写或小写字母开头。
                     * @param _userNamePrefix 用户账号名前缀，由用户自行指定，长度限定在8个字符以内，
可选字符集包括：
数字字符：[0, 9]，
小写字符：[a, z]，
大写字符：[A, Z]，
特殊字符(全英文符号)：下划线(_)，
前缀必须以大写或小写字母开头。
                     * 
                     */
                    void SetUserNamePrefix(const std::string& _userNamePrefix);

                    /**
                     * 判断参数 UserNamePrefix 是否已赋值
                     * @return UserNamePrefix 是否已赋值
                     * 
                     */
                    bool UserNamePrefixHasBeenSet() const;

                    /**
                     * 获取凭据所绑定的云产品名称，如Mysql，可以通过DescribeSupportedProducts接口获取所支持的云产品名称。
                     * @return ProductName 凭据所绑定的云产品名称，如Mysql，可以通过DescribeSupportedProducts接口获取所支持的云产品名称。
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置凭据所绑定的云产品名称，如Mysql，可以通过DescribeSupportedProducts接口获取所支持的云产品名称。
                     * @param _productName 凭据所绑定的云产品名称，如Mysql，可以通过DescribeSupportedProducts接口获取所支持的云产品名称。
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取云产品实例ID。
                     * @return InstanceID 云产品实例ID。
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置云产品实例ID。
                     * @param _instanceID 云产品实例ID。
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取账号的域名，IP形式，支持填入%。
                     * @return Domains 账号的域名，IP形式，支持填入%。
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置账号的域名，IP形式，支持填入%。
                     * @param _domains 账号的域名，IP形式，支持填入%。
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取将凭据与云产品实例绑定时，需要授予的权限列表。
                     * @return PrivilegesList 将凭据与云产品实例绑定时，需要授予的权限列表。
                     * 
                     */
                    std::vector<ProductPrivilegeUnit> GetPrivilegesList() const;

                    /**
                     * 设置将凭据与云产品实例绑定时，需要授予的权限列表。
                     * @param _privilegesList 将凭据与云产品实例绑定时，需要授予的权限列表。
                     * 
                     */
                    void SetPrivilegesList(const std::vector<ProductPrivilegeUnit>& _privilegesList);

                    /**
                     * 判断参数 PrivilegesList 是否已赋值
                     * @return PrivilegesList 是否已赋值
                     * 
                     */
                    bool PrivilegesListHasBeenSet() const;

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
                     * 获取用户自定义的开始轮转时间，格式：2006-01-02 15:04:05。
当EnableRotation为True时，此参数必填。
                     * @return RotationBeginTime 用户自定义的开始轮转时间，格式：2006-01-02 15:04:05。
当EnableRotation为True时，此参数必填。
                     * 
                     */
                    std::string GetRotationBeginTime() const;

                    /**
                     * 设置用户自定义的开始轮转时间，格式：2006-01-02 15:04:05。
当EnableRotation为True时，此参数必填。
                     * @param _rotationBeginTime 用户自定义的开始轮转时间，格式：2006-01-02 15:04:05。
当EnableRotation为True时，此参数必填。
                     * 
                     */
                    void SetRotationBeginTime(const std::string& _rotationBeginTime);

                    /**
                     * 判断参数 RotationBeginTime 是否已赋值
                     * @return RotationBeginTime 是否已赋值
                     * 
                     */
                    bool RotationBeginTimeHasBeenSet() const;

                    /**
                     * 获取是否开启轮转
True -- 开启
False -- 不开启
如果不指定，默认为False。
                     * @return EnableRotation 是否开启轮转
True -- 开启
False -- 不开启
如果不指定，默认为False。
                     * 
                     */
                    bool GetEnableRotation() const;

                    /**
                     * 设置是否开启轮转
True -- 开启
False -- 不开启
如果不指定，默认为False。
                     * @param _enableRotation 是否开启轮转
True -- 开启
False -- 不开启
如果不指定，默认为False。
                     * 
                     */
                    void SetEnableRotation(const bool& _enableRotation);

                    /**
                     * 判断参数 EnableRotation 是否已赋值
                     * @return EnableRotation 是否已赋值
                     * 
                     */
                    bool EnableRotationHasBeenSet() const;

                    /**
                     * 获取轮转周期，以天为单位，默认为1天。
                     * @return RotationFrequency 轮转周期，以天为单位，默认为1天。
                     * 
                     */
                    int64_t GetRotationFrequency() const;

                    /**
                     * 设置轮转周期，以天为单位，默认为1天。
                     * @param _rotationFrequency 轮转周期，以天为单位，默认为1天。
                     * 
                     */
                    void SetRotationFrequency(const int64_t& _rotationFrequency);

                    /**
                     * 判断参数 RotationFrequency 是否已赋值
                     * @return RotationFrequency 是否已赋值
                     * 
                     */
                    bool RotationFrequencyHasBeenSet() const;

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
                     * 用户账号名前缀，由用户自行指定，长度限定在8个字符以内，
可选字符集包括：
数字字符：[0, 9]，
小写字符：[a, z]，
大写字符：[A, Z]，
特殊字符(全英文符号)：下划线(_)，
前缀必须以大写或小写字母开头。
                     */
                    std::string m_userNamePrefix;
                    bool m_userNamePrefixHasBeenSet;

                    /**
                     * 凭据所绑定的云产品名称，如Mysql，可以通过DescribeSupportedProducts接口获取所支持的云产品名称。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 云产品实例ID。
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 账号的域名，IP形式，支持填入%。
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 将凭据与云产品实例绑定时，需要授予的权限列表。
                     */
                    std::vector<ProductPrivilegeUnit> m_privilegesList;
                    bool m_privilegesListHasBeenSet;

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
                     * 用户自定义的开始轮转时间，格式：2006-01-02 15:04:05。
当EnableRotation为True时，此参数必填。
                     */
                    std::string m_rotationBeginTime;
                    bool m_rotationBeginTimeHasBeenSet;

                    /**
                     * 是否开启轮转
True -- 开启
False -- 不开启
如果不指定，默认为False。
                     */
                    bool m_enableRotation;
                    bool m_enableRotationHasBeenSet;

                    /**
                     * 轮转周期，以天为单位，默认为1天。
                     */
                    int64_t m_rotationFrequency;
                    bool m_rotationFrequencyHasBeenSet;

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

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_CREATEPRODUCTSECRETREQUEST_H_
