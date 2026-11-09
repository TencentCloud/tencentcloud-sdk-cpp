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

#include <tencentcloud/tdmysql/v20211122/model/ModifyDBInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

ModifyDBInstanceRequest::ModifyDBInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_hybridNodeCpuHasBeenSet(false),
    m_hybridNodeMemHasBeenSet(false),
    m_hybridNodeNumHasBeenSet(false),
    m_diskHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_specCodeHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_aZModeHasBeenSet(false),
    m_primaryAZHasBeenSet(false),
    m_fullReplicationsHasBeenSet(false)
{
}

string ModifyDBInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_hybridNodeCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HybridNodeCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hybridNodeCpu, allocator);
    }

    if (m_hybridNodeMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HybridNodeMem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hybridNodeMem, allocator);
    }

    if (m_hybridNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HybridNodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hybridNodeNum, allocator);
    }

    if (m_diskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disk, allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_specCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_specCode.c_str(), allocator).Move(), allocator);
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

    if (m_aZModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AZMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_aZMode, allocator);
    }

    if (m_primaryAZHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryAZ";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_primaryAZ.c_str(), allocator).Move(), allocator);
    }

    if (m_fullReplicationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullReplications";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fullReplications, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyDBInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyDBInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

bool ModifyDBInstanceRequest::GetDryRun() const
{
    return m_dryRun;
}

void ModifyDBInstanceRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool ModifyDBInstanceRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

int64_t ModifyDBInstanceRequest::GetHybridNodeCpu() const
{
    return m_hybridNodeCpu;
}

void ModifyDBInstanceRequest::SetHybridNodeCpu(const int64_t& _hybridNodeCpu)
{
    m_hybridNodeCpu = _hybridNodeCpu;
    m_hybridNodeCpuHasBeenSet = true;
}

bool ModifyDBInstanceRequest::HybridNodeCpuHasBeenSet() const
{
    return m_hybridNodeCpuHasBeenSet;
}

int64_t ModifyDBInstanceRequest::GetHybridNodeMem() const
{
    return m_hybridNodeMem;
}

void ModifyDBInstanceRequest::SetHybridNodeMem(const int64_t& _hybridNodeMem)
{
    m_hybridNodeMem = _hybridNodeMem;
    m_hybridNodeMemHasBeenSet = true;
}

bool ModifyDBInstanceRequest::HybridNodeMemHasBeenSet() const
{
    return m_hybridNodeMemHasBeenSet;
}

int64_t ModifyDBInstanceRequest::GetHybridNodeNum() const
{
    return m_hybridNodeNum;
}

void ModifyDBInstanceRequest::SetHybridNodeNum(const int64_t& _hybridNodeNum)
{
    m_hybridNodeNum = _hybridNodeNum;
    m_hybridNodeNumHasBeenSet = true;
}

bool ModifyDBInstanceRequest::HybridNodeNumHasBeenSet() const
{
    return m_hybridNodeNumHasBeenSet;
}

int64_t ModifyDBInstanceRequest::GetDisk() const
{
    return m_disk;
}

void ModifyDBInstanceRequest::SetDisk(const int64_t& _disk)
{
    m_disk = _disk;
    m_diskHasBeenSet = true;
}

bool ModifyDBInstanceRequest::DiskHasBeenSet() const
{
    return m_diskHasBeenSet;
}

string ModifyDBInstanceRequest::GetStorageType() const
{
    return m_storageType;
}

void ModifyDBInstanceRequest::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool ModifyDBInstanceRequest::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string ModifyDBInstanceRequest::GetSpecCode() const
{
    return m_specCode;
}

void ModifyDBInstanceRequest::SetSpecCode(const string& _specCode)
{
    m_specCode = _specCode;
    m_specCodeHasBeenSet = true;
}

bool ModifyDBInstanceRequest::SpecCodeHasBeenSet() const
{
    return m_specCodeHasBeenSet;
}

vector<string> ModifyDBInstanceRequest::GetZones() const
{
    return m_zones;
}

void ModifyDBInstanceRequest::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool ModifyDBInstanceRequest::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

int64_t ModifyDBInstanceRequest::GetAZMode() const
{
    return m_aZMode;
}

void ModifyDBInstanceRequest::SetAZMode(const int64_t& _aZMode)
{
    m_aZMode = _aZMode;
    m_aZModeHasBeenSet = true;
}

bool ModifyDBInstanceRequest::AZModeHasBeenSet() const
{
    return m_aZModeHasBeenSet;
}

string ModifyDBInstanceRequest::GetPrimaryAZ() const
{
    return m_primaryAZ;
}

void ModifyDBInstanceRequest::SetPrimaryAZ(const string& _primaryAZ)
{
    m_primaryAZ = _primaryAZ;
    m_primaryAZHasBeenSet = true;
}

bool ModifyDBInstanceRequest::PrimaryAZHasBeenSet() const
{
    return m_primaryAZHasBeenSet;
}

int64_t ModifyDBInstanceRequest::GetFullReplications() const
{
    return m_fullReplications;
}

void ModifyDBInstanceRequest::SetFullReplications(const int64_t& _fullReplications)
{
    m_fullReplications = _fullReplications;
    m_fullReplicationsHasBeenSet = true;
}

bool ModifyDBInstanceRequest::FullReplicationsHasBeenSet() const
{
    return m_fullReplicationsHasBeenSet;
}


