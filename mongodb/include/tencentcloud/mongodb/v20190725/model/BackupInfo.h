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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPINFO_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 备份信息。
                */
                class BackupInfo : public AbstractModel
                {
                public:
                    BackupInfo();
                    ~BackupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例ID。</p>
                     * @return InstanceId <p>实例ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID。</p>
                     * @param _instanceId <p>实例ID。</p>
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
                     * 获取<p>备份方式。</p><ul><li>0：自动备份。</li><li>1：手动备份。</li></ul>
                     * @return BackupType <p>备份方式。</p><ul><li>0：自动备份。</li><li>1：手动备份。</li></ul>
                     * 
                     */
                    uint64_t GetBackupType() const;

                    /**
                     * 设置<p>备份方式。</p><ul><li>0：自动备份。</li><li>1：手动备份。</li></ul>
                     * @param _backupType <p>备份方式。</p><ul><li>0：自动备份。</li><li>1：手动备份。</li></ul>
                     * 
                     */
                    void SetBackupType(const uint64_t& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取<p>备份文件名称。</p>
                     * @return BackupName <p>备份文件名称。</p>
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置<p>备份文件名称。</p>
                     * @param _backupName <p>备份文件名称。</p>
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
                     * 获取<p>备份任务备注信息。</p>
                     * @return BackupDesc <p>备份任务备注信息。</p>
                     * 
                     */
                    std::string GetBackupDesc() const;

                    /**
                     * 设置<p>备份任务备注信息。</p>
                     * @param _backupDesc <p>备份任务备注信息。</p>
                     * 
                     */
                    void SetBackupDesc(const std::string& _backupDesc);

                    /**
                     * 判断参数 BackupDesc 是否已赋值
                     * @return BackupDesc 是否已赋值
                     * 
                     */
                    bool BackupDescHasBeenSet() const;

                    /**
                     * 获取<p>备份文件大小，单位：KB。</p>
                     * @return BackupSize <p>备份文件大小，单位：KB。</p>
                     * 
                     */
                    uint64_t GetBackupSize() const;

                    /**
                     * 设置<p>备份文件大小，单位：KB。</p>
                     * @param _backupSize <p>备份文件大小，单位：KB。</p>
                     * 
                     */
                    void SetBackupSize(const uint64_t& _backupSize);

                    /**
                     * 判断参数 BackupSize 是否已赋值
                     * @return BackupSize 是否已赋值
                     * 
                     */
                    bool BackupSizeHasBeenSet() const;

                    /**
                     * 获取<p>备份开始时间。</p>
                     * @return StartTime <p>备份开始时间。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>备份开始时间。</p>
                     * @param _startTime <p>备份开始时间。</p>
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
                     * 获取<p>备份结束时间。</p>
                     * @return EndTime <p>备份结束时间。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>备份结束时间。</p>
                     * @param _endTime <p>备份结束时间。</p>
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
                     * 获取<p>备份状态。</p><ul><li>1：备份中。</li><li>2：备份成功。</li></ul>
                     * @return Status <p>备份状态。</p><ul><li>1：备份中。</li><li>2：备份成功。</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>备份状态。</p><ul><li>1：备份中。</li><li>2：备份成功。</li></ul>
                     * @param _status <p>备份状态。</p><ul><li>1：备份中。</li><li>2：备份成功。</li></ul>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>备份方式。</p><ul><li>0：逻辑备份。</li><li>1：物理备份。</li><li>3：快照备份。<br><strong>说明:</strong></li><li>通用版实例支持逻辑备份与物理备份。云盘版实例支持物理备份与快照备份，暂不支持逻辑备份。</li><li>实例开通存储加密，则备份方式不能为物理备份。</li></ul>
                     * @return BackupMethod <p>备份方式。</p><ul><li>0：逻辑备份。</li><li>1：物理备份。</li><li>3：快照备份。<br><strong>说明:</strong></li><li>通用版实例支持逻辑备份与物理备份。云盘版实例支持物理备份与快照备份，暂不支持逻辑备份。</li><li>实例开通存储加密，则备份方式不能为物理备份。</li></ul>
                     * 
                     */
                    uint64_t GetBackupMethod() const;

                    /**
                     * 设置<p>备份方式。</p><ul><li>0：逻辑备份。</li><li>1：物理备份。</li><li>3：快照备份。<br><strong>说明:</strong></li><li>通用版实例支持逻辑备份与物理备份。云盘版实例支持物理备份与快照备份，暂不支持逻辑备份。</li><li>实例开通存储加密，则备份方式不能为物理备份。</li></ul>
                     * @param _backupMethod <p>备份方式。</p><ul><li>0：逻辑备份。</li><li>1：物理备份。</li><li>3：快照备份。<br><strong>说明:</strong></li><li>通用版实例支持逻辑备份与物理备份。云盘版实例支持物理备份与快照备份，暂不支持逻辑备份。</li><li>实例开通存储加密，则备份方式不能为物理备份。</li></ul>
                     * 
                     */
                    void SetBackupMethod(const uint64_t& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取<p>备份记录 ID。</p>
                     * @return BackId <p>备份记录 ID。</p>
                     * 
                     */
                    int64_t GetBackId() const;

                    /**
                     * 设置<p>备份记录 ID。</p>
                     * @param _backId <p>备份记录 ID。</p>
                     * 
                     */
                    void SetBackId(const int64_t& _backId);

                    /**
                     * 判断参数 BackId 是否已赋值
                     * @return BackId 是否已赋值
                     * 
                     */
                    bool BackIdHasBeenSet() const;

                    /**
                     * 获取<p>备份删除时间。</p>
                     * @return DeleteTime <p>备份删除时间。</p>
                     * 
                     */
                    std::string GetDeleteTime() const;

                    /**
                     * 设置<p>备份删除时间。</p>
                     * @param _deleteTime <p>备份删除时间。</p>
                     * 
                     */
                    void SetDeleteTime(const std::string& _deleteTime);

                    /**
                     * 判断参数 DeleteTime 是否已赋值
                     * @return DeleteTime 是否已赋值
                     * 
                     */
                    bool DeleteTimeHasBeenSet() const;

                    /**
                     * 获取<p>异地备份地域。</p>
                     * @return BackupRegion <p>异地备份地域。</p>
                     * 
                     */
                    std::string GetBackupRegion() const;

                    /**
                     * 设置<p>异地备份地域。</p>
                     * @param _backupRegion <p>异地备份地域。</p>
                     * 
                     */
                    void SetBackupRegion(const std::string& _backupRegion);

                    /**
                     * 判断参数 BackupRegion 是否已赋值
                     * @return BackupRegion 是否已赋值
                     * 
                     */
                    bool BackupRegionHasBeenSet() const;

                    /**
                     * 获取<p>备份支持的回档时间。</p>
                     * @return RestoreTime <p>备份支持的回档时间。</p>
                     * 
                     */
                    std::string GetRestoreTime() const;

                    /**
                     * 设置<p>备份支持的回档时间。</p>
                     * @param _restoreTime <p>备份支持的回档时间。</p>
                     * 
                     */
                    void SetRestoreTime(const std::string& _restoreTime);

                    /**
                     * 判断参数 RestoreTime 是否已赋值
                     * @return RestoreTime 是否已赋值
                     * 
                     */
                    bool RestoreTimeHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>备份方式。</p><ul><li>0：自动备份。</li><li>1：手动备份。</li></ul>
                     */
                    uint64_t m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * <p>备份文件名称。</p>
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * <p>备份任务备注信息。</p>
                     */
                    std::string m_backupDesc;
                    bool m_backupDescHasBeenSet;

                    /**
                     * <p>备份文件大小，单位：KB。</p>
                     */
                    uint64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * <p>备份开始时间。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>备份结束时间。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>备份状态。</p><ul><li>1：备份中。</li><li>2：备份成功。</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>备份方式。</p><ul><li>0：逻辑备份。</li><li>1：物理备份。</li><li>3：快照备份。<br><strong>说明:</strong></li><li>通用版实例支持逻辑备份与物理备份。云盘版实例支持物理备份与快照备份，暂不支持逻辑备份。</li><li>实例开通存储加密，则备份方式不能为物理备份。</li></ul>
                     */
                    uint64_t m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * <p>备份记录 ID。</p>
                     */
                    int64_t m_backId;
                    bool m_backIdHasBeenSet;

                    /**
                     * <p>备份删除时间。</p>
                     */
                    std::string m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                    /**
                     * <p>异地备份地域。</p>
                     */
                    std::string m_backupRegion;
                    bool m_backupRegionHasBeenSet;

                    /**
                     * <p>备份支持的回档时间。</p>
                     */
                    std::string m_restoreTime;
                    bool m_restoreTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPINFO_H_
