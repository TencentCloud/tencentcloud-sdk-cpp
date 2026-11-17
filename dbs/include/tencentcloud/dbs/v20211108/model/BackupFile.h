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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPFILE_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbs/v20211108/model/ResourceDetail.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * 增量备份文件信息
                */
                class BackupFile : public AbstractModel
                {
                public:
                    BackupFile();
                    ~BackupFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件名。
                     * @return FileName 文件名。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名。
                     * @param _fileName 文件名。
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
                     * 获取备份集 ID。
                     * @return BackupSetId 备份集 ID。
                     * 
                     */
                    std::string GetBackupSetId() const;

                    /**
                     * 设置备份集 ID。
                     * @param _backupSetId 备份集 ID。
                     * 
                     */
                    void SetBackupSetId(const std::string& _backupSetId);

                    /**
                     * 判断参数 BackupSetId 是否已赋值
                     * @return BackupSetId 是否已赋值
                     * 
                     */
                    bool BackupSetIdHasBeenSet() const;

                    /**
                     * 获取文件状态。取值：
- notReady：未就绪
- backuping：备份中
- finished：备份完成
- failed：备份失败
                     * @return Status 文件状态。取值：
- notReady：未就绪
- backuping：备份中
- finished：备份完成
- failed：备份失败
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置文件状态。取值：
- notReady：未就绪
- backuping：备份中
- finished：备份完成
- failed：备份失败
                     * @param _status 文件状态。取值：
- notReady：未就绪
- backuping：备份中
- finished：备份完成
- failed：备份失败
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
                     * 获取源库连接信息。云数据库实例为实例 ID，其余为 ip:port。
                     * @return SourceInfo 源库连接信息。云数据库实例为实例 ID，其余为 ip:port。
                     * 
                     */
                    std::string GetSourceInfo() const;

                    /**
                     * 设置源库连接信息。云数据库实例为实例 ID，其余为 ip:port。
                     * @param _sourceInfo 源库连接信息。云数据库实例为实例 ID，其余为 ip:port。
                     * 
                     */
                    void SetSourceInfo(const std::string& _sourceInfo);

                    /**
                     * 判断参数 SourceInfo 是否已赋值
                     * @return SourceInfo 是否已赋值
                     * 
                     */
                    bool SourceInfoHasBeenSet() const;

                    /**
                     * 获取开始时间。格式为 YYYY-MM-DD hh:mm:ss。
                     * @return StartTime 开始时间。格式为 YYYY-MM-DD hh:mm:ss。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间。格式为 YYYY-MM-DD hh:mm:ss。
                     * @param _startTime 开始时间。格式为 YYYY-MM-DD hh:mm:ss。
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
                     * 获取结束时间。格式为 YYYY-MM-DD hh:mm:ss，备份集尚未结束时返回 0000-00-00 00:00:00。
                     * @return EndTime 结束时间。格式为 YYYY-MM-DD hh:mm:ss，备份集尚未结束时返回 0000-00-00 00:00:00。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间。格式为 YYYY-MM-DD hh:mm:ss，备份集尚未结束时返回 0000-00-00 00:00:00。
                     * @param _endTime 结束时间。格式为 YYYY-MM-DD hh:mm:ss，备份集尚未结束时返回 0000-00-00 00:00:00。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取过期时间。格式为 YYYY-MM-DD hh:mm:ss。
                     * @return ExpireTime 过期时间。格式为 YYYY-MM-DD hh:mm:ss。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间。格式为 YYYY-MM-DD hh:mm:ss。
                     * @param _expireTime 过期时间。格式为 YYYY-MM-DD hh:mm:ss。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取文件大小，单位：字节。
                     * @return BackupSize 文件大小，单位：字节。
                     * 
                     */
                    int64_t GetBackupSize() const;

                    /**
                     * 设置文件大小，单位：字节。
                     * @param _backupSize 文件大小，单位：字节。
                     * 
                     */
                    void SetBackupSize(const int64_t& _backupSize);

                    /**
                     * 判断参数 BackupSize 是否已赋值
                     * @return BackupSize 是否已赋值
                     * 
                     */
                    bool BackupSizeHasBeenSet() const;

                    /**
                     * 获取备份方式。取值：logical（逻辑备份）。
                     * @return BackupMethod 备份方式。取值：logical（逻辑备份）。
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置备份方式。取值：logical（逻辑备份）。
                     * @param _backupMethod 备份方式。取值：logical（逻辑备份）。
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
                     * 获取存储类型。取值：DBSStorage（内置存储）。
                     * @return StorageType 存储类型。取值：DBSStorage（内置存储）。
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置存储类型。取值：DBSStorage（内置存储）。
                     * @param _storageType 存储类型。取值：DBSStorage（内置存储）。
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取存储策略类型。取值：
- standard：标准存储
- tiered：分级存储
                     * @return RetentionType 存储策略类型。取值：
- standard：标准存储
- tiered：分级存储
                     * 
                     */
                    std::string GetRetentionType() const;

                    /**
                     * 设置存储策略类型。取值：
- standard：标准存储
- tiered：分级存储
                     * @param _retentionType 存储策略类型。取值：
- standard：标准存储
- tiered：分级存储
                     * 
                     */
                    void SetRetentionType(const std::string& _retentionType);

                    /**
                     * 判断参数 RetentionType 是否已赋值
                     * @return RetentionType 是否已赋值
                     * 
                     */
                    bool RetentionTypeHasBeenSet() const;

                    /**
                     * 获取备份集存储详情。
                     * @return ResourceDetail 备份集存储详情。
                     * 
                     */
                    ResourceDetail GetResourceDetail() const;

                    /**
                     * 设置备份集存储详情。
                     * @param _resourceDetail 备份集存储详情。
                     * 
                     */
                    void SetResourceDetail(const ResourceDetail& _resourceDetail);

                    /**
                     * 判断参数 ResourceDetail 是否已赋值
                     * @return ResourceDetail 是否已赋值
                     * 
                     */
                    bool ResourceDetailHasBeenSet() const;

                    /**
                     * 获取备份池。
                     * @return BackupPool 备份池。
                     * 
                     */
                    std::string GetBackupPool() const;

                    /**
                     * 设置备份池。
                     * @param _backupPool 备份池。
                     * 
                     */
                    void SetBackupPool(const std::string& _backupPool);

                    /**
                     * 判断参数 BackupPool 是否已赋值
                     * @return BackupPool 是否已赋值
                     * 
                     */
                    bool BackupPoolHasBeenSet() const;

                    /**
                     * 获取当前状态下允许的操作。取值：download。
                     * @return AllowedActions 当前状态下允许的操作。取值：download。
                     * 
                     */
                    std::vector<std::string> GetAllowedActions() const;

                    /**
                     * 设置当前状态下允许的操作。取值：download。
                     * @param _allowedActions 当前状态下允许的操作。取值：download。
                     * 
                     */
                    void SetAllowedActions(const std::vector<std::string>& _allowedActions);

                    /**
                     * 判断参数 AllowedActions 是否已赋值
                     * @return AllowedActions 是否已赋值
                     * 
                     */
                    bool AllowedActionsHasBeenSet() const;

                    /**
                     * 获取支持的全部操作。
                     * @return AllActions 支持的全部操作。
                     * 
                     */
                    std::vector<std::string> GetAllActions() const;

                    /**
                     * 设置支持的全部操作。
                     * @param _allActions 支持的全部操作。
                     * 
                     */
                    void SetAllActions(const std::vector<std::string>& _allActions);

                    /**
                     * 判断参数 AllActions 是否已赋值
                     * @return AllActions 是否已赋值
                     * 
                     */
                    bool AllActionsHasBeenSet() const;

                    /**
                     * 获取文件最后修改时间。格式为 YYYY-MM-DD hh:mm:ss。
                     * @return LastModified 文件最后修改时间。格式为 YYYY-MM-DD hh:mm:ss。
                     * 
                     */
                    std::string GetLastModified() const;

                    /**
                     * 设置文件最后修改时间。格式为 YYYY-MM-DD hh:mm:ss。
                     * @param _lastModified 文件最后修改时间。格式为 YYYY-MM-DD hh:mm:ss。
                     * 
                     */
                    void SetLastModified(const std::string& _lastModified);

                    /**
                     * 判断参数 LastModified 是否已赋值
                     * @return LastModified 是否已赋值
                     * 
                     */
                    bool LastModifiedHasBeenSet() const;

                private:

                    /**
                     * 文件名。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 备份集 ID。
                     */
                    std::string m_backupSetId;
                    bool m_backupSetIdHasBeenSet;

                    /**
                     * 文件状态。取值：
- notReady：未就绪
- backuping：备份中
- finished：备份完成
- failed：备份失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 源库连接信息。云数据库实例为实例 ID，其余为 ip:port。
                     */
                    std::string m_sourceInfo;
                    bool m_sourceInfoHasBeenSet;

                    /**
                     * 开始时间。格式为 YYYY-MM-DD hh:mm:ss。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间。格式为 YYYY-MM-DD hh:mm:ss，备份集尚未结束时返回 0000-00-00 00:00:00。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 过期时间。格式为 YYYY-MM-DD hh:mm:ss。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 文件大小，单位：字节。
                     */
                    int64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * 备份方式。取值：logical（逻辑备份）。
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * 存储类型。取值：DBSStorage（内置存储）。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 存储策略类型。取值：
- standard：标准存储
- tiered：分级存储
                     */
                    std::string m_retentionType;
                    bool m_retentionTypeHasBeenSet;

                    /**
                     * 备份集存储详情。
                     */
                    ResourceDetail m_resourceDetail;
                    bool m_resourceDetailHasBeenSet;

                    /**
                     * 备份池。
                     */
                    std::string m_backupPool;
                    bool m_backupPoolHasBeenSet;

                    /**
                     * 当前状态下允许的操作。取值：download。
                     */
                    std::vector<std::string> m_allowedActions;
                    bool m_allowedActionsHasBeenSet;

                    /**
                     * 支持的全部操作。
                     */
                    std::vector<std::string> m_allActions;
                    bool m_allActionsHasBeenSet;

                    /**
                     * 文件最后修改时间。格式为 YYYY-MM-DD hh:mm:ss。
                     */
                    std::string m_lastModified;
                    bool m_lastModifiedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPFILE_H_
