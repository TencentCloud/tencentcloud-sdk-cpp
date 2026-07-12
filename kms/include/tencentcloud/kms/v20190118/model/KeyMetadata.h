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
                     * 获取<p>CMK的全局唯一标识</p>
                     * @return KeyId <p>CMK的全局唯一标识</p>
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置<p>CMK的全局唯一标识</p>
                     * @param _keyId <p>CMK的全局唯一标识</p>
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
                     * 获取<p>作为密钥更容易辨识，更容易被人看懂的别名</p>
                     * @return Alias <p>作为密钥更容易辨识，更容易被人看懂的别名</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>作为密钥更容易辨识，更容易被人看懂的别名</p>
                     * @param _alias <p>作为密钥更容易辨识，更容易被人看懂的别名</p>
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
                     * 获取<p>密钥创建时间</p>
                     * @return CreateTime <p>密钥创建时间</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>密钥创建时间</p>
                     * @param _createTime <p>密钥创建时间</p>
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
                     * 获取<p>CMK的描述</p>
                     * @return Description <p>CMK的描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>CMK的描述</p>
                     * @param _description <p>CMK的描述</p>
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
                     * 获取<p>CMK的状态， 取值为：Enabled | Disabled | PendingDelete | PendingImport | Archived</p>
                     * @return KeyState <p>CMK的状态， 取值为：Enabled | Disabled | PendingDelete | PendingImport | Archived</p>
                     * 
                     */
                    std::string GetKeyState() const;

                    /**
                     * 设置<p>CMK的状态， 取值为：Enabled | Disabled | PendingDelete | PendingImport | Archived</p>
                     * @param _keyState <p>CMK的状态， 取值为：Enabled | Disabled | PendingDelete | PendingImport | Archived</p>
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
                     * 获取<p>CMK用途，取值为: ENCRYPT_DECRYPT | ASYMMETRIC_DECRYPT_RSA_2048 | ASYMMETRIC_DECRYPT_SM2 | ASYMMETRIC_SIGN_VERIFY_SM2 | ASYMMETRIC_SIGN_VERIFY_RSA_2048 | ASYMMETRIC_SIGN_VERIFY_ECC</p>
                     * @return KeyUsage <p>CMK用途，取值为: ENCRYPT_DECRYPT | ASYMMETRIC_DECRYPT_RSA_2048 | ASYMMETRIC_DECRYPT_SM2 | ASYMMETRIC_SIGN_VERIFY_SM2 | ASYMMETRIC_SIGN_VERIFY_RSA_2048 | ASYMMETRIC_SIGN_VERIFY_ECC</p>
                     * 
                     */
                    std::string GetKeyUsage() const;

                    /**
                     * 设置<p>CMK用途，取值为: ENCRYPT_DECRYPT | ASYMMETRIC_DECRYPT_RSA_2048 | ASYMMETRIC_DECRYPT_SM2 | ASYMMETRIC_SIGN_VERIFY_SM2 | ASYMMETRIC_SIGN_VERIFY_RSA_2048 | ASYMMETRIC_SIGN_VERIFY_ECC</p>
                     * @param _keyUsage <p>CMK用途，取值为: ENCRYPT_DECRYPT | ASYMMETRIC_DECRYPT_RSA_2048 | ASYMMETRIC_DECRYPT_SM2 | ASYMMETRIC_SIGN_VERIFY_SM2 | ASYMMETRIC_SIGN_VERIFY_RSA_2048 | ASYMMETRIC_SIGN_VERIFY_ECC</p>
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
                     * 获取<p>CMK类型，2 表示符合FIPS 140-2标准，4表示符合国密标准</p><p>枚举值：</p><ul><li>2： 表示符合FIPS 140-2标准</li><li>4： 表示符合国密标准</li></ul>
                     * @return Type <p>CMK类型，2 表示符合FIPS 140-2标准，4表示符合国密标准</p><p>枚举值：</p><ul><li>2： 表示符合FIPS 140-2标准</li><li>4： 表示符合国密标准</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>CMK类型，2 表示符合FIPS 140-2标准，4表示符合国密标准</p><p>枚举值：</p><ul><li>2： 表示符合FIPS 140-2标准</li><li>4： 表示符合国密标准</li></ul>
                     * @param _type <p>CMK类型，2 表示符合FIPS 140-2标准，4表示符合国密标准</p><p>枚举值：</p><ul><li>2： 表示符合FIPS 140-2标准</li><li>4： 表示符合国密标准</li></ul>
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
                     * 获取<p>创建者</p>
                     * @return CreatorUin <p>创建者</p>
                     * 
                     */
                    uint64_t GetCreatorUin() const;

                    /**
                     * 设置<p>创建者</p>
                     * @param _creatorUin <p>创建者</p>
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
                     * 获取<p>是否开启了密钥轮换功能</p>
                     * @return KeyRotationEnabled <p>是否开启了密钥轮换功能</p>
                     * 
                     */
                    bool GetKeyRotationEnabled() const;

                    /**
                     * 设置<p>是否开启了密钥轮换功能</p>
                     * @param _keyRotationEnabled <p>是否开启了密钥轮换功能</p>
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
                     * 获取<p>CMK的创建者，用户创建的为 user，授权各云产品自动创建的为对应的产品名</p>
                     * @return Owner <p>CMK的创建者，用户创建的为 user，授权各云产品自动创建的为对应的产品名</p>
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置<p>CMK的创建者，用户创建的为 user，授权各云产品自动创建的为对应的产品名</p>
                     * @param _owner <p>CMK的创建者，用户创建的为 user，授权各云产品自动创建的为对应的产品名</p>
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
                     * 获取<p>在密钥轮换开启状态下，下次轮换的时间</p>
                     * @return NextRotateTime <p>在密钥轮换开启状态下，下次轮换的时间</p>
                     * 
                     */
                    uint64_t GetNextRotateTime() const;

                    /**
                     * 设置<p>在密钥轮换开启状态下，下次轮换的时间</p>
                     * @param _nextRotateTime <p>在密钥轮换开启状态下，下次轮换的时间</p>
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
                     * 获取<p>计划删除的时间</p>
                     * @return DeletionDate <p>计划删除的时间</p>
                     * 
                     */
                    uint64_t GetDeletionDate() const;

                    /**
                     * 设置<p>计划删除的时间</p>
                     * @param _deletionDate <p>计划删除的时间</p>
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
                     * 获取<p>CMK 密钥材料类型，由KMS创建的为： TENCENT_KMS， 由用户导入的类型为：EXTERNAL</p>
                     * @return Origin <p>CMK 密钥材料类型，由KMS创建的为： TENCENT_KMS， 由用户导入的类型为：EXTERNAL</p>
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置<p>CMK 密钥材料类型，由KMS创建的为： TENCENT_KMS， 由用户导入的类型为：EXTERNAL</p>
                     * @param _origin <p>CMK 密钥材料类型，由KMS创建的为： TENCENT_KMS， 由用户导入的类型为：EXTERNAL</p>
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
                     * 获取<p>在Origin为  EXTERNAL 时有效，表示密钥材料的有效日期， 0 表示不过期</p>
                     * @return ValidTo <p>在Origin为  EXTERNAL 时有效，表示密钥材料的有效日期， 0 表示不过期</p>
                     * 
                     */
                    uint64_t GetValidTo() const;

                    /**
                     * 设置<p>在Origin为  EXTERNAL 时有效，表示密钥材料的有效日期， 0 表示不过期</p>
                     * @param _validTo <p>在Origin为  EXTERNAL 时有效，表示密钥材料的有效日期， 0 表示不过期</p>
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
                     * 获取<p>资源ID，格式：creatorUin/$creatorUin/$keyId</p>
                     * @return ResourceId <p>资源ID，格式：creatorUin/$creatorUin/$keyId</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源ID，格式：creatorUin/$creatorUin/$keyId</p>
                     * @param _resourceId <p>资源ID，格式：creatorUin/$creatorUin/$keyId</p>
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
                     * 获取<p>HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）</p>
                     * @return HsmClusterId <p>HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）</p>
                     * 
                     */
                    std::string GetHsmClusterId() const;

                    /**
                     * 设置<p>HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）</p>
                     * @param _hsmClusterId <p>HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）</p>
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
                     * 获取<p>密钥轮转周期（天）</p>
                     * @return RotateDays <p>密钥轮转周期（天）</p>
                     * 
                     */
                    uint64_t GetRotateDays() const;

                    /**
                     * 设置<p>密钥轮转周期（天）</p>
                     * @param _rotateDays <p>密钥轮转周期（天）</p>
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
                     * 获取<p>上次轮转时间（Unix timestamp）</p>
                     * @return LastRotateTime <p>上次轮转时间（Unix timestamp）</p>
                     * 
                     */
                    uint64_t GetLastRotateTime() const;

                    /**
                     * 设置<p>上次轮转时间（Unix timestamp）</p>
                     * @param _lastRotateTime <p>上次轮转时间（Unix timestamp）</p>
                     * 
                     */
                    void SetLastRotateTime(const uint64_t& _lastRotateTime);

                    /**
                     * 判断参数 LastRotateTime 是否已赋值
                     * @return LastRotateTime 是否已赋值
                     * 
                     */
                    bool LastRotateTimeHasBeenSet() const;

                    /**
                     * 获取<p>密钥是否是主副本。0:主本，1:同步副本。</p>
                     * @return IsSyncReplica <p>密钥是否是主副本。0:主本，1:同步副本。</p>
                     * 
                     */
                    int64_t GetIsSyncReplica() const;

                    /**
                     * 设置<p>密钥是否是主副本。0:主本，1:同步副本。</p>
                     * @param _isSyncReplica <p>密钥是否是主副本。0:主本，1:同步副本。</p>
                     * 
                     */
                    void SetIsSyncReplica(const int64_t& _isSyncReplica);

                    /**
                     * 判断参数 IsSyncReplica 是否已赋值
                     * @return IsSyncReplica 是否已赋值
                     * 
                     */
                    bool IsSyncReplicaHasBeenSet() const;

                    /**
                     * 获取<p>同步的原始地域</p>
                     * @return SourceRegion <p>同步的原始地域</p>
                     * 
                     */
                    std::string GetSourceRegion() const;

                    /**
                     * 设置<p>同步的原始地域</p>
                     * @param _sourceRegion <p>同步的原始地域</p>
                     * 
                     */
                    void SetSourceRegion(const std::string& _sourceRegion);

                    /**
                     * 判断参数 SourceRegion 是否已赋值
                     * @return SourceRegion 是否已赋值
                     * 
                     */
                    bool SourceRegionHasBeenSet() const;

                    /**
                     * 获取<p>密钥同步的状态，0:未同步,1:同步成功,2:同步失败,3:同步中。</p>
                     * @return SyncStatus <p>密钥同步的状态，0:未同步,1:同步成功,2:同步失败,3:同步中。</p>
                     * 
                     */
                    int64_t GetSyncStatus() const;

                    /**
                     * 设置<p>密钥同步的状态，0:未同步,1:同步成功,2:同步失败,3:同步中。</p>
                     * @param _syncStatus <p>密钥同步的状态，0:未同步,1:同步成功,2:同步失败,3:同步中。</p>
                     * 
                     */
                    void SetSyncStatus(const int64_t& _syncStatus);

                    /**
                     * 判断参数 SyncStatus 是否已赋值
                     * @return SyncStatus 是否已赋值
                     * 
                     */
                    bool SyncStatusHasBeenSet() const;

                    /**
                     * 获取<p>同步的结果描述</p>
                     * @return SyncMessages <p>同步的结果描述</p>
                     * 
                     */
                    std::string GetSyncMessages() const;

                    /**
                     * 设置<p>同步的结果描述</p>
                     * @param _syncMessages <p>同步的结果描述</p>
                     * 
                     */
                    void SetSyncMessages(const std::string& _syncMessages);

                    /**
                     * 判断参数 SyncMessages 是否已赋值
                     * @return SyncMessages 是否已赋值
                     * 
                     */
                    bool SyncMessagesHasBeenSet() const;

                    /**
                     * 获取<p>同步的开始时间</p>
                     * @return SyncStartTime <p>同步的开始时间</p>
                     * 
                     */
                    uint64_t GetSyncStartTime() const;

                    /**
                     * 设置<p>同步的开始时间</p>
                     * @param _syncStartTime <p>同步的开始时间</p>
                     * 
                     */
                    void SetSyncStartTime(const uint64_t& _syncStartTime);

                    /**
                     * 判断参数 SyncStartTime 是否已赋值
                     * @return SyncStartTime 是否已赋值
                     * 
                     */
                    bool SyncStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>同步的结束时间</p>
                     * @return SyncEndTime <p>同步的结束时间</p>
                     * 
                     */
                    uint64_t GetSyncEndTime() const;

                    /**
                     * 设置<p>同步的结束时间</p>
                     * @param _syncEndTime <p>同步的结束时间</p>
                     * 
                     */
                    void SetSyncEndTime(const uint64_t& _syncEndTime);

                    /**
                     * 判断参数 SyncEndTime 是否已赋值
                     * @return SyncEndTime 是否已赋值
                     * 
                     */
                    bool SyncEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>同步的原始集群，如果为空，是公有云公共集群</p>
                     * @return SourceHsmClusterId <p>同步的原始集群，如果为空，是公有云公共集群</p>
                     * 
                     */
                    std::string GetSourceHsmClusterId() const;

                    /**
                     * 设置<p>同步的原始集群，如果为空，是公有云公共集群</p>
                     * @param _sourceHsmClusterId <p>同步的原始集群，如果为空，是公有云公共集群</p>
                     * 
                     */
                    void SetSourceHsmClusterId(const std::string& _sourceHsmClusterId);

                    /**
                     * 判断参数 SourceHsmClusterId 是否已赋值
                     * @return SourceHsmClusterId 是否已赋值
                     * 
                     */
                    bool SourceHsmClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>成员账号appId</p>
                     * @return AccountAppId <p>成员账号appId</p>
                     * 
                     */
                    uint64_t GetAccountAppId() const;

                    /**
                     * 设置<p>成员账号appId</p>
                     * @param _accountAppId <p>成员账号appId</p>
                     * 
                     */
                    void SetAccountAppId(const uint64_t& _accountAppId);

                    /**
                     * 判断参数 AccountAppId 是否已赋值
                     * @return AccountAppId 是否已赋值
                     * 
                     */
                    bool AccountAppIdHasBeenSet() const;

                    /**
                     * 获取<p>成员账号uin</p>
                     * @return AccountUin <p>成员账号uin</p>
                     * 
                     */
                    uint64_t GetAccountUin() const;

                    /**
                     * 设置<p>成员账号uin</p>
                     * @param _accountUin <p>成员账号uin</p>
                     * 
                     */
                    void SetAccountUin(const uint64_t& _accountUin);

                    /**
                     * 判断参数 AccountUin 是否已赋值
                     * @return AccountUin 是否已赋值
                     * 
                     */
                    bool AccountUinHasBeenSet() const;

                    /**
                     * 获取<p>成员账号名称</p>
                     * @return AccountName <p>成员账号名称</p>
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>成员账号名称</p>
                     * @param _accountName <p>成员账号名称</p>
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                private:

                    /**
                     * <p>CMK的全局唯一标识</p>
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * <p>作为密钥更容易辨识，更容易被人看懂的别名</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>密钥创建时间</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>CMK的描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>CMK的状态， 取值为：Enabled | Disabled | PendingDelete | PendingImport | Archived</p>
                     */
                    std::string m_keyState;
                    bool m_keyStateHasBeenSet;

                    /**
                     * <p>CMK用途，取值为: ENCRYPT_DECRYPT | ASYMMETRIC_DECRYPT_RSA_2048 | ASYMMETRIC_DECRYPT_SM2 | ASYMMETRIC_SIGN_VERIFY_SM2 | ASYMMETRIC_SIGN_VERIFY_RSA_2048 | ASYMMETRIC_SIGN_VERIFY_ECC</p>
                     */
                    std::string m_keyUsage;
                    bool m_keyUsageHasBeenSet;

                    /**
                     * <p>CMK类型，2 表示符合FIPS 140-2标准，4表示符合国密标准</p><p>枚举值：</p><ul><li>2： 表示符合FIPS 140-2标准</li><li>4： 表示符合国密标准</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>创建者</p>
                     */
                    uint64_t m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * <p>是否开启了密钥轮换功能</p>
                     */
                    bool m_keyRotationEnabled;
                    bool m_keyRotationEnabledHasBeenSet;

                    /**
                     * <p>CMK的创建者，用户创建的为 user，授权各云产品自动创建的为对应的产品名</p>
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * <p>在密钥轮换开启状态下，下次轮换的时间</p>
                     */
                    uint64_t m_nextRotateTime;
                    bool m_nextRotateTimeHasBeenSet;

                    /**
                     * <p>计划删除的时间</p>
                     */
                    uint64_t m_deletionDate;
                    bool m_deletionDateHasBeenSet;

                    /**
                     * <p>CMK 密钥材料类型，由KMS创建的为： TENCENT_KMS， 由用户导入的类型为：EXTERNAL</p>
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * <p>在Origin为  EXTERNAL 时有效，表示密钥材料的有效日期， 0 表示不过期</p>
                     */
                    uint64_t m_validTo;
                    bool m_validToHasBeenSet;

                    /**
                     * <p>资源ID，格式：creatorUin/$creatorUin/$keyId</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）</p>
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                    /**
                     * <p>密钥轮转周期（天）</p>
                     */
                    uint64_t m_rotateDays;
                    bool m_rotateDaysHasBeenSet;

                    /**
                     * <p>上次轮转时间（Unix timestamp）</p>
                     */
                    uint64_t m_lastRotateTime;
                    bool m_lastRotateTimeHasBeenSet;

                    /**
                     * <p>密钥是否是主副本。0:主本，1:同步副本。</p>
                     */
                    int64_t m_isSyncReplica;
                    bool m_isSyncReplicaHasBeenSet;

                    /**
                     * <p>同步的原始地域</p>
                     */
                    std::string m_sourceRegion;
                    bool m_sourceRegionHasBeenSet;

                    /**
                     * <p>密钥同步的状态，0:未同步,1:同步成功,2:同步失败,3:同步中。</p>
                     */
                    int64_t m_syncStatus;
                    bool m_syncStatusHasBeenSet;

                    /**
                     * <p>同步的结果描述</p>
                     */
                    std::string m_syncMessages;
                    bool m_syncMessagesHasBeenSet;

                    /**
                     * <p>同步的开始时间</p>
                     */
                    uint64_t m_syncStartTime;
                    bool m_syncStartTimeHasBeenSet;

                    /**
                     * <p>同步的结束时间</p>
                     */
                    uint64_t m_syncEndTime;
                    bool m_syncEndTimeHasBeenSet;

                    /**
                     * <p>同步的原始集群，如果为空，是公有云公共集群</p>
                     */
                    std::string m_sourceHsmClusterId;
                    bool m_sourceHsmClusterIdHasBeenSet;

                    /**
                     * <p>成员账号appId</p>
                     */
                    uint64_t m_accountAppId;
                    bool m_accountAppIdHasBeenSet;

                    /**
                     * <p>成员账号uin</p>
                     */
                    uint64_t m_accountUin;
                    bool m_accountUinHasBeenSet;

                    /**
                     * <p>成员账号名称</p>
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_KEYMETADATA_H_
