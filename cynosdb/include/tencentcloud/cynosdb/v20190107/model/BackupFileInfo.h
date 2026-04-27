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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPFILEINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/VaultInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 备份文件信息
                */
                class BackupFileInfo : public AbstractModel
                {
                public:
                    BackupFileInfo();
                    ~BackupFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>快照文件ID，已废弃，请使用BackupId</p>
                     * @return SnapshotId <p>快照文件ID，已废弃，请使用BackupId</p>
                     * 
                     */
                    uint64_t GetSnapshotId() const;

                    /**
                     * 设置<p>快照文件ID，已废弃，请使用BackupId</p>
                     * @param _snapshotId <p>快照文件ID，已废弃，请使用BackupId</p>
                     * 
                     */
                    void SetSnapshotId(const uint64_t& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取<p>备份文件名</p>
                     * @return FileName <p>备份文件名</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>备份文件名</p>
                     * @param _fileName <p>备份文件名</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>备份文件大小</p>
                     * @return FileSize <p>备份文件大小</p>
                     * 
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置<p>备份文件大小</p>
                     * @param _fileSize <p>备份文件大小</p>
                     * 
                     */
                    void SetFileSize(const uint64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取<p>备份开始时间</p>
                     * @return StartTime <p>备份开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>备份开始时间</p>
                     * @param _startTime <p>备份开始时间</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>备份完成时间</p>
                     * @return FinishTime <p>备份完成时间</p>
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置<p>备份完成时间</p>
                     * @param _finishTime <p>备份完成时间</p>
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取<p>备份类型：snapshot，快照备份；logic，逻辑备份</p>
                     * @return BackupType <p>备份类型：snapshot，快照备份；logic，逻辑备份</p>
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置<p>备份类型：snapshot，快照备份；logic，逻辑备份</p>
                     * @param _backupType <p>备份类型：snapshot，快照备份；logic，逻辑备份</p>
                     * 
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取<p>备份方式：auto，自动备份；manual，手动备份</p>
                     * @return BackupMethod <p>备份方式：auto，自动备份；manual，手动备份</p>
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置<p>备份方式：auto，自动备份；manual，手动备份</p>
                     * @param _backupMethod <p>备份方式：auto，自动备份；manual，手动备份</p>
                     * 
                     */
                    void SetBackupMethod(const std::string& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取<p>备份文件状态：success：备份成功；fail：备份失败；creating：备份文件创建中；deleting：备份文件删除中</p>
                     * @return BackupStatus <p>备份文件状态：success：备份成功；fail：备份失败；creating：备份文件创建中；deleting：备份文件删除中</p>
                     * 
                     */
                    std::string GetBackupStatus() const;

                    /**
                     * 设置<p>备份文件状态：success：备份成功；fail：备份失败；creating：备份文件创建中；deleting：备份文件删除中</p>
                     * @param _backupStatus <p>备份文件状态：success：备份成功；fail：备份失败；creating：备份文件创建中；deleting：备份文件删除中</p>
                     * 
                     */
                    void SetBackupStatus(const std::string& _backupStatus);

                    /**
                     * 判断参数 BackupStatus 是否已赋值
                     * @return BackupStatus 是否已赋值
                     * 
                     */
                    bool BackupStatusHasBeenSet() const;

                    /**
                     * 获取<p>备份文件时间</p>
                     * @return SnapshotTime <p>备份文件时间</p>
                     * 
                     */
                    std::string GetSnapshotTime() const;

                    /**
                     * 设置<p>备份文件时间</p>
                     * @param _snapshotTime <p>备份文件时间</p>
                     * 
                     */
                    void SetSnapshotTime(const std::string& _snapshotTime);

                    /**
                     * 判断参数 SnapshotTime 是否已赋值
                     * @return SnapshotTime 是否已赋值
                     * 
                     */
                    bool SnapshotTimeHasBeenSet() const;

                    /**
                     * 获取<p>备份ID</p>
                     * @return BackupId <p>备份ID</p>
                     * 
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置<p>备份ID</p>
                     * @param _backupId <p>备份ID</p>
                     * 
                     */
                    void SetBackupId(const int64_t& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取<p>快照类型，可选值：full，全量；increment，增量</p>
                     * @return SnapShotType <p>快照类型，可选值：full，全量；increment，增量</p>
                     * 
                     */
                    std::string GetSnapShotType() const;

                    /**
                     * 设置<p>快照类型，可选值：full，全量；increment，增量</p>
                     * @param _snapShotType <p>快照类型，可选值：full，全量；increment，增量</p>
                     * 
                     */
                    void SetSnapShotType(const std::string& _snapShotType);

                    /**
                     * 判断参数 SnapShotType 是否已赋值
                     * @return SnapShotType 是否已赋值
                     * 
                     */
                    bool SnapShotTypeHasBeenSet() const;

                    /**
                     * 获取<p>备份文件备注</p>
                     * @return BackupName <p>备份文件备注</p>
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置<p>备份文件备注</p>
                     * @param _backupName <p>备份文件备注</p>
                     * 
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     * 
                     */
                    bool BackupNameHasBeenSet() const;

                    /**
                     * 获取<p>投递状态</p>
                     * @return CopyStatus <p>投递状态</p>
                     * 
                     */
                    std::string GetCopyStatus() const;

                    /**
                     * 设置<p>投递状态</p>
                     * @param _copyStatus <p>投递状态</p>
                     * 
                     */
                    void SetCopyStatus(const std::string& _copyStatus);

                    /**
                     * 判断参数 CopyStatus 是否已赋值
                     * @return CopyStatus 是否已赋值
                     * 
                     */
                    bool CopyStatusHasBeenSet() const;

                    /**
                     * 获取<p>秘钥id</p>
                     * @return EncryptKeyId <p>秘钥id</p>
                     * 
                     */
                    std::string GetEncryptKeyId() const;

                    /**
                     * 设置<p>秘钥id</p>
                     * @param _encryptKeyId <p>秘钥id</p>
                     * 
                     */
                    void SetEncryptKeyId(const std::string& _encryptKeyId);

                    /**
                     * 判断参数 EncryptKeyId 是否已赋值
                     * @return EncryptKeyId 是否已赋值
                     * 
                     */
                    bool EncryptKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>秘钥地域</p>
                     * @return EncryptRegion <p>秘钥地域</p>
                     * 
                     */
                    std::string GetEncryptRegion() const;

                    /**
                     * 设置<p>秘钥地域</p>
                     * @param _encryptRegion <p>秘钥地域</p>
                     * 
                     */
                    void SetEncryptRegion(const std::string& _encryptRegion);

                    /**
                     * 判断参数 EncryptRegion 是否已赋值
                     * @return EncryptRegion 是否已赋值
                     * 
                     */
                    bool EncryptRegionHasBeenSet() const;

                    /**
                     * 获取<p>保险箱信息</p>
                     * @return VaultInfos <p>保险箱信息</p>
                     * 
                     */
                    std::vector<VaultInfo> GetVaultInfos() const;

                    /**
                     * 设置<p>保险箱信息</p>
                     * @param _vaultInfos <p>保险箱信息</p>
                     * 
                     */
                    void SetVaultInfos(const std::vector<VaultInfo>& _vaultInfos);

                    /**
                     * 判断参数 VaultInfos 是否已赋值
                     * @return VaultInfos 是否已赋值
                     * 
                     */
                    bool VaultInfosHasBeenSet() const;

                    /**
                     * 获取<p>备份周期策略</p>
                     * @return BackupPeriodStrategy <p>备份周期策略</p>
                     * 
                     */
                    std::string GetBackupPeriodStrategy() const;

                    /**
                     * 设置<p>备份周期策略</p>
                     * @param _backupPeriodStrategy <p>备份周期策略</p>
                     * 
                     */
                    void SetBackupPeriodStrategy(const std::string& _backupPeriodStrategy);

                    /**
                     * 判断参数 BackupPeriodStrategy 是否已赋值
                     * @return BackupPeriodStrategy 是否已赋值
                     * 
                     */
                    bool BackupPeriodStrategyHasBeenSet() const;

                private:

                    /**
                     * <p>快照文件ID，已废弃，请使用BackupId</p>
                     */
                    uint64_t m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * <p>备份文件名</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>备份文件大小</p>
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * <p>备份开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>备份完成时间</p>
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>备份类型：snapshot，快照备份；logic，逻辑备份</p>
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * <p>备份方式：auto，自动备份；manual，手动备份</p>
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * <p>备份文件状态：success：备份成功；fail：备份失败；creating：备份文件创建中；deleting：备份文件删除中</p>
                     */
                    std::string m_backupStatus;
                    bool m_backupStatusHasBeenSet;

                    /**
                     * <p>备份文件时间</p>
                     */
                    std::string m_snapshotTime;
                    bool m_snapshotTimeHasBeenSet;

                    /**
                     * <p>备份ID</p>
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * <p>快照类型，可选值：full，全量；increment，增量</p>
                     */
                    std::string m_snapShotType;
                    bool m_snapShotTypeHasBeenSet;

                    /**
                     * <p>备份文件备注</p>
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * <p>投递状态</p>
                     */
                    std::string m_copyStatus;
                    bool m_copyStatusHasBeenSet;

                    /**
                     * <p>秘钥id</p>
                     */
                    std::string m_encryptKeyId;
                    bool m_encryptKeyIdHasBeenSet;

                    /**
                     * <p>秘钥地域</p>
                     */
                    std::string m_encryptRegion;
                    bool m_encryptRegionHasBeenSet;

                    /**
                     * <p>保险箱信息</p>
                     */
                    std::vector<VaultInfo> m_vaultInfos;
                    bool m_vaultInfosHasBeenSet;

                    /**
                     * <p>备份周期策略</p>
                     */
                    std::string m_backupPeriodStrategy;
                    bool m_backupPeriodStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPFILEINFO_H_
