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

#include <tencentcloud/cloudstudio/v20230508/model/WorkspaceStatusInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudstudio::V20230508::Model;
using namespace std;

WorkspaceStatusInfo::WorkspaceStatusInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_spaceKeyHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_iconHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_workspaceTypeHasBeenSet(false),
    m_versionControlUrlHasBeenSet(false),
    m_versionControlRefHasBeenSet(false),
    m_lastOpsDateHasBeenSet(false),
    m_createDateHasBeenSet(false)
{
}

CoreInternalOutcome WorkspaceStatusInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SpaceKey") && !value["SpaceKey"].IsNull())
    {
        if (!value["SpaceKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.SpaceKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceKey = string(value["SpaceKey"].GetString());
        m_spaceKeyHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Icon") && !value["Icon"].IsNull())
    {
        if (!value["Icon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.Icon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_icon = string(value["Icon"].GetString());
        m_iconHasBeenSet = true;
    }

    if (value.HasMember("StatusReason") && !value["StatusReason"].IsNull())
    {
        if (!value["StatusReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.StatusReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusReason = string(value["StatusReason"].GetString());
        m_statusReasonHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceType") && !value["WorkspaceType"].IsNull())
    {
        if (!value["WorkspaceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.WorkspaceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceType = string(value["WorkspaceType"].GetString());
        m_workspaceTypeHasBeenSet = true;
    }

    if (value.HasMember("VersionControlUrl") && !value["VersionControlUrl"].IsNull())
    {
        if (!value["VersionControlUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.VersionControlUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionControlUrl = string(value["VersionControlUrl"].GetString());
        m_versionControlUrlHasBeenSet = true;
    }

    if (value.HasMember("VersionControlRef") && !value["VersionControlRef"].IsNull())
    {
        if (!value["VersionControlRef"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.VersionControlRef` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionControlRef = string(value["VersionControlRef"].GetString());
        m_versionControlRefHasBeenSet = true;
    }

    if (value.HasMember("LastOpsDate") && !value["LastOpsDate"].IsNull())
    {
        if (!value["LastOpsDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.LastOpsDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastOpsDate = string(value["LastOpsDate"].GetString());
        m_lastOpsDateHasBeenSet = true;
    }

    if (value.HasMember("CreateDate") && !value["CreateDate"].IsNull())
    {
        if (!value["CreateDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.CreateDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createDate = string(value["CreateDate"].GetString());
        m_createDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkspaceStatusInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceKey.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_iconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Icon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_icon.c_str(), allocator).Move(), allocator);
    }

    if (m_statusReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusReason.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workspaceType.c_str(), allocator).Move(), allocator);
    }

    if (m_versionControlUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionControlUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionControlUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_versionControlRefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionControlRef";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionControlRef.c_str(), allocator).Move(), allocator);
    }

    if (m_lastOpsDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastOpsDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastOpsDate.c_str(), allocator).Move(), allocator);
    }

    if (m_createDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createDate.c_str(), allocator).Move(), allocator);
    }

}


int64_t WorkspaceStatusInfo::GetId() const
{
    return m_id;
}

void WorkspaceStatusInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool WorkspaceStatusInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string WorkspaceStatusInfo::GetName() const
{
    return m_name;
}

void WorkspaceStatusInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool WorkspaceStatusInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string WorkspaceStatusInfo::GetSpaceKey() const
{
    return m_spaceKey;
}

void WorkspaceStatusInfo::SetSpaceKey(const string& _spaceKey)
{
    m_spaceKey = _spaceKey;
    m_spaceKeyHasBeenSet = true;
}

bool WorkspaceStatusInfo::SpaceKeyHasBeenSet() const
{
    return m_spaceKeyHasBeenSet;
}

string WorkspaceStatusInfo::GetStatus() const
{
    return m_status;
}

void WorkspaceStatusInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool WorkspaceStatusInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t WorkspaceStatusInfo::GetCpu() const
{
    return m_cpu;
}

void WorkspaceStatusInfo::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool WorkspaceStatusInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t WorkspaceStatusInfo::GetMemory() const
{
    return m_memory;
}

void WorkspaceStatusInfo::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool WorkspaceStatusInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string WorkspaceStatusInfo::GetIcon() const
{
    return m_icon;
}

void WorkspaceStatusInfo::SetIcon(const string& _icon)
{
    m_icon = _icon;
    m_iconHasBeenSet = true;
}

bool WorkspaceStatusInfo::IconHasBeenSet() const
{
    return m_iconHasBeenSet;
}

string WorkspaceStatusInfo::GetStatusReason() const
{
    return m_statusReason;
}

void WorkspaceStatusInfo::SetStatusReason(const string& _statusReason)
{
    m_statusReason = _statusReason;
    m_statusReasonHasBeenSet = true;
}

bool WorkspaceStatusInfo::StatusReasonHasBeenSet() const
{
    return m_statusReasonHasBeenSet;
}

string WorkspaceStatusInfo::GetDescription() const
{
    return m_description;
}

void WorkspaceStatusInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool WorkspaceStatusInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string WorkspaceStatusInfo::GetWorkspaceType() const
{
    return m_workspaceType;
}

void WorkspaceStatusInfo::SetWorkspaceType(const string& _workspaceType)
{
    m_workspaceType = _workspaceType;
    m_workspaceTypeHasBeenSet = true;
}

bool WorkspaceStatusInfo::WorkspaceTypeHasBeenSet() const
{
    return m_workspaceTypeHasBeenSet;
}

string WorkspaceStatusInfo::GetVersionControlUrl() const
{
    return m_versionControlUrl;
}

void WorkspaceStatusInfo::SetVersionControlUrl(const string& _versionControlUrl)
{
    m_versionControlUrl = _versionControlUrl;
    m_versionControlUrlHasBeenSet = true;
}

bool WorkspaceStatusInfo::VersionControlUrlHasBeenSet() const
{
    return m_versionControlUrlHasBeenSet;
}

string WorkspaceStatusInfo::GetVersionControlRef() const
{
    return m_versionControlRef;
}

void WorkspaceStatusInfo::SetVersionControlRef(const string& _versionControlRef)
{
    m_versionControlRef = _versionControlRef;
    m_versionControlRefHasBeenSet = true;
}

bool WorkspaceStatusInfo::VersionControlRefHasBeenSet() const
{
    return m_versionControlRefHasBeenSet;
}

string WorkspaceStatusInfo::GetLastOpsDate() const
{
    return m_lastOpsDate;
}

void WorkspaceStatusInfo::SetLastOpsDate(const string& _lastOpsDate)
{
    m_lastOpsDate = _lastOpsDate;
    m_lastOpsDateHasBeenSet = true;
}

bool WorkspaceStatusInfo::LastOpsDateHasBeenSet() const
{
    return m_lastOpsDateHasBeenSet;
}

string WorkspaceStatusInfo::GetCreateDate() const
{
    return m_createDate;
}

void WorkspaceStatusInfo::SetCreateDate(const string& _createDate)
{
    m_createDate = _createDate;
    m_createDateHasBeenSet = true;
}

bool WorkspaceStatusInfo::CreateDateHasBeenSet() const
{
    return m_createDateHasBeenSet;
}

