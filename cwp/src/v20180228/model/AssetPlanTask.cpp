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

#include <tencentcloud/cwp/v20180228/model/AssetPlanTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AssetPlanTask::AssetPlanTask() :
    m_statusHasBeenSet(false),
    m_cycleHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_userHasBeenSet(false),
    m_configPathHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_osInfoHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_isNewHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false)
{
}

CoreInternalOutcome AssetPlanTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPlanTask.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Cycle") && !value["Cycle"].IsNull())
    {
        if (!value["Cycle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPlanTask.Cycle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycle = string(value["Cycle"].GetString());
        m_cycleHasBeenSet = true;
    }

    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPlanTask.Command` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_command = string(value["Command"].GetString());
        m_commandHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPlanTask.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("ConfigPath") && !value["ConfigPath"].IsNull())
    {
        if (!value["ConfigPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPlanTask.ConfigPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configPath = string(value["ConfigPath"].GetString());
        m_configPathHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPlanTask.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPlanTask.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("OsInfo") && !value["OsInfo"].IsNull())
    {
        if (!value["OsInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPlanTask.OsInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osInfo = string(value["OsInfo"].GetString());
        m_osInfoHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPlanTask.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPlanTask.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPlanTask.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPlanTask.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("IsNew") && !value["IsNew"].IsNull())
    {
        if (!value["IsNew"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPlanTask.IsNew` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isNew = value["IsNew"].GetInt64();
        m_isNewHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPlanTask.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPlanTask.MachineExtraInfo` is not object type").SetRequestId(requestId));
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

void AssetPlanTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_cycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycle.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_configPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configPath.c_str(), allocator).Move(), allocator);
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


uint64_t AssetPlanTask::GetStatus() const
{
    return m_status;
}

void AssetPlanTask::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AssetPlanTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AssetPlanTask::GetCycle() const
{
    return m_cycle;
}

void AssetPlanTask::SetCycle(const string& _cycle)
{
    m_cycle = _cycle;
    m_cycleHasBeenSet = true;
}

bool AssetPlanTask::CycleHasBeenSet() const
{
    return m_cycleHasBeenSet;
}

string AssetPlanTask::GetCommand() const
{
    return m_command;
}

void AssetPlanTask::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool AssetPlanTask::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string AssetPlanTask::GetUser() const
{
    return m_user;
}

void AssetPlanTask::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool AssetPlanTask::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string AssetPlanTask::GetConfigPath() const
{
    return m_configPath;
}

void AssetPlanTask::SetConfigPath(const string& _configPath)
{
    m_configPath = _configPath;
    m_configPathHasBeenSet = true;
}

bool AssetPlanTask::ConfigPathHasBeenSet() const
{
    return m_configPathHasBeenSet;
}

string AssetPlanTask::GetMachineIp() const
{
    return m_machineIp;
}

void AssetPlanTask::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool AssetPlanTask::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string AssetPlanTask::GetMachineName() const
{
    return m_machineName;
}

void AssetPlanTask::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool AssetPlanTask::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string AssetPlanTask::GetOsInfo() const
{
    return m_osInfo;
}

void AssetPlanTask::SetOsInfo(const string& _osInfo)
{
    m_osInfo = _osInfo;
    m_osInfoHasBeenSet = true;
}

bool AssetPlanTask::OsInfoHasBeenSet() const
{
    return m_osInfoHasBeenSet;
}

string AssetPlanTask::GetQuuid() const
{
    return m_quuid;
}

void AssetPlanTask::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool AssetPlanTask::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string AssetPlanTask::GetUuid() const
{
    return m_uuid;
}

void AssetPlanTask::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool AssetPlanTask::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string AssetPlanTask::GetUpdateTime() const
{
    return m_updateTime;
}

void AssetPlanTask::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AssetPlanTask::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AssetPlanTask::GetFirstTime() const
{
    return m_firstTime;
}

void AssetPlanTask::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool AssetPlanTask::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

int64_t AssetPlanTask::GetIsNew() const
{
    return m_isNew;
}

void AssetPlanTask::SetIsNew(const int64_t& _isNew)
{
    m_isNew = _isNew;
    m_isNewHasBeenSet = true;
}

bool AssetPlanTask::IsNewHasBeenSet() const
{
    return m_isNewHasBeenSet;
}

string AssetPlanTask::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void AssetPlanTask::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool AssetPlanTask::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

MachineExtraInfo AssetPlanTask::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void AssetPlanTask::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool AssetPlanTask::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

