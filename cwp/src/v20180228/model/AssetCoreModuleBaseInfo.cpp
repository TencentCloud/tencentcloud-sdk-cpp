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

#include <tencentcloud/cwp/v20180228/model/AssetCoreModuleBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AssetCoreModuleBaseInfo::AssetCoreModuleBaseInfo() :
    m_nameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_osInfoHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_processCountHasBeenSet(false),
    m_moduleCountHasBeenSet(false),
    m_idHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_isNewHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false)
{
}

CoreInternalOutcome AssetCoreModuleBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleBaseInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleBaseInfo.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleBaseInfo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleBaseInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleBaseInfo.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleBaseInfo.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("OsInfo") && !value["OsInfo"].IsNull())
    {
        if (!value["OsInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleBaseInfo.OsInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osInfo = string(value["OsInfo"].GetString());
        m_osInfoHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleBaseInfo.Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("ProcessCount") && !value["ProcessCount"].IsNull())
    {
        if (!value["ProcessCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleBaseInfo.ProcessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_processCount = value["ProcessCount"].GetUint64();
        m_processCountHasBeenSet = true;
    }

    if (value.HasMember("ModuleCount") && !value["ModuleCount"].IsNull())
    {
        if (!value["ModuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleBaseInfo.ModuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_moduleCount = value["ModuleCount"].GetUint64();
        m_moduleCountHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleBaseInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleBaseInfo.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleBaseInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleBaseInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleBaseInfo.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("IsNew") && !value["IsNew"].IsNull())
    {
        if (!value["IsNew"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleBaseInfo.IsNew` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isNew = value["IsNew"].GetInt64();
        m_isNewHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleBaseInfo.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleBaseInfo.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetCoreModuleBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_osInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_processCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processCount, allocator);
    }

    if (m_moduleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_moduleCount, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_firstTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isNewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNew, allocator);
    }

    if (m_machineWanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineWanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineWanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AssetCoreModuleBaseInfo::GetName() const
{
    return m_name;
}

void AssetCoreModuleBaseInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AssetCoreModuleBaseInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AssetCoreModuleBaseInfo::GetDesc() const
{
    return m_desc;
}

void AssetCoreModuleBaseInfo::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool AssetCoreModuleBaseInfo::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string AssetCoreModuleBaseInfo::GetPath() const
{
    return m_path;
}

void AssetCoreModuleBaseInfo::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool AssetCoreModuleBaseInfo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string AssetCoreModuleBaseInfo::GetVersion() const
{
    return m_version;
}

void AssetCoreModuleBaseInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool AssetCoreModuleBaseInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string AssetCoreModuleBaseInfo::GetMachineIp() const
{
    return m_machineIp;
}

void AssetCoreModuleBaseInfo::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool AssetCoreModuleBaseInfo::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string AssetCoreModuleBaseInfo::GetMachineName() const
{
    return m_machineName;
}

void AssetCoreModuleBaseInfo::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool AssetCoreModuleBaseInfo::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string AssetCoreModuleBaseInfo::GetOsInfo() const
{
    return m_osInfo;
}

void AssetCoreModuleBaseInfo::SetOsInfo(const string& _osInfo)
{
    m_osInfo = _osInfo;
    m_osInfoHasBeenSet = true;
}

bool AssetCoreModuleBaseInfo::OsInfoHasBeenSet() const
{
    return m_osInfoHasBeenSet;
}

uint64_t AssetCoreModuleBaseInfo::GetSize() const
{
    return m_size;
}

void AssetCoreModuleBaseInfo::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool AssetCoreModuleBaseInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

uint64_t AssetCoreModuleBaseInfo::GetProcessCount() const
{
    return m_processCount;
}

void AssetCoreModuleBaseInfo::SetProcessCount(const uint64_t& _processCount)
{
    m_processCount = _processCount;
    m_processCountHasBeenSet = true;
}

bool AssetCoreModuleBaseInfo::ProcessCountHasBeenSet() const
{
    return m_processCountHasBeenSet;
}

uint64_t AssetCoreModuleBaseInfo::GetModuleCount() const
{
    return m_moduleCount;
}

void AssetCoreModuleBaseInfo::SetModuleCount(const uint64_t& _moduleCount)
{
    m_moduleCount = _moduleCount;
    m_moduleCountHasBeenSet = true;
}

bool AssetCoreModuleBaseInfo::ModuleCountHasBeenSet() const
{
    return m_moduleCountHasBeenSet;
}

string AssetCoreModuleBaseInfo::GetId() const
{
    return m_id;
}

void AssetCoreModuleBaseInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AssetCoreModuleBaseInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AssetCoreModuleBaseInfo::GetQuuid() const
{
    return m_quuid;
}

void AssetCoreModuleBaseInfo::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool AssetCoreModuleBaseInfo::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string AssetCoreModuleBaseInfo::GetUuid() const
{
    return m_uuid;
}

void AssetCoreModuleBaseInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool AssetCoreModuleBaseInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string AssetCoreModuleBaseInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void AssetCoreModuleBaseInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AssetCoreModuleBaseInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AssetCoreModuleBaseInfo::GetFirstTime() const
{
    return m_firstTime;
}

void AssetCoreModuleBaseInfo::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool AssetCoreModuleBaseInfo::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

int64_t AssetCoreModuleBaseInfo::GetIsNew() const
{
    return m_isNew;
}

void AssetCoreModuleBaseInfo::SetIsNew(const int64_t& _isNew)
{
    m_isNew = _isNew;
    m_isNewHasBeenSet = true;
}

bool AssetCoreModuleBaseInfo::IsNewHasBeenSet() const
{
    return m_isNewHasBeenSet;
}

string AssetCoreModuleBaseInfo::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void AssetCoreModuleBaseInfo::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool AssetCoreModuleBaseInfo::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

MachineExtraInfo AssetCoreModuleBaseInfo::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void AssetCoreModuleBaseInfo::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool AssetCoreModuleBaseInfo::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

