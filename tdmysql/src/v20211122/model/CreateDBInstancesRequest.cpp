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

#include <tencentcloud/tdmysql/v20211122/model/CreateDBInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

CreateDBInstancesRequest::CreateDBInstancesRequest() :
    m_zoneHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_specCodeHasBeenSet(false),
    m_diskHasBeenSet(false),
    m_storageNodeNumHasBeenSet(false),
    m_replicationsHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_fullReplicationsHasBeenSet(false),
    m_createVersionHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_initParamsHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_storageNodeCpuHasBeenSet(false),
    m_storageNodeMemHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_mCNumHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_voucherIdsHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_aZModeHasBeenSet(false),
    m_instanceModeHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_sQLModeHasBeenSet(false),
    m_autoScaleConfigHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_encryptionEnableHasBeenSet(false)
{
}

string CreateDBInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_fullReplicationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullReplications";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fullReplications, allocator);
    }

    if (m_createVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createVersion.c_str(), allocator).Move(), allocator);
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

    if (m_mCNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MCNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mCNum, allocator);
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

    if (m_aZModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AZMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_aZMode, allocator);
    }

    if (m_instanceModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceMode.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_sQLModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sQLMode.c_str(), allocator).Move(), allocator);
    }

    if (m_autoScaleConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScaleConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoScaleConfig.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptionEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_encryptionEnable, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDBInstancesRequest::GetZone() const
{
    return m_zone;
}

void CreateDBInstancesRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateDBInstancesRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CreateDBInstancesRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateDBInstancesRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateDBInstancesRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateDBInstancesRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateDBInstancesRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateDBInstancesRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateDBInstancesRequest::GetSpecCode() const
{
    return m_specCode;
}

void CreateDBInstancesRequest::SetSpecCode(const string& _specCode)
{
    m_specCode = _specCode;
    m_specCodeHasBeenSet = true;
}

bool CreateDBInstancesRequest::SpecCodeHasBeenSet() const
{
    return m_specCodeHasBeenSet;
}

int64_t CreateDBInstancesRequest::GetDisk() const
{
    return m_disk;
}

void CreateDBInstancesRequest::SetDisk(const int64_t& _disk)
{
    m_disk = _disk;
    m_diskHasBeenSet = true;
}

bool CreateDBInstancesRequest::DiskHasBeenSet() const
{
    return m_diskHasBeenSet;
}

int64_t CreateDBInstancesRequest::GetStorageNodeNum() const
{
    return m_storageNodeNum;
}

void CreateDBInstancesRequest::SetStorageNodeNum(const int64_t& _storageNodeNum)
{
    m_storageNodeNum = _storageNodeNum;
    m_storageNodeNumHasBeenSet = true;
}

bool CreateDBInstancesRequest::StorageNodeNumHasBeenSet() const
{
    return m_storageNodeNumHasBeenSet;
}

int64_t CreateDBInstancesRequest::GetReplications() const
{
    return m_replications;
}

void CreateDBInstancesRequest::SetReplications(const int64_t& _replications)
{
    m_replications = _replications;
    m_replicationsHasBeenSet = true;
}

bool CreateDBInstancesRequest::ReplicationsHasBeenSet() const
{
    return m_replicationsHasBeenSet;
}

int64_t CreateDBInstancesRequest::GetInstanceCount() const
{
    return m_instanceCount;
}

void CreateDBInstancesRequest::SetInstanceCount(const int64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool CreateDBInstancesRequest::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

int64_t CreateDBInstancesRequest::GetFullReplications() const
{
    return m_fullReplications;
}

void CreateDBInstancesRequest::SetFullReplications(const int64_t& _fullReplications)
{
    m_fullReplications = _fullReplications;
    m_fullReplicationsHasBeenSet = true;
}

bool CreateDBInstancesRequest::FullReplicationsHasBeenSet() const
{
    return m_fullReplicationsHasBeenSet;
}

string CreateDBInstancesRequest::GetCreateVersion() const
{
    return m_createVersion;
}

void CreateDBInstancesRequest::SetCreateVersion(const string& _createVersion)
{
    m_createVersion = _createVersion;
    m_createVersionHasBeenSet = true;
}

bool CreateDBInstancesRequest::CreateVersionHasBeenSet() const
{
    return m_createVersionHasBeenSet;
}

string CreateDBInstancesRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateDBInstancesRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateDBInstancesRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

vector<ResourceTag> CreateDBInstancesRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateDBInstancesRequest::SetResourceTags(const vector<ResourceTag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateDBInstancesRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

vector<InstanceParam> CreateDBInstancesRequest::GetInitParams() const
{
    return m_initParams;
}

void CreateDBInstancesRequest::SetInitParams(const vector<InstanceParam>& _initParams)
{
    m_initParams = _initParams;
    m_initParamsHasBeenSet = true;
}

bool CreateDBInstancesRequest::InitParamsHasBeenSet() const
{
    return m_initParamsHasBeenSet;
}

string CreateDBInstancesRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void CreateDBInstancesRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool CreateDBInstancesRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

int64_t CreateDBInstancesRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreateDBInstancesRequest::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreateDBInstancesRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

int64_t CreateDBInstancesRequest::GetStorageNodeCpu() const
{
    return m_storageNodeCpu;
}

void CreateDBInstancesRequest::SetStorageNodeCpu(const int64_t& _storageNodeCpu)
{
    m_storageNodeCpu = _storageNodeCpu;
    m_storageNodeCpuHasBeenSet = true;
}

bool CreateDBInstancesRequest::StorageNodeCpuHasBeenSet() const
{
    return m_storageNodeCpuHasBeenSet;
}

int64_t CreateDBInstancesRequest::GetStorageNodeMem() const
{
    return m_storageNodeMem;
}

void CreateDBInstancesRequest::SetStorageNodeMem(const int64_t& _storageNodeMem)
{
    m_storageNodeMem = _storageNodeMem;
    m_storageNodeMemHasBeenSet = true;
}

bool CreateDBInstancesRequest::StorageNodeMemHasBeenSet() const
{
    return m_storageNodeMemHasBeenSet;
}

string CreateDBInstancesRequest::GetPayMode() const
{
    return m_payMode;
}

void CreateDBInstancesRequest::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CreateDBInstancesRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t CreateDBInstancesRequest::GetMCNum() const
{
    return m_mCNum;
}

void CreateDBInstancesRequest::SetMCNum(const int64_t& _mCNum)
{
    m_mCNum = _mCNum;
    m_mCNumHasBeenSet = true;
}

bool CreateDBInstancesRequest::MCNumHasBeenSet() const
{
    return m_mCNumHasBeenSet;
}

int64_t CreateDBInstancesRequest::GetVport() const
{
    return m_vport;
}

void CreateDBInstancesRequest::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool CreateDBInstancesRequest::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

vector<string> CreateDBInstancesRequest::GetZones() const
{
    return m_zones;
}

void CreateDBInstancesRequest::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool CreateDBInstancesRequest::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

bool CreateDBInstancesRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void CreateDBInstancesRequest::SetAutoVoucher(const bool& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool CreateDBInstancesRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

vector<string> CreateDBInstancesRequest::GetVoucherIds() const
{
    return m_voucherIds;
}

void CreateDBInstancesRequest::SetVoucherIds(const vector<string>& _voucherIds)
{
    m_voucherIds = _voucherIds;
    m_voucherIdsHasBeenSet = true;
}

bool CreateDBInstancesRequest::VoucherIdsHasBeenSet() const
{
    return m_voucherIdsHasBeenSet;
}

string CreateDBInstancesRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateDBInstancesRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateDBInstancesRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string CreateDBInstancesRequest::GetStorageType() const
{
    return m_storageType;
}

void CreateDBInstancesRequest::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool CreateDBInstancesRequest::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

int64_t CreateDBInstancesRequest::GetAZMode() const
{
    return m_aZMode;
}

void CreateDBInstancesRequest::SetAZMode(const int64_t& _aZMode)
{
    m_aZMode = _aZMode;
    m_aZModeHasBeenSet = true;
}

bool CreateDBInstancesRequest::AZModeHasBeenSet() const
{
    return m_aZModeHasBeenSet;
}

string CreateDBInstancesRequest::GetInstanceMode() const
{
    return m_instanceMode;
}

void CreateDBInstancesRequest::SetInstanceMode(const string& _instanceMode)
{
    m_instanceMode = _instanceMode;
    m_instanceModeHasBeenSet = true;
}

bool CreateDBInstancesRequest::InstanceModeHasBeenSet() const
{
    return m_instanceModeHasBeenSet;
}

string CreateDBInstancesRequest::GetTemplateId() const
{
    return m_templateId;
}

void CreateDBInstancesRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool CreateDBInstancesRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string CreateDBInstancesRequest::GetSQLMode() const
{
    return m_sQLMode;
}

void CreateDBInstancesRequest::SetSQLMode(const string& _sQLMode)
{
    m_sQLMode = _sQLMode;
    m_sQLModeHasBeenSet = true;
}

bool CreateDBInstancesRequest::SQLModeHasBeenSet() const
{
    return m_sQLModeHasBeenSet;
}

AutoScalingConfig CreateDBInstancesRequest::GetAutoScaleConfig() const
{
    return m_autoScaleConfig;
}

void CreateDBInstancesRequest::SetAutoScaleConfig(const AutoScalingConfig& _autoScaleConfig)
{
    m_autoScaleConfig = _autoScaleConfig;
    m_autoScaleConfigHasBeenSet = true;
}

bool CreateDBInstancesRequest::AutoScaleConfigHasBeenSet() const
{
    return m_autoScaleConfigHasBeenSet;
}

vector<string> CreateDBInstancesRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateDBInstancesRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateDBInstancesRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

string CreateDBInstancesRequest::GetUserName() const
{
    return m_userName;
}

void CreateDBInstancesRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool CreateDBInstancesRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string CreateDBInstancesRequest::GetPassword() const
{
    return m_password;
}

void CreateDBInstancesRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateDBInstancesRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

int64_t CreateDBInstancesRequest::GetEncryptionEnable() const
{
    return m_encryptionEnable;
}

void CreateDBInstancesRequest::SetEncryptionEnable(const int64_t& _encryptionEnable)
{
    m_encryptionEnable = _encryptionEnable;
    m_encryptionEnableHasBeenSet = true;
}

bool CreateDBInstancesRequest::EncryptionEnableHasBeenSet() const
{
    return m_encryptionEnableHasBeenSet;
}


