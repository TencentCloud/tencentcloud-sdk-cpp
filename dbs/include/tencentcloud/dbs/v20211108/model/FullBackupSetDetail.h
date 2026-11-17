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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_FULLBACKUPSETDETAIL_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_FULLBACKUPSETDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbs/v20211108/model/ResourceDetail.h>
#include <tencentcloud/dbs/v20211108/model/Endpoint.h>
#include <tencentcloud/dbs/v20211108/model/BackupObject.h>
#include <tencentcloud/dbs/v20211108/model/FullBackupProgress.h>
#include <tencentcloud/dbs/v20211108/model/FullBackupErrorMessage.h>
#include <tencentcloud/dbs/v20211108/model/BackupSetOption.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * 全量备份集详情
                */
                class FullBackupSetDetail : public AbstractModel
                {
                public:
                    FullBackupSetDetail();
                    ~FullBackupSetDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>备份集 ID。</p>
                     * @return BackupSetId <p>备份集 ID。</p>
                     * 
                     */
                    std::string GetBackupSetId() const;

                    /**
                     * 设置<p>备份集 ID。</p>
                     * @param _backupSetId <p>备份集 ID。</p>
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
                     * 获取<p>源实例信息。</p>
                     * @return SourceInfo <p>源实例信息。</p>
                     * 
                     */
                    std::string GetSourceInfo() const;

                    /**
                     * 设置<p>源实例信息。</p>
                     * @param _sourceInfo <p>源实例信息。</p>
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
                     * 获取<p>备份集状态。可能的取值为："running" - 运行中;"finished" - 已完成;"failed" - 已失败;"stopped" - 已终止。</p>
                     * @return Status <p>备份集状态。可能的取值为："running" - 运行中;"finished" - 已完成;"failed" - 已失败;"stopped" - 已终止。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>备份集状态。可能的取值为："running" - 运行中;"finished" - 已完成;"failed" - 已失败;"stopped" - 已终止。</p>
                     * @param _status <p>备份集状态。可能的取值为："running" - 运行中;"finished" - 已完成;"failed" - 已失败;"stopped" - 已终止。</p>
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
                     * 获取<p>创建时间。格式为 YYYY-MM-DD hh:mm:ss。</p>
                     * @return StartTime <p>创建时间。格式为 YYYY-MM-DD hh:mm:ss。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>创建时间。格式为 YYYY-MM-DD hh:mm:ss。</p>
                     * @param _startTime <p>创建时间。格式为 YYYY-MM-DD hh:mm:ss。</p>
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
                     * 获取<p>结束时间。格式为 YYYY-MM-DD hh:mm:ss，备份集尚未结束时返回 0000-00-00 00:00:00。</p>
                     * @return EndTime <p>结束时间。格式为 YYYY-MM-DD hh:mm:ss，备份集尚未结束时返回 0000-00-00 00:00:00。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间。格式为 YYYY-MM-DD hh:mm:ss，备份集尚未结束时返回 0000-00-00 00:00:00。</p>
                     * @param _endTime <p>结束时间。格式为 YYYY-MM-DD hh:mm:ss，备份集尚未结束时返回 0000-00-00 00:00:00。</p>
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
                     * 获取<p>过期时间。格式为 YYYY-MM-DD hh:mm:ss。</p>
                     * @return ExpireTime <p>过期时间。格式为 YYYY-MM-DD hh:mm:ss。</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>过期时间。格式为 YYYY-MM-DD hh:mm:ss。</p>
                     * @param _expireTime <p>过期时间。格式为 YYYY-MM-DD hh:mm:ss。</p>
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
                     * 获取<p>备份集大小，单位为 Bytes。</p>
                     * @return BackupSize <p>备份集大小，单位为 Bytes。</p>
                     * 
                     */
                    int64_t GetBackupSize() const;

                    /**
                     * 设置<p>备份集大小，单位为 Bytes。</p>
                     * @param _backupSize <p>备份集大小，单位为 Bytes。</p>
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
                     * 获取<p>备份方式。可能的取值为："logical" - 逻辑备份；"physical" - 物理备份。</p>
                     * @return BackupMethod <p>备份方式。可能的取值为："logical" - 逻辑备份；"physical" - 物理备份。</p>
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置<p>备份方式。可能的取值为："logical" - 逻辑备份；"physical" - 物理备份。</p>
                     * @param _backupMethod <p>备份方式。可能的取值为："logical" - 逻辑备份；"physical" - 物理备份。</p>
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
                     * 获取<p>存储类型。目前仅支持 "DBSStorage"，即 DBS 内置存储。</p>
                     * @return StorageType <p>存储类型。目前仅支持 "DBSStorage"，即 DBS 内置存储。</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>存储类型。目前仅支持 "DBSStorage"，即 DBS 内置存储。</p>
                     * @param _storageType <p>存储类型。目前仅支持 "DBSStorage"，即 DBS 内置存储。</p>
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
                     * 获取<p>备份池类型。目前仅支持 "DefaultPool"，即默认存储池。</p>
                     * @return BackupPool <p>备份池类型。目前仅支持 "DefaultPool"，即默认存储池。</p>
                     * 
                     */
                    std::string GetBackupPool() const;

                    /**
                     * 设置<p>备份池类型。目前仅支持 "DefaultPool"，即默认存储池。</p>
                     * @param _backupPool <p>备份池类型。目前仅支持 "DefaultPool"，即默认存储池。</p>
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
                     * 获取<p>备份集存储类型。支持的取值范围为："standard" - 标准存储；"tiered" - 分级存储。</p>
                     * @return RetentionType <p>备份集存储类型。支持的取值范围为："standard" - 标准存储；"tiered" - 分级存储。</p>
                     * 
                     */
                    std::string GetRetentionType() const;

                    /**
                     * 设置<p>备份集存储类型。支持的取值范围为："standard" - 标准存储；"tiered" - 分级存储。</p>
                     * @param _retentionType <p>备份集存储类型。支持的取值范围为："standard" - 标准存储；"tiered" - 分级存储。</p>
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
                     * 获取<p>备份集存储状态详情。</p>
                     * @return ResourceDetail <p>备份集存储状态详情。</p>
                     * 
                     */
                    ResourceDetail GetResourceDetail() const;

                    /**
                     * 设置<p>备份集存储状态详情。</p>
                     * @param _resourceDetail <p>备份集存储状态详情。</p>
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
                     * 获取备份源实例信息。
                     * @return SourceEndpoint 备份源实例信息。
                     * 
                     */
                    Endpoint GetSourceEndpoint() const;

                    /**
                     * 设置备份源实例信息。
                     * @param _sourceEndpoint 备份源实例信息。
                     * 
                     */
                    void SetSourceEndpoint(const Endpoint& _sourceEndpoint);

                    /**
                     * 判断参数 SourceEndpoint 是否已赋值
                     * @return SourceEndpoint 是否已赋值
                     * 
                     */
                    bool SourceEndpointHasBeenSet() const;

                    /**
                     * 获取备份对象。
                     * @return BackupObject 备份对象。
                     * 
                     */
                    BackupObject GetBackupObject() const;

                    /**
                     * 设置备份对象。
                     * @param _backupObject 备份对象。
                     * 
                     */
                    void SetBackupObject(const BackupObject& _backupObject);

                    /**
                     * 判断参数 BackupObject 是否已赋值
                     * @return BackupObject 是否已赋值
                     * 
                     */
                    bool BackupObjectHasBeenSet() const;

                    /**
                     * 获取备份进度。
                     * @return Progress 备份进度。
                     * 
                     */
                    FullBackupProgress GetProgress() const;

                    /**
                     * 设置备份进度。
                     * @param _progress 备份进度。
                     * 
                     */
                    void SetProgress(const FullBackupProgress& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取备份错误信息。备份失败时有值。
                     * @return ErrorMessage 备份错误信息。备份失败时有值。
                     * 
                     */
                    FullBackupErrorMessage GetErrorMessage() const;

                    /**
                     * 设置备份错误信息。备份失败时有值。
                     * @param _errorMessage 备份错误信息。备份失败时有值。
                     * 
                     */
                    void SetErrorMessage(const FullBackupErrorMessage& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取备份集加密信息。
                     * @return BackupSetOption 备份集加密信息。
                     * 
                     */
                    BackupSetOption GetBackupSetOption() const;

                    /**
                     * 设置备份集加密信息。
                     * @param _backupSetOption 备份集加密信息。
                     * 
                     */
                    void SetBackupSetOption(const BackupSetOption& _backupSetOption);

                    /**
                     * 判断参数 BackupSetOption 是否已赋值
                     * @return BackupSetOption 是否已赋值
                     * 
                     */
                    bool BackupSetOptionHasBeenSet() const;

                private:

                    /**
                     * <p>备份集 ID。</p>
                     */
                    std::string m_backupSetId;
                    bool m_backupSetIdHasBeenSet;

                    /**
                     * <p>源实例信息。</p>
                     */
                    std::string m_sourceInfo;
                    bool m_sourceInfoHasBeenSet;

                    /**
                     * <p>备份集状态。可能的取值为："running" - 运行中;"finished" - 已完成;"failed" - 已失败;"stopped" - 已终止。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间。格式为 YYYY-MM-DD hh:mm:ss。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间。格式为 YYYY-MM-DD hh:mm:ss，备份集尚未结束时返回 0000-00-00 00:00:00。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>过期时间。格式为 YYYY-MM-DD hh:mm:ss。</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>备份集大小，单位为 Bytes。</p>
                     */
                    int64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * <p>备份方式。可能的取值为："logical" - 逻辑备份；"physical" - 物理备份。</p>
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * <p>存储类型。目前仅支持 "DBSStorage"，即 DBS 内置存储。</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>备份池类型。目前仅支持 "DefaultPool"，即默认存储池。</p>
                     */
                    std::string m_backupPool;
                    bool m_backupPoolHasBeenSet;

                    /**
                     * <p>备份集存储类型。支持的取值范围为："standard" - 标准存储；"tiered" - 分级存储。</p>
                     */
                    std::string m_retentionType;
                    bool m_retentionTypeHasBeenSet;

                    /**
                     * <p>备份集存储状态详情。</p>
                     */
                    ResourceDetail m_resourceDetail;
                    bool m_resourceDetailHasBeenSet;

                    /**
                     * 备份源实例信息。
                     */
                    Endpoint m_sourceEndpoint;
                    bool m_sourceEndpointHasBeenSet;

                    /**
                     * 备份对象。
                     */
                    BackupObject m_backupObject;
                    bool m_backupObjectHasBeenSet;

                    /**
                     * 备份进度。
                     */
                    FullBackupProgress m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 备份错误信息。备份失败时有值。
                     */
                    FullBackupErrorMessage m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 备份集加密信息。
                     */
                    BackupSetOption m_backupSetOption;
                    bool m_backupSetOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_FULLBACKUPSETDETAIL_H_
