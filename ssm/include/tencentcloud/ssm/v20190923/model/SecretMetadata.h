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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_SECRETMETADATA_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_SECRETMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * 凭据的基础信息
                */
                class SecretMetadata : public AbstractModel
                {
                public:
                    SecretMetadata();
                    ~SecretMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>凭据名称</p>
                     * @return SecretName <p>凭据名称</p>
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置<p>凭据名称</p>
                     * @param _secretName <p>凭据名称</p>
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
                     * 获取<p>凭据的描述信息</p>
                     * @return Description <p>凭据的描述信息</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>凭据的描述信息</p>
                     * @param _description <p>凭据的描述信息</p>
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
                     * 获取<p>用于加密凭据的KMS KeyId</p>
                     * @return KmsKeyId <p>用于加密凭据的KMS KeyId</p>
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置<p>用于加密凭据的KMS KeyId</p>
                     * @param _kmsKeyId <p>用于加密凭据的KMS KeyId</p>
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
                     * 获取<p>创建者UIN</p>
                     * @return CreateUin <p>创建者UIN</p>
                     * 
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 设置<p>创建者UIN</p>
                     * @param _createUin <p>创建者UIN</p>
                     * 
                     */
                    void SetCreateUin(const uint64_t& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     * 
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取<p>凭据状态：Enabled、Disabled、PendingDelete、Creating、Failed</p>
                     * @return Status <p>凭据状态：Enabled、Disabled、PendingDelete、Creating、Failed</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>凭据状态：Enabled、Disabled、PendingDelete、Creating、Failed</p>
                     * @param _status <p>凭据状态：Enabled、Disabled、PendingDelete、Creating、Failed</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>凭据删除日期，对于status为PendingDelete 的有效，unix时间戳</p>
                     * @return DeleteTime <p>凭据删除日期，对于status为PendingDelete 的有效，unix时间戳</p>
                     * 
                     */
                    uint64_t GetDeleteTime() const;

                    /**
                     * 设置<p>凭据删除日期，对于status为PendingDelete 的有效，unix时间戳</p>
                     * @param _deleteTime <p>凭据删除日期，对于status为PendingDelete 的有效，unix时间戳</p>
                     * 
                     */
                    void SetDeleteTime(const uint64_t& _deleteTime);

                    /**
                     * 判断参数 DeleteTime 是否已赋值
                     * @return DeleteTime 是否已赋值
                     * 
                     */
                    bool DeleteTimeHasBeenSet() const;

                    /**
                     * 获取<p>凭据创建时间，unix时间戳</p>
                     * @return CreateTime <p>凭据创建时间，unix时间戳</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>凭据创建时间，unix时间戳</p>
                     * @param _createTime <p>凭据创建时间，unix时间戳</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>用于加密凭据的KMS CMK类型，DEFAULT 表示SecretsManager 创建的默认密钥， CUSTOMER 表示用户指定的密钥</p>
                     * @return KmsKeyType <p>用于加密凭据的KMS CMK类型，DEFAULT 表示SecretsManager 创建的默认密钥， CUSTOMER 表示用户指定的密钥</p>
                     * 
                     */
                    std::string GetKmsKeyType() const;

                    /**
                     * 设置<p>用于加密凭据的KMS CMK类型，DEFAULT 表示SecretsManager 创建的默认密钥， CUSTOMER 表示用户指定的密钥</p>
                     * @param _kmsKeyType <p>用于加密凭据的KMS CMK类型，DEFAULT 表示SecretsManager 创建的默认密钥， CUSTOMER 表示用户指定的密钥</p>
                     * 
                     */
                    void SetKmsKeyType(const std::string& _kmsKeyType);

                    /**
                     * 判断参数 KmsKeyType 是否已赋值
                     * @return KmsKeyType 是否已赋值
                     * 
                     */
                    bool KmsKeyTypeHasBeenSet() const;

                    /**
                     * 获取<p>1:--开启轮转；0--禁止轮转</p>
                     * @return RotationStatus <p>1:--开启轮转；0--禁止轮转</p>
                     * 
                     */
                    int64_t GetRotationStatus() const;

                    /**
                     * 设置<p>1:--开启轮转；0--禁止轮转</p>
                     * @param _rotationStatus <p>1:--开启轮转；0--禁止轮转</p>
                     * 
                     */
                    void SetRotationStatus(const int64_t& _rotationStatus);

                    /**
                     * 判断参数 RotationStatus 是否已赋值
                     * @return RotationStatus 是否已赋值
                     * 
                     */
                    bool RotationStatusHasBeenSet() const;

                    /**
                     * 获取<p>下一次轮转开始时间，uinx 时间戳</p>
                     * @return NextRotationTime <p>下一次轮转开始时间，uinx 时间戳</p>
                     * 
                     */
                    uint64_t GetNextRotationTime() const;

                    /**
                     * 设置<p>下一次轮转开始时间，uinx 时间戳</p>
                     * @param _nextRotationTime <p>下一次轮转开始时间，uinx 时间戳</p>
                     * 
                     */
                    void SetNextRotationTime(const uint64_t& _nextRotationTime);

                    /**
                     * 判断参数 NextRotationTime 是否已赋值
                     * @return NextRotationTime 是否已赋值
                     * 
                     */
                    bool NextRotationTimeHasBeenSet() const;

                    /**
                     * 获取<p>0 -- 用户自定义凭据；<br>1 -- 云产品凭据；<br>2 -- SSH密钥对凭据；<br>3 -- 云API密钥对凭据；<br>4 -- Redis类型凭据；</p>
                     * @return SecretType <p>0 -- 用户自定义凭据；<br>1 -- 云产品凭据；<br>2 -- SSH密钥对凭据；<br>3 -- 云API密钥对凭据；<br>4 -- Redis类型凭据；</p>
                     * 
                     */
                    int64_t GetSecretType() const;

                    /**
                     * 设置<p>0 -- 用户自定义凭据；<br>1 -- 云产品凭据；<br>2 -- SSH密钥对凭据；<br>3 -- 云API密钥对凭据；<br>4 -- Redis类型凭据；</p>
                     * @param _secretType <p>0 -- 用户自定义凭据；<br>1 -- 云产品凭据；<br>2 -- SSH密钥对凭据；<br>3 -- 云API密钥对凭据；<br>4 -- Redis类型凭据；</p>
                     * 
                     */
                    void SetSecretType(const int64_t& _secretType);

                    /**
                     * 判断参数 SecretType 是否已赋值
                     * @return SecretType 是否已赋值
                     * 
                     */
                    bool SecretTypeHasBeenSet() const;

                    /**
                     * 获取<p>云产品名称，仅在SecretType为1，即凭据类型为云产品凭据时生效</p>
                     * @return ProductName <p>云产品名称，仅在SecretType为1，即凭据类型为云产品凭据时生效</p>
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置<p>云产品名称，仅在SecretType为1，即凭据类型为云产品凭据时生效</p>
                     * @param _productName <p>云产品名称，仅在SecretType为1，即凭据类型为云产品凭据时生效</p>
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
                     * 获取<p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对凭据的名称。</p>
                     * @return ResourceName <p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对凭据的名称。</p>
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置<p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对凭据的名称。</p>
                     * @param _resourceName <p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对凭据的名称。</p>
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取<p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所属的项目ID。</p>
                     * @return ProjectID <p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所属的项目ID。</p>
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置<p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所属的项目ID。</p>
                     * @param _projectID <p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所属的项目ID。</p>
                     * 
                     */
                    void SetProjectID(const int64_t& _projectID);

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     * 
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取<p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所关联的CVM实例ID。</p>
                     * @return AssociatedInstanceIDs <p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所关联的CVM实例ID。</p>
                     * 
                     */
                    std::vector<std::string> GetAssociatedInstanceIDs() const;

                    /**
                     * 设置<p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所关联的CVM实例ID。</p>
                     * @param _associatedInstanceIDs <p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所关联的CVM实例ID。</p>
                     * 
                     */
                    void SetAssociatedInstanceIDs(const std::vector<std::string>& _associatedInstanceIDs);

                    /**
                     * 判断参数 AssociatedInstanceIDs 是否已赋值
                     * @return AssociatedInstanceIDs 是否已赋值
                     * 
                     */
                    bool AssociatedInstanceIDsHasBeenSet() const;

                    /**
                     * 获取<p>当凭据类型为云API密钥对凭据时，此字段有效，用于表示云API密钥对所属的用户UIN。</p>
                     * @return TargetUin <p>当凭据类型为云API密钥对凭据时，此字段有效，用于表示云API密钥对所属的用户UIN。</p>
                     * 
                     */
                    uint64_t GetTargetUin() const;

                    /**
                     * 设置<p>当凭据类型为云API密钥对凭据时，此字段有效，用于表示云API密钥对所属的用户UIN。</p>
                     * @param _targetUin <p>当凭据类型为云API密钥对凭据时，此字段有效，用于表示云API密钥对所属的用户UIN。</p>
                     * 
                     */
                    void SetTargetUin(const uint64_t& _targetUin);

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                    /**
                     * 获取<p>轮转的频率，以天作为单位，在轮转开启状态下生效。</p>
                     * @return RotationFrequency <p>轮转的频率，以天作为单位，在轮转开启状态下生效。</p>
                     * 
                     */
                    int64_t GetRotationFrequency() const;

                    /**
                     * 设置<p>轮转的频率，以天作为单位，在轮转开启状态下生效。</p>
                     * @param _rotationFrequency <p>轮转的频率，以天作为单位，在轮转开启状态下生效。</p>
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
                     * 获取<p>云产品凭据对应的云产品实例 ID 号。</p>
                     * @return ResourceID <p>云产品凭据对应的云产品实例 ID 号。</p>
                     * 
                     */
                    std::string GetResourceID() const;

                    /**
                     * 设置<p>云产品凭据对应的云产品实例 ID 号。</p>
                     * @param _resourceID <p>云产品凭据对应的云产品实例 ID 号。</p>
                     * 
                     */
                    void SetResourceID(const std::string& _resourceID);

                    /**
                     * 判断参数 ResourceID 是否已赋值
                     * @return ResourceID 是否已赋值
                     * 
                     */
                    bool ResourceIDHasBeenSet() const;

                    /**
                     * 获取<p>用户指定的轮转开始时间。</p>
                     * @return RotationBeginTime <p>用户指定的轮转开始时间。</p>
                     * 
                     */
                    std::string GetRotationBeginTime() const;

                    /**
                     * 设置<p>用户指定的轮转开始时间。</p>
                     * @param _rotationBeginTime <p>用户指定的轮转开始时间。</p>
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
                     * 获取<p>凭据加密类型</p><p>枚举值：</p><ul><li>0： KMS 密钥加密</li><li>1： 软密钥加密</li></ul><p>默认值：0</p>
                     * @return EncryptType <p>凭据加密类型</p><p>枚举值：</p><ul><li>0： KMS 密钥加密</li><li>1： 软密钥加密</li></ul><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetEncryptType() const;

                    /**
                     * 设置<p>凭据加密类型</p><p>枚举值：</p><ul><li>0： KMS 密钥加密</li><li>1： 软密钥加密</li></ul><p>默认值：0</p>
                     * @param _encryptType <p>凭据加密类型</p><p>枚举值：</p><ul><li>0： KMS 密钥加密</li><li>1： 软密钥加密</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetEncryptType(const uint64_t& _encryptType);

                    /**
                     * 判断参数 EncryptType 是否已赋值
                     * @return EncryptType 是否已赋值
                     * 
                     */
                    bool EncryptTypeHasBeenSet() const;

                    /**
                     * 获取<p>凭据密钥加密切换中</p>
                     * @return EncryptSwitching <p>凭据密钥加密切换中</p>
                     * 
                     */
                    bool GetEncryptSwitching() const;

                    /**
                     * 设置<p>凭据密钥加密切换中</p>
                     * @param _encryptSwitching <p>凭据密钥加密切换中</p>
                     * 
                     */
                    void SetEncryptSwitching(const bool& _encryptSwitching);

                    /**
                     * 判断参数 EncryptSwitching 是否已赋值
                     * @return EncryptSwitching 是否已赋值
                     * 
                     */
                    bool EncryptSwitchingHasBeenSet() const;

                private:

                    /**
                     * <p>凭据名称</p>
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * <p>凭据的描述信息</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>用于加密凭据的KMS KeyId</p>
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * <p>创建者UIN</p>
                     */
                    uint64_t m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * <p>凭据状态：Enabled、Disabled、PendingDelete、Creating、Failed</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>凭据删除日期，对于status为PendingDelete 的有效，unix时间戳</p>
                     */
                    uint64_t m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                    /**
                     * <p>凭据创建时间，unix时间戳</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>用于加密凭据的KMS CMK类型，DEFAULT 表示SecretsManager 创建的默认密钥， CUSTOMER 表示用户指定的密钥</p>
                     */
                    std::string m_kmsKeyType;
                    bool m_kmsKeyTypeHasBeenSet;

                    /**
                     * <p>1:--开启轮转；0--禁止轮转</p>
                     */
                    int64_t m_rotationStatus;
                    bool m_rotationStatusHasBeenSet;

                    /**
                     * <p>下一次轮转开始时间，uinx 时间戳</p>
                     */
                    uint64_t m_nextRotationTime;
                    bool m_nextRotationTimeHasBeenSet;

                    /**
                     * <p>0 -- 用户自定义凭据；<br>1 -- 云产品凭据；<br>2 -- SSH密钥对凭据；<br>3 -- 云API密钥对凭据；<br>4 -- Redis类型凭据；</p>
                     */
                    int64_t m_secretType;
                    bool m_secretTypeHasBeenSet;

                    /**
                     * <p>云产品名称，仅在SecretType为1，即凭据类型为云产品凭据时生效</p>
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * <p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对凭据的名称。</p>
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * <p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所属的项目ID。</p>
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * <p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所关联的CVM实例ID。</p>
                     */
                    std::vector<std::string> m_associatedInstanceIDs;
                    bool m_associatedInstanceIDsHasBeenSet;

                    /**
                     * <p>当凭据类型为云API密钥对凭据时，此字段有效，用于表示云API密钥对所属的用户UIN。</p>
                     */
                    uint64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * <p>轮转的频率，以天作为单位，在轮转开启状态下生效。</p>
                     */
                    int64_t m_rotationFrequency;
                    bool m_rotationFrequencyHasBeenSet;

                    /**
                     * <p>云产品凭据对应的云产品实例 ID 号。</p>
                     */
                    std::string m_resourceID;
                    bool m_resourceIDHasBeenSet;

                    /**
                     * <p>用户指定的轮转开始时间。</p>
                     */
                    std::string m_rotationBeginTime;
                    bool m_rotationBeginTimeHasBeenSet;

                    /**
                     * <p>凭据加密类型</p><p>枚举值：</p><ul><li>0： KMS 密钥加密</li><li>1： 软密钥加密</li></ul><p>默认值：0</p>
                     */
                    uint64_t m_encryptType;
                    bool m_encryptTypeHasBeenSet;

                    /**
                     * <p>凭据密钥加密切换中</p>
                     */
                    bool m_encryptSwitching;
                    bool m_encryptSwitchingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_SECRETMETADATA_H_
