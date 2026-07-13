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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_REDISBACKUPSET_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_REDISBACKUPSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 实例的备份数组
                */
                class RedisBackupSet : public AbstractModel
                {
                public:
                    RedisBackupSet();
                    ~RedisBackupSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>备份任务ID。</p>
                     * @return BackupId <p>备份任务ID。</p>
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置<p>备份任务ID。</p>
                     * @param _backupId <p>备份任务ID。</p>
                     * 
                     */
                    void SetBackupId(const std::string& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取<p>备份类型。</p><ul><li>1：凌晨系统发起的自动备份。</li><li>0：用户发起的手动备份。</li></ul>
                     * @return BackupType <p>备份类型。</p><ul><li>1：凌晨系统发起的自动备份。</li><li>0：用户发起的手动备份。</li></ul>
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置<p>备份类型。</p><ul><li>1：凌晨系统发起的自动备份。</li><li>0：用户发起的手动备份。</li></ul>
                     * @param _backupType <p>备份类型。</p><ul><li>1：凌晨系统发起的自动备份。</li><li>0：用户发起的手动备份。</li></ul>
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
                     * 获取<p>备份状态。 </p><ul><li>1：备份被其它流程锁定。</li><li>2：备份正常，没有被任何流程锁定。</li><li>-1：备份已过期。</li><li>3：备份正在被导出。</li><li>4：备份导出成功。</li></ul>
                     * @return Status <p>备份状态。 </p><ul><li>1：备份被其它流程锁定。</li><li>2：备份正常，没有被任何流程锁定。</li><li>-1：备份已过期。</li><li>3：备份正在被导出。</li><li>4：备份导出成功。</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>备份状态。 </p><ul><li>1：备份被其它流程锁定。</li><li>2：备份正常，没有被任何流程锁定。</li><li>-1：备份已过期。</li><li>3：备份正在被导出。</li><li>4：备份导出成功。</li></ul>
                     * @param _status <p>备份状态。 </p><ul><li>1：备份被其它流程锁定。</li><li>2：备份正常，没有被任何流程锁定。</li><li>-1：备份已过期。</li><li>3：备份正在被导出。</li><li>4：备份导出成功。</li></ul>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>备份的备注信息。</p>
                     * @return Remark <p>备份的备注信息。</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备份的备注信息。</p>
                     * @param _remark <p>备份的备注信息。</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>备份是否被锁定。</p><ul><li>0：未被锁定。</li><li>1：已被锁定。</li></ul>
                     * @return Locked <p>备份是否被锁定。</p><ul><li>0：未被锁定。</li><li>1：已被锁定。</li></ul>
                     * 
                     */
                    int64_t GetLocked() const;

                    /**
                     * 设置<p>备份是否被锁定。</p><ul><li>0：未被锁定。</li><li>1：已被锁定。</li></ul>
                     * @param _locked <p>备份是否被锁定。</p><ul><li>0：未被锁定。</li><li>1：已被锁定。</li></ul>
                     * 
                     */
                    void SetLocked(const int64_t& _locked);

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     * 
                     */
                    bool LockedHasBeenSet() const;

                    /**
                     * 获取<p>内部字段，用户可忽略。</p>
                     * @return BackupSize <p>内部字段，用户可忽略。</p>
                     * 
                     */
                    int64_t GetBackupSize() const;

                    /**
                     * 设置<p>内部字段，用户可忽略。</p>
                     * @param _backupSize <p>内部字段，用户可忽略。</p>
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
                     * 获取<p>内部字段，用户可忽略。</p>
                     * @return FullBackup <p>内部字段，用户可忽略。</p>
                     * 
                     */
                    int64_t GetFullBackup() const;

                    /**
                     * 设置<p>内部字段，用户可忽略。</p>
                     * @param _fullBackup <p>内部字段，用户可忽略。</p>
                     * 
                     */
                    void SetFullBackup(const int64_t& _fullBackup);

                    /**
                     * 判断参数 FullBackup 是否已赋值
                     * @return FullBackup 是否已赋值
                     * 
                     */
                    bool FullBackupHasBeenSet() const;

                    /**
                     * 获取<p>内部字段，用户可忽略。</p>
                     * @return InstanceType <p>内部字段，用户可忽略。</p>
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置<p>内部字段，用户可忽略。</p>
                     * @param _instanceType <p>内部字段，用户可忽略。</p>
                     * 
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例 ID。</p>
                     * @return InstanceId <p>实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。</p>
                     * @param _instanceId <p>实例 ID。</p>
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
                     * 获取<p>实例名称。</p>
                     * @return InstanceName <p>实例名称。</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称。</p>
                     * @param _instanceName <p>实例名称。</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>本地备份所在地域。</p>
                     * @return Region <p>本地备份所在地域。</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>本地备份所在地域。</p>
                     * @param _region <p>本地备份所在地域。</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

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
                     * 获取<p>备份文件类型。</p>
                     * @return FileType <p>备份文件类型。</p>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>备份文件类型。</p>
                     * @param _fileType <p>备份文件类型。</p>
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取<p>备份文件过期时间。</p>
                     * @return ExpireTime <p>备份文件过期时间。</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>备份文件过期时间。</p>
                     * @param _expireTime <p>备份文件过期时间。</p>
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
                     * 获取<p>备份文件是否加密</p>
                     * @return Encrypted <p>备份文件是否加密</p>
                     * 
                     */
                    bool GetEncrypted() const;

                    /**
                     * 设置<p>备份文件是否加密</p>
                     * @param _encrypted <p>备份文件是否加密</p>
                     * 
                     */
                    void SetEncrypted(const bool& _encrypted);

                    /**
                     * 判断参数 Encrypted 是否已赋值
                     * @return Encrypted 是否已赋值
                     * 
                     */
                    bool EncryptedHasBeenSet() const;

                private:

                    /**
                     * <p>备份开始时间。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>备份任务ID。</p>
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * <p>备份类型。</p><ul><li>1：凌晨系统发起的自动备份。</li><li>0：用户发起的手动备份。</li></ul>
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * <p>备份状态。 </p><ul><li>1：备份被其它流程锁定。</li><li>2：备份正常，没有被任何流程锁定。</li><li>-1：备份已过期。</li><li>3：备份正在被导出。</li><li>4：备份导出成功。</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>备份的备注信息。</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>备份是否被锁定。</p><ul><li>0：未被锁定。</li><li>1：已被锁定。</li></ul>
                     */
                    int64_t m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * <p>内部字段，用户可忽略。</p>
                     */
                    int64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * <p>内部字段，用户可忽略。</p>
                     */
                    int64_t m_fullBackup;
                    bool m_fullBackupHasBeenSet;

                    /**
                     * <p>内部字段，用户可忽略。</p>
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称。</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>本地备份所在地域。</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>备份结束时间。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>备份文件类型。</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>备份文件过期时间。</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>备份文件是否加密</p>
                     */
                    bool m_encrypted;
                    bool m_encryptedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_REDISBACKUPSET_H_
