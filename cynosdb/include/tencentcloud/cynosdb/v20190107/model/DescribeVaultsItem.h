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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEVAULTSITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEVAULTSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ObjectTask.h>
#include <tencentcloud/cynosdb/v20190107/model/AutoCopyConfig.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 保险箱信息
                */
                class DescribeVaultsItem : public AbstractModel
                {
                public:
                    DescribeVaultsItem();
                    ~DescribeVaultsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取保险箱ID
                     * @return VaultId 保险箱ID
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置保险箱ID
                     * @param _vaultId 保险箱ID
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
                     * 获取保险箱名称
                     * @return VaultName 保险箱名称
                     * 
                     */
                    std::string GetVaultName() const;

                    /**
                     * 设置保险箱名称
                     * @param _vaultName 保险箱名称
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
                     * 获取保险箱描述
                     * @return VaultDescribe 保险箱描述
                     * 
                     */
                    std::string GetVaultDescribe() const;

                    /**
                     * 设置保险箱描述
                     * @param _vaultDescribe 保险箱描述
                     * 
                     */
                    void SetVaultDescribe(const std::string& _vaultDescribe);

                    /**
                     * 判断参数 VaultDescribe 是否已赋值
                     * @return VaultDescribe 是否已赋值
                     * 
                     */
                    bool VaultDescribeHasBeenSet() const;

                    /**
                     * 获取加密密钥ID
                     * @return KeyId 加密密钥ID
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置加密密钥ID
                     * @param _keyId 加密密钥ID
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
                     * 获取密钥所在地域
                     * @return KeyRegion 密钥所在地域
                     * 
                     */
                    std::string GetKeyRegion() const;

                    /**
                     * 设置密钥所在地域
                     * @param _keyRegion 密钥所在地域
                     * 
                     */
                    void SetKeyRegion(const std::string& _keyRegion);

                    /**
                     * 判断参数 KeyRegion 是否已赋值
                     * @return KeyRegion 是否已赋值
                     * 
                     */
                    bool KeyRegionHasBeenSet() const;

                    /**
                     * 获取密钥类型
                     * @return KeyType 密钥类型
                     * 
                     */
                    std::string GetKeyType() const;

                    /**
                     * 设置密钥类型
                     * @param _keyType 密钥类型
                     * 
                     */
                    void SetKeyType(const std::string& _keyType);

                    /**
                     * 判断参数 KeyType 是否已赋值
                     * @return KeyType 是否已赋值
                     * 
                     */
                    bool KeyTypeHasBeenSet() const;

                    /**
                     * 获取备份文件数量
                     * @return BackupFileCount 备份文件数量
                     * 
                     */
                    int64_t GetBackupFileCount() const;

                    /**
                     * 设置备份文件数量
                     * @param _backupFileCount 备份文件数量
                     * 
                     */
                    void SetBackupFileCount(const int64_t& _backupFileCount);

                    /**
                     * 判断参数 BackupFileCount 是否已赋值
                     * @return BackupFileCount 是否已赋值
                     * 
                     */
                    bool BackupFileCountHasBeenSet() const;

                    /**
                     * 获取备份文件总大小（字节）
                     * @return BackupFileSize 备份文件总大小（字节）
                     * 
                     */
                    int64_t GetBackupFileSize() const;

                    /**
                     * 设置备份文件总大小（字节）
                     * @param _backupFileSize 备份文件总大小（字节）
                     * 
                     */
                    void SetBackupFileSize(const int64_t& _backupFileSize);

                    /**
                     * 判断参数 BackupFileSize 是否已赋值
                     * @return BackupFileSize 是否已赋值
                     * 
                     */
                    bool BackupFileSizeHasBeenSet() const;

                    /**
                     * 获取Binlog文件数量
                     * @return BinlogFileCount Binlog文件数量
                     * 
                     */
                    int64_t GetBinlogFileCount() const;

                    /**
                     * 设置Binlog文件数量
                     * @param _binlogFileCount Binlog文件数量
                     * 
                     */
                    void SetBinlogFileCount(const int64_t& _binlogFileCount);

                    /**
                     * 判断参数 BinlogFileCount 是否已赋值
                     * @return BinlogFileCount 是否已赋值
                     * 
                     */
                    bool BinlogFileCountHasBeenSet() const;

                    /**
                     * 获取Binlog文件总大小（字节）
                     * @return BinlogFileSize Binlog文件总大小（字节）
                     * 
                     */
                    int64_t GetBinlogFileSize() const;

                    /**
                     * 设置Binlog文件总大小（字节）
                     * @param _binlogFileSize Binlog文件总大小（字节）
                     * 
                     */
                    void SetBinlogFileSize(const int64_t& _binlogFileSize);

                    /**
                     * 判断参数 BinlogFileSize 是否已赋值
                     * @return BinlogFileSize 是否已赋值
                     * 
                     */
                    bool BinlogFileSizeHasBeenSet() const;

                    /**
                     * 获取RedoLog文件数量
                     * @return RedoLogFileCount RedoLog文件数量
                     * 
                     */
                    int64_t GetRedoLogFileCount() const;

                    /**
                     * 设置RedoLog文件数量
                     * @param _redoLogFileCount RedoLog文件数量
                     * 
                     */
                    void SetRedoLogFileCount(const int64_t& _redoLogFileCount);

                    /**
                     * 判断参数 RedoLogFileCount 是否已赋值
                     * @return RedoLogFileCount 是否已赋值
                     * 
                     */
                    bool RedoLogFileCountHasBeenSet() const;

                    /**
                     * 获取RedoLog文件总大小（字节）
                     * @return RedoLogFileSize RedoLog文件总大小（字节）
                     * 
                     */
                    int64_t GetRedoLogFileSize() const;

                    /**
                     * 设置RedoLog文件总大小（字节）
                     * @param _redoLogFileSize RedoLog文件总大小（字节）
                     * 
                     */
                    void SetRedoLogFileSize(const int64_t& _redoLogFileSize);

                    /**
                     * 判断参数 RedoLogFileSize 是否已赋值
                     * @return RedoLogFileSize 是否已赋值
                     * 
                     */
                    bool RedoLogFileSizeHasBeenSet() const;

                    /**
                     * 获取保险箱状态
                     * @return Status 保险箱状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置保险箱状态
                     * @param _status 保险箱状态
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
                     * 获取备份保留时长（秒）
                     * @return BackupSaveSeconds 备份保留时长（秒）
                     * 
                     */
                    int64_t GetBackupSaveSeconds() const;

                    /**
                     * 设置备份保留时长（秒）
                     * @param _backupSaveSeconds 备份保留时长（秒）
                     * 
                     */
                    void SetBackupSaveSeconds(const int64_t& _backupSaveSeconds);

                    /**
                     * 判断参数 BackupSaveSeconds 是否已赋值
                     * @return BackupSaveSeconds 是否已赋值
                     * 
                     */
                    bool BackupSaveSecondsHasBeenSet() const;

                    /**
                     * 获取锁定时间
                     * @return LockedTime 锁定时间
                     * 
                     */
                    std::string GetLockedTime() const;

                    /**
                     * 设置锁定时间
                     * @param _lockedTime 锁定时间
                     * 
                     */
                    void SetLockedTime(const std::string& _lockedTime);

                    /**
                     * 判断参数 LockedTime 是否已赋值
                     * @return LockedTime 是否已赋值
                     * 
                     */
                    bool LockedTimeHasBeenSet() const;

                    /**
                     * 获取关联任务列表
                     * @return Tasks 关联任务列表
                     * 
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置关联任务列表
                     * @param _tasks 关联任务列表
                     * 
                     */
                    void SetTasks(const std::vector<ObjectTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取保险箱所在地域
                     * @return VaultRegion 保险箱所在地域
                     * 
                     */
                    std::string GetVaultRegion() const;

                    /**
                     * 设置保险箱所在地域
                     * @param _vaultRegion 保险箱所在地域
                     * 
                     */
                    void SetVaultRegion(const std::string& _vaultRegion);

                    /**
                     * 判断参数 VaultRegion 是否已赋值
                     * @return VaultRegion 是否已赋值
                     * 
                     */
                    bool VaultRegionHasBeenSet() const;

                    /**
                     * 获取自动投递关系
                     * @return AutoCopyConfigs 自动投递关系
                     * 
                     */
                    std::vector<AutoCopyConfig> GetAutoCopyConfigs() const;

                    /**
                     * 设置自动投递关系
                     * @param _autoCopyConfigs 自动投递关系
                     * 
                     */
                    void SetAutoCopyConfigs(const std::vector<AutoCopyConfig>& _autoCopyConfigs);

                    /**
                     * 判断参数 AutoCopyConfigs 是否已赋值
                     * @return AutoCopyConfigs 是否已赋值
                     * 
                     */
                    bool AutoCopyConfigsHasBeenSet() const;

                private:

                    /**
                     * 保险箱ID
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * 保险箱名称
                     */
                    std::string m_vaultName;
                    bool m_vaultNameHasBeenSet;

                    /**
                     * 保险箱描述
                     */
                    std::string m_vaultDescribe;
                    bool m_vaultDescribeHasBeenSet;

                    /**
                     * 加密密钥ID
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 密钥所在地域
                     */
                    std::string m_keyRegion;
                    bool m_keyRegionHasBeenSet;

                    /**
                     * 密钥类型
                     */
                    std::string m_keyType;
                    bool m_keyTypeHasBeenSet;

                    /**
                     * 备份文件数量
                     */
                    int64_t m_backupFileCount;
                    bool m_backupFileCountHasBeenSet;

                    /**
                     * 备份文件总大小（字节）
                     */
                    int64_t m_backupFileSize;
                    bool m_backupFileSizeHasBeenSet;

                    /**
                     * Binlog文件数量
                     */
                    int64_t m_binlogFileCount;
                    bool m_binlogFileCountHasBeenSet;

                    /**
                     * Binlog文件总大小（字节）
                     */
                    int64_t m_binlogFileSize;
                    bool m_binlogFileSizeHasBeenSet;

                    /**
                     * RedoLog文件数量
                     */
                    int64_t m_redoLogFileCount;
                    bool m_redoLogFileCountHasBeenSet;

                    /**
                     * RedoLog文件总大小（字节）
                     */
                    int64_t m_redoLogFileSize;
                    bool m_redoLogFileSizeHasBeenSet;

                    /**
                     * 保险箱状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 备份保留时长（秒）
                     */
                    int64_t m_backupSaveSeconds;
                    bool m_backupSaveSecondsHasBeenSet;

                    /**
                     * 锁定时间
                     */
                    std::string m_lockedTime;
                    bool m_lockedTimeHasBeenSet;

                    /**
                     * 关联任务列表
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 保险箱所在地域
                     */
                    std::string m_vaultRegion;
                    bool m_vaultRegionHasBeenSet;

                    /**
                     * 自动投递关系
                     */
                    std::vector<AutoCopyConfig> m_autoCopyConfigs;
                    bool m_autoCopyConfigsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEVAULTSITEM_H_
