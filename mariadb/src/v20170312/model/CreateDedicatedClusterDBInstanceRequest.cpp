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

#include <tencentcloud/mariadb/v20170312/model/CreateDedicatedClusterDBInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

CreateDedicatedClusterDBInstanceRequest::CreateDedicatedClusterDBInstanceRequest() :
    m_goodsNumHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_machineHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_dbVersionIdHasBeenSet(false),
    m_manualHasBeenSet(false),
    m_deviceNoHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_dcnInstanceIdHasBeenSet(false),
    m_dcnRegionHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_ipv6FlagHasBeenSet(false),
    m_initParamsHasBeenSet(false),
    m_nodeNumHasBeenSet(false),
    m_masterHostIdHasBeenSet(false),
    m_slaveHostIdsHasBeenSet(false),
    m_rollbackInstanceIdHasBeenSet(false),
    m_rollbackTimeHasBeenSet(false),
    m_dcnSyncModeHasBeenSet(false)
{
}

string CreateDedicatedClusterDBInstanceRequest::ToJsonString() const
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

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storage, allocator);
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

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pid, allocator);
    }

    if (m_machineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Machine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_machine.c_str(), allocator).Move(), allocator);
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

    if (m_dbVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbVersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_manualHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manual";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_manual, allocator);
    }

    if (m_deviceNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceNo.c_str(), allocator).Move(), allocator);
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

    if (m_nodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeNum, allocator);
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


int64_t CreateDedicatedClusterDBInstanceRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void CreateDedicatedClusterDBInstanceRequest::SetGoodsNum(const int64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

int64_t CreateDedicatedClusterDBInstanceRequest::GetMemory() const
{
    return m_memory;
}

void CreateDedicatedClusterDBInstanceRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t CreateDedicatedClusterDBInstanceRequest::GetStorage() const
{
    return m_storage;
}

void CreateDedicatedClusterDBInstanceRequest::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string CreateDedicatedClusterDBInstanceRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateDedicatedClusterDBInstanceRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateDedicatedClusterDBInstanceRequest::GetZone() const
{
    return m_zone;
}

void CreateDedicatedClusterDBInstanceRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t CreateDedicatedClusterDBInstanceRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateDedicatedClusterDBInstanceRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t CreateDedicatedClusterDBInstanceRequest::GetPid() const
{
    return m_pid;
}

void CreateDedicatedClusterDBInstanceRequest::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string CreateDedicatedClusterDBInstanceRequest::GetMachine() const
{
    return m_machine;
}

void CreateDedicatedClusterDBInstanceRequest::SetMachine(const string& _machine)
{
    m_machine = _machine;
    m_machineHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::MachineHasBeenSet() const
{
    return m_machineHasBeenSet;
}

string CreateDedicatedClusterDBInstanceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateDedicatedClusterDBInstanceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateDedicatedClusterDBInstanceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateDedicatedClusterDBInstanceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateDedicatedClusterDBInstanceRequest::GetDbVersionId() const
{
    return m_dbVersionId;
}

void CreateDedicatedClusterDBInstanceRequest::SetDbVersionId(const string& _dbVersionId)
{
    m_dbVersionId = _dbVersionId;
    m_dbVersionIdHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::DbVersionIdHasBeenSet() const
{
    return m_dbVersionIdHasBeenSet;
}

int64_t CreateDedicatedClusterDBInstanceRequest::GetManual() const
{
    return m_manual;
}

void CreateDedicatedClusterDBInstanceRequest::SetManual(const int64_t& _manual)
{
    m_manual = _manual;
    m_manualHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::ManualHasBeenSet() const
{
    return m_manualHasBeenSet;
}

string CreateDedicatedClusterDBInstanceRequest::GetDeviceNo() const
{
    return m_deviceNo;
}

void CreateDedicatedClusterDBInstanceRequest::SetDeviceNo(const string& _deviceNo)
{
    m_deviceNo = _deviceNo;
    m_deviceNoHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::DeviceNoHasBeenSet() const
{
    return m_deviceNoHasBeenSet;
}

vector<string> CreateDedicatedClusterDBInstanceRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateDedicatedClusterDBInstanceRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

string CreateDedicatedClusterDBInstanceRequest::GetDcnInstanceId() const
{
    return m_dcnInstanceId;
}

void CreateDedicatedClusterDBInstanceRequest::SetDcnInstanceId(const string& _dcnInstanceId)
{
    m_dcnInstanceId = _dcnInstanceId;
    m_dcnInstanceIdHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::DcnInstanceIdHasBeenSet() const
{
    return m_dcnInstanceIdHasBeenSet;
}

string CreateDedicatedClusterDBInstanceRequest::GetDcnRegion() const
{
    return m_dcnRegion;
}

void CreateDedicatedClusterDBInstanceRequest::SetDcnRegion(const string& _dcnRegion)
{
    m_dcnRegion = _dcnRegion;
    m_dcnRegionHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::DcnRegionHasBeenSet() const
{
    return m_dcnRegionHasBeenSet;
}

string CreateDedicatedClusterDBInstanceRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateDedicatedClusterDBInstanceRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

vector<ResourceTag> CreateDedicatedClusterDBInstanceRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateDedicatedClusterDBInstanceRequest::SetResourceTags(const vector<ResourceTag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

int64_t CreateDedicatedClusterDBInstanceRequest::GetIpv6Flag() const
{
    return m_ipv6Flag;
}

void CreateDedicatedClusterDBInstanceRequest::SetIpv6Flag(const int64_t& _ipv6Flag)
{
    m_ipv6Flag = _ipv6Flag;
    m_ipv6FlagHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::Ipv6FlagHasBeenSet() const
{
    return m_ipv6FlagHasBeenSet;
}

vector<DBParamValue> CreateDedicatedClusterDBInstanceRequest::GetInitParams() const
{
    return m_initParams;
}

void CreateDedicatedClusterDBInstanceRequest::SetInitParams(const vector<DBParamValue>& _initParams)
{
    m_initParams = _initParams;
    m_initParamsHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::InitParamsHasBeenSet() const
{
    return m_initParamsHasBeenSet;
}

int64_t CreateDedicatedClusterDBInstanceRequest::GetNodeNum() const
{
    return m_nodeNum;
}

void CreateDedicatedClusterDBInstanceRequest::SetNodeNum(const int64_t& _nodeNum)
{
    m_nodeNum = _nodeNum;
    m_nodeNumHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::NodeNumHasBeenSet() const
{
    return m_nodeNumHasBeenSet;
}

string CreateDedicatedClusterDBInstanceRequest::GetMasterHostId() const
{
    return m_masterHostId;
}

void CreateDedicatedClusterDBInstanceRequest::SetMasterHostId(const string& _masterHostId)
{
    m_masterHostId = _masterHostId;
    m_masterHostIdHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::MasterHostIdHasBeenSet() const
{
    return m_masterHostIdHasBeenSet;
}

vector<string> CreateDedicatedClusterDBInstanceRequest::GetSlaveHostIds() const
{
    return m_slaveHostIds;
}

void CreateDedicatedClusterDBInstanceRequest::SetSlaveHostIds(const vector<string>& _slaveHostIds)
{
    m_slaveHostIds = _slaveHostIds;
    m_slaveHostIdsHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::SlaveHostIdsHasBeenSet() const
{
    return m_slaveHostIdsHasBeenSet;
}

string CreateDedicatedClusterDBInstanceRequest::GetRollbackInstanceId() const
{
    return m_rollbackInstanceId;
}

void CreateDedicatedClusterDBInstanceRequest::SetRollbackInstanceId(const string& _rollbackInstanceId)
{
    m_rollbackInstanceId = _rollbackInstanceId;
    m_rollbackInstanceIdHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::RollbackInstanceIdHasBeenSet() const
{
    return m_rollbackInstanceIdHasBeenSet;
}

string CreateDedicatedClusterDBInstanceRequest::GetRollbackTime() const
{
    return m_rollbackTime;
}

void CreateDedicatedClusterDBInstanceRequest::SetRollbackTime(const string& _rollbackTime)
{
    m_rollbackTime = _rollbackTime;
    m_rollbackTimeHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::RollbackTimeHasBeenSet() const
{
    return m_rollbackTimeHasBeenSet;
}

int64_t CreateDedicatedClusterDBInstanceRequest::GetDcnSyncMode() const
{
    return m_dcnSyncMode;
}

void CreateDedicatedClusterDBInstanceRequest::SetDcnSyncMode(const int64_t& _dcnSyncMode)
{
    m_dcnSyncMode = _dcnSyncMode;
    m_dcnSyncModeHasBeenSet = true;
}

bool CreateDedicatedClusterDBInstanceRequest::DcnSyncModeHasBeenSet() const
{
    return m_dcnSyncModeHasBeenSet;
}


