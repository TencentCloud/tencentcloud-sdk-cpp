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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DBINSTANCEDETAIL_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DBINSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * DB实例详情
                */
                class DBInstanceDetail : public AbstractModel
                {
                public:
                    DBInstanceDetail();
                    ~DBInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DB实例Id
                     * @return InstanceId DB实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置DB实例Id
                     * @param _instanceId DB实例Id
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
                     * 获取DB实例名称
                     * @return InstanceName DB实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置DB实例名称
                     * @param _instanceName DB实例名称
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
                     * 获取DB实例状态,-1:已隔离, 0:创建中, 1:流程中, 2:运行中, 3:未初始化
                     * @return Status DB实例状态,-1:已隔离, 0:创建中, 1:流程中, 2:运行中, 3:未初始化
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置DB实例状态,-1:已隔离, 0:创建中, 1:流程中, 2:运行中, 3:未初始化
                     * @param _status DB实例状态,-1:已隔离, 0:创建中, 1:流程中, 2:运行中, 3:未初始化
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
                     * 获取DB实例状态描述,-1:已隔离, 0:创建中, 1:流程中, 2:运行中, 3:未初始化
                     * @return StatusDesc DB实例状态描述,-1:已隔离, 0:创建中, 1:流程中, 2:运行中, 3:未初始化
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置DB实例状态描述,-1:已隔离, 0:创建中, 1:流程中, 2:运行中, 3:未初始化
                     * @param _statusDesc DB实例状态描述,-1:已隔离, 0:创建中, 1:流程中, 2:运行中, 3:未初始化
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
                     * 获取DB实例版本
                     * @return DbVersion DB实例版本
                     * 
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置DB实例版本
                     * @param _dbVersion DB实例版本
                     * 
                     */
                    void SetDbVersion(const std::string& _dbVersion);

                    /**
                     * 判断参数 DbVersion 是否已赋值
                     * @return DbVersion 是否已赋值
                     * 
                     */
                    bool DbVersionHasBeenSet() const;

                    /**
                     * 获取Vip信息
                     * @return Vip Vip信息
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Vip信息
                     * @param _vip Vip信息
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Vip使用的端口号
                     * @return Vport Vip使用的端口号
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Vip使用的端口号
                     * @param _vport Vip使用的端口号
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取字符串型的私有网络ID
                     * @return UniqueVpcId 字符串型的私有网络ID
                     * 
                     */
                    std::string GetUniqueVpcId() const;

                    /**
                     * 设置字符串型的私有网络ID
                     * @param _uniqueVpcId 字符串型的私有网络ID
                     * 
                     */
                    void SetUniqueVpcId(const std::string& _uniqueVpcId);

                    /**
                     * 判断参数 UniqueVpcId 是否已赋值
                     * @return UniqueVpcId 是否已赋值
                     * 
                     */
                    bool UniqueVpcIdHasBeenSet() const;

                    /**
                     * 获取字符串型的私有网络子网ID
                     * @return UniqueSubnetId 字符串型的私有网络子网ID
                     * 
                     */
                    std::string GetUniqueSubnetId() const;

                    /**
                     * 设置字符串型的私有网络子网ID
                     * @param _uniqueSubnetId 字符串型的私有网络子网ID
                     * 
                     */
                    void SetUniqueSubnetId(const std::string& _uniqueSubnetId);

                    /**
                     * 判断参数 UniqueSubnetId 是否已赋值
                     * @return UniqueSubnetId 是否已赋值
                     * 
                     */
                    bool UniqueSubnetIdHasBeenSet() const;

                    /**
                     * 获取是否为分布式版本,0:否,1:是
                     * @return Shard 是否为分布式版本,0:否,1:是
                     * 
                     */
                    int64_t GetShard() const;

                    /**
                     * 设置是否为分布式版本,0:否,1:是
                     * @param _shard 是否为分布式版本,0:否,1:是
                     * 
                     */
                    void SetShard(const int64_t& _shard);

                    /**
                     * 判断参数 Shard 是否已赋值
                     * @return Shard 是否已赋值
                     * 
                     */
                    bool ShardHasBeenSet() const;

                    /**
                     * 获取DB实例节点数
                     * @return NodeNum DB实例节点数
                     * 
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置DB实例节点数
                     * @param _nodeNum DB实例节点数
                     * 
                     */
                    void SetNodeNum(const int64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取CPU规格(单位:核数)
                     * @return Cpu CPU规格(单位:核数)
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置CPU规格(单位:核数)
                     * @param _cpu CPU规格(单位:核数)
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
                     * 获取内存规格(单位:GB)
                     * @return Memory 内存规格(单位:GB)
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存规格(单位:GB)
                     * @param _memory 内存规格(单位:GB)
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
                     * 获取磁盘规格(单位:GB)
                     * @return Disk 磁盘规格(单位:GB)
                     * 
                     */
                    int64_t GetDisk() const;

                    /**
                     * 设置磁盘规格(单位:GB)
                     * @param _disk 磁盘规格(单位:GB)
                     * 
                     */
                    void SetDisk(const int64_t& _disk);

                    /**
                     * 判断参数 Disk 是否已赋值
                     * @return Disk 是否已赋值
                     * 
                     */
                    bool DiskHasBeenSet() const;

                    /**
                     * 获取分布式类型的实例的分片数
                     * @return ShardNum 分布式类型的实例的分片数
                     * 
                     */
                    int64_t GetShardNum() const;

                    /**
                     * 设置分布式类型的实例的分片数
                     * @param _shardNum 分布式类型的实例的分片数
                     * 
                     */
                    void SetShardNum(const int64_t& _shardNum);

                    /**
                     * 判断参数 ShardNum 是否已赋值
                     * @return ShardNum 是否已赋值
                     * 
                     */
                    bool ShardNumHasBeenSet() const;

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
                     * 获取Db所在主机列表, 格式: m1,s1|m2,s2
                     * @return DbHosts Db所在主机列表, 格式: m1,s1|m2,s2
                     * 
                     */
                    std::string GetDbHosts() const;

                    /**
                     * 设置Db所在主机列表, 格式: m1,s1|m2,s2
                     * @param _dbHosts Db所在主机列表, 格式: m1,s1|m2,s2
                     * 
                     */
                    void SetDbHosts(const std::string& _dbHosts);

                    /**
                     * 判断参数 DbHosts 是否已赋值
                     * @return DbHosts 是否已赋值
                     * 
                     */
                    bool DbHostsHasBeenSet() const;

                    /**
                     * 获取主机角色, 1:主, 2:从, 3:主+从
                     * @return HostRole 主机角色, 1:主, 2:从, 3:主+从
                     * 
                     */
                    int64_t GetHostRole() const;

                    /**
                     * 设置主机角色, 1:主, 2:从, 3:主+从
                     * @param _hostRole 主机角色, 1:主, 2:从, 3:主+从
                     * 
                     */
                    void SetHostRole(const int64_t& _hostRole);

                    /**
                     * 判断参数 HostRole 是否已赋值
                     * @return HostRole 是否已赋值
                     * 
                     */
                    bool HostRoleHasBeenSet() const;

                    /**
                     * 获取DB引擎，MySQL,Percona,MariaDB
                     * @return DbEngine DB引擎，MySQL,Percona,MariaDB
                     * 
                     */
                    std::string GetDbEngine() const;

                    /**
                     * 设置DB引擎，MySQL,Percona,MariaDB
                     * @param _dbEngine DB引擎，MySQL,Percona,MariaDB
                     * 
                     */
                    void SetDbEngine(const std::string& _dbEngine);

                    /**
                     * 判断参数 DbEngine 是否已赋值
                     * @return DbEngine 是否已赋值
                     * 
                     */
                    bool DbEngineHasBeenSet() const;

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

                private:

                    /**
                     * DB实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * DB实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * DB实例状态,-1:已隔离, 0:创建中, 1:流程中, 2:运行中, 3:未初始化
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * DB实例状态描述,-1:已隔离, 0:创建中, 1:流程中, 2:运行中, 3:未初始化
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * DB实例版本
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * Vip信息
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Vip使用的端口号
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 字符串型的私有网络ID
                     */
                    std::string m_uniqueVpcId;
                    bool m_uniqueVpcIdHasBeenSet;

                    /**
                     * 字符串型的私有网络子网ID
                     */
                    std::string m_uniqueSubnetId;
                    bool m_uniqueSubnetIdHasBeenSet;

                    /**
                     * 是否为分布式版本,0:否,1:是
                     */
                    int64_t m_shard;
                    bool m_shardHasBeenSet;

                    /**
                     * DB实例节点数
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * CPU规格(单位:核数)
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存规格(单位:GB)
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 磁盘规格(单位:GB)
                     */
                    int64_t m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * 分布式类型的实例的分片数
                     */
                    int64_t m_shardNum;
                    bool m_shardNumHasBeenSet;

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
                     * Db所在主机列表, 格式: m1,s1|m2,s2
                     */
                    std::string m_dbHosts;
                    bool m_dbHostsHasBeenSet;

                    /**
                     * 主机角色, 1:主, 2:从, 3:主+从
                     */
                    int64_t m_hostRole;
                    bool m_hostRoleHasBeenSet;

                    /**
                     * DB引擎，MySQL,Percona,MariaDB
                     */
                    std::string m_dbEngine;
                    bool m_dbEngineHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DBINSTANCEDETAIL_H_
