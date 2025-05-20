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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKDATA_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/RollbackDatabase.h>
#include <tencentcloud/cynosdb/v20190107/model/RollbackTable.h>
#include <tencentcloud/cynosdb/v20190107/model/RollbackProcessInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 回档任务信息
                */
                class RollbackData : public AbstractModel
                {
                public:
                    RollbackData();
                    ~RollbackData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例CPU
                     * @return Cpu 实例CPU
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置实例CPU
                     * @param _cpu 实例CPU
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取实例内存
                     * @return Memory 实例内存
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置实例内存
                     * @param _memory 实例内存
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取集群存储上限
                     * @return StorageLimit 集群存储上限
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置集群存储上限
                     * @param _storageLimit 集群存储上限
                     * 
                     */
                    void SetStorageLimit(const int64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     * 
                     */
                    bool StorageLimitHasBeenSet() const;

                    /**
                     * 获取原集群id
                     * @return OriginalClusterId 原集群id
                     * 
                     */
                    std::string GetOriginalClusterId() const;

                    /**
                     * 设置原集群id
                     * @param _originalClusterId 原集群id
                     * 
                     */
                    void SetOriginalClusterId(const std::string& _originalClusterId);

                    /**
                     * 判断参数 OriginalClusterId 是否已赋值
                     * @return OriginalClusterId 是否已赋值
                     * 
                     */
                    bool OriginalClusterIdHasBeenSet() const;

                    /**
                     * 获取原集群名
                     * @return OriginalClusterName 原集群名
                     * 
                     */
                    std::string GetOriginalClusterName() const;

                    /**
                     * 设置原集群名
                     * @param _originalClusterName 原集群名
                     * 
                     */
                    void SetOriginalClusterName(const std::string& _originalClusterName);

                    /**
                     * 判断参数 OriginalClusterName 是否已赋值
                     * @return OriginalClusterName 是否已赋值
                     * 
                     */
                    bool OriginalClusterNameHasBeenSet() const;

                    /**
                     * 获取回档方式
                     * @return RollbackStrategy 回档方式
                     * 
                     */
                    std::string GetRollbackStrategy() const;

                    /**
                     * 设置回档方式
                     * @param _rollbackStrategy 回档方式
                     * 
                     */
                    void SetRollbackStrategy(const std::string& _rollbackStrategy);

                    /**
                     * 判断参数 RollbackStrategy 是否已赋值
                     * @return RollbackStrategy 是否已赋值
                     * 
                     */
                    bool RollbackStrategyHasBeenSet() const;

                    /**
                     * 获取快照时间
                     * @return SnapshotTime 快照时间
                     * 
                     */
                    std::string GetSnapshotTime() const;

                    /**
                     * 设置快照时间
                     * @param _snapshotTime 快照时间
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
                     * 获取回档到 Serverless 集群时最小 CPU
                     * @return MinCpu 回档到 Serverless 集群时最小 CPU
                     * 
                     */
                    int64_t GetMinCpu() const;

                    /**
                     * 设置回档到 Serverless 集群时最小 CPU
                     * @param _minCpu 回档到 Serverless 集群时最小 CPU
                     * 
                     */
                    void SetMinCpu(const int64_t& _minCpu);

                    /**
                     * 判断参数 MinCpu 是否已赋值
                     * @return MinCpu 是否已赋值
                     * 
                     */
                    bool MinCpuHasBeenSet() const;

                    /**
                     * 获取回档到 Serverless 集群时最大 CPU
                     * @return MaxCpu 回档到 Serverless 集群时最大 CPU
                     * 
                     */
                    int64_t GetMaxCpu() const;

                    /**
                     * 设置回档到 Serverless 集群时最大 CPU
                     * @param _maxCpu 回档到 Serverless 集群时最大 CPU
                     * 
                     */
                    void SetMaxCpu(const int64_t& _maxCpu);

                    /**
                     * 判断参数 MaxCpu 是否已赋值
                     * @return MaxCpu 是否已赋值
                     * 
                     */
                    bool MaxCpuHasBeenSet() const;

                    /**
                     * 获取快照ID
                     * @return SnapShotId 快照ID
                     * 
                     */
                    uint64_t GetSnapShotId() const;

                    /**
                     * 设置快照ID
                     * @param _snapShotId 快照ID
                     * 
                     */
                    void SetSnapShotId(const uint64_t& _snapShotId);

                    /**
                     * 判断参数 SnapShotId 是否已赋值
                     * @return SnapShotId 是否已赋值
                     * 
                     */
                    bool SnapShotIdHasBeenSet() const;

                    /**
                     * 获取回档数据库
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RollbackDatabases 回档数据库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RollbackDatabase> GetRollbackDatabases() const;

                    /**
                     * 设置回档数据库
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rollbackDatabases 回档数据库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRollbackDatabases(const std::vector<RollbackDatabase>& _rollbackDatabases);

                    /**
                     * 判断参数 RollbackDatabases 是否已赋值
                     * @return RollbackDatabases 是否已赋值
                     * 
                     */
                    bool RollbackDatabasesHasBeenSet() const;

                    /**
                     * 获取回档数据表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RollbackTables 回档数据表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RollbackTable> GetRollbackTables() const;

                    /**
                     * 设置回档数据表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rollbackTables 回档数据表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRollbackTables(const std::vector<RollbackTable>& _rollbackTables);

                    /**
                     * 判断参数 RollbackTables 是否已赋值
                     * @return RollbackTables 是否已赋值
                     * 
                     */
                    bool RollbackTablesHasBeenSet() const;

                    /**
                     * 获取备份文件名称
                     * @return BackupFileName 备份文件名称
                     * 
                     */
                    std::string GetBackupFileName() const;

                    /**
                     * 设置备份文件名称
                     * @param _backupFileName 备份文件名称
                     * 
                     */
                    void SetBackupFileName(const std::string& _backupFileName);

                    /**
                     * 判断参数 BackupFileName 是否已赋值
                     * @return BackupFileName 是否已赋值
                     * 
                     */
                    bool BackupFileNameHasBeenSet() const;

                    /**
                     * 获取回档进程
                     * @return RollbackProcess 回档进程
                     * 
                     */
                    RollbackProcessInfo GetRollbackProcess() const;

                    /**
                     * 设置回档进程
                     * @param _rollbackProcess 回档进程
                     * 
                     */
                    void SetRollbackProcess(const RollbackProcessInfo& _rollbackProcess);

                    /**
                     * 判断参数 RollbackProcess 是否已赋值
                     * @return RollbackProcess 是否已赋值
                     * 
                     */
                    bool RollbackProcessHasBeenSet() const;

                private:

                    /**
                     * 实例CPU
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 实例内存
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 集群存储上限
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * 原集群id
                     */
                    std::string m_originalClusterId;
                    bool m_originalClusterIdHasBeenSet;

                    /**
                     * 原集群名
                     */
                    std::string m_originalClusterName;
                    bool m_originalClusterNameHasBeenSet;

                    /**
                     * 回档方式
                     */
                    std::string m_rollbackStrategy;
                    bool m_rollbackStrategyHasBeenSet;

                    /**
                     * 快照时间
                     */
                    std::string m_snapshotTime;
                    bool m_snapshotTimeHasBeenSet;

                    /**
                     * 回档到 Serverless 集群时最小 CPU
                     */
                    int64_t m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * 回档到 Serverless 集群时最大 CPU
                     */
                    int64_t m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * 快照ID
                     */
                    uint64_t m_snapShotId;
                    bool m_snapShotIdHasBeenSet;

                    /**
                     * 回档数据库
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RollbackDatabase> m_rollbackDatabases;
                    bool m_rollbackDatabasesHasBeenSet;

                    /**
                     * 回档数据表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RollbackTable> m_rollbackTables;
                    bool m_rollbackTablesHasBeenSet;

                    /**
                     * 备份文件名称
                     */
                    std::string m_backupFileName;
                    bool m_backupFileNameHasBeenSet;

                    /**
                     * 回档进程
                     */
                    RollbackProcessInfo m_rollbackProcess;
                    bool m_rollbackProcessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKDATA_H_
