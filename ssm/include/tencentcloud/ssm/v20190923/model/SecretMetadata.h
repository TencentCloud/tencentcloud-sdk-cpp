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
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置凭据名称
                     * @param SecretName 凭据名称
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取凭据的描述信息
                     * @return Description 凭据的描述信息
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置凭据的描述信息
                     * @param Description 凭据的描述信息
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取用于加密凭据的KMS KeyId
                     * @return KmsKeyId 用于加密凭据的KMS KeyId
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置用于加密凭据的KMS KeyId
                     * @param KmsKeyId 用于加密凭据的KMS KeyId
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     */
                    bool KmsKeyIdHasBeenSet() const;

                    /**
                     * 获取创建者UIN
                     * @return CreateUin 创建者UIN
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 设置创建者UIN
                     * @param CreateUin 创建者UIN
                     */
                    void SetCreateUin(const uint64_t& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取凭据状态：Enabled、Disabled、PendingDelete、Creating、Failed
                     * @return Status 凭据状态：Enabled、Disabled、PendingDelete、Creating、Failed
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置凭据状态：Enabled、Disabled、PendingDelete、Creating、Failed
                     * @param Status 凭据状态：Enabled、Disabled、PendingDelete、Creating、Failed
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取凭据删除日期，对于status为PendingDelete 的有效，unix时间戳
                     * @return DeleteTime 凭据删除日期，对于status为PendingDelete 的有效，unix时间戳
                     */
                    uint64_t GetDeleteTime() const;

                    /**
                     * 设置凭据删除日期，对于status为PendingDelete 的有效，unix时间戳
                     * @param DeleteTime 凭据删除日期，对于status为PendingDelete 的有效，unix时间戳
                     */
                    void SetDeleteTime(const uint64_t& _deleteTime);

                    /**
                     * 判断参数 DeleteTime 是否已赋值
                     * @return DeleteTime 是否已赋值
                     */
                    bool DeleteTimeHasBeenSet() const;

                    /**
                     * 获取凭据创建时间，unix时间戳
                     * @return CreateTime 凭据创建时间，unix时间戳
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置凭据创建时间，unix时间戳
                     * @param CreateTime 凭据创建时间，unix时间戳
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取用于加密凭据的KMS CMK类型，DEFAULT 表示SecretsManager 创建的默认密钥， CUSTOMER 表示用户指定的密钥
                     * @return KmsKeyType 用于加密凭据的KMS CMK类型，DEFAULT 表示SecretsManager 创建的默认密钥， CUSTOMER 表示用户指定的密钥
                     */
                    std::string GetKmsKeyType() const;

                    /**
                     * 设置用于加密凭据的KMS CMK类型，DEFAULT 表示SecretsManager 创建的默认密钥， CUSTOMER 表示用户指定的密钥
                     * @param KmsKeyType 用于加密凭据的KMS CMK类型，DEFAULT 表示SecretsManager 创建的默认密钥， CUSTOMER 表示用户指定的密钥
                     */
                    void SetKmsKeyType(const std::string& _kmsKeyType);

                    /**
                     * 判断参数 KmsKeyType 是否已赋值
                     * @return KmsKeyType 是否已赋值
                     */
                    bool KmsKeyTypeHasBeenSet() const;

                    /**
                     * 获取1:--开启轮转；0--禁止轮转
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RotationStatus 1:--开启轮转；0--禁止轮转
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRotationStatus() const;

                    /**
                     * 设置1:--开启轮转；0--禁止轮转
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RotationStatus 1:--开启轮转；0--禁止轮转
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRotationStatus(const int64_t& _rotationStatus);

                    /**
                     * 判断参数 RotationStatus 是否已赋值
                     * @return RotationStatus 是否已赋值
                     */
                    bool RotationStatusHasBeenSet() const;

                    /**
                     * 获取下一次轮转开始时间，uinx 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextRotationTime 下一次轮转开始时间，uinx 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetNextRotationTime() const;

                    /**
                     * 设置下一次轮转开始时间，uinx 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NextRotationTime 下一次轮转开始时间，uinx 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNextRotationTime(const uint64_t& _nextRotationTime);

                    /**
                     * 判断参数 NextRotationTime 是否已赋值
                     * @return NextRotationTime 是否已赋值
                     */
                    bool NextRotationTimeHasBeenSet() const;

                    /**
                     * 获取0 -- 用户自定义凭据；1 -- 云产品凭据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretType 0 -- 用户自定义凭据；1 -- 云产品凭据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSecretType() const;

                    /**
                     * 设置0 -- 用户自定义凭据；1 -- 云产品凭据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SecretType 0 -- 用户自定义凭据；1 -- 云产品凭据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSecretType(const int64_t& _secretType);

                    /**
                     * 判断参数 SecretType 是否已赋值
                     * @return SecretType 是否已赋值
                     */
                    bool SecretTypeHasBeenSet() const;

                    /**
                     * 获取云产品名称，仅在SecretType为1，即凭据类型为云产品凭据时生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductName 云产品名称，仅在SecretType为1，即凭据类型为云产品凭据时生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置云产品名称，仅在SecretType为1，即凭据类型为云产品凭据时生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProductName 云产品名称，仅在SecretType为1，即凭据类型为云产品凭据时生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     */
                    bool ProductNameHasBeenSet() const;

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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rotationStatus;
                    bool m_rotationStatusHasBeenSet;

                    /**
                     * 下一次轮转开始时间，uinx 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_nextRotationTime;
                    bool m_nextRotationTimeHasBeenSet;

                    /**
                     * 0 -- 用户自定义凭据；1 -- 云产品凭据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_secretType;
                    bool m_secretTypeHasBeenSet;

                    /**
                     * 云产品名称，仅在SecretType为1，即凭据类型为云产品凭据时生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_SECRETMETADATA_H_
