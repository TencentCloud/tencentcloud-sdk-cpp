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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEDETAIL_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/ShardInfo.h>
#include <tencentcloud/mongodb/v20190725/model/DBInstanceInfo.h>
#include <tencentcloud/mongodb/v20190725/model/TagInfo.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 实例详情。
                */
                class InstanceDetail : public AbstractModel
                {
                public:
                    InstanceDetail();
                    ~InstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
                     * @param _instanceId 实例 ID。
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
                     * 获取实例名称。
                     * @return InstanceName 实例名称。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。
                     * @param _instanceName 实例名称。
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
                     * 获取付费类型。
- 1：包年包月。
- 0：按量计费。
                     * @return PayMode 付费类型。
- 1：包年包月。
- 0：按量计费。
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置付费类型。
- 1：包年包月。
- 0：按量计费。
                     * @param _payMode 付费类型。
- 1：包年包月。
- 0：按量计费。
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取项目 ID。
                     * @return ProjectId 项目 ID。
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目 ID。
                     * @param _projectId 项目 ID。
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取集群类型。
- 0：副本集实例。
- 1：分片实例。
                     * @return ClusterType 集群类型。
- 0：副本集实例。
- 1：分片实例。
                     * 
                     */
                    uint64_t GetClusterType() const;

                    /**
                     * 设置集群类型。
- 0：副本集实例。
- 1：分片实例。
                     * @param _clusterType 集群类型。
- 0：副本集实例。
- 1：分片实例。
                     * 
                     */
                    void SetClusterType(const uint64_t& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取地域信息。
                     * @return Region 地域信息。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域信息。
                     * @param _region 地域信息。
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
                     * 获取可用区信息。
                     * @return Zone 可用区信息。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区信息。
                     * @param _zone 可用区信息。
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
                     * 获取网络类型。
- 0：基础网络。
- 1：私有网络。
                     * @return NetType 网络类型。
- 0：基础网络。
- 1：私有网络。
                     * 
                     */
                    uint64_t GetNetType() const;

                    /**
                     * 设置网络类型。
- 0：基础网络。
- 1：私有网络。
                     * @param _netType 网络类型。
- 0：基础网络。
- 1：私有网络。
                     * 
                     */
                    void SetNetType(const uint64_t& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取私有网络的ID。
                     * @return VpcId 私有网络的ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络的ID。
                     * @param _vpcId 私有网络的ID。
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
                     * 获取私有网络的子网ID。
                     * @return SubnetId 私有网络的子网ID。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络的子网ID。
                     * @param _subnetId 私有网络的子网ID。
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
                     * 获取实例状态。
- 0：待初始化。
- 1：流程处理中，例如：变更规格、参数修改等。
- 2：实例正常运行中。
- -2：已隔离（包年包月）。
- -3：已隔离（按量计费）。
                     * @return Status 实例状态。
- 0：待初始化。
- 1：流程处理中，例如：变更规格、参数修改等。
- 2：实例正常运行中。
- -2：已隔离（包年包月）。
- -3：已隔离（按量计费）。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态。
- 0：待初始化。
- 1：流程处理中，例如：变更规格、参数修改等。
- 2：实例正常运行中。
- -2：已隔离（包年包月）。
- -3：已隔离（按量计费）。
                     * @param _status 实例状态。
- 0：待初始化。
- 1：流程处理中，例如：变更规格、参数修改等。
- 2：实例正常运行中。
- -2：已隔离（包年包月）。
- -3：已隔离（按量计费）。
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
                     * 获取实例IP。
                     * @return Vip 实例IP。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置实例IP。
                     * @param _vip 实例IP。
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
                     * 获取端口号。
                     * @return Vport 端口号。
                     * 
                     */
                    uint64_t GetVport() const;

                    /**
                     * 设置端口号。
                     * @param _vport 端口号。
                     * 
                     */
                    void SetVport(const uint64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取实例创建时间。
                     * @return CreateTime 实例创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置实例创建时间。
                     * @param _createTime 实例创建时间。
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
                     * 获取实例到期时间。
                     * @return DeadLine 实例到期时间。
                     * 
                     */
                    std::string GetDeadLine() const;

                    /**
                     * 设置实例到期时间。
                     * @param _deadLine 实例到期时间。
                     * 
                     */
                    void SetDeadLine(const std::string& _deadLine);

                    /**
                     * 判断参数 DeadLine 是否已赋值
                     * @return DeadLine 是否已赋值
                     * 
                     */
                    bool DeadLineHasBeenSet() const;

                    /**
                     * 获取实例存储引擎版本信息。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本。
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
- MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。
- MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。
- MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。
- MONGO_80_WT：MongoDB 8.0 WiredTiger存储引擎版本。
                     * @return MongoVersion 实例存储引擎版本信息。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本。
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
- MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。
- MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。
- MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。
- MONGO_80_WT：MongoDB 8.0 WiredTiger存储引擎版本。
                     * 
                     */
                    std::string GetMongoVersion() const;

                    /**
                     * 设置实例存储引擎版本信息。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本。
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
- MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。
- MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。
- MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。
- MONGO_80_WT：MongoDB 8.0 WiredTiger存储引擎版本。
                     * @param _mongoVersion 实例存储引擎版本信息。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本。
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
- MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。
- MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。
- MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。
- MONGO_80_WT：MongoDB 8.0 WiredTiger存储引擎版本。
                     * 
                     */
                    void SetMongoVersion(const std::string& _mongoVersion);

                    /**
                     * 判断参数 MongoVersion 是否已赋值
                     * @return MongoVersion 是否已赋值
                     * 
                     */
                    bool MongoVersionHasBeenSet() const;

                    /**
                     * 获取实例内存规格，单位：MB。
                     * @return Memory 实例内存规格，单位：MB。
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置实例内存规格，单位：MB。
                     * @param _memory 实例内存规格，单位：MB。
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取实例磁盘规格，单位：MB。
                     * @return Volume 实例磁盘规格，单位：MB。
                     * 
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置实例磁盘规格，单位：MB。
                     * @param _volume 实例磁盘规格，单位：MB。
                     * 
                     */
                    void SetVolume(const uint64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取实例 CPU 核心数。
                     * @return CpuNum 实例 CPU 核心数。
                     * 
                     */
                    uint64_t GetCpuNum() const;

                    /**
                     * 设置实例 CPU 核心数。
                     * @param _cpuNum 实例 CPU 核心数。
                     * 
                     */
                    void SetCpuNum(const uint64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     * 
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取实例机器类型。
- HIO10G：通用高 HIO 万兆型。
- HCD：云盘版类型。
                     * @return MachineType 实例机器类型。
- HIO10G：通用高 HIO 万兆型。
- HCD：云盘版类型。
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置实例机器类型。
- HIO10G：通用高 HIO 万兆型。
- HCD：云盘版类型。
                     * @param _machineType 实例机器类型。
- HIO10G：通用高 HIO 万兆型。
- HCD：云盘版类型。
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取实例从节点数。
                     * @return SecondaryNum 实例从节点数。
                     * 
                     */
                    uint64_t GetSecondaryNum() const;

                    /**
                     * 设置实例从节点数。
                     * @param _secondaryNum 实例从节点数。
                     * 
                     */
                    void SetSecondaryNum(const uint64_t& _secondaryNum);

                    /**
                     * 判断参数 SecondaryNum 是否已赋值
                     * @return SecondaryNum 是否已赋值
                     * 
                     */
                    bool SecondaryNumHasBeenSet() const;

                    /**
                     * 获取实例分片数。
                     * @return ReplicationSetNum 实例分片数。
                     * 
                     */
                    uint64_t GetReplicationSetNum() const;

                    /**
                     * 设置实例分片数。
                     * @param _replicationSetNum 实例分片数。
                     * 
                     */
                    void SetReplicationSetNum(const uint64_t& _replicationSetNum);

                    /**
                     * 判断参数 ReplicationSetNum 是否已赋值
                     * @return ReplicationSetNum 是否已赋值
                     * 
                     */
                    bool ReplicationSetNumHasBeenSet() const;

                    /**
                     * 获取实例自动续费标志。
- 0：手动续费。
- 1：自动续费。
- 2：确认不续费。
                     * @return AutoRenewFlag 实例自动续费标志。
- 0：手动续费。
- 1：自动续费。
- 2：确认不续费。
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置实例自动续费标志。
- 0：手动续费。
- 1：自动续费。
- 2：确认不续费。
                     * @param _autoRenewFlag 实例自动续费标志。
- 0：手动续费。
- 1：自动续费。
- 2：确认不续费。
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取已用容量，单位：MB。
                     * @return UsedVolume 已用容量，单位：MB。
                     * 
                     */
                    uint64_t GetUsedVolume() const;

                    /**
                     * 设置已用容量，单位：MB。
                     * @param _usedVolume 已用容量，单位：MB。
                     * 
                     */
                    void SetUsedVolume(const uint64_t& _usedVolume);

                    /**
                     * 判断参数 UsedVolume 是否已赋值
                     * @return UsedVolume 是否已赋值
                     * 
                     */
                    bool UsedVolumeHasBeenSet() const;

                    /**
                     * 获取维护窗口起始时间。
                     * @return MaintenanceStart 维护窗口起始时间。
                     * 
                     */
                    std::string GetMaintenanceStart() const;

                    /**
                     * 设置维护窗口起始时间。
                     * @param _maintenanceStart 维护窗口起始时间。
                     * 
                     */
                    void SetMaintenanceStart(const std::string& _maintenanceStart);

                    /**
                     * 判断参数 MaintenanceStart 是否已赋值
                     * @return MaintenanceStart 是否已赋值
                     * 
                     */
                    bool MaintenanceStartHasBeenSet() const;

                    /**
                     * 获取维护窗口结束时间。
                     * @return MaintenanceEnd 维护窗口结束时间。
                     * 
                     */
                    std::string GetMaintenanceEnd() const;

                    /**
                     * 设置维护窗口结束时间。
                     * @param _maintenanceEnd 维护窗口结束时间。
                     * 
                     */
                    void SetMaintenanceEnd(const std::string& _maintenanceEnd);

                    /**
                     * 判断参数 MaintenanceEnd 是否已赋值
                     * @return MaintenanceEnd 是否已赋值
                     * 
                     */
                    bool MaintenanceEndHasBeenSet() const;

                    /**
                     * 获取分片信息。
                     * @return ReplicaSets 分片信息。
                     * 
                     */
                    std::vector<ShardInfo> GetReplicaSets() const;

                    /**
                     * 设置分片信息。
                     * @param _replicaSets 分片信息。
                     * 
                     */
                    void SetReplicaSets(const std::vector<ShardInfo>& _replicaSets);

                    /**
                     * 判断参数 ReplicaSets 是否已赋值
                     * @return ReplicaSets 是否已赋值
                     * 
                     */
                    bool ReplicaSetsHasBeenSet() const;

                    /**
                     * 获取只读实例信息。
                     * @return ReadonlyInstances 只读实例信息。
                     * 
                     */
                    std::vector<DBInstanceInfo> GetReadonlyInstances() const;

                    /**
                     * 设置只读实例信息。
                     * @param _readonlyInstances 只读实例信息。
                     * 
                     */
                    void SetReadonlyInstances(const std::vector<DBInstanceInfo>& _readonlyInstances);

                    /**
                     * 判断参数 ReadonlyInstances 是否已赋值
                     * @return ReadonlyInstances 是否已赋值
                     * 
                     */
                    bool ReadonlyInstancesHasBeenSet() const;

                    /**
                     * 获取灾备实例信息。
                     * @return StandbyInstances 灾备实例信息。
                     * 
                     */
                    std::vector<DBInstanceInfo> GetStandbyInstances() const;

                    /**
                     * 设置灾备实例信息。
                     * @param _standbyInstances 灾备实例信息。
                     * 
                     */
                    void SetStandbyInstances(const std::vector<DBInstanceInfo>& _standbyInstances);

                    /**
                     * 判断参数 StandbyInstances 是否已赋值
                     * @return StandbyInstances 是否已赋值
                     * 
                     */
                    bool StandbyInstancesHasBeenSet() const;

                    /**
                     * 获取临时实例信息。
                     * @return CloneInstances 临时实例信息。
                     * 
                     */
                    std::vector<DBInstanceInfo> GetCloneInstances() const;

                    /**
                     * 设置临时实例信息。
                     * @param _cloneInstances 临时实例信息。
                     * 
                     */
                    void SetCloneInstances(const std::vector<DBInstanceInfo>& _cloneInstances);

                    /**
                     * 判断参数 CloneInstances 是否已赋值
                     * @return CloneInstances 是否已赋值
                     * 
                     */
                    bool CloneInstancesHasBeenSet() const;

                    /**
                     * 获取关联实例信息，对于正式实例，该字段表示它的临时实例信息；对于临时实例，则表示它的正式实例信息;如果为只读/灾备实例,则表示他的主实例信息。
                     * @return RelatedInstance 关联实例信息，对于正式实例，该字段表示它的临时实例信息；对于临时实例，则表示它的正式实例信息;如果为只读/灾备实例,则表示他的主实例信息。
                     * 
                     */
                    DBInstanceInfo GetRelatedInstance() const;

                    /**
                     * 设置关联实例信息，对于正式实例，该字段表示它的临时实例信息；对于临时实例，则表示它的正式实例信息;如果为只读/灾备实例,则表示他的主实例信息。
                     * @param _relatedInstance 关联实例信息，对于正式实例，该字段表示它的临时实例信息；对于临时实例，则表示它的正式实例信息;如果为只读/灾备实例,则表示他的主实例信息。
                     * 
                     */
                    void SetRelatedInstance(const DBInstanceInfo& _relatedInstance);

                    /**
                     * 判断参数 RelatedInstance 是否已赋值
                     * @return RelatedInstance 是否已赋值
                     * 
                     */
                    bool RelatedInstanceHasBeenSet() const;

                    /**
                     * 获取实例标签信息集合。
                     * @return Tags 实例标签信息集合。
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置实例标签信息集合。
                     * @param _tags 实例标签信息集合。
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取实例版本标记。
                     * @return InstanceVer 实例版本标记。
                     * 
                     */
                    uint64_t GetInstanceVer() const;

                    /**
                     * 设置实例版本标记。
                     * @param _instanceVer 实例版本标记。
                     * 
                     */
                    void SetInstanceVer(const uint64_t& _instanceVer);

                    /**
                     * 判断参数 InstanceVer 是否已赋值
                     * @return InstanceVer 是否已赋值
                     * 
                     */
                    bool InstanceVerHasBeenSet() const;

                    /**
                     * 获取实例版本标记。
                     * @return ClusterVer 实例版本标记。
                     * 
                     */
                    uint64_t GetClusterVer() const;

                    /**
                     * 设置实例版本标记。
                     * @param _clusterVer 实例版本标记。
                     * 
                     */
                    void SetClusterVer(const uint64_t& _clusterVer);

                    /**
                     * 判断参数 ClusterVer 是否已赋值
                     * @return ClusterVer 是否已赋值
                     * 
                     */
                    bool ClusterVerHasBeenSet() const;

                    /**
                     * 获取协议信息：mongodb。
                     * @return Protocol 协议信息：mongodb。
                     * 
                     */
                    uint64_t GetProtocol() const;

                    /**
                     * 设置协议信息：mongodb。
                     * @param _protocol 协议信息：mongodb。
                     * 
                     */
                    void SetProtocol(const uint64_t& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取实例类型。
- 0：所有实例。
- 1：正式实例。
- 2：临时实例
- 3：只读实例。
- -1：同时包括正式实例、只读实例与灾备实例。
                     * @return InstanceType 实例类型。
- 0：所有实例。
- 1：正式实例。
- 2：临时实例
- 3：只读实例。
- -1：同时包括正式实例、只读实例与灾备实例。
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置实例类型。
- 0：所有实例。
- 1：正式实例。
- 2：临时实例
- 3：只读实例。
- -1：同时包括正式实例、只读实例与灾备实例。
                     * @param _instanceType 实例类型。
- 0：所有实例。
- 1：正式实例。
- 2：临时实例
- 3：只读实例。
- -1：同时包括正式实例、只读实例与灾备实例。
                     * 
                     */
                    void SetInstanceType(const uint64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取实例状态描述。
                     * @return InstanceStatusDesc 实例状态描述。
                     * 
                     */
                    std::string GetInstanceStatusDesc() const;

                    /**
                     * 设置实例状态描述。
                     * @param _instanceStatusDesc 实例状态描述。
                     * 
                     */
                    void SetInstanceStatusDesc(const std::string& _instanceStatusDesc);

                    /**
                     * 判断参数 InstanceStatusDesc 是否已赋值
                     * @return InstanceStatusDesc 是否已赋值
                     * 
                     */
                    bool InstanceStatusDescHasBeenSet() const;

                    /**
                     * 获取实例对应的物理实例 ID。回档并替换过的实例有不同的 InstanceId 和 RealInstanceId，从 barad 获取监控数据等场景下需要用物理 ID 获取。
                     * @return RealInstanceId 实例对应的物理实例 ID。回档并替换过的实例有不同的 InstanceId 和 RealInstanceId，从 barad 获取监控数据等场景下需要用物理 ID 获取。
                     * 
                     */
                    std::string GetRealInstanceId() const;

                    /**
                     * 设置实例对应的物理实例 ID。回档并替换过的实例有不同的 InstanceId 和 RealInstanceId，从 barad 获取监控数据等场景下需要用物理 ID 获取。
                     * @param _realInstanceId 实例对应的物理实例 ID。回档并替换过的实例有不同的 InstanceId 和 RealInstanceId，从 barad 获取监控数据等场景下需要用物理 ID 获取。
                     * 
                     */
                    void SetRealInstanceId(const std::string& _realInstanceId);

                    /**
                     * 判断参数 RealInstanceId 是否已赋值
                     * @return RealInstanceId 是否已赋值
                     * 
                     */
                    bool RealInstanceIdHasBeenSet() const;

                    /**
                     * 获取实例当前可用区信息。
                     * @return ZoneList 实例当前可用区信息。
                     * 
                     */
                    std::vector<std::string> GetZoneList() const;

                    /**
                     * 设置实例当前可用区信息。
                     * @param _zoneList 实例当前可用区信息。
                     * 
                     */
                    void SetZoneList(const std::vector<std::string>& _zoneList);

                    /**
                     * 判断参数 ZoneList 是否已赋值
                     * @return ZoneList 是否已赋值
                     * 
                     */
                    bool ZoneListHasBeenSet() const;

                    /**
                     * 获取mongos 节点个数。
                     * @return MongosNodeNum mongos 节点个数。
                     * 
                     */
                    uint64_t GetMongosNodeNum() const;

                    /**
                     * 设置mongos 节点个数。
                     * @param _mongosNodeNum mongos 节点个数。
                     * 
                     */
                    void SetMongosNodeNum(const uint64_t& _mongosNodeNum);

                    /**
                     * 判断参数 MongosNodeNum 是否已赋值
                     * @return MongosNodeNum 是否已赋值
                     * 
                     */
                    bool MongosNodeNumHasBeenSet() const;

                    /**
                     * 获取mongos 节点内存。单位：MB。
                     * @return MongosMemory mongos 节点内存。单位：MB。
                     * 
                     */
                    uint64_t GetMongosMemory() const;

                    /**
                     * 设置mongos 节点内存。单位：MB。
                     * @param _mongosMemory mongos 节点内存。单位：MB。
                     * 
                     */
                    void SetMongosMemory(const uint64_t& _mongosMemory);

                    /**
                     * 判断参数 MongosMemory 是否已赋值
                     * @return MongosMemory 是否已赋值
                     * 
                     */
                    bool MongosMemoryHasBeenSet() const;

                    /**
                     * 获取mongos 节点 CPU 核数。
                     * @return MongosCpuNum mongos 节点 CPU 核数。
                     * 
                     */
                    uint64_t GetMongosCpuNum() const;

                    /**
                     * 设置mongos 节点 CPU 核数。
                     * @param _mongosCpuNum mongos 节点 CPU 核数。
                     * 
                     */
                    void SetMongosCpuNum(const uint64_t& _mongosCpuNum);

                    /**
                     * 判断参数 MongosCpuNum 是否已赋值
                     * @return MongosCpuNum 是否已赋值
                     * 
                     */
                    bool MongosCpuNumHasBeenSet() const;

                    /**
                     * 获取Config Server节点个数。
                     * @return ConfigServerNodeNum Config Server节点个数。
                     * 
                     */
                    uint64_t GetConfigServerNodeNum() const;

                    /**
                     * 设置Config Server节点个数。
                     * @param _configServerNodeNum Config Server节点个数。
                     * 
                     */
                    void SetConfigServerNodeNum(const uint64_t& _configServerNodeNum);

                    /**
                     * 判断参数 ConfigServerNodeNum 是否已赋值
                     * @return ConfigServerNodeNum 是否已赋值
                     * 
                     */
                    bool ConfigServerNodeNumHasBeenSet() const;

                    /**
                     * 获取Config Server节点内存。单位：MB。
                     * @return ConfigServerMemory Config Server节点内存。单位：MB。
                     * 
                     */
                    uint64_t GetConfigServerMemory() const;

                    /**
                     * 设置Config Server节点内存。单位：MB。
                     * @param _configServerMemory Config Server节点内存。单位：MB。
                     * 
                     */
                    void SetConfigServerMemory(const uint64_t& _configServerMemory);

                    /**
                     * 判断参数 ConfigServerMemory 是否已赋值
                     * @return ConfigServerMemory 是否已赋值
                     * 
                     */
                    bool ConfigServerMemoryHasBeenSet() const;

                    /**
                     * 获取Config Server节点磁盘大小。单位：MB。
                     * @return ConfigServerVolume Config Server节点磁盘大小。单位：MB。
                     * 
                     */
                    uint64_t GetConfigServerVolume() const;

                    /**
                     * 设置Config Server节点磁盘大小。单位：MB。
                     * @param _configServerVolume Config Server节点磁盘大小。单位：MB。
                     * 
                     */
                    void SetConfigServerVolume(const uint64_t& _configServerVolume);

                    /**
                     * 判断参数 ConfigServerVolume 是否已赋值
                     * @return ConfigServerVolume 是否已赋值
                     * 
                     */
                    bool ConfigServerVolumeHasBeenSet() const;

                    /**
                     * 获取Config Server 节点 CPU 核数。
                     * @return ConfigServerCpuNum Config Server 节点 CPU 核数。
                     * 
                     */
                    uint64_t GetConfigServerCpuNum() const;

                    /**
                     * 设置Config Server 节点 CPU 核数。
                     * @param _configServerCpuNum Config Server 节点 CPU 核数。
                     * 
                     */
                    void SetConfigServerCpuNum(const uint64_t& _configServerCpuNum);

                    /**
                     * 判断参数 ConfigServerCpuNum 是否已赋值
                     * @return ConfigServerCpuNum 是否已赋值
                     * 
                     */
                    bool ConfigServerCpuNumHasBeenSet() const;

                    /**
                     * 获取readonly节点个数。
                     * @return ReadonlyNodeNum readonly节点个数。
                     * 
                     */
                    uint64_t GetReadonlyNodeNum() const;

                    /**
                     * 设置readonly节点个数。
                     * @param _readonlyNodeNum readonly节点个数。
                     * 
                     */
                    void SetReadonlyNodeNum(const uint64_t& _readonlyNodeNum);

                    /**
                     * 判断参数 ReadonlyNodeNum 是否已赋值
                     * @return ReadonlyNodeNum 是否已赋值
                     * 
                     */
                    bool ReadonlyNodeNumHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 付费类型。
- 1：包年包月。
- 0：按量计费。
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 项目 ID。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 集群类型。
- 0：副本集实例。
- 1：分片实例。
                     */
                    uint64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 地域信息。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 可用区信息。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 网络类型。
- 0：基础网络。
- 1：私有网络。
                     */
                    uint64_t m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * 私有网络的ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络的子网ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 实例状态。
- 0：待初始化。
- 1：流程处理中，例如：变更规格、参数修改等。
- 2：实例正常运行中。
- -2：已隔离（包年包月）。
- -3：已隔离（按量计费）。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例IP。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 端口号。
                     */
                    uint64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 实例创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例到期时间。
                     */
                    std::string m_deadLine;
                    bool m_deadLineHasBeenSet;

                    /**
                     * 实例存储引擎版本信息。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本。
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
- MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。
- MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。
- MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。
- MONGO_80_WT：MongoDB 8.0 WiredTiger存储引擎版本。
                     */
                    std::string m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * 实例内存规格，单位：MB。
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例磁盘规格，单位：MB。
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 实例 CPU 核心数。
                     */
                    uint64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * 实例机器类型。
- HIO10G：通用高 HIO 万兆型。
- HCD：云盘版类型。
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 实例从节点数。
                     */
                    uint64_t m_secondaryNum;
                    bool m_secondaryNumHasBeenSet;

                    /**
                     * 实例分片数。
                     */
                    uint64_t m_replicationSetNum;
                    bool m_replicationSetNumHasBeenSet;

                    /**
                     * 实例自动续费标志。
- 0：手动续费。
- 1：自动续费。
- 2：确认不续费。
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 已用容量，单位：MB。
                     */
                    uint64_t m_usedVolume;
                    bool m_usedVolumeHasBeenSet;

                    /**
                     * 维护窗口起始时间。
                     */
                    std::string m_maintenanceStart;
                    bool m_maintenanceStartHasBeenSet;

                    /**
                     * 维护窗口结束时间。
                     */
                    std::string m_maintenanceEnd;
                    bool m_maintenanceEndHasBeenSet;

                    /**
                     * 分片信息。
                     */
                    std::vector<ShardInfo> m_replicaSets;
                    bool m_replicaSetsHasBeenSet;

                    /**
                     * 只读实例信息。
                     */
                    std::vector<DBInstanceInfo> m_readonlyInstances;
                    bool m_readonlyInstancesHasBeenSet;

                    /**
                     * 灾备实例信息。
                     */
                    std::vector<DBInstanceInfo> m_standbyInstances;
                    bool m_standbyInstancesHasBeenSet;

                    /**
                     * 临时实例信息。
                     */
                    std::vector<DBInstanceInfo> m_cloneInstances;
                    bool m_cloneInstancesHasBeenSet;

                    /**
                     * 关联实例信息，对于正式实例，该字段表示它的临时实例信息；对于临时实例，则表示它的正式实例信息;如果为只读/灾备实例,则表示他的主实例信息。
                     */
                    DBInstanceInfo m_relatedInstance;
                    bool m_relatedInstanceHasBeenSet;

                    /**
                     * 实例标签信息集合。
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 实例版本标记。
                     */
                    uint64_t m_instanceVer;
                    bool m_instanceVerHasBeenSet;

                    /**
                     * 实例版本标记。
                     */
                    uint64_t m_clusterVer;
                    bool m_clusterVerHasBeenSet;

                    /**
                     * 协议信息：mongodb。
                     */
                    uint64_t m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 实例类型。
- 0：所有实例。
- 1：正式实例。
- 2：临时实例
- 3：只读实例。
- -1：同时包括正式实例、只读实例与灾备实例。
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例状态描述。
                     */
                    std::string m_instanceStatusDesc;
                    bool m_instanceStatusDescHasBeenSet;

                    /**
                     * 实例对应的物理实例 ID。回档并替换过的实例有不同的 InstanceId 和 RealInstanceId，从 barad 获取监控数据等场景下需要用物理 ID 获取。
                     */
                    std::string m_realInstanceId;
                    bool m_realInstanceIdHasBeenSet;

                    /**
                     * 实例当前可用区信息。
                     */
                    std::vector<std::string> m_zoneList;
                    bool m_zoneListHasBeenSet;

                    /**
                     * mongos 节点个数。
                     */
                    uint64_t m_mongosNodeNum;
                    bool m_mongosNodeNumHasBeenSet;

                    /**
                     * mongos 节点内存。单位：MB。
                     */
                    uint64_t m_mongosMemory;
                    bool m_mongosMemoryHasBeenSet;

                    /**
                     * mongos 节点 CPU 核数。
                     */
                    uint64_t m_mongosCpuNum;
                    bool m_mongosCpuNumHasBeenSet;

                    /**
                     * Config Server节点个数。
                     */
                    uint64_t m_configServerNodeNum;
                    bool m_configServerNodeNumHasBeenSet;

                    /**
                     * Config Server节点内存。单位：MB。
                     */
                    uint64_t m_configServerMemory;
                    bool m_configServerMemoryHasBeenSet;

                    /**
                     * Config Server节点磁盘大小。单位：MB。
                     */
                    uint64_t m_configServerVolume;
                    bool m_configServerVolumeHasBeenSet;

                    /**
                     * Config Server 节点 CPU 核数。
                     */
                    uint64_t m_configServerCpuNum;
                    bool m_configServerCpuNumHasBeenSet;

                    /**
                     * readonly节点个数。
                     */
                    uint64_t m_readonlyNodeNum;
                    bool m_readonlyNodeNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEDETAIL_H_
