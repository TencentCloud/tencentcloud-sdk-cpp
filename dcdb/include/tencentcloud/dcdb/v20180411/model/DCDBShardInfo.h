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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DCDBSHARDINFO_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DCDBSHARDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * 描述分布式数据库分片信息。
                */
                class DCDBShardInfo : public AbstractModel
                {
                public:
                    DCDBShardInfo();
                    ~DCDBShardInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取所属实例Id
                     * @return InstanceId 所属实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置所属实例Id
                     * @param _instanceId 所属实例Id
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
                     * 获取分片SQL透传Id，用于将sql透传到指定分片执行
                     * @return ShardSerialId 分片SQL透传Id，用于将sql透传到指定分片执行
                     * 
                     */
                    std::string GetShardSerialId() const;

                    /**
                     * 设置分片SQL透传Id，用于将sql透传到指定分片执行
                     * @param _shardSerialId 分片SQL透传Id，用于将sql透传到指定分片执行
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
                     * 获取全局唯一的分片Id
                     * @return ShardInstanceId 全局唯一的分片Id
                     * 
                     */
                    std::string GetShardInstanceId() const;

                    /**
                     * 设置全局唯一的分片Id
                     * @param _shardInstanceId 全局唯一的分片Id
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
                     * 获取状态：0 创建中，1 流程处理中， 2 运行中，3 分片未初始化
                     * @return Status 状态：0 创建中，1 流程处理中， 2 运行中，3 分片未初始化
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态：0 创建中，1 流程处理中， 2 运行中，3 分片未初始化
                     * @param _status 状态：0 创建中，1 流程处理中， 2 运行中，3 分片未初始化
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
                     * 获取状态中文描述
                     * @return StatusDesc 状态中文描述
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置状态中文描述
                     * @param _statusDesc 状态中文描述
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取字符串格式的私有网络Id
                     * @return VpcId 字符串格式的私有网络Id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置字符串格式的私有网络Id
                     * @param _vpcId 字符串格式的私有网络Id
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取字符串格式的私有网络子网Id
                     * @return SubnetId 字符串格式的私有网络子网Id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置字符串格式的私有网络子网Id
                     * @param _subnetId 字符串格式的私有网络子网Id
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
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
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取内存大小，单位 GB
                     * @return Memory 内存大小，单位 GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位 GB
                     * @param _memory 内存大小，单位 GB
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
                     * 获取存储大小，单位 GB
                     * @return Storage 存储大小，单位 GB
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置存储大小，单位 GB
                     * @param _storage 存储大小，单位 GB
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
                     * 获取到期时间
                     * @return PeriodEndTime 到期时间
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置到期时间
                     * @param _periodEndTime 到期时间
                     * 
                     */
                    void SetPeriodEndTime(const std::string& _periodEndTime);

                    /**
                     * 判断参数 PeriodEndTime 是否已赋值
                     * @return PeriodEndTime 是否已赋值
                     * 
                     */
                    bool PeriodEndTimeHasBeenSet() const;

                    /**
                     * 获取节点数，2 为一主一从， 3 为一主二从
                     * @return NodeCount 节点数，2 为一主一从， 3 为一主二从
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置节点数，2 为一主一从， 3 为一主二从
                     * @param _nodeCount 节点数，2 为一主一从， 3 为一主二从
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
                     * 获取存储使用率，单位为 %
                     * @return StorageUsage 存储使用率，单位为 %
                     * 
                     */
                    double GetStorageUsage() const;

                    /**
                     * 设置存储使用率，单位为 %
                     * @param _storageUsage 存储使用率，单位为 %
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
                     * 获取内存使用率，单位为 %
                     * @return MemoryUsage 内存使用率，单位为 %
                     * 
                     */
                    double GetMemoryUsage() const;

                    /**
                     * 设置内存使用率，单位为 %
                     * @param _memoryUsage 内存使用率，单位为 %
                     * 
                     */
                    void SetMemoryUsage(const double& _memoryUsage);

                    /**
                     * 判断参数 MemoryUsage 是否已赋值
                     * @return MemoryUsage 是否已赋值
                     * 
                     */
                    bool MemoryUsageHasBeenSet() const;

                    /**
                     * 获取数字分片Id（过时字段，请勿依赖该值）
                     * @return ShardId 数字分片Id（过时字段，请勿依赖该值）
                     * 
                     */
                    int64_t GetShardId() const;

                    /**
                     * 设置数字分片Id（过时字段，请勿依赖该值）
                     * @param _shardId 数字分片Id（过时字段，请勿依赖该值）
                     * 
                     */
                    void SetShardId(const int64_t& _shardId);

                    /**
                     * 判断参数 ShardId 是否已赋值
                     * @return ShardId 是否已赋值
                     * 
                     */
                    bool ShardIdHasBeenSet() const;

                    /**
                     * 获取产品ProductID
                     * @return Pid 产品ProductID
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置产品ProductID
                     * @param _pid 产品ProductID
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取Proxy版本
                     * @return ProxyVersion Proxy版本
                     * 
                     */
                    std::string GetProxyVersion() const;

                    /**
                     * 设置Proxy版本
                     * @param _proxyVersion Proxy版本
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
                     * 获取付费模型
                     * @return Paymode 付费模型
                     * 
                     */
                    std::string GetPaymode() const;

                    /**
                     * 设置付费模型
                     * @param _paymode 付费模型
                     * 
                     */
                    void SetPaymode(const std::string& _paymode);

                    /**
                     * 判断参数 Paymode 是否已赋值
                     * @return Paymode 是否已赋值
                     * 
                     */
                    bool PaymodeHasBeenSet() const;

                    /**
                     * 获取分片的主可用区
                     * @return ShardMasterZone 分片的主可用区
                     * 
                     */
                    std::string GetShardMasterZone() const;

                    /**
                     * 设置分片的主可用区
                     * @param _shardMasterZone 分片的主可用区
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
                     * 获取分片的从可用区列表
                     * @return ShardSlaveZones 分片的从可用区列表
                     * 
                     */
                    std::vector<std::string> GetShardSlaveZones() const;

                    /**
                     * 设置分片的从可用区列表
                     * @param _shardSlaveZones 分片的从可用区列表
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
                     * 获取CPU核数
                     * @return Cpu CPU核数
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置CPU核数
                     * @param _cpu CPU核数
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
                     * 获取分片ShardKey的范围（总共64个哈希值），例如： 0-31，32-63
                     * @return Range 分片ShardKey的范围（总共64个哈希值），例如： 0-31，32-63
                     * 
                     */
                    std::string GetRange() const;

                    /**
                     * 设置分片ShardKey的范围（总共64个哈希值），例如： 0-31，32-63
                     * @param _range 分片ShardKey的范围（总共64个哈希值），例如： 0-31，32-63
                     * 
                     */
                    void SetRange(const std::string& _range);

                    /**
                     * 判断参数 Range 是否已赋值
                     * @return Range 是否已赋值
                     * 
                     */
                    bool RangeHasBeenSet() const;

                private:

                    /**
                     * 所属实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 分片SQL透传Id，用于将sql透传到指定分片执行
                     */
                    std::string m_shardSerialId;
                    bool m_shardSerialIdHasBeenSet;

                    /**
                     * 全局唯一的分片Id
                     */
                    std::string m_shardInstanceId;
                    bool m_shardInstanceIdHasBeenSet;

                    /**
                     * 状态：0 创建中，1 流程处理中， 2 运行中，3 分片未初始化
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态中文描述
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 字符串格式的私有网络Id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 字符串格式的私有网络子网Id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 内存大小，单位 GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 存储大小，单位 GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 到期时间
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * 节点数，2 为一主一从， 3 为一主二从
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 存储使用率，单位为 %
                     */
                    double m_storageUsage;
                    bool m_storageUsageHasBeenSet;

                    /**
                     * 内存使用率，单位为 %
                     */
                    double m_memoryUsage;
                    bool m_memoryUsageHasBeenSet;

                    /**
                     * 数字分片Id（过时字段，请勿依赖该值）
                     */
                    int64_t m_shardId;
                    bool m_shardIdHasBeenSet;

                    /**
                     * 产品ProductID
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Proxy版本
                     */
                    std::string m_proxyVersion;
                    bool m_proxyVersionHasBeenSet;

                    /**
                     * 付费模型
                     */
                    std::string m_paymode;
                    bool m_paymodeHasBeenSet;

                    /**
                     * 分片的主可用区
                     */
                    std::string m_shardMasterZone;
                    bool m_shardMasterZoneHasBeenSet;

                    /**
                     * 分片的从可用区列表
                     */
                    std::vector<std::string> m_shardSlaveZones;
                    bool m_shardSlaveZonesHasBeenSet;

                    /**
                     * CPU核数
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 分片ShardKey的范围（总共64个哈希值），例如： 0-31，32-63
                     */
                    std::string m_range;
                    bool m_rangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DCDBSHARDINFO_H_
