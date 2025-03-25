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

#include <tencentcloud/cdwdoris/v20211228/model/InstanceNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

InstanceNode::InstanceNode() :
    m_ipHasBeenSet(false),
    m_specHasBeenSet(false),
    m_coreHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ripHasBeenSet(false),
    m_feRoleHasBeenSet(false),
    m_uUIDHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_computeGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome InstanceNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Spec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spec = string(value["Spec"].GetString());
        m_specHasBeenSet = true;
    }

    if (value.HasMember("Core") && !value["Core"].IsNull())
    {
        if (!value["Core"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Core` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_core = value["Core"].GetInt64();
        m_coreHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Rip") && !value["Rip"].IsNull())
    {
        if (!value["Rip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Rip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rip = string(value["Rip"].GetString());
        m_ripHasBeenSet = true;
    }

    if (value.HasMember("FeRole") && !value["FeRole"].IsNull())
    {
        if (!value["FeRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.FeRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_feRole = string(value["FeRole"].GetString());
        m_feRoleHasBeenSet = true;
    }

    if (value.HasMember("UUID") && !value["UUID"].IsNull())
    {
        if (!value["UUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.UUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uUID = string(value["UUID"].GetString());
        m_uUIDHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ComputeGroupId") && !value["ComputeGroupId"].IsNull())
    {
        if (!value["ComputeGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.ComputeGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computeGroupId = string(value["ComputeGroupId"].GetString());
        m_computeGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spec.c_str(), allocator).Move(), allocator);
    }

    if (m_coreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Core";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_core, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_ripHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rip.c_str(), allocator).Move(), allocator);
    }

    if (m_feRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_feRole.c_str(), allocator).Move(), allocator);
    }

    if (m_uUIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uUID.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_computeGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computeGroupId.c_str(), allocator).Move(), allocator);
    }

}


string InstanceNode::GetIp() const
{
    return m_ip;
}

void InstanceNode::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool InstanceNode::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string InstanceNode::GetSpec() const
{
    return m_spec;
}

void InstanceNode::SetSpec(const string& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool InstanceNode::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

int64_t InstanceNode::GetCore() const
{
    return m_core;
}

void InstanceNode::SetCore(const int64_t& _core)
{
    m_core = _core;
    m_coreHasBeenSet = true;
}

bool InstanceNode::CoreHasBeenSet() const
{
    return m_coreHasBeenSet;
}

int64_t InstanceNode::GetMemory() const
{
    return m_memory;
}

void InstanceNode::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool InstanceNode::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string InstanceNode::GetDiskType() const
{
    return m_diskType;
}

void InstanceNode::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool InstanceNode::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

int64_t InstanceNode::GetDiskSize() const
{
    return m_diskSize;
}

void InstanceNode::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool InstanceNode::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string InstanceNode::GetRole() const
{
    return m_role;
}

void InstanceNode::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool InstanceNode::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string InstanceNode::GetStatus() const
{
    return m_status;
}

void InstanceNode::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceNode::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string InstanceNode::GetRip() const
{
    return m_rip;
}

void InstanceNode::SetRip(const string& _rip)
{
    m_rip = _rip;
    m_ripHasBeenSet = true;
}

bool InstanceNode::RipHasBeenSet() const
{
    return m_ripHasBeenSet;
}

string InstanceNode::GetFeRole() const
{
    return m_feRole;
}

void InstanceNode::SetFeRole(const string& _feRole)
{
    m_feRole = _feRole;
    m_feRoleHasBeenSet = true;
}

bool InstanceNode::FeRoleHasBeenSet() const
{
    return m_feRoleHasBeenSet;
}

string InstanceNode::GetUUID() const
{
    return m_uUID;
}

void InstanceNode::SetUUID(const string& _uUID)
{
    m_uUID = _uUID;
    m_uUIDHasBeenSet = true;
}

bool InstanceNode::UUIDHasBeenSet() const
{
    return m_uUIDHasBeenSet;
}

string InstanceNode::GetZone() const
{
    return m_zone;
}

void InstanceNode::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InstanceNode::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string InstanceNode::GetCreateTime() const
{
    return m_createTime;
}

void InstanceNode::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InstanceNode::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string InstanceNode::GetComputeGroupId() const
{
    return m_computeGroupId;
}

void InstanceNode::SetComputeGroupId(const string& _computeGroupId)
{
    m_computeGroupId = _computeGroupId;
    m_computeGroupIdHasBeenSet = true;
}

bool InstanceNode::ComputeGroupIdHasBeenSet() const
{
    return m_computeGroupIdHasBeenSet;
}

