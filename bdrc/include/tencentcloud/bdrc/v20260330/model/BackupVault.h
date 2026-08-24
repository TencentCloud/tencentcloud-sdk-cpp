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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPVAULT_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPVAULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/TypeCount.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 备份库信息
                */
                class BackupVault : public AbstractModel
                {
                public:
                    BackupVault();
                    ~BackupVault() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份库ID
                     * @return VaultId 备份库ID
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置备份库ID
                     * @param _vaultId 备份库ID
                     * 
                     */
                    void SetVaultId(const std::string& _vaultId);

                    /**
                     * 判断参数 VaultId 是否已赋值
                     * @return VaultId 是否已赋值
                     * 
                     */
                    bool VaultIdHasBeenSet() const;

                    /**
                     * 获取备份库名称
                     * @return VaultName 备份库名称
                     * 
                     */
                    std::string GetVaultName() const;

                    /**
                     * 设置备份库名称
                     * @param _vaultName 备份库名称
                     * 
                     */
                    void SetVaultName(const std::string& _vaultName);

                    /**
                     * 判断参数 VaultName 是否已赋值
                     * @return VaultName 是否已赋值
                     * 
                     */
                    bool VaultNameHasBeenSet() const;

                    /**
                     * 获取备份库描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 备份库描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备份库描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 备份库描述
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取备份库状态：READ_WRITE / READ_ONLY / UNAVAILABLE / DELETING
                     * @return Status 备份库状态：READ_WRITE / READ_ONLY / UNAVAILABLE / DELETING
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置备份库状态：READ_WRITE / READ_ONLY / UNAVAILABLE / DELETING
                     * @param _status 备份库状态：READ_WRITE / READ_ONLY / UNAVAILABLE / DELETING
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
                     * 获取加密方式：NONE / SSE-COS / SSE-KMS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EncryptType 加密方式：NONE / SSE-COS / SSE-KMS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEncryptType() const;

                    /**
                     * 设置加密方式：NONE / SSE-COS / SSE-KMS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _encryptType 加密方式：NONE / SSE-COS / SSE-KMS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEncryptType(const std::string& _encryptType);

                    /**
                     * 判断参数 EncryptType 是否已赋值
                     * @return EncryptType 是否已赋值
                     * 
                     */
                    bool EncryptTypeHasBeenSet() const;

                    /**
                     * 获取KMS密钥ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KmsKeyId KMS密钥ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置KMS密钥ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kmsKeyId KMS密钥ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取备份库类型：COMMON
                     * @return VaultType 备份库类型：COMMON
                     * 
                     */
                    std::string GetVaultType() const;

                    /**
                     * 设置备份库类型：COMMON
                     * @param _vaultType 备份库类型：COMMON
                     * 
                     */
                    void SetVaultType(const std::string& _vaultType);

                    /**
                     * 判断参数 VaultType 是否已赋值
                     * @return VaultType 是否已赋值
                     * 
                     */
                    bool VaultTypeHasBeenSet() const;

                    /**
                     * 获取关联的备份策略按类型统计
                     * @return BackupPolicySet 关联的备份策略按类型统计
                     * 
                     */
                    std::vector<TypeCount> GetBackupPolicySet() const;

                    /**
                     * 设置关联的备份策略按类型统计
                     * @param _backupPolicySet 关联的备份策略按类型统计
                     * 
                     */
                    void SetBackupPolicySet(const std::vector<TypeCount>& _backupPolicySet);

                    /**
                     * 判断参数 BackupPolicySet 是否已赋值
                     * @return BackupPolicySet 是否已赋值
                     * 
                     */
                    bool BackupPolicySetHasBeenSet() const;

                    /**
                     * 获取备份点按类型统计（不含已删除）
                     * @return BackupSet 备份点按类型统计（不含已删除）
                     * 
                     */
                    std::vector<TypeCount> GetBackupSet() const;

                    /**
                     * 设置备份点按类型统计（不含已删除）
                     * @param _backupSet 备份点按类型统计（不含已删除）
                     * 
                     */
                    void SetBackupSet(const std::vector<TypeCount>& _backupSet);

                    /**
                     * 判断参数 BackupSet 是否已赋值
                     * @return BackupSet 是否已赋值
                     * 
                     */
                    bool BackupSetHasBeenSet() const;

                    /**
                     * 获取地域信息
                     * @return Region 地域信息
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域信息
                     * @param _region 地域信息
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取源端数据量
                     * @return SourceDataSize 源端数据量
                     * 
                     */
                    uint64_t GetSourceDataSize() const;

                    /**
                     * 设置源端数据量
                     * @param _sourceDataSize 源端数据量
                     * 
                     */
                    void SetSourceDataSize(const uint64_t& _sourceDataSize);

                    /**
                     * 判断参数 SourceDataSize 是否已赋值
                     * @return SourceDataSize 是否已赋值
                     * 
                     */
                    bool SourceDataSizeHasBeenSet() const;

                    /**
                     * 获取存储库数据量
                     * @return VaultDataSize 存储库数据量
                     * 
                     */
                    uint64_t GetVaultDataSize() const;

                    /**
                     * 设置存储库数据量
                     * @param _vaultDataSize 存储库数据量
                     * 
                     */
                    void SetVaultDataSize(const uint64_t& _vaultDataSize);

                    /**
                     * 判断参数 VaultDataSize 是否已赋值
                     * @return VaultDataSize 是否已赋值
                     * 
                     */
                    bool VaultDataSizeHasBeenSet() const;

                private:

                    /**
                     * 备份库ID
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * 备份库名称
                     */
                    std::string m_vaultName;
                    bool m_vaultNameHasBeenSet;

                    /**
                     * 备份库描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 备份库状态：READ_WRITE / READ_ONLY / UNAVAILABLE / DELETING
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 加密方式：NONE / SSE-COS / SSE-KMS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_encryptType;
                    bool m_encryptTypeHasBeenSet;

                    /**
                     * KMS密钥ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * 备份库类型：COMMON
                     */
                    std::string m_vaultType;
                    bool m_vaultTypeHasBeenSet;

                    /**
                     * 关联的备份策略按类型统计
                     */
                    std::vector<TypeCount> m_backupPolicySet;
                    bool m_backupPolicySetHasBeenSet;

                    /**
                     * 备份点按类型统计（不含已删除）
                     */
                    std::vector<TypeCount> m_backupSet;
                    bool m_backupSetHasBeenSet;

                    /**
                     * 地域信息
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 源端数据量
                     */
                    uint64_t m_sourceDataSize;
                    bool m_sourceDataSizeHasBeenSet;

                    /**
                     * 存储库数据量
                     */
                    uint64_t m_vaultDataSize;
                    bool m_vaultDataSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPVAULT_H_
