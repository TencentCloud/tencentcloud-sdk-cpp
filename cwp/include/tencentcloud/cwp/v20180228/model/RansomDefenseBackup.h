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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSEBACKUP_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSEBACKUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 主机快照备份列表
                */
                class RansomDefenseBackup : public AbstractModel
                {
                public:
                    RansomDefenseBackup();
                    ~RansomDefenseBackup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份时间
                     * @return BackupTime 备份时间
                     * 
                     */
                    std::string GetBackupTime() const;

                    /**
                     * 设置备份时间
                     * @param _backupTime 备份时间
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
                     * 获取勒索状态：0无告警, 1有告警
                     * @return EventStatus 勒索状态：0无告警, 1有告警
                     * 
                     */
                    uint64_t GetEventStatus() const;

                    /**
                     * 设置勒索状态：0无告警, 1有告警
                     * @param _eventStatus 勒索状态：0无告警, 1有告警
                     * 
                     */
                    void SetEventStatus(const uint64_t& _eventStatus);

                    /**
                     * 判断参数 EventStatus 是否已赋值
                     * @return EventStatus 是否已赋值
                     * 
                     */
                    bool EventStatusHasBeenSet() const;

                    /**
                     * 获取备份状态：0备份中，1正常，2、3失败，4快照已过期，5快照数量超出限制，9快照已删除
                     * @return BackupStatus 备份状态：0备份中，1正常，2、3失败，4快照已过期，5快照数量超出限制，9快照已删除
                     * 
                     */
                    uint64_t GetBackupStatus() const;

                    /**
                     * 设置备份状态：0备份中，1正常，2、3失败，4快照已过期，5快照数量超出限制，9快照已删除
                     * @param _backupStatus 备份状态：0备份中，1正常，2、3失败，4快照已过期，5快照数量超出限制，9快照已删除
                     * 
                     */
                    void SetBackupStatus(const uint64_t& _backupStatus);

                    /**
                     * 判断参数 BackupStatus 是否已赋值
                     * @return BackupStatus 是否已赋值
                     * 
                     */
                    bool BackupStatusHasBeenSet() const;

                    /**
                     * 获取备份磁盘数量
                     * @return DiskCount 备份磁盘数量
                     * 
                     */
                    uint64_t GetDiskCount() const;

                    /**
                     * 设置备份磁盘数量
                     * @param _diskCount 备份磁盘数量
                     * 
                     */
                    void SetDiskCount(const uint64_t& _diskCount);

                    /**
                     * 判断参数 DiskCount 是否已赋值
                     * @return DiskCount 是否已赋值
                     * 
                     */
                    bool DiskCountHasBeenSet() const;

                    /**
                     * 获取硬盘信息，；分隔
                     * @return Disks 硬盘信息，；分隔
                     * 
                     */
                    std::string GetDisks() const;

                    /**
                     * 设置硬盘信息，；分隔
                     * @param _disks 硬盘信息，；分隔
                     * 
                     */
                    void SetDisks(const std::string& _disks);

                    /**
                     * 判断参数 Disks 是否已赋值
                     * @return Disks 是否已赋值
                     * 
                     */
                    bool DisksHasBeenSet() const;

                    /**
                     * 获取快照列表，；分隔
                     * @return SnapshotIds 快照列表，；分隔
                     * 
                     */
                    std::string GetSnapshotIds() const;

                    /**
                     * 设置快照列表，；分隔
                     * @param _snapshotIds 快照列表，；分隔
                     * 
                     */
                    void SetSnapshotIds(const std::string& _snapshotIds);

                    /**
                     * 判断参数 SnapshotIds 是否已赋值
                     * @return SnapshotIds 是否已赋值
                     * 
                     */
                    bool SnapshotIdsHasBeenSet() const;

                    /**
                     * 获取策略id
                     * @return StrategyId 策略id
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置策略id
                     * @param _strategyId 策略id
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取策略状态:0关闭，1开启，9已删除
                     * @return StrategyStatus 策略状态:0关闭，1开启，9已删除
                     * 
                     */
                    uint64_t GetStrategyStatus() const;

                    /**
                     * 设置策略状态:0关闭，1开启，9已删除
                     * @param _strategyStatus 策略状态:0关闭，1开启，9已删除
                     * 
                     */
                    void SetStrategyStatus(const uint64_t& _strategyStatus);

                    /**
                     * 判断参数 StrategyStatus 是否已赋值
                     * @return StrategyStatus 是否已赋值
                     * 
                     */
                    bool StrategyStatusHasBeenSet() const;

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

                private:

                    /**
                     * 备份时间
                     */
                    std::string m_backupTime;
                    bool m_backupTimeHasBeenSet;

                    /**
                     * 勒索状态：0无告警, 1有告警
                     */
                    uint64_t m_eventStatus;
                    bool m_eventStatusHasBeenSet;

                    /**
                     * 备份状态：0备份中，1正常，2、3失败，4快照已过期，5快照数量超出限制，9快照已删除
                     */
                    uint64_t m_backupStatus;
                    bool m_backupStatusHasBeenSet;

                    /**
                     * 备份磁盘数量
                     */
                    uint64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                    /**
                     * 硬盘信息，；分隔
                     */
                    std::string m_disks;
                    bool m_disksHasBeenSet;

                    /**
                     * 快照列表，；分隔
                     */
                    std::string m_snapshotIds;
                    bool m_snapshotIdsHasBeenSet;

                    /**
                     * 策略id
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 策略状态:0关闭，1开启，9已删除
                     */
                    uint64_t m_strategyStatus;
                    bool m_strategyStatusHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSEBACKUP_H_
