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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/BackupVolumeInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeBackupOverview返回参数结构体
                */
                class DescribeBackupOverviewResponse : public AbstractModel
                {
                public:
                    DescribeBackupOverviewResponse();
                    ~DescribeBackupOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取备份总容量
                     * @return BackupTotalVolume 备份总容量
                     * 
                     */
                    double GetBackupTotalVolume() const;

                    /**
                     * 判断参数 BackupTotalVolume 是否已赋值
                     * @return BackupTotalVolume 是否已赋值
                     * 
                     */
                    bool BackupTotalVolumeHasBeenSet() const;

                    /**
                     * 获取备份快照容量
                     * @return BackupSnapshotVolume 备份快照容量
                     * 
                     */
                    double GetBackupSnapshotVolume() const;

                    /**
                     * 判断参数 BackupSnapshotVolume 是否已赋值
                     * @return BackupSnapshotVolume 是否已赋值
                     * 
                     */
                    bool BackupSnapshotVolumeHasBeenSet() const;

                    /**
                     * 获取备份逻辑容量
                     * @return BackupLogicVolume 备份逻辑容量
                     * 
                     */
                    double GetBackupLogicVolume() const;

                    /**
                     * 判断参数 BackupLogicVolume 是否已赋值
                     * @return BackupLogicVolume 是否已赋值
                     * 
                     */
                    bool BackupLogicVolumeHasBeenSet() const;

                    /**
                     * 获取日志总容量
                     * @return LogTotalVolume 日志总容量
                     * 
                     */
                    double GetLogTotalVolume() const;

                    /**
                     * 判断参数 LogTotalVolume 是否已赋值
                     * @return LogTotalVolume 是否已赋值
                     * 
                     */
                    bool LogTotalVolumeHasBeenSet() const;

                    /**
                     * 获取日志binlog容量
                     * @return LogBinlogVolume 日志binlog容量
                     * 
                     */
                    double GetLogBinlogVolume() const;

                    /**
                     * 判断参数 LogBinlogVolume 是否已赋值
                     * @return LogBinlogVolume 是否已赋值
                     * 
                     */
                    bool LogBinlogVolumeHasBeenSet() const;

                    /**
                     * 获取日志redolog容量
                     * @return LogRedoLogVolume 日志redolog容量
                     * 
                     */
                    double GetLogRedoLogVolume() const;

                    /**
                     * 判断参数 LogRedoLogVolume 是否已赋值
                     * @return LogRedoLogVolume 是否已赋值
                     * 
                     */
                    bool LogRedoLogVolumeHasBeenSet() const;

                    /**
                     * 获取跨地域备份总容量
                     * @return CrossTotalVolume 跨地域备份总容量
                     * 
                     */
                    double GetCrossTotalVolume() const;

                    /**
                     * 判断参数 CrossTotalVolume 是否已赋值
                     * @return CrossTotalVolume 是否已赋值
                     * 
                     */
                    bool CrossTotalVolumeHasBeenSet() const;

                    /**
                     * 获取跨地域备份容量
                     * @return CrossRegionBackupVolume 跨地域备份容量
                     * 
                     */
                    double GetCrossRegionBackupVolume() const;

                    /**
                     * 判断参数 CrossRegionBackupVolume 是否已赋值
                     * @return CrossRegionBackupVolume 是否已赋值
                     * 
                     */
                    bool CrossRegionBackupVolumeHasBeenSet() const;

                    /**
                     * 获取跨地域日志容量
                     * @return CrossRegionLogVolume 跨地域日志容量
                     * 
                     */
                    double GetCrossRegionLogVolume() const;

                    /**
                     * 判断参数 CrossRegionLogVolume 是否已赋值
                     * @return CrossRegionLogVolume 是否已赋值
                     * 
                     */
                    bool CrossRegionLogVolumeHasBeenSet() const;

                    /**
                     * 获取备份容量详情
                     * @return BackupVolumeInfos 备份容量详情
                     * 
                     */
                    std::vector<BackupVolumeInfo> GetBackupVolumeInfos() const;

                    /**
                     * 判断参数 BackupVolumeInfos 是否已赋值
                     * @return BackupVolumeInfos 是否已赋值
                     * 
                     */
                    bool BackupVolumeInfosHasBeenSet() const;

                    /**
                     * 获取跨地域备份容量详情
                     * @return CrossRegionBackupVolumeInfos 跨地域备份容量详情
                     * 
                     */
                    std::vector<BackupVolumeInfo> GetCrossRegionBackupVolumeInfos() const;

                    /**
                     * 判断参数 CrossRegionBackupVolumeInfos 是否已赋值
                     * @return CrossRegionBackupVolumeInfos 是否已赋值
                     * 
                     */
                    bool CrossRegionBackupVolumeInfosHasBeenSet() const;

                    /**
                     * 获取跨地域信息
                     * @return CrossRegions 跨地域信息
                     * 
                     */
                    std::vector<std::string> GetCrossRegions() const;

                    /**
                     * 判断参数 CrossRegions 是否已赋值
                     * @return CrossRegions 是否已赋值
                     * 
                     */
                    bool CrossRegionsHasBeenSet() const;

                private:

                    /**
                     * 备份总容量
                     */
                    double m_backupTotalVolume;
                    bool m_backupTotalVolumeHasBeenSet;

                    /**
                     * 备份快照容量
                     */
                    double m_backupSnapshotVolume;
                    bool m_backupSnapshotVolumeHasBeenSet;

                    /**
                     * 备份逻辑容量
                     */
                    double m_backupLogicVolume;
                    bool m_backupLogicVolumeHasBeenSet;

                    /**
                     * 日志总容量
                     */
                    double m_logTotalVolume;
                    bool m_logTotalVolumeHasBeenSet;

                    /**
                     * 日志binlog容量
                     */
                    double m_logBinlogVolume;
                    bool m_logBinlogVolumeHasBeenSet;

                    /**
                     * 日志redolog容量
                     */
                    double m_logRedoLogVolume;
                    bool m_logRedoLogVolumeHasBeenSet;

                    /**
                     * 跨地域备份总容量
                     */
                    double m_crossTotalVolume;
                    bool m_crossTotalVolumeHasBeenSet;

                    /**
                     * 跨地域备份容量
                     */
                    double m_crossRegionBackupVolume;
                    bool m_crossRegionBackupVolumeHasBeenSet;

                    /**
                     * 跨地域日志容量
                     */
                    double m_crossRegionLogVolume;
                    bool m_crossRegionLogVolumeHasBeenSet;

                    /**
                     * 备份容量详情
                     */
                    std::vector<BackupVolumeInfo> m_backupVolumeInfos;
                    bool m_backupVolumeInfosHasBeenSet;

                    /**
                     * 跨地域备份容量详情
                     */
                    std::vector<BackupVolumeInfo> m_crossRegionBackupVolumeInfos;
                    bool m_crossRegionBackupVolumeInfosHasBeenSet;

                    /**
                     * 跨地域信息
                     */
                    std::vector<std::string> m_crossRegions;
                    bool m_crossRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPOVERVIEWRESPONSE_H_
