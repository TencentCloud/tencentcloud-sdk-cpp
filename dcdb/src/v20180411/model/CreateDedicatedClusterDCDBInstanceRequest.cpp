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

#include <tencentcloud/dcdb/v20180411/model/CreateDedicatedClusterDCDBInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

CreateDedicatedClusterDCDBInstanceRequest::CreateDedicatedClusterDCDBInstanceRequest() :
    m_goodsNumHasBeenSet(false),
    m_shardNumHasBeenSet(false),
    m_shardMemoryHasBeenSet(false),
    m_shardStorageHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_shardMachineHasBeenSet(false),
    m_shardNodeNumHasBeenSet(false),
    m_shardNodeCpuHasBeenSet(false),
    m_shardNodeMemoryHasBeenSet(false),
    m_shardNodeStorageHasBeenSet(false),
    m_dbVersionIdHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_dcnInstanceIdHasBeenSet(false),
    m_dcnRegionHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_ipv6FlagHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_initParamsHasBeenSet(false),
    m_masterHostIdHasBeenSet(false),
    m_slaveHostIdsHasBeenSet(false),
    m_rollbackInstanceIdHasBeenSet(false),
    m_rollbackTimeHasBeenSet(false),
    m_dcnSyncModeHasBeenSet(false)
{
}

string CreateDedicatedClusterDCDBInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_shardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardNum, allocator);
    }

    if (m_shardMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardMemory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardMemory, allocator);
    }

    if (m_shardStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardStorage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardStorage, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_shardMachineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardMachine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shardMachine.c_str(), allocator).Move(), allocator);
    }

    if (m_shardNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardNodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardNodeNum, allocator);
    }

    if (m_shardNodeCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardNodeCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardNodeCpu, allocator);
    }

    if (m_shardNodeMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardNodeMemory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardNodeMemory, allocator);
    }

    if (m_shardNodeStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardNodeStorage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardNodeStorage, allocator);
    }

    if (m_dbVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbVersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_securityGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dcnInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DcnInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dcnInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dcnRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DcnRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dcnRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTags.begin(); itr != m_resourceTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_ipv6FlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6Flag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ipv6Flag, allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pid, allocator);
    }

    if (m_initParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_initParams.begin(); itr != m_initParams.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_masterHostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterHostId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_masterHostId.c_str(), allocator).Move(), allocator);
    }

    if (m_slaveHostIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveHostIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_slaveHostIds.begin(); itr != m_slaveHostIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_rollbackInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rollbackInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_rollbackTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rollbackTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dcnSyncModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DcnSyncMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dcnSyncMode, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateDedicatedClusterDCDBInstanceRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetGoodsNum(const int64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

int64_t CreateDedicatedClusterDCDBInstanceRequest::GetShardNum() const
{
    return m_shardNum;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetShardNum(const int64_t& _shardNum)
{
    m_shardNum = _shardNum;
    m_shardNumHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::ShardNumHasBeenSet() const
{
    return m_shardNumHasBeenSet;
}

int64_t CreateDedicatedClusterDCDBInstanceRequest::GetShardMemory() const
{
    return m_shardMemory;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetShardMemory(const int64_t& _shardMemory)
{
    m_shardMemory = _shardMemory;
    m_shardMemoryHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::ShardMemoryHasBeenSet() const
{
    return m_shardMemoryHasBeenSet;
}

int64_t CreateDedicatedClusterDCDBInstanceRequest::GetShardStorage() const
{
    return m_shardStorage;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetShardStorage(const int64_t& _shardStorage)
{
    m_shardStorage = _shardStorage;
    m_shardStorageHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::ShardStorageHasBeenSet() const
{
    return m_shardStorageHasBeenSet;
}

string CreateDedicatedClusterDCDBInstanceRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateDedicatedClusterDCDBInstanceRequest::GetZone() const
{
    return m_zone;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t CreateDedicatedClusterDCDBInstanceRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t CreateDedicatedClusterDCDBInstanceRequest::GetCpu() const
{
    return m_cpu;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

string CreateDedicatedClusterDCDBInstanceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateDedicatedClusterDCDBInstanceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateDedicatedClusterDCDBInstanceRequest::GetShardMachine() const
{
    return m_shardMachine;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetShardMachine(const string& _shardMachine)
{
    m_shardMachine = _shardMachine;
    m_shardMachineHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::ShardMachineHasBeenSet() const
{
    return m_shardMachineHasBeenSet;
}

int64_t CreateDedicatedClusterDCDBInstanceRequest::GetShardNodeNum() const
{
    return m_shardNodeNum;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetShardNodeNum(const int64_t& _shardNodeNum)
{
    m_shardNodeNum = _shardNodeNum;
    m_shardNodeNumHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::ShardNodeNumHasBeenSet() const
{
    return m_shardNodeNumHasBeenSet;
}

int64_t CreateDedicatedClusterDCDBInstanceRequest::GetShardNodeCpu() const
{
    return m_shardNodeCpu;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetShardNodeCpu(const int64_t& _shardNodeCpu)
{
    m_shardNodeCpu = _shardNodeCpu;
    m_shardNodeCpuHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::ShardNodeCpuHasBeenSet() const
{
    return m_shardNodeCpuHasBeenSet;
}

int64_t CreateDedicatedClusterDCDBInstanceRequest::GetShardNodeMemory() const
{
    return m_shardNodeMemory;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetShardNodeMemory(const int64_t& _shardNodeMemory)
{
    m_shardNodeMemory = _shardNodeMemory;
    m_shardNodeMemoryHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::ShardNodeMemoryHasBeenSet() const
{
    return m_shardNodeMemoryHasBeenSet;
}

int64_t CreateDedicatedClusterDCDBInstanceRequest::GetShardNodeStorage() const
{
    return m_shardNodeStorage;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetShardNodeStorage(const int64_t& _shardNodeStorage)
{
    m_shardNodeStorage = _shardNodeStorage;
    m_shardNodeStorageHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::ShardNodeStorageHasBeenSet() const
{
    return m_shardNodeStorageHasBeenSet;
}

string CreateDedicatedClusterDCDBInstanceRequest::GetDbVersionId() const
{
    return m_dbVersionId;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetDbVersionId(const string& _dbVersionId)
{
    m_dbVersionId = _dbVersionId;
    m_dbVersionIdHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::DbVersionIdHasBeenSet() const
{
    return m_dbVersionIdHasBeenSet;
}

string CreateDedicatedClusterDCDBInstanceRequest::GetSecurityGroupId() const
{
    return m_securityGroupId;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetSecurityGroupId(const string& _securityGroupId)
{
    m_securityGroupId = _securityGroupId;
    m_securityGroupIdHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::SecurityGroupIdHasBeenSet() const
{
    return m_securityGroupIdHasBeenSet;
}

vector<string> CreateDedicatedClusterDCDBInstanceRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

string CreateDedicatedClusterDCDBInstanceRequest::GetDcnInstanceId() const
{
    return m_dcnInstanceId;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetDcnInstanceId(const string& _dcnInstanceId)
{
    m_dcnInstanceId = _dcnInstanceId;
    m_dcnInstanceIdHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::DcnInstanceIdHasBeenSet() const
{
    return m_dcnInstanceIdHasBeenSet;
}

string CreateDedicatedClusterDCDBInstanceRequest::GetDcnRegion() const
{
    return m_dcnRegion;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetDcnRegion(const string& _dcnRegion)
{
    m_dcnRegion = _dcnRegion;
    m_dcnRegionHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::DcnRegionHasBeenSet() const
{
    return m_dcnRegionHasBeenSet;
}

string CreateDedicatedClusterDCDBInstanceRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

vector<ResourceTag> CreateDedicatedClusterDCDBInstanceRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetResourceTags(const vector<ResourceTag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

int64_t CreateDedicatedClusterDCDBInstanceRequest::GetIpv6Flag() const
{
    return m_ipv6Flag;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetIpv6Flag(const int64_t& _ipv6Flag)
{
    m_ipv6Flag = _ipv6Flag;
    m_ipv6FlagHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::Ipv6FlagHasBeenSet() const
{
    return m_ipv6FlagHasBeenSet;
}

int64_t CreateDedicatedClusterDCDBInstanceRequest::GetPid() const
{
    return m_pid;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

vector<DBParamValue> CreateDedicatedClusterDCDBInstanceRequest::GetInitParams() const
{
    return m_initParams;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetInitParams(const vector<DBParamValue>& _initParams)
{
    m_initParams = _initParams;
    m_initParamsHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::InitParamsHasBeenSet() const
{
    return m_initParamsHasBeenSet;
}

string CreateDedicatedClusterDCDBInstanceRequest::GetMasterHostId() const
{
    return m_masterHostId;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetMasterHostId(const string& _masterHostId)
{
    m_masterHostId = _masterHostId;
    m_masterHostIdHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::MasterHostIdHasBeenSet() const
{
    return m_masterHostIdHasBeenSet;
}

vector<string> CreateDedicatedClusterDCDBInstanceRequest::GetSlaveHostIds() const
{
    return m_slaveHostIds;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetSlaveHostIds(const vector<string>& _slaveHostIds)
{
    m_slaveHostIds = _slaveHostIds;
    m_slaveHostIdsHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::SlaveHostIdsHasBeenSet() const
{
    return m_slaveHostIdsHasBeenSet;
}

string CreateDedicatedClusterDCDBInstanceRequest::GetRollbackInstanceId() const
{
    return m_rollbackInstanceId;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetRollbackInstanceId(const string& _rollbackInstanceId)
{
    m_rollbackInstanceId = _rollbackInstanceId;
    m_rollbackInstanceIdHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::RollbackInstanceIdHasBeenSet() const
{
    return m_rollbackInstanceIdHasBeenSet;
}

string CreateDedicatedClusterDCDBInstanceRequest::GetRollbackTime() const
{
    return m_rollbackTime;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetRollbackTime(const string& _rollbackTime)
{
    m_rollbackTime = _rollbackTime;
    m_rollbackTimeHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::RollbackTimeHasBeenSet() const
{
    return m_rollbackTimeHasBeenSet;
}

int64_t CreateDedicatedClusterDCDBInstanceRequest::GetDcnSyncMode() const
{
    return m_dcnSyncMode;
}

void CreateDedicatedClusterDCDBInstanceRequest::SetDcnSyncMode(const int64_t& _dcnSyncMode)
{
    m_dcnSyncMode = _dcnSyncMode;
    m_dcnSyncModeHasBeenSet = true;
}

bool CreateDedicatedClusterDCDBInstanceRequest::DcnSyncModeHasBeenSet() const
{
    return m_dcnSyncModeHasBeenSet;
}


