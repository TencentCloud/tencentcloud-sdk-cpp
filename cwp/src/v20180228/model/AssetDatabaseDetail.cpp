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

#include <tencentcloud/cwp/v20180228/model/AssetDatabaseDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AssetDatabaseDetail::AssetDatabaseDetail() :
    m_machineIpHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_osInfoHasBeenSet(false),
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
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome AssetDatabaseDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseDetail.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseDetail.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseDetail.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseDetail.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("OsInfo") && !value["OsInfo"].IsNull())
    {
        if (!value["OsInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseDetail.OsInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osInfo = string(value["OsInfo"].GetString());
        m_osInfoHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseDetail.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseDetail.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Proto") && !value["Proto"].IsNull())
    {
        if (!value["Proto"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseDetail.Proto` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proto = string(value["Proto"].GetString());
        m_protoHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseDetail.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseDetail.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("ConfigPath") && !value["ConfigPath"].IsNull())
    {
        if (!value["ConfigPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseDetail.ConfigPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configPath = string(value["ConfigPath"].GetString());
        m_configPathHasBeenSet = true;
    }

    if (value.HasMember("LogPath") && !value["LogPath"].IsNull())
    {
        if (!value["LogPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseDetail.LogPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logPath = string(value["LogPath"].GetString());
        m_logPathHasBeenSet = true;
    }

    if (value.HasMember("DataPath") && !value["DataPath"].IsNull())
    {
        if (!value["DataPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseDetail.DataPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataPath = string(value["DataPath"].GetString());
        m_dataPathHasBeenSet = true;
    }

    if (value.HasMember("Permission") && !value["Permission"].IsNull())
    {
        if (!value["Permission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseDetail.Permission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permission = string(value["Permission"].GetString());
        m_permissionHasBeenSet = true;
    }

    if (value.HasMember("ErrorLogPath") && !value["ErrorLogPath"].IsNull())
    {
        if (!value["ErrorLogPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseDetail.ErrorLogPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorLogPath = string(value["ErrorLogPath"].GetString());
        m_errorLogPathHasBeenSet = true;
    }

    if (value.HasMember("PlugInPath") && !value["PlugInPath"].IsNull())
    {
        if (!value["PlugInPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseDetail.PlugInPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_plugInPath = string(value["PlugInPath"].GetString());
        m_plugInPathHasBeenSet = true;
    }

    if (value.HasMember("BinPath") && !value["BinPath"].IsNull())
    {
        if (!value["BinPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseDetail.BinPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_binPath = string(value["BinPath"].GetString());
        m_binPathHasBeenSet = true;
    }

    if (value.HasMember("Param") && !value["Param"].IsNull())
    {
        if (!value["Param"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseDetail.Param` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_param = string(value["Param"].GetString());
        m_paramHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDatabaseDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetDatabaseDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string AssetDatabaseDetail::GetMachineIp() const
{
    return m_machineIp;
}

void AssetDatabaseDetail::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool AssetDatabaseDetail::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string AssetDatabaseDetail::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void AssetDatabaseDetail::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool AssetDatabaseDetail::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

string AssetDatabaseDetail::GetQuuid() const
{
    return m_quuid;
}

void AssetDatabaseDetail::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool AssetDatabaseDetail::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string AssetDatabaseDetail::GetUuid() const
{
    return m_uuid;
}

void AssetDatabaseDetail::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool AssetDatabaseDetail::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string AssetDatabaseDetail::GetOsInfo() const
{
    return m_osInfo;
}

void AssetDatabaseDetail::SetOsInfo(const string& _osInfo)
{
    m_osInfo = _osInfo;
    m_osInfoHasBeenSet = true;
}

bool AssetDatabaseDetail::OsInfoHasBeenSet() const
{
    return m_osInfoHasBeenSet;
}

string AssetDatabaseDetail::GetName() const
{
    return m_name;
}

void AssetDatabaseDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AssetDatabaseDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AssetDatabaseDetail::GetVersion() const
{
    return m_version;
}

void AssetDatabaseDetail::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool AssetDatabaseDetail::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string AssetDatabaseDetail::GetPort() const
{
    return m_port;
}

void AssetDatabaseDetail::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool AssetDatabaseDetail::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string AssetDatabaseDetail::GetProto() const
{
    return m_proto;
}

void AssetDatabaseDetail::SetProto(const string& _proto)
{
    m_proto = _proto;
    m_protoHasBeenSet = true;
}

bool AssetDatabaseDetail::ProtoHasBeenSet() const
{
    return m_protoHasBeenSet;
}

string AssetDatabaseDetail::GetUser() const
{
    return m_user;
}

void AssetDatabaseDetail::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool AssetDatabaseDetail::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string AssetDatabaseDetail::GetIp() const
{
    return m_ip;
}

void AssetDatabaseDetail::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool AssetDatabaseDetail::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string AssetDatabaseDetail::GetConfigPath() const
{
    return m_configPath;
}

void AssetDatabaseDetail::SetConfigPath(const string& _configPath)
{
    m_configPath = _configPath;
    m_configPathHasBeenSet = true;
}

bool AssetDatabaseDetail::ConfigPathHasBeenSet() const
{
    return m_configPathHasBeenSet;
}

string AssetDatabaseDetail::GetLogPath() const
{
    return m_logPath;
}

void AssetDatabaseDetail::SetLogPath(const string& _logPath)
{
    m_logPath = _logPath;
    m_logPathHasBeenSet = true;
}

bool AssetDatabaseDetail::LogPathHasBeenSet() const
{
    return m_logPathHasBeenSet;
}

string AssetDatabaseDetail::GetDataPath() const
{
    return m_dataPath;
}

void AssetDatabaseDetail::SetDataPath(const string& _dataPath)
{
    m_dataPath = _dataPath;
    m_dataPathHasBeenSet = true;
}

bool AssetDatabaseDetail::DataPathHasBeenSet() const
{
    return m_dataPathHasBeenSet;
}

string AssetDatabaseDetail::GetPermission() const
{
    return m_permission;
}

void AssetDatabaseDetail::SetPermission(const string& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool AssetDatabaseDetail::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

string AssetDatabaseDetail::GetErrorLogPath() const
{
    return m_errorLogPath;
}

void AssetDatabaseDetail::SetErrorLogPath(const string& _errorLogPath)
{
    m_errorLogPath = _errorLogPath;
    m_errorLogPathHasBeenSet = true;
}

bool AssetDatabaseDetail::ErrorLogPathHasBeenSet() const
{
    return m_errorLogPathHasBeenSet;
}

string AssetDatabaseDetail::GetPlugInPath() const
{
    return m_plugInPath;
}

void AssetDatabaseDetail::SetPlugInPath(const string& _plugInPath)
{
    m_plugInPath = _plugInPath;
    m_plugInPathHasBeenSet = true;
}

bool AssetDatabaseDetail::PlugInPathHasBeenSet() const
{
    return m_plugInPathHasBeenSet;
}

string AssetDatabaseDetail::GetBinPath() const
{
    return m_binPath;
}

void AssetDatabaseDetail::SetBinPath(const string& _binPath)
{
    m_binPath = _binPath;
    m_binPathHasBeenSet = true;
}

bool AssetDatabaseDetail::BinPathHasBeenSet() const
{
    return m_binPathHasBeenSet;
}

string AssetDatabaseDetail::GetParam() const
{
    return m_param;
}

void AssetDatabaseDetail::SetParam(const string& _param)
{
    m_param = _param;
    m_paramHasBeenSet = true;
}

bool AssetDatabaseDetail::ParamHasBeenSet() const
{
    return m_paramHasBeenSet;
}

string AssetDatabaseDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void AssetDatabaseDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AssetDatabaseDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

