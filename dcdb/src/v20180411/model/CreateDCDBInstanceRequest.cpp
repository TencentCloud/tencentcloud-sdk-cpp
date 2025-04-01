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

#include <tencentcloud/dcdb/v20180411/model/CreateDCDBInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

CreateDCDBInstanceRequest::CreateDCDBInstanceRequest() :
    m_zonesHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_shardMemoryHasBeenSet(false),
    m_shardStorageHasBeenSet(false),
    m_shardNodeCountHasBeenSet(false),
    m_shardCountHasBeenSet(false),
    m_countHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_dbVersionIdHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_voucherIdsHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_ipv6FlagHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_initParamsHasBeenSet(false),
    m_dcnRegionHasBeenSet(false),
    m_dcnInstanceIdHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_dcnSyncModeHasBeenSet(false),
    m_cpuTypeHasBeenSet(false)
{
}

string CreateDCDBInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
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

    if (m_dbVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbVersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }

    if (m_voucherIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_voucherIds.begin(); itr != m_voucherIds.end(); ++itr)
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

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
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


vector<string> CreateDCDBInstanceRequest::GetZones() const
{
    return m_zones;
}

void CreateDCDBInstanceRequest::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

int64_t CreateDCDBInstanceRequest::GetPeriod() const
{
    return m_period;
}

void CreateDCDBInstanceRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

int64_t CreateDCDBInstanceRequest::GetShardMemory() const
{
    return m_shardMemory;
}

void CreateDCDBInstanceRequest::SetShardMemory(const int64_t& _shardMemory)
{
    m_shardMemory = _shardMemory;
    m_shardMemoryHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::ShardMemoryHasBeenSet() const
{
    return m_shardMemoryHasBeenSet;
}

int64_t CreateDCDBInstanceRequest::GetShardStorage() const
{
    return m_shardStorage;
}

void CreateDCDBInstanceRequest::SetShardStorage(const int64_t& _shardStorage)
{
    m_shardStorage = _shardStorage;
    m_shardStorageHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::ShardStorageHasBeenSet() const
{
    return m_shardStorageHasBeenSet;
}

int64_t CreateDCDBInstanceRequest::GetShardNodeCount() const
{
    return m_shardNodeCount;
}

void CreateDCDBInstanceRequest::SetShardNodeCount(const int64_t& _shardNodeCount)
{
    m_shardNodeCount = _shardNodeCount;
    m_shardNodeCountHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::ShardNodeCountHasBeenSet() const
{
    return m_shardNodeCountHasBeenSet;
}

int64_t CreateDCDBInstanceRequest::GetShardCount() const
{
    return m_shardCount;
}

void CreateDCDBInstanceRequest::SetShardCount(const int64_t& _shardCount)
{
    m_shardCount = _shardCount;
    m_shardCountHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::ShardCountHasBeenSet() const
{
    return m_shardCountHasBeenSet;
}

int64_t CreateDCDBInstanceRequest::GetCount() const
{
    return m_count;
}

void CreateDCDBInstanceRequest::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t CreateDCDBInstanceRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateDCDBInstanceRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateDCDBInstanceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateDCDBInstanceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateDCDBInstanceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateDCDBInstanceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateDCDBInstanceRequest::GetDbVersionId() const
{
    return m_dbVersionId;
}

void CreateDCDBInstanceRequest::SetDbVersionId(const string& _dbVersionId)
{
    m_dbVersionId = _dbVersionId;
    m_dbVersionIdHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::DbVersionIdHasBeenSet() const
{
    return m_dbVersionIdHasBeenSet;
}

bool CreateDCDBInstanceRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void CreateDCDBInstanceRequest::SetAutoVoucher(const bool& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

vector<string> CreateDCDBInstanceRequest::GetVoucherIds() const
{
    return m_voucherIds;
}

void CreateDCDBInstanceRequest::SetVoucherIds(const vector<string>& _voucherIds)
{
    m_voucherIds = _voucherIds;
    m_voucherIdsHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::VoucherIdsHasBeenSet() const
{
    return m_voucherIdsHasBeenSet;
}

string CreateDCDBInstanceRequest::GetSecurityGroupId() const
{
    return m_securityGroupId;
}

void CreateDCDBInstanceRequest::SetSecurityGroupId(const string& _securityGroupId)
{
    m_securityGroupId = _securityGroupId;
    m_securityGroupIdHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::SecurityGroupIdHasBeenSet() const
{
    return m_securityGroupIdHasBeenSet;
}

string CreateDCDBInstanceRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateDCDBInstanceRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t CreateDCDBInstanceRequest::GetIpv6Flag() const
{
    return m_ipv6Flag;
}

void CreateDCDBInstanceRequest::SetIpv6Flag(const int64_t& _ipv6Flag)
{
    m_ipv6Flag = _ipv6Flag;
    m_ipv6FlagHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::Ipv6FlagHasBeenSet() const
{
    return m_ipv6FlagHasBeenSet;
}

vector<ResourceTag> CreateDCDBInstanceRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateDCDBInstanceRequest::SetResourceTags(const vector<ResourceTag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

vector<DBParamValue> CreateDCDBInstanceRequest::GetInitParams() const
{
    return m_initParams;
}

void CreateDCDBInstanceRequest::SetInitParams(const vector<DBParamValue>& _initParams)
{
    m_initParams = _initParams;
    m_initParamsHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::InitParamsHasBeenSet() const
{
    return m_initParamsHasBeenSet;
}

string CreateDCDBInstanceRequest::GetDcnRegion() const
{
    return m_dcnRegion;
}

void CreateDCDBInstanceRequest::SetDcnRegion(const string& _dcnRegion)
{
    m_dcnRegion = _dcnRegion;
    m_dcnRegionHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::DcnRegionHasBeenSet() const
{
    return m_dcnRegionHasBeenSet;
}

string CreateDCDBInstanceRequest::GetDcnInstanceId() const
{
    return m_dcnInstanceId;
}

void CreateDCDBInstanceRequest::SetDcnInstanceId(const string& _dcnInstanceId)
{
    m_dcnInstanceId = _dcnInstanceId;
    m_dcnInstanceIdHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::DcnInstanceIdHasBeenSet() const
{
    return m_dcnInstanceIdHasBeenSet;
}

int64_t CreateDCDBInstanceRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CreateDCDBInstanceRequest::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

vector<string> CreateDCDBInstanceRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateDCDBInstanceRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

int64_t CreateDCDBInstanceRequest::GetDcnSyncMode() const
{
    return m_dcnSyncMode;
}

void CreateDCDBInstanceRequest::SetDcnSyncMode(const int64_t& _dcnSyncMode)
{
    m_dcnSyncMode = _dcnSyncMode;
    m_dcnSyncModeHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::DcnSyncModeHasBeenSet() const
{
    return m_dcnSyncModeHasBeenSet;
}

string CreateDCDBInstanceRequest::GetCpuType() const
{
    return m_cpuType;
}

void CreateDCDBInstanceRequest::SetCpuType(const string& _cpuType)
{
    m_cpuType = _cpuType;
    m_cpuTypeHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::CpuTypeHasBeenSet() const
{
    return m_cpuTypeHasBeenSet;
}


