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
                     * 获取凭据名称
                     * @return SecretName 凭据名称
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置凭据名称
                     * @param _secretName 凭据名称
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
                     * 获取凭据的描述信息
                     * @return Description 凭据的描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置凭据的描述信息
                     * @param _description 凭据的描述信息
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
                     * 获取用于加密凭据的KMS KeyId
                     * @return KmsKeyId 用于加密凭据的KMS KeyId
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置用于加密凭据的KMS KeyId
                     * @param _kmsKeyId 用于加密凭据的KMS KeyId
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
                     * 获取创建者UIN
                     * @return CreateUin 创建者UIN
                     * 
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 设置创建者UIN
                     * @param _createUin 创建者UIN
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
                     * 获取凭据状态：Enabled、Disabled、PendingDelete、Creating、Failed
                     * @return Status 凭据状态：Enabled、Disabled、PendingDelete、Creating、Failed
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置凭据状态：Enabled、Disabled、PendingDelete、Creating、Failed
                     * @param _status 凭据状态：Enabled、Disabled、PendingDelete、Creating、Failed
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
                     * 获取凭据删除日期，对于status为PendingDelete 的有效，unix时间戳
                     * @return DeleteTime 凭据删除日期，对于status为PendingDelete 的有效，unix时间戳
                     * 
                     */
                    uint64_t GetDeleteTime() const;

                    /**
                     * 设置凭据删除日期，对于status为PendingDelete 的有效，unix时间戳
                     * @param _deleteTime 凭据删除日期，对于status为PendingDelete 的有效，unix时间戳
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
                     * 获取凭据创建时间，unix时间戳
                     * @return CreateTime 凭据创建时间，unix时间戳
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置凭据创建时间，unix时间戳
                     * @param _createTime 凭据创建时间，unix时间戳
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
                     * 获取用于加密凭据的KMS CMK类型，DEFAULT 表示SecretsManager 创建的默认密钥， CUSTOMER 表示用户指定的密钥
                     * @return KmsKeyType 用于加密凭据的KMS CMK类型，DEFAULT 表示SecretsManager 创建的默认密钥， CUSTOMER 表示用户指定的密钥
                     * 
                     */
                    std::string GetKmsKeyType() const;

                    /**
                     * 设置用于加密凭据的KMS CMK类型，DEFAULT 表示SecretsManager 创建的默认密钥， CUSTOMER 表示用户指定的密钥
                     * @param _kmsKeyType 用于加密凭据的KMS CMK类型，DEFAULT 表示SecretsManager 创建的默认密钥， CUSTOMER 表示用户指定的密钥
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
                     * 获取1:--开启轮转；0--禁止轮转
                     * @return RotationStatus 1:--开启轮转；0--禁止轮转
                     * 
                     */
                    int64_t GetRotationStatus() const;

                    /**
                     * 设置1:--开启轮转；0--禁止轮转
                     * @param _rotationStatus 1:--开启轮转；0--禁止轮转
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
                     * 获取下一次轮转开始时间，uinx 时间戳
                     * @return NextRotationTime 下一次轮转开始时间，uinx 时间戳
                     * 
                     */
                    uint64_t GetNextRotationTime() const;

                    /**
                     * 设置下一次轮转开始时间，uinx 时间戳
                     * @param _nextRotationTime 下一次轮转开始时间，uinx 时间戳
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
                     * 获取0 -- 用户自定义凭据；
1 -- 云产品凭据；
2 -- SSH密钥对凭据；
3 -- 云API密钥对凭据；
4 -- Redis类型凭据；
                     * @return SecretType 0 -- 用户自定义凭据；
1 -- 云产品凭据；
2 -- SSH密钥对凭据；
3 -- 云API密钥对凭据；
4 -- Redis类型凭据；
                     * 
                     */
                    int64_t GetSecretType() const;

                    /**
                     * 设置0 -- 用户自定义凭据；
1 -- 云产品凭据；
2 -- SSH密钥对凭据；
3 -- 云API密钥对凭据；
4 -- Redis类型凭据；
                     * @param _secretType 0 -- 用户自定义凭据；
1 -- 云产品凭据；
2 -- SSH密钥对凭据；
3 -- 云API密钥对凭据；
4 -- Redis类型凭据；
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
                     * 获取云产品名称，仅在SecretType为1，即凭据类型为云产品凭据时生效
                     * @return ProductName 云产品名称，仅在SecretType为1，即凭据类型为云产品凭据时生效
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置云产品名称，仅在SecretType为1，即凭据类型为云产品凭据时生效
                     * @param _productName 云产品名称，仅在SecretType为1，即凭据类型为云产品凭据时生效
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
                     * 获取当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对凭据的名称。
                     * @return ResourceName 当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对凭据的名称。
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对凭据的名称。
                     * @param _resourceName 当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对凭据的名称。
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
                     * 获取当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所属的项目ID。
                     * @return ProjectID 当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所属的项目ID。
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所属的项目ID。
                     * @param _projectID 当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所属的项目ID。
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
                     * 获取当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所关联的CVM实例ID。
                     * @return AssociatedInstanceIDs 当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所关联的CVM实例ID。
                     * 
                     */
                    std::vector<std::string> GetAssociatedInstanceIDs() const;

                    /**
                     * 设置当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所关联的CVM实例ID。
                     * @param _associatedInstanceIDs 当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所关联的CVM实例ID。
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
                     * 获取当凭据类型为云API密钥对凭据时，此字段有效，用于表示云API密钥对所属的用户UIN。
                     * @return TargetUin 当凭据类型为云API密钥对凭据时，此字段有效，用于表示云API密钥对所属的用户UIN。
                     * 
                     */
                    uint64_t GetTargetUin() const;

                    /**
                     * 设置当凭据类型为云API密钥对凭据时，此字段有效，用于表示云API密钥对所属的用户UIN。
                     * @param _targetUin 当凭据类型为云API密钥对凭据时，此字段有效，用于表示云API密钥对所属的用户UIN。
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
                     * 获取轮转的频率，以天作为单位，在轮转开启状态下生效。
                     * @return RotationFrequency 轮转的频率，以天作为单位，在轮转开启状态下生效。
                     * 
                     */
                    int64_t GetRotationFrequency() const;

                    /**
                     * 设置轮转的频率，以天作为单位，在轮转开启状态下生效。
                     * @param _rotationFrequency 轮转的频率，以天作为单位，在轮转开启状态下生效。
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
                     * 获取云产品凭据对应的云产品实例 ID 号。
                     * @return ResourceID 云产品凭据对应的云产品实例 ID 号。
                     * 
                     */
                    std::string GetResourceID() const;

                    /**
                     * 设置云产品凭据对应的云产品实例 ID 号。
                     * @param _resourceID 云产品凭据对应的云产品实例 ID 号。
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
                     * 获取用户指定的轮转开始时间。
                     * @return RotationBeginTime 用户指定的轮转开始时间。
                     * 
                     */
                    std::string GetRotationBeginTime() const;

                    /**
                     * 设置用户指定的轮转开始时间。
                     * @param _rotationBeginTime 用户指定的轮转开始时间。
                     * 
                     */
                    void SetRotationBeginTime(const std::string& _rotationBeginTime);

                    /**
                     * 判断参数 RotationBeginTime 是否已赋值
                     * @return RotationBeginTime 是否已赋值
                     * 
                     */
                    bool RotationBeginTimeHasBeenSet() const;

                private:

                    /**
                     * 凭据名称
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * 凭据的描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 用于加密凭据的KMS KeyId
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * 创建者UIN
                     */
                    uint64_t m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * 凭据状态：Enabled、Disabled、PendingDelete、Creating、Failed
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 凭据删除日期，对于status为PendingDelete 的有效，unix时间戳
                     */
                    uint64_t m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                    /**
                     * 凭据创建时间，unix时间戳
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 用于加密凭据的KMS CMK类型，DEFAULT 表示SecretsManager 创建的默认密钥， CUSTOMER 表示用户指定的密钥
                     */
                    std::string m_kmsKeyType;
                    bool m_kmsKeyTypeHasBeenSet;

                    /**
                     * 1:--开启轮转；0--禁止轮转
                     */
                    int64_t m_rotationStatus;
                    bool m_rotationStatusHasBeenSet;

                    /**
                     * 下一次轮转开始时间，uinx 时间戳
                     */
                    uint64_t m_nextRotationTime;
                    bool m_nextRotationTimeHasBeenSet;

                    /**
                     * 0 -- 用户自定义凭据；
1 -- 云产品凭据；
2 -- SSH密钥对凭据；
3 -- 云API密钥对凭据；
4 -- Redis类型凭据；
                     */
                    int64_t m_secretType;
                    bool m_secretTypeHasBeenSet;

                    /**
                     * 云产品名称，仅在SecretType为1，即凭据类型为云产品凭据时生效
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对凭据的名称。
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所属的项目ID。
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * 当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所关联的CVM实例ID。
                     */
                    std::vector<std::string> m_associatedInstanceIDs;
                    bool m_associatedInstanceIDsHasBeenSet;

                    /**
                     * 当凭据类型为云API密钥对凭据时，此字段有效，用于表示云API密钥对所属的用户UIN。
                     */
                    uint64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * 轮转的频率，以天作为单位，在轮转开启状态下生效。
                     */
                    int64_t m_rotationFrequency;
                    bool m_rotationFrequencyHasBeenSet;

                    /**
                     * 云产品凭据对应的云产品实例 ID 号。
                     */
                    std::string m_resourceID;
                    bool m_resourceIDHasBeenSet;

                    /**
                     * 用户指定的轮转开始时间。
                     */
                    std::string m_rotationBeginTime;
                    bool m_rotationBeginTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_SECRETMETADATA_H_
