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

#include <tencentcloud/cwp/v20180228/model/AssetWebServiceBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AssetWebServiceBaseInfo::AssetWebServiceBaseInfo() :
    m_machineIpHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_osInfoHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_binPathHasBeenSet(false),
    m_userHasBeenSet(false),
    m_installPathHasBeenSet(false),
    m_configPathHasBeenSet(false),
    m_processCountHasBeenSet(false),
    m_idHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_isNewHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false)
{
}

CoreInternalOutcome AssetWebServiceBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebServiceBaseInfo.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebServiceBaseInfo.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebServiceBaseInfo.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebServiceBaseInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("OsInfo") && !value["OsInfo"].IsNull())
    {
        if (!value["OsInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebServiceBaseInfo.OsInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osInfo = string(value["OsInfo"].GetString());
        m_osInfoHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebServiceBaseInfo.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetWebServiceBaseInfo.Tag` is not array type"));

        const rapidjson::Value &tmpValue = value["Tag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MachineTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tag.push_back(item);
        }
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebServiceBaseInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebServiceBaseInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("BinPath") && !value["BinPath"].IsNull())
    {
        if (!value["BinPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebServiceBaseInfo.BinPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_binPath = string(value["BinPath"].GetString());
        m_binPathHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebServiceBaseInfo.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("InstallPath") && !value["InstallPath"].IsNull())
    {
        if (!value["InstallPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebServiceBaseInfo.InstallPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_installPath = string(value["InstallPath"].GetString());
        m_installPathHasBeenSet = true;
    }

    if (value.HasMember("ConfigPath") && !value["ConfigPath"].IsNull())
    {
        if (!value["ConfigPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebServiceBaseInfo.ConfigPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configPath = string(value["ConfigPath"].GetString());
        m_configPathHasBeenSet = true;
    }

    if (value.HasMember("ProcessCount") && !value["ProcessCount"].IsNull())
    {
        if (!value["ProcessCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebServiceBaseInfo.ProcessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_processCount = value["ProcessCount"].GetUint64();
        m_processCountHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebServiceBaseInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebServiceBaseInfo.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebServiceBaseInfo.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebServiceBaseInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebServiceBaseInfo.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("IsNew") && !value["IsNew"].IsNull())
    {
        if (!value["IsNew"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebServiceBaseInfo.IsNew` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isNew = value["IsNew"].GetInt64();
        m_isNewHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebServiceBaseInfo.MachineExtraInfo` is not object type").SetRequestId(requestId));
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

void AssetWebServiceBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineWanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineWanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineWanIp.c_str(), allocator).Move(), allocator);
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

    if (m_osInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_binPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_binPath.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_installPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstallPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_installPath.c_str(), allocator).Move(), allocator);
    }

    if (m_configPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configPath.c_str(), allocator).Move(), allocator);
    }

    if (m_processCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processCount, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
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

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AssetWebServiceBaseInfo::GetMachineIp() const
{
    return m_machineIp;
}

void AssetWebServiceBaseInfo::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool AssetWebServiceBaseInfo::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string AssetWebServiceBaseInfo::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void AssetWebServiceBaseInfo::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool AssetWebServiceBaseInfo::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

string AssetWebServiceBaseInfo::GetQuuid() const
{
    return m_quuid;
}

void AssetWebServiceBaseInfo::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool AssetWebServiceBaseInfo::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string AssetWebServiceBaseInfo::GetUuid() const
{
    return m_uuid;
}

void AssetWebServiceBaseInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool AssetWebServiceBaseInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string AssetWebServiceBaseInfo::GetOsInfo() const
{
    return m_osInfo;
}

void AssetWebServiceBaseInfo::SetOsInfo(const string& _osInfo)
{
    m_osInfo = _osInfo;
    m_osInfoHasBeenSet = true;
}

bool AssetWebServiceBaseInfo::OsInfoHasBeenSet() const
{
    return m_osInfoHasBeenSet;
}

uint64_t AssetWebServiceBaseInfo::GetProjectId() const
{
    return m_projectId;
}

void AssetWebServiceBaseInfo::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AssetWebServiceBaseInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<MachineTag> AssetWebServiceBaseInfo::GetTag() const
{
    return m_tag;
}

void AssetWebServiceBaseInfo::SetTag(const vector<MachineTag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool AssetWebServiceBaseInfo::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string AssetWebServiceBaseInfo::GetName() const
{
    return m_name;
}

void AssetWebServiceBaseInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AssetWebServiceBaseInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AssetWebServiceBaseInfo::GetVersion() const
{
    return m_version;
}

void AssetWebServiceBaseInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool AssetWebServiceBaseInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string AssetWebServiceBaseInfo::GetBinPath() const
{
    return m_binPath;
}

void AssetWebServiceBaseInfo::SetBinPath(const string& _binPath)
{
    m_binPath = _binPath;
    m_binPathHasBeenSet = true;
}

bool AssetWebServiceBaseInfo::BinPathHasBeenSet() const
{
    return m_binPathHasBeenSet;
}

string AssetWebServiceBaseInfo::GetUser() const
{
    return m_user;
}

void AssetWebServiceBaseInfo::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool AssetWebServiceBaseInfo::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string AssetWebServiceBaseInfo::GetInstallPath() const
{
    return m_installPath;
}

void AssetWebServiceBaseInfo::SetInstallPath(const string& _installPath)
{
    m_installPath = _installPath;
    m_installPathHasBeenSet = true;
}

bool AssetWebServiceBaseInfo::InstallPathHasBeenSet() const
{
    return m_installPathHasBeenSet;
}

string AssetWebServiceBaseInfo::GetConfigPath() const
{
    return m_configPath;
}

void AssetWebServiceBaseInfo::SetConfigPath(const string& _configPath)
{
    m_configPath = _configPath;
    m_configPathHasBeenSet = true;
}

bool AssetWebServiceBaseInfo::ConfigPathHasBeenSet() const
{
    return m_configPathHasBeenSet;
}

uint64_t AssetWebServiceBaseInfo::GetProcessCount() const
{
    return m_processCount;
}

void AssetWebServiceBaseInfo::SetProcessCount(const uint64_t& _processCount)
{
    m_processCount = _processCount;
    m_processCountHasBeenSet = true;
}

bool AssetWebServiceBaseInfo::ProcessCountHasBeenSet() const
{
    return m_processCountHasBeenSet;
}

string AssetWebServiceBaseInfo::GetId() const
{
    return m_id;
}

void AssetWebServiceBaseInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AssetWebServiceBaseInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AssetWebServiceBaseInfo::GetMachineName() const
{
    return m_machineName;
}

void AssetWebServiceBaseInfo::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool AssetWebServiceBaseInfo::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string AssetWebServiceBaseInfo::GetDesc() const
{
    return m_desc;
}

void AssetWebServiceBaseInfo::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool AssetWebServiceBaseInfo::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string AssetWebServiceBaseInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void AssetWebServiceBaseInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AssetWebServiceBaseInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AssetWebServiceBaseInfo::GetFirstTime() const
{
    return m_firstTime;
}

void AssetWebServiceBaseInfo::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool AssetWebServiceBaseInfo::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

int64_t AssetWebServiceBaseInfo::GetIsNew() const
{
    return m_isNew;
}

void AssetWebServiceBaseInfo::SetIsNew(const int64_t& _isNew)
{
    m_isNew = _isNew;
    m_isNewHasBeenSet = true;
}

bool AssetWebServiceBaseInfo::IsNewHasBeenSet() const
{
    return m_isNewHasBeenSet;
}

MachineExtraInfo AssetWebServiceBaseInfo::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void AssetWebServiceBaseInfo::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool AssetWebServiceBaseInfo::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

