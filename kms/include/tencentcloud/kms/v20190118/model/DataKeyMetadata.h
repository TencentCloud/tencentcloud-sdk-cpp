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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_DATAKEYMETADATA_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_DATAKEYMETADATA_H_

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
                * 数据密钥属性信息
                */
                class DataKeyMetadata : public AbstractModel
                {
                public:
                    DataKeyMetadata();
                    ~DataKeyMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DataKey的全局唯一标识
                     * @return DataKeyId DataKey的全局唯一标识
                     * 
                     */
                    std::string GetDataKeyId() const;

                    /**
                     * 设置DataKey的全局唯一标识
                     * @param _dataKeyId DataKey的全局唯一标识
                     * 
                     */
                    void SetDataKeyId(const std::string& _dataKeyId);

                    /**
                     * 判断参数 DataKeyId 是否已赋值
                     * @return DataKeyId 是否已赋值
                     * 
                     */
                    bool DataKeyIdHasBeenSet() const;

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
                     * 获取作为密钥更容易辨识，更容易被人看懂的数据密钥名称
                     * @return DataKeyName 作为密钥更容易辨识，更容易被人看懂的数据密钥名称
                     * 
                     */
                    std::string GetDataKeyName() const;

                    /**
                     * 设置作为密钥更容易辨识，更容易被人看懂的数据密钥名称
                     * @param _dataKeyName 作为密钥更容易辨识，更容易被人看懂的数据密钥名称
                     * 
                     */
                    void SetDataKeyName(const std::string& _dataKeyName);

                    /**
                     * 判断参数 DataKeyName 是否已赋值
                     * @return DataKeyName 是否已赋值
                     * 
                     */
                    bool DataKeyNameHasBeenSet() const;

                    /**
                     * 获取数据密钥的长度,单位字节
                     * @return NumberOfBytes 数据密钥的长度,单位字节
                     * 
                     */
                    uint64_t GetNumberOfBytes() const;

                    /**
                     * 设置数据密钥的长度,单位字节
                     * @param _numberOfBytes 数据密钥的长度,单位字节
                     * 
                     */
                    void SetNumberOfBytes(const uint64_t& _numberOfBytes);

                    /**
                     * 判断参数 NumberOfBytes 是否已赋值
                     * @return NumberOfBytes 是否已赋值
                     * 
                     */
                    bool NumberOfBytesHasBeenSet() const;

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
                     * 获取DataKey的描述
                     * @return Description DataKey的描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置DataKey的描述
                     * @param _description DataKey的描述
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
                     * 获取DataKey的状态， 取值为：Enabled | Disabled | PendingDelete
                     * @return KeyState DataKey的状态， 取值为：Enabled | Disabled | PendingDelete
                     * 
                     */
                    std::string GetKeyState() const;

                    /**
                     * 设置DataKey的状态， 取值为：Enabled | Disabled | PendingDelete
                     * @param _keyState DataKey的状态， 取值为：Enabled | Disabled | PendingDelete
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
                     * 获取数据密钥的创建者，用户创建的为 user，授权各云产品自动创建的为对应的产品名
                     * @return Owner 数据密钥的创建者，用户创建的为 user，授权各云产品自动创建的为对应的产品名
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置数据密钥的创建者，用户创建的为 user，授权各云产品自动创建的为对应的产品名
                     * @param _owner 数据密钥的创建者，用户创建的为 user，授权各云产品自动创建的为对应的产品名
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
                     * 获取DataKey 密钥材料类型，由KMS创建的为： TENCENT_KMS， 由用户导入的类型为：EXTERNAL
                     * @return Origin DataKey 密钥材料类型，由KMS创建的为： TENCENT_KMS， 由用户导入的类型为：EXTERNAL
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置DataKey 密钥材料类型，由KMS创建的为： TENCENT_KMS， 由用户导入的类型为：EXTERNAL
                     * @param _origin DataKey 密钥材料类型，由KMS创建的为： TENCENT_KMS， 由用户导入的类型为：EXTERNAL
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
                     * 获取资源ID，格式：creatorUin/$creatorUin/$dataKeyId
                     * @return ResourceId 资源ID，格式：creatorUin/$creatorUin/$dataKeyId
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID，格式：creatorUin/$creatorUin/$dataKeyId
                     * @param _resourceId 资源ID，格式：creatorUin/$creatorUin/$dataKeyId
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
                     * 获取密钥是否是主副本。0:主本，1:同步副本。
                     * @return IsSyncReplica 密钥是否是主副本。0:主本，1:同步副本。
                     * 
                     */
                    int64_t GetIsSyncReplica() const;

                    /**
                     * 设置密钥是否是主副本。0:主本，1:同步副本。
                     * @param _isSyncReplica 密钥是否是主副本。0:主本，1:同步副本。
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
                     * 获取同步的原始地域
                     * @return SourceRegion 同步的原始地域
                     * 
                     */
                    std::string GetSourceRegion() const;

                    /**
                     * 设置同步的原始地域
                     * @param _sourceRegion 同步的原始地域
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
                     * 获取密钥同步的状态，0:未同步，1:同步成功，2:同步失败，3:同步中。
                     * @return SyncStatus 密钥同步的状态，0:未同步，1:同步成功，2:同步失败，3:同步中。
                     * 
                     */
                    int64_t GetSyncStatus() const;

                    /**
                     * 设置密钥同步的状态，0:未同步，1:同步成功，2:同步失败，3:同步中。
                     * @param _syncStatus 密钥同步的状态，0:未同步，1:同步成功，2:同步失败，3:同步中。
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
                     * 获取同步的结果描述
                     * @return SyncMessages 同步的结果描述
                     * 
                     */
                    std::string GetSyncMessages() const;

                    /**
                     * 设置同步的结果描述
                     * @param _syncMessages 同步的结果描述
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
                     * 获取同步的开始时间
                     * @return SyncStartTime 同步的开始时间
                     * 
                     */
                    uint64_t GetSyncStartTime() const;

                    /**
                     * 设置同步的开始时间
                     * @param _syncStartTime 同步的开始时间
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
                     * 获取同步的结束时间
                     * @return SyncEndTime 同步的结束时间
                     * 
                     */
                    uint64_t GetSyncEndTime() const;

                    /**
                     * 设置同步的结束时间
                     * @param _syncEndTime 同步的结束时间
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
                     * 获取同步的原始集群，如果为空，是公有云公共集群
                     * @return SourceHsmClusterId 同步的原始集群，如果为空，是公有云公共集群
                     * 
                     */
                    std::string GetSourceHsmClusterId() const;

                    /**
                     * 设置同步的原始集群，如果为空，是公有云公共集群
                     * @param _sourceHsmClusterId 同步的原始集群，如果为空，是公有云公共集群
                     * 
                     */
                    void SetSourceHsmClusterId(const std::string& _sourceHsmClusterId);

                    /**
                     * 判断参数 SourceHsmClusterId 是否已赋值
                     * @return SourceHsmClusterId 是否已赋值
                     * 
                     */
                    bool SourceHsmClusterIdHasBeenSet() const;

                private:

                    /**
                     * DataKey的全局唯一标识
                     */
                    std::string m_dataKeyId;
                    bool m_dataKeyIdHasBeenSet;

                    /**
                     * CMK的全局唯一标识
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 作为密钥更容易辨识，更容易被人看懂的数据密钥名称
                     */
                    std::string m_dataKeyName;
                    bool m_dataKeyNameHasBeenSet;

                    /**
                     * 数据密钥的长度,单位字节
                     */
                    uint64_t m_numberOfBytes;
                    bool m_numberOfBytesHasBeenSet;

                    /**
                     * 密钥创建时间
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * DataKey的描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * DataKey的状态， 取值为：Enabled | Disabled | PendingDelete
                     */
                    std::string m_keyState;
                    bool m_keyStateHasBeenSet;

                    /**
                     * 创建者
                     */
                    uint64_t m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * 数据密钥的创建者，用户创建的为 user，授权各云产品自动创建的为对应的产品名
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 计划删除的时间
                     */
                    uint64_t m_deletionDate;
                    bool m_deletionDateHasBeenSet;

                    /**
                     * DataKey 密钥材料类型，由KMS创建的为： TENCENT_KMS， 由用户导入的类型为：EXTERNAL
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                    /**
                     * 资源ID，格式：creatorUin/$creatorUin/$dataKeyId
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 密钥是否是主副本。0:主本，1:同步副本。
                     */
                    int64_t m_isSyncReplica;
                    bool m_isSyncReplicaHasBeenSet;

                    /**
                     * 同步的原始地域
                     */
                    std::string m_sourceRegion;
                    bool m_sourceRegionHasBeenSet;

                    /**
                     * 密钥同步的状态，0:未同步，1:同步成功，2:同步失败，3:同步中。
                     */
                    int64_t m_syncStatus;
                    bool m_syncStatusHasBeenSet;

                    /**
                     * 同步的结果描述
                     */
                    std::string m_syncMessages;
                    bool m_syncMessagesHasBeenSet;

                    /**
                     * 同步的开始时间
                     */
                    uint64_t m_syncStartTime;
                    bool m_syncStartTimeHasBeenSet;

                    /**
                     * 同步的结束时间
                     */
                    uint64_t m_syncEndTime;
                    bool m_syncEndTimeHasBeenSet;

                    /**
                     * 同步的原始集群，如果为空，是公有云公共集群
                     */
                    std::string m_sourceHsmClusterId;
                    bool m_sourceHsmClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_DATAKEYMETADATA_H_
