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

#include <tencentcloud/cwp/v20180228/model/AssetPortBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AssetPortBaseInfo::AssetPortBaseInfo() :
    m_machineIpHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_osInfoHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_processNameHasBeenSet(false),
    m_processVersionHasBeenSet(false),
    m_processPathHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_userHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_paramHasBeenSet(false),
    m_teletypeHasBeenSet(false),
    m_portHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_md5HasBeenSet(false),
    m_ppidHasBeenSet(false),
    m_parentProcessNameHasBeenSet(false),
    m_protoHasBeenSet(false),
    m_bindIpHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_isNewHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false)
{
}

CoreInternalOutcome AssetPortBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("OsInfo") && !value["OsInfo"].IsNull())
    {
        if (!value["OsInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.OsInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osInfo = string(value["OsInfo"].GetString());
        m_osInfoHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.Tag` is not array type"));

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

    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("ProcessVersion") && !value["ProcessVersion"].IsNull())
    {
        if (!value["ProcessVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.ProcessVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processVersion = string(value["ProcessVersion"].GetString());
        m_processVersionHasBeenSet = true;
    }

    if (value.HasMember("ProcessPath") && !value["ProcessPath"].IsNull())
    {
        if (!value["ProcessPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.ProcessPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processPath = string(value["ProcessPath"].GetString());
        m_processPathHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.Pid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pid = string(value["Pid"].GetString());
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Param") && !value["Param"].IsNull())
    {
        if (!value["Param"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.Param` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_param = string(value["Param"].GetString());
        m_paramHasBeenSet = true;
    }

    if (value.HasMember("Teletype") && !value["Teletype"].IsNull())
    {
        if (!value["Teletype"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.Teletype` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teletype = string(value["Teletype"].GetString());
        m_teletypeHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("Md5") && !value["Md5"].IsNull())
    {
        if (!value["Md5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.Md5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5 = string(value["Md5"].GetString());
        m_md5HasBeenSet = true;
    }

    if (value.HasMember("Ppid") && !value["Ppid"].IsNull())
    {
        if (!value["Ppid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.Ppid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ppid = string(value["Ppid"].GetString());
        m_ppidHasBeenSet = true;
    }

    if (value.HasMember("ParentProcessName") && !value["ParentProcessName"].IsNull())
    {
        if (!value["ParentProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.ParentProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentProcessName = string(value["ParentProcessName"].GetString());
        m_parentProcessNameHasBeenSet = true;
    }

    if (value.HasMember("Proto") && !value["Proto"].IsNull())
    {
        if (!value["Proto"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.Proto` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proto = string(value["Proto"].GetString());
        m_protoHasBeenSet = true;
    }

    if (value.HasMember("BindIp") && !value["BindIp"].IsNull())
    {
        if (!value["BindIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.BindIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindIp = string(value["BindIp"].GetString());
        m_bindIpHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("IsNew") && !value["IsNew"].IsNull())
    {
        if (!value["IsNew"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.IsNew` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isNew = value["IsNew"].GetInt64();
        m_isNewHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssetPortBaseInfo.MachineExtraInfo` is not object type").SetRequestId(requestId));
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

void AssetPortBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
    }

    if (m_processVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_processPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processPath.c_str(), allocator).Move(), allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pid.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_paramHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Param";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_param.c_str(), allocator).Move(), allocator);
    }

    if (m_teletypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Teletype";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_teletype.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_md5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5.c_str(), allocator).Move(), allocator);
    }

    if (m_ppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ppid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ppid.c_str(), allocator).Move(), allocator);
    }

    if (m_parentProcessNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentProcessName.c_str(), allocator).Move(), allocator);
    }

    if (m_protoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Proto";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proto.c_str(), allocator).Move(), allocator);
    }

    if (m_bindIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
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


string AssetPortBaseInfo::GetMachineIp() const
{
    return m_machineIp;
}

void AssetPortBaseInfo::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool AssetPortBaseInfo::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string AssetPortBaseInfo::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void AssetPortBaseInfo::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool AssetPortBaseInfo::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

string AssetPortBaseInfo::GetQuuid() const
{
    return m_quuid;
}

void AssetPortBaseInfo::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool AssetPortBaseInfo::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string AssetPortBaseInfo::GetUuid() const
{
    return m_uuid;
}

void AssetPortBaseInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool AssetPortBaseInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string AssetPortBaseInfo::GetOsInfo() const
{
    return m_osInfo;
}

void AssetPortBaseInfo::SetOsInfo(const string& _osInfo)
{
    m_osInfo = _osInfo;
    m_osInfoHasBeenSet = true;
}

bool AssetPortBaseInfo::OsInfoHasBeenSet() const
{
    return m_osInfoHasBeenSet;
}

uint64_t AssetPortBaseInfo::GetProjectId() const
{
    return m_projectId;
}

void AssetPortBaseInfo::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AssetPortBaseInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<MachineTag> AssetPortBaseInfo::GetTag() const
{
    return m_tag;
}

void AssetPortBaseInfo::SetTag(const vector<MachineTag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool AssetPortBaseInfo::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string AssetPortBaseInfo::GetProcessName() const
{
    return m_processName;
}

void AssetPortBaseInfo::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool AssetPortBaseInfo::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

string AssetPortBaseInfo::GetProcessVersion() const
{
    return m_processVersion;
}

void AssetPortBaseInfo::SetProcessVersion(const string& _processVersion)
{
    m_processVersion = _processVersion;
    m_processVersionHasBeenSet = true;
}

bool AssetPortBaseInfo::ProcessVersionHasBeenSet() const
{
    return m_processVersionHasBeenSet;
}

string AssetPortBaseInfo::GetProcessPath() const
{
    return m_processPath;
}

void AssetPortBaseInfo::SetProcessPath(const string& _processPath)
{
    m_processPath = _processPath;
    m_processPathHasBeenSet = true;
}

bool AssetPortBaseInfo::ProcessPathHasBeenSet() const
{
    return m_processPathHasBeenSet;
}

string AssetPortBaseInfo::GetPid() const
{
    return m_pid;
}

void AssetPortBaseInfo::SetPid(const string& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool AssetPortBaseInfo::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string AssetPortBaseInfo::GetUser() const
{
    return m_user;
}

void AssetPortBaseInfo::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool AssetPortBaseInfo::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string AssetPortBaseInfo::GetStartTime() const
{
    return m_startTime;
}

void AssetPortBaseInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool AssetPortBaseInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string AssetPortBaseInfo::GetParam() const
{
    return m_param;
}

void AssetPortBaseInfo::SetParam(const string& _param)
{
    m_param = _param;
    m_paramHasBeenSet = true;
}

bool AssetPortBaseInfo::ParamHasBeenSet() const
{
    return m_paramHasBeenSet;
}

string AssetPortBaseInfo::GetTeletype() const
{
    return m_teletype;
}

void AssetPortBaseInfo::SetTeletype(const string& _teletype)
{
    m_teletype = _teletype;
    m_teletypeHasBeenSet = true;
}

bool AssetPortBaseInfo::TeletypeHasBeenSet() const
{
    return m_teletypeHasBeenSet;
}

string AssetPortBaseInfo::GetPort() const
{
    return m_port;
}

void AssetPortBaseInfo::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool AssetPortBaseInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string AssetPortBaseInfo::GetGroupName() const
{
    return m_groupName;
}

void AssetPortBaseInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool AssetPortBaseInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string AssetPortBaseInfo::GetMd5() const
{
    return m_md5;
}

void AssetPortBaseInfo::SetMd5(const string& _md5)
{
    m_md5 = _md5;
    m_md5HasBeenSet = true;
}

bool AssetPortBaseInfo::Md5HasBeenSet() const
{
    return m_md5HasBeenSet;
}

string AssetPortBaseInfo::GetPpid() const
{
    return m_ppid;
}

void AssetPortBaseInfo::SetPpid(const string& _ppid)
{
    m_ppid = _ppid;
    m_ppidHasBeenSet = true;
}

bool AssetPortBaseInfo::PpidHasBeenSet() const
{
    return m_ppidHasBeenSet;
}

string AssetPortBaseInfo::GetParentProcessName() const
{
    return m_parentProcessName;
}

void AssetPortBaseInfo::SetParentProcessName(const string& _parentProcessName)
{
    m_parentProcessName = _parentProcessName;
    m_parentProcessNameHasBeenSet = true;
}

bool AssetPortBaseInfo::ParentProcessNameHasBeenSet() const
{
    return m_parentProcessNameHasBeenSet;
}

string AssetPortBaseInfo::GetProto() const
{
    return m_proto;
}

void AssetPortBaseInfo::SetProto(const string& _proto)
{
    m_proto = _proto;
    m_protoHasBeenSet = true;
}

bool AssetPortBaseInfo::ProtoHasBeenSet() const
{
    return m_protoHasBeenSet;
}

string AssetPortBaseInfo::GetBindIp() const
{
    return m_bindIp;
}

void AssetPortBaseInfo::SetBindIp(const string& _bindIp)
{
    m_bindIp = _bindIp;
    m_bindIpHasBeenSet = true;
}

bool AssetPortBaseInfo::BindIpHasBeenSet() const
{
    return m_bindIpHasBeenSet;
}

string AssetPortBaseInfo::GetMachineName() const
{
    return m_machineName;
}

void AssetPortBaseInfo::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool AssetPortBaseInfo::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string AssetPortBaseInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void AssetPortBaseInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AssetPortBaseInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AssetPortBaseInfo::GetFirstTime() const
{
    return m_firstTime;
}

void AssetPortBaseInfo::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool AssetPortBaseInfo::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

int64_t AssetPortBaseInfo::GetIsNew() const
{
    return m_isNew;
}

void AssetPortBaseInfo::SetIsNew(const int64_t& _isNew)
{
    m_isNew = _isNew;
    m_isNewHasBeenSet = true;
}

bool AssetPortBaseInfo::IsNewHasBeenSet() const
{
    return m_isNewHasBeenSet;
}

MachineExtraInfo AssetPortBaseInfo::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void AssetPortBaseInfo::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool AssetPortBaseInfo::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

