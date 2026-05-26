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

#include <tencentcloud/tdmysql/v20211122/model/CreateCloneInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

CreateCloneInstanceRequest::CreateCloneInstanceRequest() :
    m_zoneHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_specCodeHasBeenSet(false),
    m_diskHasBeenSet(false),
    m_storageNodeNumHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_backupNameHasBeenSet(false),
    m_storageNodeCpuHasBeenSet(false),
    m_storageNodeMemHasBeenSet(false),
    m_createVersionHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_recoverTimeHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_fullReplicationsHasBeenSet(false),
    m_instanceModeHasBeenSet(false)
{
}

string CreateCloneInstanceRequest::ToJsonString() const
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

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
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

    if (m_backupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupName.c_str(), allocator).Move(), allocator);
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

    if (m_createVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vport, allocator);
    }

    if (m_recoverTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecoverTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recoverTime.c_str(), allocator).Move(), allocator);
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

    if (m_fullReplicationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullReplications";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fullReplications, allocator);
    }

    if (m_instanceModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCloneInstanceRequest::GetZone() const
{
    return m_zone;
}

void CreateCloneInstanceRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateCloneInstanceRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CreateCloneInstanceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateCloneInstanceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateCloneInstanceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateCloneInstanceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateCloneInstanceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateCloneInstanceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateCloneInstanceRequest::GetSpecCode() const
{
    return m_specCode;
}

void CreateCloneInstanceRequest::SetSpecCode(const string& _specCode)
{
    m_specCode = _specCode;
    m_specCodeHasBeenSet = true;
}

bool CreateCloneInstanceRequest::SpecCodeHasBeenSet() const
{
    return m_specCodeHasBeenSet;
}

int64_t CreateCloneInstanceRequest::GetDisk() const
{
    return m_disk;
}

void CreateCloneInstanceRequest::SetDisk(const int64_t& _disk)
{
    m_disk = _disk;
    m_diskHasBeenSet = true;
}

bool CreateCloneInstanceRequest::DiskHasBeenSet() const
{
    return m_diskHasBeenSet;
}

int64_t CreateCloneInstanceRequest::GetStorageNodeNum() const
{
    return m_storageNodeNum;
}

void CreateCloneInstanceRequest::SetStorageNodeNum(const int64_t& _storageNodeNum)
{
    m_storageNodeNum = _storageNodeNum;
    m_storageNodeNumHasBeenSet = true;
}

bool CreateCloneInstanceRequest::StorageNodeNumHasBeenSet() const
{
    return m_storageNodeNumHasBeenSet;
}

string CreateCloneInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateCloneInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateCloneInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateCloneInstanceRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateCloneInstanceRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateCloneInstanceRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

vector<ResourceTag> CreateCloneInstanceRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateCloneInstanceRequest::SetResourceTags(const vector<ResourceTag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateCloneInstanceRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string CreateCloneInstanceRequest::GetBackupName() const
{
    return m_backupName;
}

void CreateCloneInstanceRequest::SetBackupName(const string& _backupName)
{
    m_backupName = _backupName;
    m_backupNameHasBeenSet = true;
}

bool CreateCloneInstanceRequest::BackupNameHasBeenSet() const
{
    return m_backupNameHasBeenSet;
}

int64_t CreateCloneInstanceRequest::GetStorageNodeCpu() const
{
    return m_storageNodeCpu;
}

void CreateCloneInstanceRequest::SetStorageNodeCpu(const int64_t& _storageNodeCpu)
{
    m_storageNodeCpu = _storageNodeCpu;
    m_storageNodeCpuHasBeenSet = true;
}

bool CreateCloneInstanceRequest::StorageNodeCpuHasBeenSet() const
{
    return m_storageNodeCpuHasBeenSet;
}

int64_t CreateCloneInstanceRequest::GetStorageNodeMem() const
{
    return m_storageNodeMem;
}

void CreateCloneInstanceRequest::SetStorageNodeMem(const int64_t& _storageNodeMem)
{
    m_storageNodeMem = _storageNodeMem;
    m_storageNodeMemHasBeenSet = true;
}

bool CreateCloneInstanceRequest::StorageNodeMemHasBeenSet() const
{
    return m_storageNodeMemHasBeenSet;
}

string CreateCloneInstanceRequest::GetCreateVersion() const
{
    return m_createVersion;
}

void CreateCloneInstanceRequest::SetCreateVersion(const string& _createVersion)
{
    m_createVersion = _createVersion;
    m_createVersionHasBeenSet = true;
}

bool CreateCloneInstanceRequest::CreateVersionHasBeenSet() const
{
    return m_createVersionHasBeenSet;
}

int64_t CreateCloneInstanceRequest::GetVport() const
{
    return m_vport;
}

void CreateCloneInstanceRequest::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool CreateCloneInstanceRequest::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string CreateCloneInstanceRequest::GetRecoverTime() const
{
    return m_recoverTime;
}

void CreateCloneInstanceRequest::SetRecoverTime(const string& _recoverTime)
{
    m_recoverTime = _recoverTime;
    m_recoverTimeHasBeenSet = true;
}

bool CreateCloneInstanceRequest::RecoverTimeHasBeenSet() const
{
    return m_recoverTimeHasBeenSet;
}

string CreateCloneInstanceRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateCloneInstanceRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateCloneInstanceRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string CreateCloneInstanceRequest::GetStorageType() const
{
    return m_storageType;
}

void CreateCloneInstanceRequest::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool CreateCloneInstanceRequest::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

vector<string> CreateCloneInstanceRequest::GetZones() const
{
    return m_zones;
}

void CreateCloneInstanceRequest::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool CreateCloneInstanceRequest::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

int64_t CreateCloneInstanceRequest::GetFullReplications() const
{
    return m_fullReplications;
}

void CreateCloneInstanceRequest::SetFullReplications(const int64_t& _fullReplications)
{
    m_fullReplications = _fullReplications;
    m_fullReplicationsHasBeenSet = true;
}

bool CreateCloneInstanceRequest::FullReplicationsHasBeenSet() const
{
    return m_fullReplicationsHasBeenSet;
}

string CreateCloneInstanceRequest::GetInstanceMode() const
{
    return m_instanceMode;
}

void CreateCloneInstanceRequest::SetInstanceMode(const string& _instanceMode)
{
    m_instanceMode = _instanceMode;
    m_instanceModeHasBeenSet = true;
}

bool CreateCloneInstanceRequest::InstanceModeHasBeenSet() const
{
    return m_instanceModeHasBeenSet;
}


