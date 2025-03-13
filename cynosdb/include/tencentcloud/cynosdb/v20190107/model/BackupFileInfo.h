/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                     * 获取快照文件ID，已废弃，请使用BackupId
                     * @return SnapshotId 快照文件ID，已废弃，请使用BackupId
                     * 
                     */
                    uint64_t GetSnapshotId() const;

                    /**
                     * 设置快照文件ID，已废弃，请使用BackupId
                     * @param _snapshotId 快照文件ID，已废弃，请使用BackupId
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
                     * 获取备份文件名
                     * @return FileName 备份文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置备份文件名
                     * @param _fileName 备份文件名
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
                     * 获取备份文件大小
                     * @return FileSize 备份文件大小
                     * 
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置备份文件大小
                     * @param _fileSize 备份文件大小
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
                     * 获取备份开始时间
                     * @return StartTime 备份开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置备份开始时间
                     * @param _startTime 备份开始时间
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
                     * 获取备份完成时间
                     * @return FinishTime 备份完成时间
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置备份完成时间
                     * @param _finishTime 备份完成时间
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
                     * 获取备份类型：snapshot，快照备份；logic，逻辑备份
                     * @return BackupType 备份类型：snapshot，快照备份；logic，逻辑备份
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置备份类型：snapshot，快照备份；logic，逻辑备份
                     * @param _backupType 备份类型：snapshot，快照备份；logic，逻辑备份
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
                     * 获取备份方式：auto，自动备份；manual，手动备份
                     * @return BackupMethod 备份方式：auto，自动备份；manual，手动备份
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置备份方式：auto，自动备份；manual，手动备份
                     * @param _backupMethod 备份方式：auto，自动备份；manual，手动备份
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
                     * 获取备份文件状态：success：备份成功；fail：备份失败；creating：备份文件创建中；deleting：备份文件删除中
                     * @return BackupStatus 备份文件状态：success：备份成功；fail：备份失败；creating：备份文件创建中；deleting：备份文件删除中
                     * 
                     */
                    std::string GetBackupStatus() const;

                    /**
                     * 设置备份文件状态：success：备份成功；fail：备份失败；creating：备份文件创建中；deleting：备份文件删除中
                     * @param _backupStatus 备份文件状态：success：备份成功；fail：备份失败；creating：备份文件创建中；deleting：备份文件删除中
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
                     * 获取备份文件时间
                     * @return SnapshotTime 备份文件时间
                     * 
                     */
                    std::string GetSnapshotTime() const;

                    /**
                     * 设置备份文件时间
                     * @param _snapshotTime 备份文件时间
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
                     * 获取备份ID
                     * @return BackupId 备份ID
                     * 
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置备份ID
                     * @param _backupId 备份ID
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
                     * 获取快照类型，可选值：full，全量；increment，增量
                     * @return SnapShotType 快照类型，可选值：full，全量；increment，增量
                     * 
                     */
                    std::string GetSnapShotType() const;

                    /**
                     * 设置快照类型，可选值：full，全量；increment，增量
                     * @param _snapShotType 快照类型，可选值：full，全量；increment，增量
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
                     * 获取备份文件备注
                     * @return BackupName 备份文件备注
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置备份文件备注
                     * @param _backupName 备份文件备注
                     * 
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     * 
                     */
                    bool BackupNameHasBeenSet() const;

                private:

                    /**
                     * 快照文件ID，已废弃，请使用BackupId
                     */
                    uint64_t m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * 备份文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 备份文件大小
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 备份开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 备份完成时间
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 备份类型：snapshot，快照备份；logic，逻辑备份
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 备份方式：auto，自动备份；manual，手动备份
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * 备份文件状态：success：备份成功；fail：备份失败；creating：备份文件创建中；deleting：备份文件删除中
                     */
                    std::string m_backupStatus;
                    bool m_backupStatusHasBeenSet;

                    /**
                     * 备份文件时间
                     */
                    std::string m_snapshotTime;
                    bool m_snapshotTimeHasBeenSet;

                    /**
                     * 备份ID
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * 快照类型，可选值：full，全量；increment，增量
                     */
                    std::string m_snapShotType;
                    bool m_snapShotTypeHasBeenSet;

                    /**
                     * 备份文件备注
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPFILEINFO_H_
