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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_KEYMETADATA_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_KEYMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * CMK属性信息
                */
                class KeyMetadata : public AbstractModel
                {
                public:
                    KeyMetadata();
                    ~KeyMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CMK的全局唯一标识
                     * @return KeyId CMK的全局唯一标识
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置CMK的全局唯一标识
                     * @param _keyId CMK的全局唯一标识
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取作为密钥更容易辨识，更容易被人看懂的别名
                     * @return Alias 作为密钥更容易辨识，更容易被人看懂的别名
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置作为密钥更容易辨识，更容易被人看懂的别名
                     * @param _alias 作为密钥更容易辨识，更容易被人看懂的别名
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取密钥创建时间
                     * @return CreateTime 密钥创建时间
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置密钥创建时间
                     * @param _createTime 密钥创建时间
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
                     * 获取CMK的描述
                     * @return Description CMK的描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置CMK的描述
                     * @param _description CMK的描述
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
                     * 获取CMK的状态， 取值为：Enabled | Disabled | PendingDelete | PendingImport | Archived
                     * @return KeyState CMK的状态， 取值为：Enabled | Disabled | PendingDelete | PendingImport | Archived
                     * 
                     */
                    std::string GetKeyState() const;

                    /**
                     * 设置CMK的状态， 取值为：Enabled | Disabled | PendingDelete | PendingImport | Archived
                     * @param _keyState CMK的状态， 取值为：Enabled | Disabled | PendingDelete | PendingImport | Archived
                     * 
                     */
                    void SetKeyState(const std::string& _keyState);

                    /**
                     * 判断参数 KeyState 是否已赋值
                     * @return KeyState 是否已赋值
                     * 
                     */
                    bool KeyStateHasBeenSet() const;

                    /**
                     * 获取CMK用途，取值为: ENCRYPT_DECRYPT | ASYMMETRIC_DECRYPT_RSA_2048 | ASYMMETRIC_DECRYPT_SM2 | ASYMMETRIC_SIGN_VERIFY_SM2 | ASYMMETRIC_SIGN_VERIFY_RSA_2048 | ASYMMETRIC_SIGN_VERIFY_ECC
                     * @return KeyUsage CMK用途，取值为: ENCRYPT_DECRYPT | ASYMMETRIC_DECRYPT_RSA_2048 | ASYMMETRIC_DECRYPT_SM2 | ASYMMETRIC_SIGN_VERIFY_SM2 | ASYMMETRIC_SIGN_VERIFY_RSA_2048 | ASYMMETRIC_SIGN_VERIFY_ECC
                     * 
                     */
                    std::string GetKeyUsage() const;

                    /**
                     * 设置CMK用途，取值为: ENCRYPT_DECRYPT | ASYMMETRIC_DECRYPT_RSA_2048 | ASYMMETRIC_DECRYPT_SM2 | ASYMMETRIC_SIGN_VERIFY_SM2 | ASYMMETRIC_SIGN_VERIFY_RSA_2048 | ASYMMETRIC_SIGN_VERIFY_ECC
                     * @param _keyUsage CMK用途，取值为: ENCRYPT_DECRYPT | ASYMMETRIC_DECRYPT_RSA_2048 | ASYMMETRIC_DECRYPT_SM2 | ASYMMETRIC_SIGN_VERIFY_SM2 | ASYMMETRIC_SIGN_VERIFY_RSA_2048 | ASYMMETRIC_SIGN_VERIFY_ECC
                     * 
                     */
                    void SetKeyUsage(const std::string& _keyUsage);

                    /**
                     * 判断参数 KeyUsage 是否已赋值
                     * @return KeyUsage 是否已赋值
                     * 
                     */
                    bool KeyUsageHasBeenSet() const;

                    /**
                     * 获取CMK类型，2 表示符合FIPS标准，4表示符合国密标准
                     * @return Type CMK类型，2 表示符合FIPS标准，4表示符合国密标准
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置CMK类型，2 表示符合FIPS标准，4表示符合国密标准
                     * @param _type CMK类型，2 表示符合FIPS标准，4表示符合国密标准
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取创建者
                     * @return CreatorUin 创建者
                     * 
                     */
                    uint64_t GetCreatorUin() const;

                    /**
                     * 设置创建者
                     * @param _creatorUin 创建者
                     * 
                     */
                    void SetCreatorUin(const uint64_t& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取是否开启了密钥轮换功能
                     * @return KeyRotationEnabled 是否开启了密钥轮换功能
                     * 
                     */
                    bool GetKeyRotationEnabled() const;

                    /**
                     * 设置是否开启了密钥轮换功能
                     * @param _keyRotationEnabled 是否开启了密钥轮换功能
                     * 
                     */
                    void SetKeyRotationEnabled(const bool& _keyRotationEnabled);

                    /**
                     * 判断参数 KeyRotationEnabled 是否已赋值
                     * @return KeyRotationEnabled 是否已赋值
                     * 
                     */
                    bool KeyRotationEnabledHasBeenSet() const;

                    /**
                     * 获取CMK的创建者，用户创建的为 user，授权各云产品自动创建的为对应的产品名
                     * @return Owner CMK的创建者，用户创建的为 user，授权各云产品自动创建的为对应的产品名
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置CMK的创建者，用户创建的为 user，授权各云产品自动创建的为对应的产品名
                     * @param _owner CMK的创建者，用户创建的为 user，授权各云产品自动创建的为对应的产品名
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取在密钥轮换开启状态下，下次轮换的时间
                     * @return NextRotateTime 在密钥轮换开启状态下，下次轮换的时间
                     * 
                     */
                    uint64_t GetNextRotateTime() const;

                    /**
                     * 设置在密钥轮换开启状态下，下次轮换的时间
                     * @param _nextRotateTime 在密钥轮换开启状态下，下次轮换的时间
                     * 
                     */
                    void SetNextRotateTime(const uint64_t& _nextRotateTime);

                    /**
                     * 判断参数 NextRotateTime 是否已赋值
                     * @return NextRotateTime 是否已赋值
                     * 
                     */
                    bool NextRotateTimeHasBeenSet() const;

                    /**
                     * 获取计划删除的时间
                     * @return DeletionDate 计划删除的时间
                     * 
                     */
                    uint64_t GetDeletionDate() const;

                    /**
                     * 设置计划删除的时间
                     * @param _deletionDate 计划删除的时间
                     * 
                     */
                    void SetDeletionDate(const uint64_t& _deletionDate);

                    /**
                     * 判断参数 DeletionDate 是否已赋值
                     * @return DeletionDate 是否已赋值
                     * 
                     */
                    bool DeletionDateHasBeenSet() const;

                    /**
                     * 获取CMK 密钥材料类型，由KMS创建的为： TENCENT_KMS， 由用户导入的类型为：EXTERNAL
                     * @return Origin CMK 密钥材料类型，由KMS创建的为： TENCENT_KMS， 由用户导入的类型为：EXTERNAL
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置CMK 密钥材料类型，由KMS创建的为： TENCENT_KMS， 由用户导入的类型为：EXTERNAL
                     * @param _origin CMK 密钥材料类型，由KMS创建的为： TENCENT_KMS， 由用户导入的类型为：EXTERNAL
                     * 
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取在Origin为  EXTERNAL 时有效，表示密钥材料的有效日期， 0 表示不过期
                     * @return ValidTo 在Origin为  EXTERNAL 时有效，表示密钥材料的有效日期， 0 表示不过期
                     * 
                     */
                    uint64_t GetValidTo() const;

                    /**
                     * 设置在Origin为  EXTERNAL 时有效，表示密钥材料的有效日期， 0 表示不过期
                     * @param _validTo 在Origin为  EXTERNAL 时有效，表示密钥材料的有效日期， 0 表示不过期
                     * 
                     */
                    void SetValidTo(const uint64_t& _validTo);

                    /**
                     * 判断参数 ValidTo 是否已赋值
                     * @return ValidTo 是否已赋值
                     * 
                     */
                    bool ValidToHasBeenSet() const;

                    /**
                     * 获取资源ID，格式：creatorUin/$creatorUin/$keyId
                     * @return ResourceId 资源ID，格式：creatorUin/$creatorUin/$keyId
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID，格式：creatorUin/$creatorUin/$keyId
                     * @param _resourceId 资源ID，格式：creatorUin/$creatorUin/$keyId
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）
                     * @return HsmClusterId HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）
                     * 
                     */
                    std::string GetHsmClusterId() const;

                    /**
                     * 设置HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）
                     * @param _hsmClusterId HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）
                     * 
                     */
                    void SetHsmClusterId(const std::string& _hsmClusterId);

                    /**
                     * 判断参数 HsmClusterId 是否已赋值
                     * @return HsmClusterId 是否已赋值
                     * 
                     */
                    bool HsmClusterIdHasBeenSet() const;

                    /**
                     * 获取密钥轮转周期（天）
                     * @return RotateDays 密钥轮转周期（天）
                     * 
                     */
                    uint64_t GetRotateDays() const;

                    /**
                     * 设置密钥轮转周期（天）
                     * @param _rotateDays 密钥轮转周期（天）
                     * 
                     */
                    void SetRotateDays(const uint64_t& _rotateDays);

                    /**
                     * 判断参数 RotateDays 是否已赋值
                     * @return RotateDays 是否已赋值
                     * 
                     */
                    bool RotateDaysHasBeenSet() const;

                    /**
                     * 获取上次乱转时间（Unix timestamp）
                     * @return LastRotateTime 上次乱转时间（Unix timestamp）
                     * 
                     */
                    uint64_t GetLastRotateTime() const;

                    /**
                     * 设置上次乱转时间（Unix timestamp）
                     * @param _lastRotateTime 上次乱转时间（Unix timestamp）
                     * 
                     */
                    void SetLastRotateTime(const uint64_t& _lastRotateTime);

                    /**
                     * 判断参数 LastRotateTime 是否已赋值
                     * @return LastRotateTime 是否已赋值
                     * 
                     */
                    bool LastRotateTimeHasBeenSet() const;

                private:

                    /**
                     * CMK的全局唯一标识
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 作为密钥更容易辨识，更容易被人看懂的别名
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 密钥创建时间
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * CMK的描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * CMK的状态， 取值为：Enabled | Disabled | PendingDelete | PendingImport | Archived
                     */
                    std::string m_keyState;
                    bool m_keyStateHasBeenSet;

                    /**
                     * CMK用途，取值为: ENCRYPT_DECRYPT | ASYMMETRIC_DECRYPT_RSA_2048 | ASYMMETRIC_DECRYPT_SM2 | ASYMMETRIC_SIGN_VERIFY_SM2 | ASYMMETRIC_SIGN_VERIFY_RSA_2048 | ASYMMETRIC_SIGN_VERIFY_ECC
                     */
                    std::string m_keyUsage;
                    bool m_keyUsageHasBeenSet;

                    /**
                     * CMK类型，2 表示符合FIPS标准，4表示符合国密标准
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 创建者
                     */
                    uint64_t m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * 是否开启了密钥轮换功能
                     */
                    bool m_keyRotationEnabled;
                    bool m_keyRotationEnabledHasBeenSet;

                    /**
                     * CMK的创建者，用户创建的为 user，授权各云产品自动创建的为对应的产品名
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 在密钥轮换开启状态下，下次轮换的时间
                     */
                    uint64_t m_nextRotateTime;
                    bool m_nextRotateTimeHasBeenSet;

                    /**
                     * 计划删除的时间
                     */
                    uint64_t m_deletionDate;
                    bool m_deletionDateHasBeenSet;

                    /**
                     * CMK 密钥材料类型，由KMS创建的为： TENCENT_KMS， 由用户导入的类型为：EXTERNAL
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 在Origin为  EXTERNAL 时有效，表示密钥材料的有效日期， 0 表示不过期
                     */
                    uint64_t m_validTo;
                    bool m_validToHasBeenSet;

                    /**
                     * 资源ID，格式：creatorUin/$creatorUin/$keyId
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                    /**
                     * 密钥轮转周期（天）
                     */
                    uint64_t m_rotateDays;
                    bool m_rotateDaysHasBeenSet;

                    /**
                     * 上次乱转时间（Unix timestamp）
                     */
                    uint64_t m_lastRotateTime;
                    bool m_lastRotateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_KEYMETADATA_H_
