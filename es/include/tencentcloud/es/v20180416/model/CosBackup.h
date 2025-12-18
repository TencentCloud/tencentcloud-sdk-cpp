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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_COSBACKUP_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_COSBACKUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ES cos自动备份信息
                */
                class CosBackup : public AbstractModel
                {
                public:
                    CosBackup();
                    ~CosBackup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启cos自动备份
                     * @return IsAutoBackup 是否开启cos自动备份
                     * 
                     */
                    bool GetIsAutoBackup() const;

                    /**
                     * 设置是否开启cos自动备份
                     * @param _isAutoBackup 是否开启cos自动备份
                     * 
                     */
                    void SetIsAutoBackup(const bool& _isAutoBackup);

                    /**
                     * 判断参数 IsAutoBackup 是否已赋值
                     * @return IsAutoBackup 是否已赋值
                     * 
                     */
                    bool IsAutoBackupHasBeenSet() const;

                    /**
                     * 获取自动备份执行时间（精确到小时）, e.g. "22:00"
                     * @return BackupTime 自动备份执行时间（精确到小时）, e.g. "22:00"
                     * 
                     */
                    std::string GetBackupTime() const;

                    /**
                     * 设置自动备份执行时间（精确到小时）, e.g. "22:00"
                     * @param _backupTime 自动备份执行时间（精确到小时）, e.g. "22:00"
                     * 
                     */
                    void SetBackupTime(const std::string& _backupTime);

                    /**
                     * 判断参数 BackupTime 是否已赋值
                     * @return BackupTime 是否已赋值
                     * 
                     */
                    bool BackupTimeHasBeenSet() const;

                    /**
                     * 获取备份快照前缀
                     * @return SnapshotName 备份快照前缀
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置备份快照前缀
                     * @param _snapshotName 备份快照前缀
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取0 腾讯云仓库; 1 客户仓库
                     * @return EsRepositoryType 0 腾讯云仓库; 1 客户仓库
                     * 
                     */
                    uint64_t GetEsRepositoryType() const;

                    /**
                     * 设置0 腾讯云仓库; 1 客户仓库
                     * @param _esRepositoryType 0 腾讯云仓库; 1 客户仓库
                     * 
                     */
                    void SetEsRepositoryType(const uint64_t& _esRepositoryType);

                    /**
                     * 判断参数 EsRepositoryType 是否已赋值
                     * @return EsRepositoryType 是否已赋值
                     * 
                     */
                    bool EsRepositoryTypeHasBeenSet() const;

                    /**
                     * 获取托管快照仓库名称
                     * @return PaasEsRepository 托管快照仓库名称
                     * 
                     */
                    std::string GetPaasEsRepository() const;

                    /**
                     * 设置托管快照仓库名称
                     * @param _paasEsRepository 托管快照仓库名称
                     * 
                     */
                    void SetPaasEsRepository(const std::string& _paasEsRepository);

                    /**
                     * 判断参数 PaasEsRepository 是否已赋值
                     * @return PaasEsRepository 是否已赋值
                     * 
                     */
                    bool PaasEsRepositoryHasBeenSet() const;

                    /**
                     * 获取客户快照仓库名称
                     * @return UserEsRepository 客户快照仓库名称
                     * 
                     */
                    std::string GetUserEsRepository() const;

                    /**
                     * 设置客户快照仓库名称
                     * @param _userEsRepository 客户快照仓库名称
                     * 
                     */
                    void SetUserEsRepository(const std::string& _userEsRepository);

                    /**
                     * 判断参数 UserEsRepository 是否已赋值
                     * @return UserEsRepository 是否已赋值
                     * 
                     */
                    bool UserEsRepositoryHasBeenSet() const;

                    /**
                     * 获取cos存储文件夹目录
                     * @return CosBasePath cos存储文件夹目录
                     * 
                     */
                    std::string GetCosBasePath() const;

                    /**
                     * 设置cos存储文件夹目录
                     * @param _cosBasePath cos存储文件夹目录
                     * 
                     */
                    void SetCosBasePath(const std::string& _cosBasePath);

                    /**
                     * 判断参数 CosBasePath 是否已赋值
                     * @return CosBasePath 是否已赋值
                     * 
                     */
                    bool CosBasePathHasBeenSet() const;

                    /**
                     * 获取快照存储周期 单位天
                     * @return StorageDuration 快照存储周期 单位天
                     * 
                     */
                    uint64_t GetStorageDuration() const;

                    /**
                     * 设置快照存储周期 单位天
                     * @param _storageDuration 快照存储周期 单位天
                     * 
                     */
                    void SetStorageDuration(const uint64_t& _storageDuration);

                    /**
                     * 判断参数 StorageDuration 是否已赋值
                     * @return StorageDuration 是否已赋值
                     * 
                     */
                    bool StorageDurationHasBeenSet() const;

                    /**
                     * 获取自动备份频率单位小时
                     * @return AutoBackupInterval 自动备份频率单位小时
                     * 
                     */
                    uint64_t GetAutoBackupInterval() const;

                    /**
                     * 设置自动备份频率单位小时
                     * @param _autoBackupInterval 自动备份频率单位小时
                     * 
                     */
                    void SetAutoBackupInterval(const uint64_t& _autoBackupInterval);

                    /**
                     * 判断参数 AutoBackupInterval 是否已赋值
                     * @return AutoBackupInterval 是否已赋值
                     * 
                     */
                    bool AutoBackupIntervalHasBeenSet() const;

                    /**
                     * 获取备份锁定 0 不锁定; 1 锁定
                     * @return CosRetention 备份锁定 0 不锁定; 1 锁定
                     * 
                     */
                    uint64_t GetCosRetention() const;

                    /**
                     * 设置备份锁定 0 不锁定; 1 锁定
                     * @param _cosRetention 备份锁定 0 不锁定; 1 锁定
                     * 
                     */
                    void SetCosRetention(const uint64_t& _cosRetention);

                    /**
                     * 判断参数 CosRetention 是否已赋值
                     * @return CosRetention 是否已赋值
                     * 
                     */
                    bool CosRetentionHasBeenSet() const;

                    /**
                     * 获取锁定截止日期 2022-12-10T08:34:48.000Z
                     * @return RetainUntilDate 锁定截止日期 2022-12-10T08:34:48.000Z
                     * 
                     */
                    std::string GetRetainUntilDate() const;

                    /**
                     * 设置锁定截止日期 2022-12-10T08:34:48.000Z
                     * @param _retainUntilDate 锁定截止日期 2022-12-10T08:34:48.000Z
                     * 
                     */
                    void SetRetainUntilDate(const std::string& _retainUntilDate);

                    /**
                     * 判断参数 RetainUntilDate 是否已赋值
                     * @return RetainUntilDate 是否已赋值
                     * 
                     */
                    bool RetainUntilDateHasBeenSet() const;

                    /**
                     * 获取锁定宽限期
                     * @return RetentionGraceTime 锁定宽限期
                     * 
                     */
                    uint64_t GetRetentionGraceTime() const;

                    /**
                     * 设置锁定宽限期
                     * @param _retentionGraceTime 锁定宽限期
                     * 
                     */
                    void SetRetentionGraceTime(const uint64_t& _retentionGraceTime);

                    /**
                     * 判断参数 RetentionGraceTime 是否已赋值
                     * @return RetentionGraceTime 是否已赋值
                     * 
                     */
                    bool RetentionGraceTimeHasBeenSet() const;

                    /**
                     * 获取跨地域备份 0 不跨地域; 1 跨地域
                     * @return RemoteCos 跨地域备份 0 不跨地域; 1 跨地域
                     * 
                     */
                    uint64_t GetRemoteCos() const;

                    /**
                     * 设置跨地域备份 0 不跨地域; 1 跨地域
                     * @param _remoteCos 跨地域备份 0 不跨地域; 1 跨地域
                     * 
                     */
                    void SetRemoteCos(const uint64_t& _remoteCos);

                    /**
                     * 判断参数 RemoteCos 是否已赋值
                     * @return RemoteCos 是否已赋值
                     * 
                     */
                    bool RemoteCosHasBeenSet() const;

                    /**
                     * 获取跨地域备份地域名称 ap-guangzhou
                     * @return RemoteCosRegion 跨地域备份地域名称 ap-guangzhou
                     * 
                     */
                    std::string GetRemoteCosRegion() const;

                    /**
                     * 设置跨地域备份地域名称 ap-guangzhou
                     * @param _remoteCosRegion 跨地域备份地域名称 ap-guangzhou
                     * 
                     */
                    void SetRemoteCosRegion(const std::string& _remoteCosRegion);

                    /**
                     * 判断参数 RemoteCosRegion 是否已赋值
                     * @return RemoteCosRegion 是否已赋值
                     * 
                     */
                    bool RemoteCosRegionHasBeenSet() const;

                    /**
                     * 获取策略名称
                     * @return StrategyName 策略名称
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置策略名称
                     * @param _strategyName 策略名称
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取备份索引列表，如果不填表示备份所有索引
                     * @return Indices 备份索引列表，如果不填表示备份所有索引
                     * 
                     */
                    std::string GetIndices() const;

                    /**
                     * 设置备份索引列表，如果不填表示备份所有索引
                     * @param _indices 备份索引列表，如果不填表示备份所有索引
                     * 
                     */
                    void SetIndices(const std::string& _indices);

                    /**
                     * 判断参数 Indices 是否已赋值
                     * @return Indices 是否已赋值
                     * 
                     */
                    bool IndicesHasBeenSet() const;

                    /**
                     * 获取策略创建时间
                     * @return CreateTime 策略创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置策略创建时间
                     * @param _createTime 策略创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 是否开启cos自动备份
                     */
                    bool m_isAutoBackup;
                    bool m_isAutoBackupHasBeenSet;

                    /**
                     * 自动备份执行时间（精确到小时）, e.g. "22:00"
                     */
                    std::string m_backupTime;
                    bool m_backupTimeHasBeenSet;

                    /**
                     * 备份快照前缀
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * 0 腾讯云仓库; 1 客户仓库
                     */
                    uint64_t m_esRepositoryType;
                    bool m_esRepositoryTypeHasBeenSet;

                    /**
                     * 托管快照仓库名称
                     */
                    std::string m_paasEsRepository;
                    bool m_paasEsRepositoryHasBeenSet;

                    /**
                     * 客户快照仓库名称
                     */
                    std::string m_userEsRepository;
                    bool m_userEsRepositoryHasBeenSet;

                    /**
                     * cos存储文件夹目录
                     */
                    std::string m_cosBasePath;
                    bool m_cosBasePathHasBeenSet;

                    /**
                     * 快照存储周期 单位天
                     */
                    uint64_t m_storageDuration;
                    bool m_storageDurationHasBeenSet;

                    /**
                     * 自动备份频率单位小时
                     */
                    uint64_t m_autoBackupInterval;
                    bool m_autoBackupIntervalHasBeenSet;

                    /**
                     * 备份锁定 0 不锁定; 1 锁定
                     */
                    uint64_t m_cosRetention;
                    bool m_cosRetentionHasBeenSet;

                    /**
                     * 锁定截止日期 2022-12-10T08:34:48.000Z
                     */
                    std::string m_retainUntilDate;
                    bool m_retainUntilDateHasBeenSet;

                    /**
                     * 锁定宽限期
                     */
                    uint64_t m_retentionGraceTime;
                    bool m_retentionGraceTimeHasBeenSet;

                    /**
                     * 跨地域备份 0 不跨地域; 1 跨地域
                     */
                    uint64_t m_remoteCos;
                    bool m_remoteCosHasBeenSet;

                    /**
                     * 跨地域备份地域名称 ap-guangzhou
                     */
                    std::string m_remoteCosRegion;
                    bool m_remoteCosRegionHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * 备份索引列表，如果不填表示备份所有索引
                     */
                    std::string m_indices;
                    bool m_indicesHasBeenSet;

                    /**
                     * 策略创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_COSBACKUP_H_
