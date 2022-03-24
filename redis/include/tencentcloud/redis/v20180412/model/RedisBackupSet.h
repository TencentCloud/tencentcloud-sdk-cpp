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
                     * 获取开始备份的时间
                     * @return StartTime 开始备份的时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始备份的时间
                     * @param StartTime 开始备份的时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取备份ID
                     * @return BackupId 备份ID
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置备份ID
                     * @param BackupId 备份ID
                     */
                    void SetBackupId(const std::string& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取备份类型。 manualBackupInstance：用户发起的手动备份； systemBackupInstance：凌晨系统发起的备份
                     * @return BackupType 备份类型。 manualBackupInstance：用户发起的手动备份； systemBackupInstance：凌晨系统发起的备份
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置备份类型。 manualBackupInstance：用户发起的手动备份； systemBackupInstance：凌晨系统发起的备份
                     * @param BackupType 备份类型。 manualBackupInstance：用户发起的手动备份； systemBackupInstance：凌晨系统发起的备份
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取备份状态。  1:"备份被其它流程锁定";  2:"备份正常，没有被任何流程锁定";  -1:"备份已过期"； 3:"备份正在被导出";  4:"备份导出成功"
                     * @return Status 备份状态。  1:"备份被其它流程锁定";  2:"备份正常，没有被任何流程锁定";  -1:"备份已过期"； 3:"备份正在被导出";  4:"备份导出成功"
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置备份状态。  1:"备份被其它流程锁定";  2:"备份正常，没有被任何流程锁定";  -1:"备份已过期"； 3:"备份正在被导出";  4:"备份导出成功"
                     * @param Status 备份状态。  1:"备份被其它流程锁定";  2:"备份正常，没有被任何流程锁定";  -1:"备份已过期"； 3:"备份正在被导出";  4:"备份导出成功"
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取备份的备注信息
                     * @return Remark 备份的备注信息
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备份的备注信息
                     * @param Remark 备份的备注信息
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取备份是否被锁定，0：未被锁定；1：已被锁定
                     * @return Locked 备份是否被锁定，0：未被锁定；1：已被锁定
                     */
                    int64_t GetLocked() const;

                    /**
                     * 设置备份是否被锁定，0：未被锁定；1：已被锁定
                     * @param Locked 备份是否被锁定，0：未被锁定；1：已被锁定
                     */
                    void SetLocked(const int64_t& _locked);

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     */
                    bool LockedHasBeenSet() const;

                    /**
                     * 获取内部字段，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupSize 内部字段，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetBackupSize() const;

                    /**
                     * 设置内部字段，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BackupSize 内部字段，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBackupSize(const int64_t& _backupSize);

                    /**
                     * 判断参数 BackupSize 是否已赋值
                     * @return BackupSize 是否已赋值
                     */
                    bool BackupSizeHasBeenSet() const;

                    /**
                     * 获取内部字段，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FullBackup 内部字段，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetFullBackup() const;

                    /**
                     * 设置内部字段，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FullBackup 内部字段，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFullBackup(const int64_t& _fullBackup);

                    /**
                     * 判断参数 FullBackup 是否已赋值
                     * @return FullBackup 是否已赋值
                     */
                    bool FullBackupHasBeenSet() const;

                    /**
                     * 获取内部字段，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType 内部字段，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置内部字段，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceType 内部字段，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                private:

                    /**
                     * 开始备份的时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 备份ID
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * 备份类型。 manualBackupInstance：用户发起的手动备份； systemBackupInstance：凌晨系统发起的备份
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 备份状态。  1:"备份被其它流程锁定";  2:"备份正常，没有被任何流程锁定";  -1:"备份已过期"； 3:"备份正在被导出";  4:"备份导出成功"
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 备份的备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 备份是否被锁定，0：未被锁定；1：已被锁定
                     */
                    int64_t m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * 内部字段，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * 内部字段，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fullBackup;
                    bool m_fullBackupHasBeenSet;

                    /**
                     * 内部字段，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_REDISBACKUPSET_H_
