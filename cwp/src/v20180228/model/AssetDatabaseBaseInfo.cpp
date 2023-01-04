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

#include <tencentcloud/cwp/v20180228/model/AssetDatabaseBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AssetDatabaseBaseInfo::AssetDatabaseBaseInfo() :
    m_machineIpHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_osInfoHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_portHasBeenSet(false),
    m_protoHasBeenSet(false),
    m_userHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_configPathHasBeenSet(false),
    m_logPathHasBeenSet(false),
    m_dataPathHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_errorLogPathHasBeenSet(false),
    m_plugInPathHasBeenSet(false),
    m_binPathHasBeenSet(false),
    m_paramHasBeenSet(false),
    m_idHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_isNewHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false)
{
}

CoreInternalOutcome AssetDatabaseBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("OsInfo") && !value["OsInfo"].IsNull())
    {
        if (!value["OsInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.OsInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osInfo = string(value["OsInfo"].GetString());
        m_osInfoHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.Tag` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Proto") && !value["Proto"].IsNull())
    {
        if (!value["Proto"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.Proto` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proto = string(value["Proto"].GetString());
        m_protoHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("ConfigPath") && !value["ConfigPath"].IsNull())
    {
        if (!value["ConfigPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.ConfigPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configPath = string(value["ConfigPath"].GetString());
        m_configPathHasBeenSet = true;
    }

    if (value.HasMember("LogPath") && !value["LogPath"].IsNull())
    {
        if (!value["LogPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.LogPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logPath = string(value["LogPath"].GetString());
        m_logPathHasBeenSet = true;
    }

    if (value.HasMember("DataPath") && !value["DataPath"].IsNull())
    {
        if (!value["DataPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.DataPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataPath = string(value["DataPath"].GetString());
        m_dataPathHasBeenSet = true;
    }

    if (value.HasMember("Permission") && !value["Permission"].IsNull())
    {
        if (!value["Permission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.Permission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permission = string(value["Permission"].GetString());
        m_permissionHasBeenSet = true;
    }

    if (value.HasMember("ErrorLogPath") && !value["ErrorLogPath"].IsNull())
    {
        if (!value["ErrorLogPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.ErrorLogPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorLogPath = string(value["ErrorLogPath"].GetString());
        m_errorLogPathHasBeenSet = true;
    }

    if (value.HasMember("PlugInPath") && !value["PlugInPath"].IsNull())
    {
        if (!value["PlugInPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.PlugInPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_plugInPath = string(value["PlugInPath"].GetString());
        m_plugInPathHasBeenSet = true;
    }

    if (value.HasMember("BinPath") && !value["BinPath"].IsNull())
    {
        if (!value["BinPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.BinPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_binPath = string(value["BinPath"].GetString());
        m_binPathHasBeenSet = true;
    }

    if (value.HasMember("Param") && !value["Param"].IsNull())
    {
        if (!value["Param"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.Param` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_param = string(value["Param"].GetString());
        m_paramHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("IsNew") && !value["IsNew"].IsNull())
    {
        if (!value["IsNew"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.IsNew` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isNew = value["IsNew"].GetInt64();
        m_isNewHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseBaseInfo.MachineExtraInfo` is not object type").SetRequestId(requestId));
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

void AssetDatabaseBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_protoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Proto";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proto.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_configPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configPath.c_str(), allocator).Move(), allocator);
    }

    if (m_logPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logPath.c_str(), allocator).Move(), allocator);
    }

    if (m_dataPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataPath.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_permission.c_str(), allocator).Move(), allocator);
    }

    if (m_errorLogPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorLogPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorLogPath.c_str(), allocator).Move(), allocator);
    }

    if (m_plugInPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlugInPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_plugInPath.c_str(), allocator).Move(), allocator);
    }

    if (m_binPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_binPath.c_str(), allocator).Move(), allocator);
    }

    if (m_paramHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Param";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_param.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
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

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
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


string AssetDatabaseBaseInfo::GetMachineIp() const
{
    return m_machineIp;
}

void AssetDatabaseBaseInfo::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string AssetDatabaseBaseInfo::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void AssetDatabaseBaseInfo::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

string AssetDatabaseBaseInfo::GetQuuid() const
{
    return m_quuid;
}

void AssetDatabaseBaseInfo::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string AssetDatabaseBaseInfo::GetUuid() const
{
    return m_uuid;
}

void AssetDatabaseBaseInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string AssetDatabaseBaseInfo::GetOsInfo() const
{
    return m_osInfo;
}

void AssetDatabaseBaseInfo::SetOsInfo(const string& _osInfo)
{
    m_osInfo = _osInfo;
    m_osInfoHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::OsInfoHasBeenSet() const
{
    return m_osInfoHasBeenSet;
}

uint64_t AssetDatabaseBaseInfo::GetProjectId() const
{
    return m_projectId;
}

void AssetDatabaseBaseInfo::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<MachineTag> AssetDatabaseBaseInfo::GetTag() const
{
    return m_tag;
}

void AssetDatabaseBaseInfo::SetTag(const vector<MachineTag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string AssetDatabaseBaseInfo::GetName() const
{
    return m_name;
}

void AssetDatabaseBaseInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AssetDatabaseBaseInfo::GetVersion() const
{
    return m_version;
}

void AssetDatabaseBaseInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string AssetDatabaseBaseInfo::GetPort() const
{
    return m_port;
}

void AssetDatabaseBaseInfo::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string AssetDatabaseBaseInfo::GetProto() const
{
    return m_proto;
}

void AssetDatabaseBaseInfo::SetProto(const string& _proto)
{
    m_proto = _proto;
    m_protoHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::ProtoHasBeenSet() const
{
    return m_protoHasBeenSet;
}

string AssetDatabaseBaseInfo::GetUser() const
{
    return m_user;
}

void AssetDatabaseBaseInfo::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string AssetDatabaseBaseInfo::GetIp() const
{
    return m_ip;
}

void AssetDatabaseBaseInfo::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string AssetDatabaseBaseInfo::GetConfigPath() const
{
    return m_configPath;
}

void AssetDatabaseBaseInfo::SetConfigPath(const string& _configPath)
{
    m_configPath = _configPath;
    m_configPathHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::ConfigPathHasBeenSet() const
{
    return m_configPathHasBeenSet;
}

string AssetDatabaseBaseInfo::GetLogPath() const
{
    return m_logPath;
}

void AssetDatabaseBaseInfo::SetLogPath(const string& _logPath)
{
    m_logPath = _logPath;
    m_logPathHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::LogPathHasBeenSet() const
{
    return m_logPathHasBeenSet;
}

string AssetDatabaseBaseInfo::GetDataPath() const
{
    return m_dataPath;
}

void AssetDatabaseBaseInfo::SetDataPath(const string& _dataPath)
{
    m_dataPath = _dataPath;
    m_dataPathHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::DataPathHasBeenSet() const
{
    return m_dataPathHasBeenSet;
}

string AssetDatabaseBaseInfo::GetPermission() const
{
    return m_permission;
}

void AssetDatabaseBaseInfo::SetPermission(const string& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

string AssetDatabaseBaseInfo::GetErrorLogPath() const
{
    return m_errorLogPath;
}

void AssetDatabaseBaseInfo::SetErrorLogPath(const string& _errorLogPath)
{
    m_errorLogPath = _errorLogPath;
    m_errorLogPathHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::ErrorLogPathHasBeenSet() const
{
    return m_errorLogPathHasBeenSet;
}

string AssetDatabaseBaseInfo::GetPlugInPath() const
{
    return m_plugInPath;
}

void AssetDatabaseBaseInfo::SetPlugInPath(const string& _plugInPath)
{
    m_plugInPath = _plugInPath;
    m_plugInPathHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::PlugInPathHasBeenSet() const
{
    return m_plugInPathHasBeenSet;
}

string AssetDatabaseBaseInfo::GetBinPath() const
{
    return m_binPath;
}

void AssetDatabaseBaseInfo::SetBinPath(const string& _binPath)
{
    m_binPath = _binPath;
    m_binPathHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::BinPathHasBeenSet() const
{
    return m_binPathHasBeenSet;
}

string AssetDatabaseBaseInfo::GetParam() const
{
    return m_param;
}

void AssetDatabaseBaseInfo::SetParam(const string& _param)
{
    m_param = _param;
    m_paramHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::ParamHasBeenSet() const
{
    return m_paramHasBeenSet;
}

string AssetDatabaseBaseInfo::GetId() const
{
    return m_id;
}

void AssetDatabaseBaseInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AssetDatabaseBaseInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void AssetDatabaseBaseInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AssetDatabaseBaseInfo::GetFirstTime() const
{
    return m_firstTime;
}

void AssetDatabaseBaseInfo::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

int64_t AssetDatabaseBaseInfo::GetIsNew() const
{
    return m_isNew;
}

void AssetDatabaseBaseInfo::SetIsNew(const int64_t& _isNew)
{
    m_isNew = _isNew;
    m_isNewHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::IsNewHasBeenSet() const
{
    return m_isNewHasBeenSet;
}

string AssetDatabaseBaseInfo::GetMachineName() const
{
    return m_machineName;
}

void AssetDatabaseBaseInfo::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

MachineExtraInfo AssetDatabaseBaseInfo::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void AssetDatabaseBaseInfo::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool AssetDatabaseBaseInfo::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

