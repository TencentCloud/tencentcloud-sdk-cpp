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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_ARCHIVELOGMODEL_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_ARCHIVELOGMODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * 归档日志对象
                */
                class ArchiveLogModel : public AbstractModel
                {
                public:
                    ArchiveLogModel();
                    ~ArchiveLogModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取归档日志ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ArchiveLogId 归档日志ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetArchiveLogId() const;

                    /**
                     * 设置归档日志ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _archiveLogId 归档日志ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetArchiveLogId(const int64_t& _archiveLogId);

                    /**
                     * 判断参数 ArchiveLogId 是否已赋值
                     * @return ArchiveLogId 是否已赋值
                     * 
                     */
                    bool ArchiveLogIdHasBeenSet() const;

                    /**
                     * 获取备份耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupDuration 备份耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBackupDuration() const;

                    /**
                     * 设置备份耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupDuration 备份耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackupDuration(const int64_t& _backupDuration);

                    /**
                     * 判断参数 BackupDuration 是否已赋值
                     * @return BackupDuration 是否已赋值
                     * 
                     */
                    bool BackupDurationHasBeenSet() const;

                    /**
                     * 获取备份集状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupStatus 备份集状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBackupStatus() const;

                    /**
                     * 设置备份集状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupStatus 备份集状态
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取备份结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 备份结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置备份结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 备份结束时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorMessage 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpiredTime 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expiredTime 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取备份文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileName 备份文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置备份文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileName 备份文件名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取备份集文件大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileSize 备份集文件大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置备份集文件大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileSize 备份集文件大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取备份开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 备份开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置备份开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 备份开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                private:

                    /**
                     * 归档日志ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_archiveLogId;
                    bool m_archiveLogIdHasBeenSet;

                    /**
                     * 备份耗时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_backupDuration;
                    bool m_backupDurationHasBeenSet;

                    /**
                     * 备份集状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_backupStatus;
                    bool m_backupStatusHasBeenSet;

                    /**
                     * 备份结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 备份文件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 备份集文件大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 备份开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_ARCHIVELOGMODEL_H_
