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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPLISTREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeBackupList请求参数结构体
                */
                class DescribeBackupListRequest : public AbstractModel
                {
                public:
                    DescribeBackupListRequest();
                    ~DescribeBackupListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取返回数量，取值范围(0,100]
                     * @return Limit 返回数量，取值范围(0,100]
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，取值范围(0,100]
                     * @param _limit 返回数量，取值范围(0,100]
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取记录偏移量，取值范围[0,INF)
                     * @return Offset 记录偏移量，取值范围[0,INF)
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置记录偏移量，取值范围[0,INF)
                     * @param _offset 记录偏移量，取值范围[0,INF)
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取数据库类型，取值范围: 
<li> MYSQL </li>
                     * @return DbType 数据库类型，取值范围: 
<li> MYSQL </li>
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置数据库类型，取值范围: 
<li> MYSQL </li>
                     * @param _dbType 数据库类型，取值范围: 
<li> MYSQL </li>
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取备份ID
                     * @return BackupIds 备份ID
                     * 
                     */
                    std::vector<int64_t> GetBackupIds() const;

                    /**
                     * 设置备份ID
                     * @param _backupIds 备份ID
                     * 
                     */
                    void SetBackupIds(const std::vector<int64_t>& _backupIds);

                    /**
                     * 判断参数 BackupIds 是否已赋值
                     * @return BackupIds 是否已赋值
                     * 
                     */
                    bool BackupIdsHasBeenSet() const;

                    /**
                     * 获取备份类型，可选值：snapshot，快照备份； logic，逻辑备份
                     * @return BackupType 备份类型，可选值：snapshot，快照备份； logic，逻辑备份
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置备份类型，可选值：snapshot，快照备份； logic，逻辑备份
                     * @param _backupType 备份类型，可选值：snapshot，快照备份； logic，逻辑备份
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
                     * 获取备份方式，可选值：auto，自动备份；manual，手动备份
                     * @return BackupMethod 备份方式，可选值：auto，自动备份；manual，手动备份
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置备份方式，可选值：auto，自动备份；manual，手动备份
                     * @param _backupMethod 备份方式，可选值：auto，自动备份；manual，手动备份
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
                     * 获取备份结束时间
                     * @return EndTime 备份结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置备份结束时间
                     * @param _endTime 备份结束时间
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
                     * 获取备份文件名，模糊查询
                     * @return FileNames 备份文件名，模糊查询
                     * 
                     */
                    std::vector<std::string> GetFileNames() const;

                    /**
                     * 设置备份文件名，模糊查询
                     * @param _fileNames 备份文件名，模糊查询
                     * 
                     */
                    void SetFileNames(const std::vector<std::string>& _fileNames);

                    /**
                     * 判断参数 FileNames 是否已赋值
                     * @return FileNames 是否已赋值
                     * 
                     */
                    bool FileNamesHasBeenSet() const;

                    /**
                     * 获取备份备注名，模糊查询
                     * @return BackupNames 备份备注名，模糊查询
                     * 
                     */
                    std::vector<std::string> GetBackupNames() const;

                    /**
                     * 设置备份备注名，模糊查询
                     * @param _backupNames 备份备注名，模糊查询
                     * 
                     */
                    void SetBackupNames(const std::vector<std::string>& _backupNames);

                    /**
                     * 判断参数 BackupNames 是否已赋值
                     * @return BackupNames 是否已赋值
                     * 
                     */
                    bool BackupNamesHasBeenSet() const;

                    /**
                     * 获取快照备份Id列表
                     * @return SnapshotIdList 快照备份Id列表
                     * 
                     */
                    std::vector<int64_t> GetSnapshotIdList() const;

                    /**
                     * 设置快照备份Id列表
                     * @param _snapshotIdList 快照备份Id列表
                     * 
                     */
                    void SetSnapshotIdList(const std::vector<int64_t>& _snapshotIdList);

                    /**
                     * 判断参数 SnapshotIdList 是否已赋值
                     * @return SnapshotIdList 是否已赋值
                     * 
                     */
                    bool SnapshotIdListHasBeenSet() const;

                    /**
                     * 获取备份地域
                     * @return BackupRegion 备份地域
                     * 
                     */
                    std::string GetBackupRegion() const;

                    /**
                     * 设置备份地域
                     * @param _backupRegion 备份地域
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
                     * 获取是否跨地域备份
                     * @return IsCrossRegionsBackup 是否跨地域备份
                     * 
                     */
                    std::string GetIsCrossRegionsBackup() const;

                    /**
                     * 设置是否跨地域备份
                     * @param _isCrossRegionsBackup 是否跨地域备份
                     * 
                     */
                    void SetIsCrossRegionsBackup(const std::string& _isCrossRegionsBackup);

                    /**
                     * 判断参数 IsCrossRegionsBackup 是否已赋值
                     * @return IsCrossRegionsBackup 是否已赋值
                     * 
                     */
                    bool IsCrossRegionsBackupHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 返回数量，取值范围(0,100]
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 记录偏移量，取值范围[0,INF)
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 数据库类型，取值范围: 
<li> MYSQL </li>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * 备份ID
                     */
                    std::vector<int64_t> m_backupIds;
                    bool m_backupIdsHasBeenSet;

                    /**
                     * 备份类型，可选值：snapshot，快照备份； logic，逻辑备份
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 备份方式，可选值：auto，自动备份；manual，手动备份
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * 快照类型，可选值：full，全量；increment，增量
                     */
                    std::string m_snapShotType;
                    bool m_snapShotTypeHasBeenSet;

                    /**
                     * 备份开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 备份结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 备份文件名，模糊查询
                     */
                    std::vector<std::string> m_fileNames;
                    bool m_fileNamesHasBeenSet;

                    /**
                     * 备份备注名，模糊查询
                     */
                    std::vector<std::string> m_backupNames;
                    bool m_backupNamesHasBeenSet;

                    /**
                     * 快照备份Id列表
                     */
                    std::vector<int64_t> m_snapshotIdList;
                    bool m_snapshotIdListHasBeenSet;

                    /**
                     * 备份地域
                     */
                    std::string m_backupRegion;
                    bool m_backupRegionHasBeenSet;

                    /**
                     * 是否跨地域备份
                     */
                    std::string m_isCrossRegionsBackup;
                    bool m_isCrossRegionsBackupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPLISTREQUEST_H_
