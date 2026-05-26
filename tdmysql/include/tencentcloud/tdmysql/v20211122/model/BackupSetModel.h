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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPSETMODEL_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPSETMODEL_H_

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
                * 备份集对象
                */
                class BackupSetModel : public AbstractModel
                {
                public:
                    BackupSetModel();
                    ~BackupSetModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份集耗时，单位 sec
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupDuration 备份集耗时，单位 sec
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBackupDuration() const;

                    /**
                     * 设置备份集耗时，单位 sec
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupDuration 备份集耗时，单位 sec
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
                     * 获取备份方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupMethod 备份方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置备份方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupMethod 备份方式
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取备份备注名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupName 备份备注名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置备份备注名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupName 备份备注名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取备份集进度百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupProgress 备份集进度百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetBackupProgress() const;

                    /**
                     * 设置备份集进度百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupProgress 备份集进度百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackupProgress(const double& _backupProgress);

                    /**
                     * 判断参数 BackupProgress 是否已赋值
                     * @return BackupProgress 是否已赋值
                     * 
                     */
                    bool BackupProgressHasBeenSet() const;

                    /**
                     * 获取备份集ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupSetId 备份集ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBackupSetId() const;

                    /**
                     * 设置备份集ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupSetId 备份集ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackupSetId(const int64_t& _backupSetId);

                    /**
                     * 判断参数 BackupSetId 是否已赋值
                     * @return BackupSetId 是否已赋值
                     * 
                     */
                    bool BackupSetIdHasBeenSet() const;

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
                     * 获取备份集类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupType 备份集类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置备份集类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupType 备份集类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取实例版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DBVersion 实例版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置实例版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dBVersion 实例版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     * 
                     */
                    bool DBVersionHasBeenSet() const;

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
                     * 获取事务commit结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTrxTime 事务commit结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTrxTime() const;

                    /**
                     * 设置事务commit结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTrxTime 事务commit结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTrxTime(const std::string& _endTrxTime);

                    /**
                     * 判断参数 EndTrxTime 是否已赋值
                     * @return EndTrxTime 是否已赋值
                     * 
                     */
                    bool EndTrxTimeHasBeenSet() const;

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
                     * 获取备份过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpiredTime 备份过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置备份过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expiredTime 备份过期时间
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
                     * 获取备份触发，0 - autobackup, 1 - manual
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ManualBackup 备份触发，0 - autobackup, 1 - manual
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetManualBackup() const;

                    /**
                     * 设置备份触发，0 - autobackup, 1 - manual
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _manualBackup 备份触发，0 - autobackup, 1 - manual
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetManualBackup(const int64_t& _manualBackup);

                    /**
                     * 判断参数 ManualBackup 是否已赋值
                     * @return ManualBackup 是否已赋值
                     * 
                     */
                    bool ManualBackupHasBeenSet() const;

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
                     * 备份集耗时，单位 sec
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_backupDuration;
                    bool m_backupDurationHasBeenSet;

                    /**
                     * 备份方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * 备份备注名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * 备份集进度百分比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_backupProgress;
                    bool m_backupProgressHasBeenSet;

                    /**
                     * 备份集ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_backupSetId;
                    bool m_backupSetIdHasBeenSet;

                    /**
                     * 备份集状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_backupStatus;
                    bool m_backupStatusHasBeenSet;

                    /**
                     * 备份集类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 实例版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * 备份结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 事务commit结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTrxTime;
                    bool m_endTrxTimeHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 备份过期时间
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
                     * 备份触发，0 - autobackup, 1 - manual
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_manualBackup;
                    bool m_manualBackupHasBeenSet;

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

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPSETMODEL_H_
