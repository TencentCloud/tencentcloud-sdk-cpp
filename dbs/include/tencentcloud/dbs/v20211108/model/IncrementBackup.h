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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_INCREMENTBACKUP_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_INCREMENTBACKUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbs/v20211108/model/ResourceItemDetail.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * 增量备份集信息
                */
                class IncrementBackup : public AbstractModel
                {
                public:
                    IncrementBackup();
                    ~IncrementBackup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取源实例信息。
                     * @return SourceInfo 源实例信息。
                     * 
                     */
                    std::string GetSourceInfo() const;

                    /**
                     * 设置源实例信息。
                     * @param _sourceInfo 源实例信息。
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
                     * 获取备份集状态。可能的取值为：
"running" - 运行中;
"finished" - 已完成;
"failed" - 已失败;
"stopped" - 已终止。
                     * @return Status 备份集状态。可能的取值为：
"running" - 运行中;
"finished" - 已完成;
"failed" - 已失败;
"stopped" - 已终止。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置备份集状态。可能的取值为：
"running" - 运行中;
"finished" - 已完成;
"failed" - 已失败;
"stopped" - 已终止。
                     * @param _status 备份集状态。可能的取值为：
"running" - 运行中;
"finished" - 已完成;
"failed" - 已失败;
"stopped" - 已终止。
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
                     * 获取过期时间。格式为 YYYY-MM-DD hh:mm:ss，备份集尚未生成过期时间时返回空字符串。
                     * @return ExpireTime 过期时间。格式为 YYYY-MM-DD hh:mm:ss，备份集尚未生成过期时间时返回空字符串。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间。格式为 YYYY-MM-DD hh:mm:ss，备份集尚未生成过期时间时返回空字符串。
                     * @param _expireTime 过期时间。格式为 YYYY-MM-DD hh:mm:ss，备份集尚未生成过期时间时返回空字符串。
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
                     * 获取备份集文件个数。
                     * @return FileCount 备份集文件个数。
                     * 
                     */
                    int64_t GetFileCount() const;

                    /**
                     * 设置备份集文件个数。
                     * @param _fileCount 备份集文件个数。
                     * 
                     */
                    void SetFileCount(const int64_t& _fileCount);

                    /**
                     * 判断参数 FileCount 是否已赋值
                     * @return FileCount 是否已赋值
                     * 
                     */
                    bool FileCountHasBeenSet() const;

                    /**
                     * 获取备份方式。可能的取值为：
"logical" - 逻辑备份；
"physical" - 物理备份。
                     * @return BackupMethod 备份方式。可能的取值为：
"logical" - 逻辑备份；
"physical" - 物理备份。
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置备份方式。可能的取值为：
"logical" - 逻辑备份；
"physical" - 物理备份。
                     * @param _backupMethod 备份方式。可能的取值为：
"logical" - 逻辑备份；
"physical" - 物理备份。
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
                     * 获取存储类型。目前仅支持 "DBSStorage"，即 DBS 内置存储。
                     * @return StorageType 存储类型。目前仅支持 "DBSStorage"，即 DBS 内置存储。
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置存储类型。目前仅支持 "DBSStorage"，即 DBS 内置存储。
                     * @param _storageType 存储类型。目前仅支持 "DBSStorage"，即 DBS 内置存储。
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
                     * 获取备份池类型。目前仅支持 "DefaultPool"，即默认存储池。
                     * @return BackupPool 备份池类型。目前仅支持 "DefaultPool"，即默认存储池。
                     * 
                     */
                    std::string GetBackupPool() const;

                    /**
                     * 设置备份池类型。目前仅支持 "DefaultPool"，即默认存储池。
                     * @param _backupPool 备份池类型。目前仅支持 "DefaultPool"，即默认存储池。
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
                     * 获取备份集存储类型。支持的取值范围为："standard" - 标准存储；"tiered" - 分级存储。
                     * @return RetentionType 备份集存储类型。支持的取值范围为："standard" - 标准存储；"tiered" - 分级存储。
                     * 
                     */
                    std::string GetRetentionType() const;

                    /**
                     * 设置备份集存储类型。支持的取值范围为："standard" - 标准存储；"tiered" - 分级存储。
                     * @param _retentionType 备份集存储类型。支持的取值范围为："standard" - 标准存储；"tiered" - 分级存储。
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
                     * 获取备份集存储状态详情。
                     * @return ResourceDetail 备份集存储状态详情。
                     * 
                     */
                    ResourceItemDetail GetResourceDetail() const;

                    /**
                     * 设置备份集存储状态详情。
                     * @param _resourceDetail 备份集存储状态详情。
                     * 
                     */
                    void SetResourceDetail(const ResourceItemDetail& _resourceDetail);

                    /**
                     * 判断参数 ResourceDetail 是否已赋值
                     * @return ResourceDetail 是否已赋值
                     * 
                     */
                    bool ResourceDetailHasBeenSet() const;

                private:

                    /**
                     * 备份集 ID。
                     */
                    std::string m_backupSetId;
                    bool m_backupSetIdHasBeenSet;

                    /**
                     * 源实例信息。
                     */
                    std::string m_sourceInfo;
                    bool m_sourceInfoHasBeenSet;

                    /**
                     * 备份集状态。可能的取值为：
"running" - 运行中;
"finished" - 已完成;
"failed" - 已失败;
"stopped" - 已终止。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

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
                     * 过期时间。格式为 YYYY-MM-DD hh:mm:ss，备份集尚未生成过期时间时返回空字符串。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 备份集文件个数。
                     */
                    int64_t m_fileCount;
                    bool m_fileCountHasBeenSet;

                    /**
                     * 备份方式。可能的取值为：
"logical" - 逻辑备份；
"physical" - 物理备份。
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * 存储类型。目前仅支持 "DBSStorage"，即 DBS 内置存储。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 备份池类型。目前仅支持 "DefaultPool"，即默认存储池。
                     */
                    std::string m_backupPool;
                    bool m_backupPoolHasBeenSet;

                    /**
                     * 备份集存储类型。支持的取值范围为："standard" - 标准存储；"tiered" - 分级存储。
                     */
                    std::string m_retentionType;
                    bool m_retentionTypeHasBeenSet;

                    /**
                     * 备份集存储状态详情。
                     */
                    ResourceItemDetail m_resourceDetail;
                    bool m_resourceDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_INCREMENTBACKUP_H_
