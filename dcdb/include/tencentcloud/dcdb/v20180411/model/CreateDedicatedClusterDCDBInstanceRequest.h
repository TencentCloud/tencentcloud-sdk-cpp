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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEDEDICATEDCLUSTERDCDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEDEDICATEDCLUSTERDCDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/ResourceTag.h>
#include <tencentcloud/dcdb/v20180411/model/DBParamValue.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * CreateDedicatedClusterDCDBInstance请求参数结构体
                */
                class CreateDedicatedClusterDCDBInstanceRequest : public AbstractModel
                {
                public:
                    CreateDedicatedClusterDCDBInstanceRequest();
                    ~CreateDedicatedClusterDCDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分配实例个数
                     * @return GoodsNum 分配实例个数
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置分配实例个数
                     * @param _goodsNum 分配实例个数
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取分片数量
                     * @return ShardNum 分片数量
                     * 
                     */
                    int64_t GetShardNum() const;

                    /**
                     * 设置分片数量
                     * @param _shardNum 分片数量
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
                     * 获取分片內存大小, 单位GB
                     * @return ShardMemory 分片內存大小, 单位GB
                     * 
                     */
                    int64_t GetShardMemory() const;

                    /**
                     * 设置分片內存大小, 单位GB
                     * @param _shardMemory 分片內存大小, 单位GB
                     * 
                     */
                    void SetShardMemory(const int64_t& _shardMemory);

                    /**
                     * 判断参数 ShardMemory 是否已赋值
                     * @return ShardMemory 是否已赋值
                     * 
                     */
                    bool ShardMemoryHasBeenSet() const;

                    /**
                     * 获取分片磁盘大小, 单位GB
                     * @return ShardStorage 分片磁盘大小, 单位GB
                     * 
                     */
                    int64_t GetShardStorage() const;

                    /**
                     * 设置分片磁盘大小, 单位GB
                     * @param _shardStorage 分片磁盘大小, 单位GB
                     * 
                     */
                    void SetShardStorage(const int64_t& _shardStorage);

                    /**
                     * 判断参数 ShardStorage 是否已赋值
                     * @return ShardStorage 是否已赋值
                     * 
                     */
                    bool ShardStorageHasBeenSet() const;

                    /**
                     * 获取独享集群集群uuid
                     * @return ClusterId 独享集群集群uuid
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置独享集群集群uuid
                     * @param _clusterId 独享集群集群uuid
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
                     * 获取（废弃）可用区
                     * @return Zone （废弃）可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置（废弃）可用区
                     * @param _zone （废弃）可用区
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
                     * 获取（废弃）cpu大小，单位：核
                     * @return Cpu （废弃）cpu大小，单位：核
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置（废弃）cpu大小，单位：核
                     * @param _cpu （废弃）cpu大小，单位：核
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
                     * 获取网络ID
                     * @return VpcId 网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置网络ID
                     * @param _vpcId 网络ID
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
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
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
                     * 获取（废弃）分片机型
                     * @return ShardMachine （废弃）分片机型
                     * 
                     */
                    std::string GetShardMachine() const;

                    /**
                     * 设置（废弃）分片机型
                     * @param _shardMachine （废弃）分片机型
                     * 
                     */
                    void SetShardMachine(const std::string& _shardMachine);

                    /**
                     * 判断参数 ShardMachine 是否已赋值
                     * @return ShardMachine 是否已赋值
                     * 
                     */
                    bool ShardMachineHasBeenSet() const;

                    /**
                     * 获取分片的节点个数
                     * @return ShardNodeNum 分片的节点个数
                     * 
                     */
                    int64_t GetShardNodeNum() const;

                    /**
                     * 设置分片的节点个数
                     * @param _shardNodeNum 分片的节点个数
                     * 
                     */
                    void SetShardNodeNum(const int64_t& _shardNodeNum);

                    /**
                     * 判断参数 ShardNodeNum 是否已赋值
                     * @return ShardNodeNum 是否已赋值
                     * 
                     */
                    bool ShardNodeNumHasBeenSet() const;

                    /**
                     * 获取（废弃）节点cpu核数，单位：1/100核
                     * @return ShardNodeCpu （废弃）节点cpu核数，单位：1/100核
                     * 
                     */
                    int64_t GetShardNodeCpu() const;

                    /**
                     * 设置（废弃）节点cpu核数，单位：1/100核
                     * @param _shardNodeCpu （废弃）节点cpu核数，单位：1/100核
                     * 
                     */
                    void SetShardNodeCpu(const int64_t& _shardNodeCpu);

                    /**
                     * 判断参数 ShardNodeCpu 是否已赋值
                     * @return ShardNodeCpu 是否已赋值
                     * 
                     */
                    bool ShardNodeCpuHasBeenSet() const;

                    /**
                     * 获取（废弃）节点內存大小，单位：GB
                     * @return ShardNodeMemory （废弃）节点內存大小，单位：GB
                     * 
                     */
                    int64_t GetShardNodeMemory() const;

                    /**
                     * 设置（废弃）节点內存大小，单位：GB
                     * @param _shardNodeMemory （废弃）节点內存大小，单位：GB
                     * 
                     */
                    void SetShardNodeMemory(const int64_t& _shardNodeMemory);

                    /**
                     * 判断参数 ShardNodeMemory 是否已赋值
                     * @return ShardNodeMemory 是否已赋值
                     * 
                     */
                    bool ShardNodeMemoryHasBeenSet() const;

                    /**
                     * 获取（废弃）节点磁盘大小，单位：GB
                     * @return ShardNodeStorage （废弃）节点磁盘大小，单位：GB
                     * 
                     */
                    int64_t GetShardNodeStorage() const;

                    /**
                     * 设置（废弃）节点磁盘大小，单位：GB
                     * @param _shardNodeStorage （废弃）节点磁盘大小，单位：GB
                     * 
                     */
                    void SetShardNodeStorage(const int64_t& _shardNodeStorage);

                    /**
                     * 判断参数 ShardNodeStorage 是否已赋值
                     * @return ShardNodeStorage 是否已赋值
                     * 
                     */
                    bool ShardNodeStorageHasBeenSet() const;

                    /**
                     * 获取db版本
                     * @return DbVersionId db版本
                     * 
                     */
                    std::string GetDbVersionId() const;

                    /**
                     * 设置db版本
                     * @param _dbVersionId db版本
                     * 
                     */
                    void SetDbVersionId(const std::string& _dbVersionId);

                    /**
                     * 判断参数 DbVersionId 是否已赋值
                     * @return DbVersionId 是否已赋值
                     * 
                     */
                    bool DbVersionIdHasBeenSet() const;

                    /**
                     * 获取安全组ID
                     * @return SecurityGroupId 安全组ID
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组ID
                     * @param _securityGroupId 安全组ID
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取安全组ID列表
                     * @return SecurityGroupIds 安全组ID列表
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组ID列表
                     * @param _securityGroupIds 安全组ID列表
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取DCN源实例ID
                     * @return DcnInstanceId DCN源实例ID
                     * 
                     */
                    std::string GetDcnInstanceId() const;

                    /**
                     * 设置DCN源实例ID
                     * @param _dcnInstanceId DCN源实例ID
                     * 
                     */
                    void SetDcnInstanceId(const std::string& _dcnInstanceId);

                    /**
                     * 判断参数 DcnInstanceId 是否已赋值
                     * @return DcnInstanceId 是否已赋值
                     * 
                     */
                    bool DcnInstanceIdHasBeenSet() const;

                    /**
                     * 获取DCN源实例地域名
                     * @return DcnRegion DCN源实例地域名
                     * 
                     */
                    std::string GetDcnRegion() const;

                    /**
                     * 设置DCN源实例地域名
                     * @param _dcnRegion DCN源实例地域名
                     * 
                     */
                    void SetDcnRegion(const std::string& _dcnRegion);

                    /**
                     * 判断参数 DcnRegion 是否已赋值
                     * @return DcnRegion 是否已赋值
                     * 
                     */
                    bool DcnRegionHasBeenSet() const;

                    /**
                     * 获取自定义实例名称
                     * @return InstanceName 自定义实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置自定义实例名称
                     * @param _instanceName 自定义实例名称
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
                     * 获取标签
                     * @return ResourceTags 标签
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置标签
                     * @param _resourceTags 标签
                     * 
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取支持IPv6标志：1 支持， 0 不支持
                     * @return Ipv6Flag 支持IPv6标志：1 支持， 0 不支持
                     * 
                     */
                    int64_t GetIpv6Flag() const;

                    /**
                     * 设置支持IPv6标志：1 支持， 0 不支持
                     * @param _ipv6Flag 支持IPv6标志：1 支持， 0 不支持
                     * 
                     */
                    void SetIpv6Flag(const int64_t& _ipv6Flag);

                    /**
                     * 判断参数 Ipv6Flag 是否已赋值
                     * @return Ipv6Flag 是否已赋值
                     * 
                     */
                    bool Ipv6FlagHasBeenSet() const;

                    /**
                     * 获取（废弃）Pid，可通过获取独享集群售卖配置接口得到
                     * @return Pid （废弃）Pid，可通过获取独享集群售卖配置接口得到
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置（废弃）Pid，可通过获取独享集群售卖配置接口得到
                     * @param _pid （废弃）Pid，可通过获取独享集群售卖配置接口得到
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
                     * 获取参数列表。本接口的可选值为：character_set_server（字符集，必传），lower_case_table_names（表名大小写敏感，必传，0 - 敏感；1-不敏感），innodb_page_size（innodb数据页，默认16K），sync_mode（同步模式：0 - 异步； 1 - 强同步；2 - 强同步可退化。默认为强同步可退化）。
                     * @return InitParams 参数列表。本接口的可选值为：character_set_server（字符集，必传），lower_case_table_names（表名大小写敏感，必传，0 - 敏感；1-不敏感），innodb_page_size（innodb数据页，默认16K），sync_mode（同步模式：0 - 异步； 1 - 强同步；2 - 强同步可退化。默认为强同步可退化）。
                     * 
                     */
                    std::vector<DBParamValue> GetInitParams() const;

                    /**
                     * 设置参数列表。本接口的可选值为：character_set_server（字符集，必传），lower_case_table_names（表名大小写敏感，必传，0 - 敏感；1-不敏感），innodb_page_size（innodb数据页，默认16K），sync_mode（同步模式：0 - 异步； 1 - 强同步；2 - 强同步可退化。默认为强同步可退化）。
                     * @param _initParams 参数列表。本接口的可选值为：character_set_server（字符集，必传），lower_case_table_names（表名大小写敏感，必传，0 - 敏感；1-不敏感），innodb_page_size（innodb数据页，默认16K），sync_mode（同步模式：0 - 异步； 1 - 强同步；2 - 强同步可退化。默认为强同步可退化）。
                     * 
                     */
                    void SetInitParams(const std::vector<DBParamValue>& _initParams);

                    /**
                     * 判断参数 InitParams 是否已赋值
                     * @return InitParams 是否已赋值
                     * 
                     */
                    bool InitParamsHasBeenSet() const;

                    /**
                     * 获取指定主节点uuid，不填随机分配
                     * @return MasterHostId 指定主节点uuid，不填随机分配
                     * 
                     */
                    std::string GetMasterHostId() const;

                    /**
                     * 设置指定主节点uuid，不填随机分配
                     * @param _masterHostId 指定主节点uuid，不填随机分配
                     * 
                     */
                    void SetMasterHostId(const std::string& _masterHostId);

                    /**
                     * 判断参数 MasterHostId 是否已赋值
                     * @return MasterHostId 是否已赋值
                     * 
                     */
                    bool MasterHostIdHasBeenSet() const;

                    /**
                     * 获取指定从节点uuid，不填随机分配
                     * @return SlaveHostIds 指定从节点uuid，不填随机分配
                     * 
                     */
                    std::vector<std::string> GetSlaveHostIds() const;

                    /**
                     * 设置指定从节点uuid，不填随机分配
                     * @param _slaveHostIds 指定从节点uuid，不填随机分配
                     * 
                     */
                    void SetSlaveHostIds(const std::vector<std::string>& _slaveHostIds);

                    /**
                     * 判断参数 SlaveHostIds 是否已赋值
                     * @return SlaveHostIds 是否已赋值
                     * 
                     */
                    bool SlaveHostIdsHasBeenSet() const;

                    /**
                     * 获取需要回档的源实例ID
                     * @return RollbackInstanceId 需要回档的源实例ID
                     * 
                     */
                    std::string GetRollbackInstanceId() const;

                    /**
                     * 设置需要回档的源实例ID
                     * @param _rollbackInstanceId 需要回档的源实例ID
                     * 
                     */
                    void SetRollbackInstanceId(const std::string& _rollbackInstanceId);

                    /**
                     * 判断参数 RollbackInstanceId 是否已赋值
                     * @return RollbackInstanceId 是否已赋值
                     * 
                     */
                    bool RollbackInstanceIdHasBeenSet() const;

                    /**
                     * 获取回档时间
                     * @return RollbackTime 回档时间
                     * 
                     */
                    std::string GetRollbackTime() const;

                    /**
                     * 设置回档时间
                     * @param _rollbackTime 回档时间
                     * 
                     */
                    void SetRollbackTime(const std::string& _rollbackTime);

                    /**
                     * 判断参数 RollbackTime 是否已赋值
                     * @return RollbackTime 是否已赋值
                     * 
                     */
                    bool RollbackTimeHasBeenSet() const;

                    /**
                     * 获取DCN同步模式，0：异步， 1：强同步
                     * @return DcnSyncMode DCN同步模式，0：异步， 1：强同步
                     * 
                     */
                    int64_t GetDcnSyncMode() const;

                    /**
                     * 设置DCN同步模式，0：异步， 1：强同步
                     * @param _dcnSyncMode DCN同步模式，0：异步， 1：强同步
                     * 
                     */
                    void SetDcnSyncMode(const int64_t& _dcnSyncMode);

                    /**
                     * 判断参数 DcnSyncMode 是否已赋值
                     * @return DcnSyncMode 是否已赋值
                     * 
                     */
                    bool DcnSyncModeHasBeenSet() const;

                private:

                    /**
                     * 分配实例个数
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 分片数量
                     */
                    int64_t m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * 分片內存大小, 单位GB
                     */
                    int64_t m_shardMemory;
                    bool m_shardMemoryHasBeenSet;

                    /**
                     * 分片磁盘大小, 单位GB
                     */
                    int64_t m_shardStorage;
                    bool m_shardStorageHasBeenSet;

                    /**
                     * 独享集群集群uuid
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * （废弃）可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * （废弃）cpu大小，单位：核
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * （废弃）分片机型
                     */
                    std::string m_shardMachine;
                    bool m_shardMachineHasBeenSet;

                    /**
                     * 分片的节点个数
                     */
                    int64_t m_shardNodeNum;
                    bool m_shardNodeNumHasBeenSet;

                    /**
                     * （废弃）节点cpu核数，单位：1/100核
                     */
                    int64_t m_shardNodeCpu;
                    bool m_shardNodeCpuHasBeenSet;

                    /**
                     * （废弃）节点內存大小，单位：GB
                     */
                    int64_t m_shardNodeMemory;
                    bool m_shardNodeMemoryHasBeenSet;

                    /**
                     * （废弃）节点磁盘大小，单位：GB
                     */
                    int64_t m_shardNodeStorage;
                    bool m_shardNodeStorageHasBeenSet;

                    /**
                     * db版本
                     */
                    std::string m_dbVersionId;
                    bool m_dbVersionIdHasBeenSet;

                    /**
                     * 安全组ID
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * 安全组ID列表
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * DCN源实例ID
                     */
                    std::string m_dcnInstanceId;
                    bool m_dcnInstanceIdHasBeenSet;

                    /**
                     * DCN源实例地域名
                     */
                    std::string m_dcnRegion;
                    bool m_dcnRegionHasBeenSet;

                    /**
                     * 自定义实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * 支持IPv6标志：1 支持， 0 不支持
                     */
                    int64_t m_ipv6Flag;
                    bool m_ipv6FlagHasBeenSet;

                    /**
                     * （废弃）Pid，可通过获取独享集群售卖配置接口得到
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 参数列表。本接口的可选值为：character_set_server（字符集，必传），lower_case_table_names（表名大小写敏感，必传，0 - 敏感；1-不敏感），innodb_page_size（innodb数据页，默认16K），sync_mode（同步模式：0 - 异步； 1 - 强同步；2 - 强同步可退化。默认为强同步可退化）。
                     */
                    std::vector<DBParamValue> m_initParams;
                    bool m_initParamsHasBeenSet;

                    /**
                     * 指定主节点uuid，不填随机分配
                     */
                    std::string m_masterHostId;
                    bool m_masterHostIdHasBeenSet;

                    /**
                     * 指定从节点uuid，不填随机分配
                     */
                    std::vector<std::string> m_slaveHostIds;
                    bool m_slaveHostIdsHasBeenSet;

                    /**
                     * 需要回档的源实例ID
                     */
                    std::string m_rollbackInstanceId;
                    bool m_rollbackInstanceIdHasBeenSet;

                    /**
                     * 回档时间
                     */
                    std::string m_rollbackTime;
                    bool m_rollbackTimeHasBeenSet;

                    /**
                     * DCN同步模式，0：异步， 1：强同步
                     */
                    int64_t m_dcnSyncMode;
                    bool m_dcnSyncModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEDEDICATEDCLUSTERDCDBINSTANCEREQUEST_H_
