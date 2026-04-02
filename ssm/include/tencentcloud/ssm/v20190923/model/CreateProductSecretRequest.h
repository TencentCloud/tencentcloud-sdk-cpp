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
                     * 获取<p>凭据名称，同一region内不可重复，最长128字节，使用字母、数字或者 - _ 的组合，第一个字符必须为字母或者数字。</p>
                     * @return SecretName <p>凭据名称，同一region内不可重复，最长128字节，使用字母、数字或者 - _ 的组合，第一个字符必须为字母或者数字。</p>
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置<p>凭据名称，同一region内不可重复，最长128字节，使用字母、数字或者 - _ 的组合，第一个字符必须为字母或者数字。</p>
                     * @param _secretName <p>凭据名称，同一region内不可重复，最长128字节，使用字母、数字或者 - _ 的组合，第一个字符必须为字母或者数字。</p>
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
                     * 获取<p>用户账号名前缀，由用户自行指定，长度限定在8个字符以内，<br>可选字符集包括：<br>数字字符：[0, 9]，<br>小写字符：[a, z]，<br>大写字符：[A, Z]，<br>特殊字符(全英文符号)：下划线(_)，<br>前缀必须以大写或小写字母开头。</p>
                     * @return UserNamePrefix <p>用户账号名前缀，由用户自行指定，长度限定在8个字符以内，<br>可选字符集包括：<br>数字字符：[0, 9]，<br>小写字符：[a, z]，<br>大写字符：[A, Z]，<br>特殊字符(全英文符号)：下划线(_)，<br>前缀必须以大写或小写字母开头。</p>
                     * 
                     */
                    std::string GetUserNamePrefix() const;

                    /**
                     * 设置<p>用户账号名前缀，由用户自行指定，长度限定在8个字符以内，<br>可选字符集包括：<br>数字字符：[0, 9]，<br>小写字符：[a, z]，<br>大写字符：[A, Z]，<br>特殊字符(全英文符号)：下划线(_)，<br>前缀必须以大写或小写字母开头。</p>
                     * @param _userNamePrefix <p>用户账号名前缀，由用户自行指定，长度限定在8个字符以内，<br>可选字符集包括：<br>数字字符：[0, 9]，<br>小写字符：[a, z]，<br>大写字符：[A, Z]，<br>特殊字符(全英文符号)：下划线(_)，<br>前缀必须以大写或小写字母开头。</p>
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
                     * 获取<p>凭据所绑定的云产品名称，如Mysql，可以通过DescribeSupportedProducts接口获取所支持的云产品名称。</p>
                     * @return ProductName <p>凭据所绑定的云产品名称，如Mysql，可以通过DescribeSupportedProducts接口获取所支持的云产品名称。</p>
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置<p>凭据所绑定的云产品名称，如Mysql，可以通过DescribeSupportedProducts接口获取所支持的云产品名称。</p>
                     * @param _productName <p>凭据所绑定的云产品名称，如Mysql，可以通过DescribeSupportedProducts接口获取所支持的云产品名称。</p>
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
                     * 获取<p>云产品实例ID。</p>
                     * @return InstanceID <p>云产品实例ID。</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>云产品实例ID。</p>
                     * @param _instanceID <p>云产品实例ID。</p>
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
                     * 获取<p>账号的域名，IP形式，支持填入%。</p>
                     * @return Domains <p>账号的域名，IP形式，支持填入%。</p>
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置<p>账号的域名，IP形式，支持填入%。</p>
                     * @param _domains <p>账号的域名，IP形式，支持填入%。</p>
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
                     * 获取<p>将凭据与云产品实例绑定时，需要授予的权限列表。</p>
                     * @return PrivilegesList <p>将凭据与云产品实例绑定时，需要授予的权限列表。</p>
                     * 
                     */
                    std::vector<ProductPrivilegeUnit> GetPrivilegesList() const;

                    /**
                     * 设置<p>将凭据与云产品实例绑定时，需要授予的权限列表。</p>
                     * @param _privilegesList <p>将凭据与云产品实例绑定时，需要授予的权限列表。</p>
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
                     * 获取<p>描述信息，用于详细描述用途等，最大支持2048字节。</p>
                     * @return Description <p>描述信息，用于详细描述用途等，最大支持2048字节。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述信息，用于详细描述用途等，最大支持2048字节。</p>
                     * @param _description <p>描述信息，用于详细描述用途等，最大支持2048字节。</p>
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
                     * 获取<p>指定对凭据进行加密的KMS CMK。<br>如果为空则表示使用Secrets Manager为您默认创建的CMK进行加密。<br>您也可以指定在同region 下自行创建的KMS CMK进行加密。</p>
                     * @return KmsKeyId <p>指定对凭据进行加密的KMS CMK。<br>如果为空则表示使用Secrets Manager为您默认创建的CMK进行加密。<br>您也可以指定在同region 下自行创建的KMS CMK进行加密。</p>
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置<p>指定对凭据进行加密的KMS CMK。<br>如果为空则表示使用Secrets Manager为您默认创建的CMK进行加密。<br>您也可以指定在同region 下自行创建的KMS CMK进行加密。</p>
                     * @param _kmsKeyId <p>指定对凭据进行加密的KMS CMK。<br>如果为空则表示使用Secrets Manager为您默认创建的CMK进行加密。<br>您也可以指定在同region 下自行创建的KMS CMK进行加密。</p>
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
                     * 获取<p>标签列表。</p>
                     * @return Tags <p>标签列表。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表。</p>
                     * @param _tags <p>标签列表。</p>
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
                     * 获取<p>用户自定义的开始轮转时间，格式：2006-01-02 15:04:05。<br>当EnableRotation为True时，此参数必填。</p>
                     * @return RotationBeginTime <p>用户自定义的开始轮转时间，格式：2006-01-02 15:04:05。<br>当EnableRotation为True时，此参数必填。</p>
                     * 
                     */
                    std::string GetRotationBeginTime() const;

                    /**
                     * 设置<p>用户自定义的开始轮转时间，格式：2006-01-02 15:04:05。<br>当EnableRotation为True时，此参数必填。</p>
                     * @param _rotationBeginTime <p>用户自定义的开始轮转时间，格式：2006-01-02 15:04:05。<br>当EnableRotation为True时，此参数必填。</p>
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
                     * 获取<p>是否开启轮转<br>True -- 开启<br>False -- 不开启<br>如果不指定，默认为False。</p>
                     * @return EnableRotation <p>是否开启轮转<br>True -- 开启<br>False -- 不开启<br>如果不指定，默认为False。</p>
                     * 
                     */
                    bool GetEnableRotation() const;

                    /**
                     * 设置<p>是否开启轮转<br>True -- 开启<br>False -- 不开启<br>如果不指定，默认为False。</p>
                     * @param _enableRotation <p>是否开启轮转<br>True -- 开启<br>False -- 不开启<br>如果不指定，默认为False。</p>
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
                     * 获取<p>轮转周期，以天为单位，默认为1天。</p>
                     * @return RotationFrequency <p>轮转周期，以天为单位，默认为1天。</p>
                     * 
                     */
                    int64_t GetRotationFrequency() const;

                    /**
                     * 设置<p>轮转周期，以天为单位，默认为1天。</p>
                     * @param _rotationFrequency <p>轮转周期，以天为单位，默认为1天。</p>
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
                     * 获取<p>KMS的独享集群的ID。当KmsKeyId为空,并且用户的KMS存在有效的HsmClusterId时有效。</p>
                     * @return KmsHsmClusterId <p>KMS的独享集群的ID。当KmsKeyId为空,并且用户的KMS存在有效的HsmClusterId时有效。</p>
                     * 
                     */
                    std::string GetKmsHsmClusterId() const;

                    /**
                     * 设置<p>KMS的独享集群的ID。当KmsKeyId为空,并且用户的KMS存在有效的HsmClusterId时有效。</p>
                     * @param _kmsHsmClusterId <p>KMS的独享集群的ID。当KmsKeyId为空,并且用户的KMS存在有效的HsmClusterId时有效。</p>
                     * 
                     */
                    void SetKmsHsmClusterId(const std::string& _kmsHsmClusterId);

                    /**
                     * 判断参数 KmsHsmClusterId 是否已赋值
                     * @return KmsHsmClusterId 是否已赋值
                     * 
                     */
                    bool KmsHsmClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>账户备注</p>
                     * @return AccountRemark <p>账户备注</p>
                     * 
                     */
                    std::string GetAccountRemark() const;

                    /**
                     * 设置<p>账户备注</p>
                     * @param _accountRemark <p>账户备注</p>
                     * 
                     */
                    void SetAccountRemark(const std::string& _accountRemark);

                    /**
                     * 判断参数 AccountRemark 是否已赋值
                     * @return AccountRemark 是否已赋值
                     * 
                     */
                    bool AccountRemarkHasBeenSet() const;

                    /**
                     * 获取<p>数据库账号类型，目前仅在创建sqlserver凭据场景会使用到，仅支持L3</p><p>枚举值：</p><ul><li>L3： 普通权限账号</li></ul>
                     * @return AccountType <p>数据库账号类型，目前仅在创建sqlserver凭据场景会使用到，仅支持L3</p><p>枚举值：</p><ul><li>L3： 普通权限账号</li></ul>
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置<p>数据库账号类型，目前仅在创建sqlserver凭据场景会使用到，仅支持L3</p><p>枚举值：</p><ul><li>L3： 普通权限账号</li></ul>
                     * @param _accountType <p>数据库账号类型，目前仅在创建sqlserver凭据场景会使用到，仅支持L3</p><p>枚举值：</p><ul><li>L3： 普通权限账号</li></ul>
                     * 
                     */
                    void SetAccountType(const std::string& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                private:

                    /**
                     * <p>凭据名称，同一region内不可重复，最长128字节，使用字母、数字或者 - _ 的组合，第一个字符必须为字母或者数字。</p>
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * <p>用户账号名前缀，由用户自行指定，长度限定在8个字符以内，<br>可选字符集包括：<br>数字字符：[0, 9]，<br>小写字符：[a, z]，<br>大写字符：[A, Z]，<br>特殊字符(全英文符号)：下划线(_)，<br>前缀必须以大写或小写字母开头。</p>
                     */
                    std::string m_userNamePrefix;
                    bool m_userNamePrefixHasBeenSet;

                    /**
                     * <p>凭据所绑定的云产品名称，如Mysql，可以通过DescribeSupportedProducts接口获取所支持的云产品名称。</p>
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * <p>云产品实例ID。</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>账号的域名，IP形式，支持填入%。</p>
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * <p>将凭据与云产品实例绑定时，需要授予的权限列表。</p>
                     */
                    std::vector<ProductPrivilegeUnit> m_privilegesList;
                    bool m_privilegesListHasBeenSet;

                    /**
                     * <p>描述信息，用于详细描述用途等，最大支持2048字节。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>指定对凭据进行加密的KMS CMK。<br>如果为空则表示使用Secrets Manager为您默认创建的CMK进行加密。<br>您也可以指定在同region 下自行创建的KMS CMK进行加密。</p>
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * <p>标签列表。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>用户自定义的开始轮转时间，格式：2006-01-02 15:04:05。<br>当EnableRotation为True时，此参数必填。</p>
                     */
                    std::string m_rotationBeginTime;
                    bool m_rotationBeginTimeHasBeenSet;

                    /**
                     * <p>是否开启轮转<br>True -- 开启<br>False -- 不开启<br>如果不指定，默认为False。</p>
                     */
                    bool m_enableRotation;
                    bool m_enableRotationHasBeenSet;

                    /**
                     * <p>轮转周期，以天为单位，默认为1天。</p>
                     */
                    int64_t m_rotationFrequency;
                    bool m_rotationFrequencyHasBeenSet;

                    /**
                     * <p>KMS的独享集群的ID。当KmsKeyId为空,并且用户的KMS存在有效的HsmClusterId时有效。</p>
                     */
                    std::string m_kmsHsmClusterId;
                    bool m_kmsHsmClusterIdHasBeenSet;

                    /**
                     * <p>账户备注</p>
                     */
                    std::string m_accountRemark;
                    bool m_accountRemarkHasBeenSet;

                    /**
                     * <p>数据库账号类型，目前仅在创建sqlserver凭据场景会使用到，仅支持L3</p><p>枚举值：</p><ul><li>L3： 普通权限账号</li></ul>
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_CREATEPRODUCTSECRETREQUEST_H_
