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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPDETAILRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeBackupDetail返回参数结构体
                */
                class DescribeBackupDetailResponse : public AbstractModel
                {
                public:
                    DescribeBackupDetailResponse();
                    ~DescribeBackupDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取备份 ID。
                     * @return BackupId 备份 ID。
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取备份开始时间。
                     * @return StartTime 备份开始时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取备份结束时间。
                     * @return EndTime 备份结束时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取备份方式。 

- 1：手动备份。
-  0：自动备份。
                     * @return BackupType 备份方式。 

- 1：手动备份。
-  0：自动备份。
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取备份状态。 

- 1：备份被其它流程锁定。
- 2：备份正常，没有被任何流程锁定。
- -1：备份已过期。
- 3：备份正在被导出。
- 4：备份导出成功。
                     * @return Status 备份状态。 

- 1：备份被其它流程锁定。
- 2：备份正常，没有被任何流程锁定。
- -1：备份已过期。
- 3：备份正在被导出。
- 4：备份导出成功。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取备份的备注信息。
                     * @return Remark 备份的备注信息。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取备份是否被锁定。

- 0：未被锁定。
- 1：已被锁定。
                     * @return Locked 备份是否被锁定。

- 0：未被锁定。
- 1：已被锁定。
                     * 
                     */
                    int64_t GetLocked() const;

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     * 
                     */
                    bool LockedHasBeenSet() const;

                    /**
                     * 获取备份文件大小。单位：Byte。
                     * @return BackupSize 备份文件大小。单位：Byte。
                     * 
                     */
                    int64_t GetBackupSize() const;

                    /**
                     * 判断参数 BackupSize 是否已赋值
                     * @return BackupSize 是否已赋值
                     * 
                     */
                    bool BackupSizeHasBeenSet() const;

                    /**
                     * 获取实例类型。
                     * @return InstanceType 实例类型。
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取单分片内存规格大小，单位：MB。
                     * @return MemSize 单分片内存规格大小，单位：MB。
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取分片数量。
                     * @return ShardNum 分片数量。
                     * 
                     */
                    int64_t GetShardNum() const;

                    /**
                     * 判断参数 ShardNum 是否已赋值
                     * @return ShardNum 是否已赋值
                     * 
                     */
                    bool ShardNumHasBeenSet() const;

                    /**
                     * 获取副本数量。
                     * @return ReplicasNum 副本数量。
                     * 
                     */
                    int64_t GetReplicasNum() const;

                    /**
                     * 判断参数 ReplicasNum 是否已赋值
                     * @return ReplicasNum 是否已赋值
                     * 
                     */
                    bool ReplicasNumHasBeenSet() const;

                private:

                    /**
                     * 备份 ID。
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * 备份开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 备份结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 备份方式。 

- 1：手动备份。
-  0：自动备份。
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 备份状态。 

- 1：备份被其它流程锁定。
- 2：备份正常，没有被任何流程锁定。
- -1：备份已过期。
- 3：备份正在被导出。
- 4：备份导出成功。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 备份的备注信息。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 备份是否被锁定。

- 0：未被锁定。
- 1：已被锁定。
                     */
                    int64_t m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * 备份文件大小。单位：Byte。
                     */
                    int64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * 实例类型。
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 单分片内存规格大小，单位：MB。
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 分片数量。
                     */
                    int64_t m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * 副本数量。
                     */
                    int64_t m_replicasNum;
                    bool m_replicasNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPDETAILRESPONSE_H_
