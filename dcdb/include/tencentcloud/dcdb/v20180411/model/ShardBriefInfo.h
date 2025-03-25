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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_SHARDBRIEFINFO_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_SHARDBRIEFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/NodeInfo.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DCDB分片信息
                */
                class ShardBriefInfo : public AbstractModel
                {
                public:
                    ShardBriefInfo();
                    ~ShardBriefInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分片SerialId
                     * @return ShardSerialId 分片SerialId
                     * 
                     */
                    std::string GetShardSerialId() const;

                    /**
                     * 设置分片SerialId
                     * @param _shardSerialId 分片SerialId
                     * 
                     */
                    void SetShardSerialId(const std::string& _shardSerialId);

                    /**
                     * 判断参数 ShardSerialId 是否已赋值
                     * @return ShardSerialId 是否已赋值
                     * 
                     */
                    bool ShardSerialIdHasBeenSet() const;

                    /**
                     * 获取分片ID，形如shard-7vg1o339
                     * @return ShardInstanceId 分片ID，形如shard-7vg1o339
                     * 
                     */
                    std::string GetShardInstanceId() const;

                    /**
                     * 设置分片ID，形如shard-7vg1o339
                     * @param _shardInstanceId 分片ID，形如shard-7vg1o339
                     * 
                     */
                    void SetShardInstanceId(const std::string& _shardInstanceId);

                    /**
                     * 判断参数 ShardInstanceId 是否已赋值
                     * @return ShardInstanceId 是否已赋值
                     * 
                     */
                    bool ShardInstanceIdHasBeenSet() const;

                    /**
                     * 获取分片运行状态
                     * @return Status 分片运行状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置分片运行状态
                     * @param _status 分片运行状态
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
                     * 获取分片运行状态描述
                     * @return StatusDesc 分片运行状态描述
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置分片运行状态描述
                     * @param _statusDesc 分片运行状态描述
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取分片创建时间
                     * @return CreateTime 分片创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置分片创建时间
                     * @param _createTime 分片创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取分片内存大小，单位GB
                     * @return Memory 分片内存大小，单位GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置分片内存大小，单位GB
                     * @param _memory 分片内存大小，单位GB
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
                     * 获取分片磁盘大小，单位GB
                     * @return Storage 分片磁盘大小，单位GB
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置分片磁盘大小，单位GB
                     * @param _storage 分片磁盘大小，单位GB
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取分片日志磁盘空间大小，单位GB
                     * @return LogDisk 分片日志磁盘空间大小，单位GB
                     * 
                     */
                    int64_t GetLogDisk() const;

                    /**
                     * 设置分片日志磁盘空间大小，单位GB
                     * @param _logDisk 分片日志磁盘空间大小，单位GB
                     * 
                     */
                    void SetLogDisk(const int64_t& _logDisk);

                    /**
                     * 判断参数 LogDisk 是否已赋值
                     * @return LogDisk 是否已赋值
                     * 
                     */
                    bool LogDiskHasBeenSet() const;

                    /**
                     * 获取分片节点个数
                     * @return NodeCount 分片节点个数
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置分片节点个数
                     * @param _nodeCount 分片节点个数
                     * 
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取分片磁盘空间使用率
                     * @return StorageUsage 分片磁盘空间使用率
                     * 
                     */
                    double GetStorageUsage() const;

                    /**
                     * 设置分片磁盘空间使用率
                     * @param _storageUsage 分片磁盘空间使用率
                     * 
                     */
                    void SetStorageUsage(const double& _storageUsage);

                    /**
                     * 判断参数 StorageUsage 是否已赋值
                     * @return StorageUsage 是否已赋值
                     * 
                     */
                    bool StorageUsageHasBeenSet() const;

                    /**
                     * 获取分片Proxy版本信息
                     * @return ProxyVersion 分片Proxy版本信息
                     * 
                     */
                    std::string GetProxyVersion() const;

                    /**
                     * 设置分片Proxy版本信息
                     * @param _proxyVersion 分片Proxy版本信息
                     * 
                     */
                    void SetProxyVersion(const std::string& _proxyVersion);

                    /**
                     * 判断参数 ProxyVersion 是否已赋值
                     * @return ProxyVersion 是否已赋值
                     * 
                     */
                    bool ProxyVersionHasBeenSet() const;

                    /**
                     * 获取分片主DB可用区
                     * @return ShardMasterZone 分片主DB可用区
                     * 
                     */
                    std::string GetShardMasterZone() const;

                    /**
                     * 设置分片主DB可用区
                     * @param _shardMasterZone 分片主DB可用区
                     * 
                     */
                    void SetShardMasterZone(const std::string& _shardMasterZone);

                    /**
                     * 判断参数 ShardMasterZone 是否已赋值
                     * @return ShardMasterZone 是否已赋值
                     * 
                     */
                    bool ShardMasterZoneHasBeenSet() const;

                    /**
                     * 获取分片从DB可用区
                     * @return ShardSlaveZones 分片从DB可用区
                     * 
                     */
                    std::vector<std::string> GetShardSlaveZones() const;

                    /**
                     * 设置分片从DB可用区
                     * @param _shardSlaveZones 分片从DB可用区
                     * 
                     */
                    void SetShardSlaveZones(const std::vector<std::string>& _shardSlaveZones);

                    /**
                     * 判断参数 ShardSlaveZones 是否已赋值
                     * @return ShardSlaveZones 是否已赋值
                     * 
                     */
                    bool ShardSlaveZonesHasBeenSet() const;

                    /**
                     * 获取分片Cpu核数
                     * @return Cpu 分片Cpu核数
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置分片Cpu核数
                     * @param _cpu 分片Cpu核数
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
                     * 获取DB节点信息
                     * @return NodesInfo DB节点信息
                     * 
                     */
                    std::vector<NodeInfo> GetNodesInfo() const;

                    /**
                     * 设置DB节点信息
                     * @param _nodesInfo DB节点信息
                     * 
                     */
                    void SetNodesInfo(const std::vector<NodeInfo>& _nodesInfo);

                    /**
                     * 判断参数 NodesInfo 是否已赋值
                     * @return NodesInfo 是否已赋值
                     * 
                     */
                    bool NodesInfoHasBeenSet() const;

                private:

                    /**
                     * 分片SerialId
                     */
                    std::string m_shardSerialId;
                    bool m_shardSerialIdHasBeenSet;

                    /**
                     * 分片ID，形如shard-7vg1o339
                     */
                    std::string m_shardInstanceId;
                    bool m_shardInstanceIdHasBeenSet;

                    /**
                     * 分片运行状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 分片运行状态描述
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 分片创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 分片内存大小，单位GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 分片磁盘大小，单位GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 分片日志磁盘空间大小，单位GB
                     */
                    int64_t m_logDisk;
                    bool m_logDiskHasBeenSet;

                    /**
                     * 分片节点个数
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 分片磁盘空间使用率
                     */
                    double m_storageUsage;
                    bool m_storageUsageHasBeenSet;

                    /**
                     * 分片Proxy版本信息
                     */
                    std::string m_proxyVersion;
                    bool m_proxyVersionHasBeenSet;

                    /**
                     * 分片主DB可用区
                     */
                    std::string m_shardMasterZone;
                    bool m_shardMasterZoneHasBeenSet;

                    /**
                     * 分片从DB可用区
                     */
                    std::vector<std::string> m_shardSlaveZones;
                    bool m_shardSlaveZonesHasBeenSet;

                    /**
                     * 分片Cpu核数
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * DB节点信息
                     */
                    std::vector<NodeInfo> m_nodesInfo;
                    bool m_nodesInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_SHARDBRIEFINFO_H_
