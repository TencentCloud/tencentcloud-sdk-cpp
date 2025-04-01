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

#include <tencentcloud/dcdb/v20180411/model/CreateHourDCDBInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

CreateHourDCDBInstanceRequest::CreateHourDCDBInstanceRequest() :
    m_shardMemoryHasBeenSet(false),
    m_shardStorageHasBeenSet(false),
    m_shardNodeCountHasBeenSet(false),
    m_shardCountHasBeenSet(false),
    m_countHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_shardCpuHasBeenSet(false),
    m_dbVersionIdHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_ipv6FlagHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_dcnRegionHasBeenSet(false),
    m_dcnInstanceIdHasBeenSet(false),
    m_initParamsHasBeenSet(false),
    m_rollbackInstanceIdHasBeenSet(false),
    m_rollbackTimeHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_dcnSyncModeHasBeenSet(false),
    m_cpuTypeHasBeenSet(false)
{
}

string CreateHourDCDBInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_shardNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardNodeCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardNodeCount, allocator);
    }

    if (m_shardCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardCount, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
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

    if (m_shardCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardCpu, allocator);
    }

    if (m_dbVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbVersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_zonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_securityGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_securityGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv6FlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6Flag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ipv6Flag, allocator);
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

    if (m_dcnRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DcnRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dcnRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_dcnInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DcnInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dcnInstanceId.c_str(), allocator).Move(), allocator);
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

    if (m_dcnSyncModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DcnSyncMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dcnSyncMode, allocator);
    }

    if (m_cpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cpuType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateHourDCDBInstanceRequest::GetShardMemory() const
{
    return m_shardMemory;
}

void CreateHourDCDBInstanceRequest::SetShardMemory(const int64_t& _shardMemory)
{
    m_shardMemory = _shardMemory;
    m_shardMemoryHasBeenSet = true;
}

bool CreateHourDCDBInstanceRequest::ShardMemoryHasBeenSet() const
{
    return m_shardMemoryHasBeenSet;
}

int64_t CreateHourDCDBInstanceRequest::GetShardStorage() const
{
    return m_shardStorage;
}

void CreateHourDCDBInstanceRequest::SetShardStorage(const int64_t& _shardStorage)
{
    m_shardStorage = _shardStorage;
    m_shardStorageHasBeenSet = true;
}

bool CreateHourDCDBInstanceRequest::ShardStorageHasBeenSet() const
{
    return m_shardStorageHasBeenSet;
}

int64_t CreateHourDCDBInstanceRequest::GetShardNodeCount() const
{
    return m_shardNodeCount;
}

void CreateHourDCDBInstanceRequest::SetShardNodeCount(const int64_t& _shardNodeCount)
{
    m_shardNodeCount = _shardNodeCount;
    m_shardNodeCountHasBeenSet = true;
}

bool CreateHourDCDBInstanceRequest::ShardNodeCountHasBeenSet() const
{
    return m_shardNodeCountHasBeenSet;
}

int64_t CreateHourDCDBInstanceRequest::GetShardCount() const
{
    return m_shardCount;
}

void CreateHourDCDBInstanceRequest::SetShardCount(const int64_t& _shardCount)
{
    m_shardCount = _shardCount;
    m_shardCountHasBeenSet = true;
}

bool CreateHourDCDBInstanceRequest::ShardCountHasBeenSet() const
{
    return m_shardCountHasBeenSet;
}

int64_t CreateHourDCDBInstanceRequest::GetCount() const
{
    return m_count;
}

void CreateHourDCDBInstanceRequest::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool CreateHourDCDBInstanceRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t CreateHourDCDBInstanceRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateHourDCDBInstanceRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateHourDCDBInstanceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateHourDCDBInstanceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateHourDCDBInstanceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateHourDCDBInstanceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateHourDCDBInstanceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateHourDCDBInstanceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateHourDCDBInstanceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t CreateHourDCDBInstanceRequest::GetShardCpu() const
{
    return m_shardCpu;
}

void CreateHourDCDBInstanceRequest::SetShardCpu(const int64_t& _shardCpu)
{
    m_shardCpu = _shardCpu;
    m_shardCpuHasBeenSet = true;
}

bool CreateHourDCDBInstanceRequest::ShardCpuHasBeenSet() const
{
    return m_shardCpuHasBeenSet;
}

string CreateHourDCDBInstanceRequest::GetDbVersionId() const
{
    return m_dbVersionId;
}

void CreateHourDCDBInstanceRequest::SetDbVersionId(const string& _dbVersionId)
{
    m_dbVersionId = _dbVersionId;
    m_dbVersionIdHasBeenSet = true;
}

bool CreateHourDCDBInstanceRequest::DbVersionIdHasBeenSet() const
{
    return m_dbVersionIdHasBeenSet;
}

vector<string> CreateHourDCDBInstanceRequest::GetZones() const
{
    return m_zones;
}

void CreateHourDCDBInstanceRequest::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool CreateHourDCDBInstanceRequest::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

string CreateHourDCDBInstanceRequest::GetSecurityGroupId() const
{
    return m_securityGroupId;
}

void CreateHourDCDBInstanceRequest::SetSecurityGroupId(const string& _securityGroupId)
{
    m_securityGroupId = _securityGroupId;
    m_securityGroupIdHasBeenSet = true;
}

bool CreateHourDCDBInstanceRequest::SecurityGroupIdHasBeenSet() const
{
    return m_securityGroupIdHasBeenSet;
}

string CreateHourDCDBInstanceRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateHourDCDBInstanceRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateHourDCDBInstanceRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t CreateHourDCDBInstanceRequest::GetIpv6Flag() const
{
    return m_ipv6Flag;
}

void CreateHourDCDBInstanceRequest::SetIpv6Flag(const int64_t& _ipv6Flag)
{
    m_ipv6Flag = _ipv6Flag;
    m_ipv6FlagHasBeenSet = true;
}

bool CreateHourDCDBInstanceRequest::Ipv6FlagHasBeenSet() const
{
    return m_ipv6FlagHasBeenSet;
}

vector<ResourceTag> CreateHourDCDBInstanceRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateHourDCDBInstanceRequest::SetResourceTags(const vector<ResourceTag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateHourDCDBInstanceRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string CreateHourDCDBInstanceRequest::GetDcnRegion() const
{
    return m_dcnRegion;
}

void CreateHourDCDBInstanceRequest::SetDcnRegion(const string& _dcnRegion)
{
    m_dcnRegion = _dcnRegion;
    m_dcnRegionHasBeenSet = true;
}

bool CreateHourDCDBInstanceRequest::DcnRegionHasBeenSet() const
{
    return m_dcnRegionHasBeenSet;
}

string CreateHourDCDBInstanceRequest::GetDcnInstanceId() const
{
    return m_dcnInstanceId;
}

void CreateHourDCDBInstanceRequest::SetDcnInstanceId(const string& _dcnInstanceId)
{
    m_dcnInstanceId = _dcnInstanceId;
    m_dcnInstanceIdHasBeenSet = true;
}

bool CreateHourDCDBInstanceRequest::DcnInstanceIdHasBeenSet() const
{
    return m_dcnInstanceIdHasBeenSet;
}

vector<DBParamValue> CreateHourDCDBInstanceRequest::GetInitParams() const
{
    return m_initParams;
}

void CreateHourDCDBInstanceRequest::SetInitParams(const vector<DBParamValue>& _initParams)
{
    m_initParams = _initParams;
    m_initParamsHasBeenSet = true;
}

bool CreateHourDCDBInstanceRequest::InitParamsHasBeenSet() const
{
    return m_initParamsHasBeenSet;
}

string CreateHourDCDBInstanceRequest::GetRollbackInstanceId() const
{
    return m_rollbackInstanceId;
}

void CreateHourDCDBInstanceRequest::SetRollbackInstanceId(const string& _rollbackInstanceId)
{
    m_rollbackInstanceId = _rollbackInstanceId;
    m_rollbackInstanceIdHasBeenSet = true;
}

bool CreateHourDCDBInstanceRequest::RollbackInstanceIdHasBeenSet() const
{
    return m_rollbackInstanceIdHasBeenSet;
}

string CreateHourDCDBInstanceRequest::GetRollbackTime() const
{
    return m_rollbackTime;
}

void CreateHourDCDBInstanceRequest::SetRollbackTime(const string& _rollbackTime)
{
    m_rollbackTime = _rollbackTime;
    m_rollbackTimeHasBeenSet = true;
}

bool CreateHourDCDBInstanceRequest::RollbackTimeHasBeenSet() const
{
    return m_rollbackTimeHasBeenSet;
}

vector<string> CreateHourDCDBInstanceRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateHourDCDBInstanceRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateHourDCDBInstanceRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

int64_t CreateHourDCDBInstanceRequest::GetDcnSyncMode() const
{
    return m_dcnSyncMode;
}

void CreateHourDCDBInstanceRequest::SetDcnSyncMode(const int64_t& _dcnSyncMode)
{
    m_dcnSyncMode = _dcnSyncMode;
    m_dcnSyncModeHasBeenSet = true;
}

bool CreateHourDCDBInstanceRequest::DcnSyncModeHasBeenSet() const
{
    return m_dcnSyncModeHasBeenSet;
}

string CreateHourDCDBInstanceRequest::GetCpuType() const
{
    return m_cpuType;
}

void CreateHourDCDBInstanceRequest::SetCpuType(const string& _cpuType)
{
    m_cpuType = _cpuType;
    m_cpuTypeHasBeenSet = true;
}

bool CreateHourDCDBInstanceRequest::CpuTypeHasBeenSet() const
{
    return m_cpuTypeHasBeenSet;
}


