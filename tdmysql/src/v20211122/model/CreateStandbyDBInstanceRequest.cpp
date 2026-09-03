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

#include <tencentcloud/tdmysql/v20211122/model/CreateStandbyDBInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

CreateStandbyDBInstanceRequest::CreateStandbyDBInstanceRequest() :
    m_primaryInstanceIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_specCodeHasBeenSet(false),
    m_diskHasBeenSet(false),
    m_storageNodeNumHasBeenSet(false),
    m_replicationsHasBeenSet(false),
    m_fullReplicationsHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_storageNodeCpuHasBeenSet(false),
    m_storageNodeMemHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_voucherIdsHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_primaryInstanceRegionHasBeenSet(false),
    m_instanceModeHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false)
{
}

string CreateStandbyDBInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_primaryInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_primaryInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
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

    if (m_specCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_specCode.c_str(), allocator).Move(), allocator);
    }

    if (m_diskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disk, allocator);
    }

    if (m_storageNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageNodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storageNodeNum, allocator);
    }

    if (m_replicationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replications";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replications, allocator);
    }

    if (m_fullReplicationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullReplications";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fullReplications, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_storageNodeCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageNodeCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storageNodeCpu, allocator);
    }

    if (m_storageNodeMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageNodeMem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storageNodeMem, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vport, allocator);
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

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
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

    if (m_primaryInstanceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryInstanceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_primaryInstanceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceMode.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateStandbyDBInstanceRequest::GetPrimaryInstanceId() const
{
    return m_primaryInstanceId;
}

void CreateStandbyDBInstanceRequest::SetPrimaryInstanceId(const string& _primaryInstanceId)
{
    m_primaryInstanceId = _primaryInstanceId;
    m_primaryInstanceIdHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::PrimaryInstanceIdHasBeenSet() const
{
    return m_primaryInstanceIdHasBeenSet;
}

string CreateStandbyDBInstanceRequest::GetZone() const
{
    return m_zone;
}

void CreateStandbyDBInstanceRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CreateStandbyDBInstanceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateStandbyDBInstanceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateStandbyDBInstanceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateStandbyDBInstanceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateStandbyDBInstanceRequest::GetSpecCode() const
{
    return m_specCode;
}

void CreateStandbyDBInstanceRequest::SetSpecCode(const string& _specCode)
{
    m_specCode = _specCode;
    m_specCodeHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::SpecCodeHasBeenSet() const
{
    return m_specCodeHasBeenSet;
}

int64_t CreateStandbyDBInstanceRequest::GetDisk() const
{
    return m_disk;
}

void CreateStandbyDBInstanceRequest::SetDisk(const int64_t& _disk)
{
    m_disk = _disk;
    m_diskHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::DiskHasBeenSet() const
{
    return m_diskHasBeenSet;
}

int64_t CreateStandbyDBInstanceRequest::GetStorageNodeNum() const
{
    return m_storageNodeNum;
}

void CreateStandbyDBInstanceRequest::SetStorageNodeNum(const int64_t& _storageNodeNum)
{
    m_storageNodeNum = _storageNodeNum;
    m_storageNodeNumHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::StorageNodeNumHasBeenSet() const
{
    return m_storageNodeNumHasBeenSet;
}

int64_t CreateStandbyDBInstanceRequest::GetReplications() const
{
    return m_replications;
}

void CreateStandbyDBInstanceRequest::SetReplications(const int64_t& _replications)
{
    m_replications = _replications;
    m_replicationsHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::ReplicationsHasBeenSet() const
{
    return m_replicationsHasBeenSet;
}

int64_t CreateStandbyDBInstanceRequest::GetFullReplications() const
{
    return m_fullReplications;
}

void CreateStandbyDBInstanceRequest::SetFullReplications(const int64_t& _fullReplications)
{
    m_fullReplications = _fullReplications;
    m_fullReplicationsHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::FullReplicationsHasBeenSet() const
{
    return m_fullReplicationsHasBeenSet;
}

string CreateStandbyDBInstanceRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateStandbyDBInstanceRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CreateStandbyDBInstanceRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void CreateStandbyDBInstanceRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

int64_t CreateStandbyDBInstanceRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreateStandbyDBInstanceRequest::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

int64_t CreateStandbyDBInstanceRequest::GetStorageNodeCpu() const
{
    return m_storageNodeCpu;
}

void CreateStandbyDBInstanceRequest::SetStorageNodeCpu(const int64_t& _storageNodeCpu)
{
    m_storageNodeCpu = _storageNodeCpu;
    m_storageNodeCpuHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::StorageNodeCpuHasBeenSet() const
{
    return m_storageNodeCpuHasBeenSet;
}

int64_t CreateStandbyDBInstanceRequest::GetStorageNodeMem() const
{
    return m_storageNodeMem;
}

void CreateStandbyDBInstanceRequest::SetStorageNodeMem(const int64_t& _storageNodeMem)
{
    m_storageNodeMem = _storageNodeMem;
    m_storageNodeMemHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::StorageNodeMemHasBeenSet() const
{
    return m_storageNodeMemHasBeenSet;
}

string CreateStandbyDBInstanceRequest::GetPayMode() const
{
    return m_payMode;
}

void CreateStandbyDBInstanceRequest::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t CreateStandbyDBInstanceRequest::GetVport() const
{
    return m_vport;
}

void CreateStandbyDBInstanceRequest::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

vector<string> CreateStandbyDBInstanceRequest::GetZones() const
{
    return m_zones;
}

void CreateStandbyDBInstanceRequest::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

bool CreateStandbyDBInstanceRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void CreateStandbyDBInstanceRequest::SetAutoVoucher(const bool& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

vector<string> CreateStandbyDBInstanceRequest::GetVoucherIds() const
{
    return m_voucherIds;
}

void CreateStandbyDBInstanceRequest::SetVoucherIds(const vector<string>& _voucherIds)
{
    m_voucherIds = _voucherIds;
    m_voucherIdsHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::VoucherIdsHasBeenSet() const
{
    return m_voucherIdsHasBeenSet;
}

string CreateStandbyDBInstanceRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateStandbyDBInstanceRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string CreateStandbyDBInstanceRequest::GetStorageType() const
{
    return m_storageType;
}

void CreateStandbyDBInstanceRequest::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

vector<ResourceTag> CreateStandbyDBInstanceRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateStandbyDBInstanceRequest::SetResourceTags(const vector<ResourceTag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string CreateStandbyDBInstanceRequest::GetPrimaryInstanceRegion() const
{
    return m_primaryInstanceRegion;
}

void CreateStandbyDBInstanceRequest::SetPrimaryInstanceRegion(const string& _primaryInstanceRegion)
{
    m_primaryInstanceRegion = _primaryInstanceRegion;
    m_primaryInstanceRegionHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::PrimaryInstanceRegionHasBeenSet() const
{
    return m_primaryInstanceRegionHasBeenSet;
}

string CreateStandbyDBInstanceRequest::GetInstanceMode() const
{
    return m_instanceMode;
}

void CreateStandbyDBInstanceRequest::SetInstanceMode(const string& _instanceMode)
{
    m_instanceMode = _instanceMode;
    m_instanceModeHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::InstanceModeHasBeenSet() const
{
    return m_instanceModeHasBeenSet;
}

string CreateStandbyDBInstanceRequest::GetPassword() const
{
    return m_password;
}

void CreateStandbyDBInstanceRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

vector<string> CreateStandbyDBInstanceRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateStandbyDBInstanceRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateStandbyDBInstanceRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}


