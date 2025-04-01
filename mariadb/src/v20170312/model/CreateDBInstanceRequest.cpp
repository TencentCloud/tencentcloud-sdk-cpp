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

#include <tencentcloud/mariadb/v20170312/model/CreateDBInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

CreateDBInstanceRequest::CreateDBInstanceRequest() :
    m_zonesHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_countHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_voucherIdsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_dbVersionIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_ipv6FlagHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_initParamsHasBeenSet(false),
    m_dcnRegionHasBeenSet(false),
    m_dcnInstanceIdHasBeenSet(false),
    m_dcnSyncModeHasBeenSet(false),
    m_cpuTypeHasBeenSet(false)
{
}

string CreateDBInstanceRequest::ToJsonString() const
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

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeCount, allocator);
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

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_dbVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbVersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
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

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
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


vector<string> CreateDBInstanceRequest::GetZones() const
{
    return m_zones;
}

void CreateDBInstanceRequest::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool CreateDBInstanceRequest::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

int64_t CreateDBInstanceRequest::GetNodeCount() const
{
    return m_nodeCount;
}

void CreateDBInstanceRequest::SetNodeCount(const int64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool CreateDBInstanceRequest::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

int64_t CreateDBInstanceRequest::GetMemory() const
{
    return m_memory;
}

void CreateDBInstanceRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CreateDBInstanceRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t CreateDBInstanceRequest::GetStorage() const
{
    return m_storage;
}

void CreateDBInstanceRequest::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool CreateDBInstanceRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

int64_t CreateDBInstanceRequest::GetPeriod() const
{
    return m_period;
}

void CreateDBInstanceRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateDBInstanceRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

int64_t CreateDBInstanceRequest::GetCount() const
{
    return m_count;
}

void CreateDBInstanceRequest::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool CreateDBInstanceRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

bool CreateDBInstanceRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void CreateDBInstanceRequest::SetAutoVoucher(const bool& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool CreateDBInstanceRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

vector<string> CreateDBInstanceRequest::GetVoucherIds() const
{
    return m_voucherIds;
}

void CreateDBInstanceRequest::SetVoucherIds(const vector<string>& _voucherIds)
{
    m_voucherIds = _voucherIds;
    m_voucherIdsHasBeenSet = true;
}

bool CreateDBInstanceRequest::VoucherIdsHasBeenSet() const
{
    return m_voucherIdsHasBeenSet;
}

string CreateDBInstanceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateDBInstanceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateDBInstanceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateDBInstanceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateDBInstanceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateDBInstanceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t CreateDBInstanceRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateDBInstanceRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateDBInstanceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateDBInstanceRequest::GetDbVersionId() const
{
    return m_dbVersionId;
}

void CreateDBInstanceRequest::SetDbVersionId(const string& _dbVersionId)
{
    m_dbVersionId = _dbVersionId;
    m_dbVersionIdHasBeenSet = true;
}

bool CreateDBInstanceRequest::DbVersionIdHasBeenSet() const
{
    return m_dbVersionIdHasBeenSet;
}

string CreateDBInstanceRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateDBInstanceRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateDBInstanceRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

vector<string> CreateDBInstanceRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateDBInstanceRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateDBInstanceRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

int64_t CreateDBInstanceRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CreateDBInstanceRequest::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CreateDBInstanceRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t CreateDBInstanceRequest::GetIpv6Flag() const
{
    return m_ipv6Flag;
}

void CreateDBInstanceRequest::SetIpv6Flag(const int64_t& _ipv6Flag)
{
    m_ipv6Flag = _ipv6Flag;
    m_ipv6FlagHasBeenSet = true;
}

bool CreateDBInstanceRequest::Ipv6FlagHasBeenSet() const
{
    return m_ipv6FlagHasBeenSet;
}

vector<ResourceTag> CreateDBInstanceRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateDBInstanceRequest::SetResourceTags(const vector<ResourceTag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateDBInstanceRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

vector<DBParamValue> CreateDBInstanceRequest::GetInitParams() const
{
    return m_initParams;
}

void CreateDBInstanceRequest::SetInitParams(const vector<DBParamValue>& _initParams)
{
    m_initParams = _initParams;
    m_initParamsHasBeenSet = true;
}

bool CreateDBInstanceRequest::InitParamsHasBeenSet() const
{
    return m_initParamsHasBeenSet;
}

string CreateDBInstanceRequest::GetDcnRegion() const
{
    return m_dcnRegion;
}

void CreateDBInstanceRequest::SetDcnRegion(const string& _dcnRegion)
{
    m_dcnRegion = _dcnRegion;
    m_dcnRegionHasBeenSet = true;
}

bool CreateDBInstanceRequest::DcnRegionHasBeenSet() const
{
    return m_dcnRegionHasBeenSet;
}

string CreateDBInstanceRequest::GetDcnInstanceId() const
{
    return m_dcnInstanceId;
}

void CreateDBInstanceRequest::SetDcnInstanceId(const string& _dcnInstanceId)
{
    m_dcnInstanceId = _dcnInstanceId;
    m_dcnInstanceIdHasBeenSet = true;
}

bool CreateDBInstanceRequest::DcnInstanceIdHasBeenSet() const
{
    return m_dcnInstanceIdHasBeenSet;
}

int64_t CreateDBInstanceRequest::GetDcnSyncMode() const
{
    return m_dcnSyncMode;
}

void CreateDBInstanceRequest::SetDcnSyncMode(const int64_t& _dcnSyncMode)
{
    m_dcnSyncMode = _dcnSyncMode;
    m_dcnSyncModeHasBeenSet = true;
}

bool CreateDBInstanceRequest::DcnSyncModeHasBeenSet() const
{
    return m_dcnSyncModeHasBeenSet;
}

string CreateDBInstanceRequest::GetCpuType() const
{
    return m_cpuType;
}

void CreateDBInstanceRequest::SetCpuType(const string& _cpuType)
{
    m_cpuType = _cpuType;
    m_cpuTypeHasBeenSet = true;
}

bool CreateDBInstanceRequest::CpuTypeHasBeenSet() const
{
    return m_cpuTypeHasBeenSet;
}


