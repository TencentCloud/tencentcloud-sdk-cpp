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

#include <tencentcloud/cwp/v20180228/model/PrivilegeEscalationProcess.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

PrivilegeEscalationProcess::PrivilegeEscalationProcess() :
    m_idHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_hostipHasBeenSet(false),
    m_processNameHasBeenSet(false),
    m_fullPathHasBeenSet(false),
    m_cmdLineHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_userGroupHasBeenSet(false),
    m_procFilePrivilegeHasBeenSet(false),
    m_parentProcNameHasBeenSet(false),
    m_parentProcUserHasBeenSet(false),
    m_parentProcGroupHasBeenSet(false),
    m_parentProcPathHasBeenSet(false),
    m_procTreeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false),
    m_pidHasBeenSet(false)
{
}

CoreInternalOutcome PrivilegeEscalationProcess::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEscalationProcess.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEscalationProcess.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEscalationProcess.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Hostip") && !value["Hostip"].IsNull())
    {
        if (!value["Hostip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEscalationProcess.Hostip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostip = string(value["Hostip"].GetString());
        m_hostipHasBeenSet = true;
    }

    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEscalationProcess.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("FullPath") && !value["FullPath"].IsNull())
    {
        if (!value["FullPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEscalationProcess.FullPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullPath = string(value["FullPath"].GetString());
        m_fullPathHasBeenSet = true;
    }

    if (value.HasMember("CmdLine") && !value["CmdLine"].IsNull())
    {
        if (!value["CmdLine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEscalationProcess.CmdLine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmdLine = string(value["CmdLine"].GetString());
        m_cmdLineHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEscalationProcess.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("UserGroup") && !value["UserGroup"].IsNull())
    {
        if (!value["UserGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEscalationProcess.UserGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroup = string(value["UserGroup"].GetString());
        m_userGroupHasBeenSet = true;
    }

    if (value.HasMember("ProcFilePrivilege") && !value["ProcFilePrivilege"].IsNull())
    {
        if (!value["ProcFilePrivilege"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEscalationProcess.ProcFilePrivilege` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_procFilePrivilege = string(value["ProcFilePrivilege"].GetString());
        m_procFilePrivilegeHasBeenSet = true;
    }

    if (value.HasMember("ParentProcName") && !value["ParentProcName"].IsNull())
    {
        if (!value["ParentProcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEscalationProcess.ParentProcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentProcName = string(value["ParentProcName"].GetString());
        m_parentProcNameHasBeenSet = true;
    }

    if (value.HasMember("ParentProcUser") && !value["ParentProcUser"].IsNull())
    {
        if (!value["ParentProcUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEscalationProcess.ParentProcUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentProcUser = string(value["ParentProcUser"].GetString());
        m_parentProcUserHasBeenSet = true;
    }

    if (value.HasMember("ParentProcGroup") && !value["ParentProcGroup"].IsNull())
    {
        if (!value["ParentProcGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEscalationProcess.ParentProcGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentProcGroup = string(value["ParentProcGroup"].GetString());
        m_parentProcGroupHasBeenSet = true;
    }

    if (value.HasMember("ParentProcPath") && !value["ParentProcPath"].IsNull())
    {
        if (!value["ParentProcPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEscalationProcess.ParentProcPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentProcPath = string(value["ParentProcPath"].GetString());
        m_parentProcPathHasBeenSet = true;
    }

    if (value.HasMember("ProcTree") && !value["ProcTree"].IsNull())
    {
        if (!value["ProcTree"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEscalationProcess.ProcTree` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_procTree = string(value["ProcTree"].GetString());
        m_procTreeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEscalationProcess.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEscalationProcess.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEscalationProcess.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEscalationProcess.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEscalationProcess.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrivilegeEscalationProcess::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_hostipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hostip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostip.c_str(), allocator).Move(), allocator);
    }

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
    }

    if (m_fullPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullPath.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdLine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmdLine.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_userGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_procFilePrivilegeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcFilePrivilege";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_procFilePrivilege.c_str(), allocator).Move(), allocator);
    }

    if (m_parentProcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentProcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentProcName.c_str(), allocator).Move(), allocator);
    }

    if (m_parentProcUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentProcUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentProcUser.c_str(), allocator).Move(), allocator);
    }

    if (m_parentProcGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentProcGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentProcGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_parentProcPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentProcPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentProcPath.c_str(), allocator).Move(), allocator);
    }

    if (m_procTreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcTree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_procTree.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

}


uint64_t PrivilegeEscalationProcess::GetId() const
{
    return m_id;
}

void PrivilegeEscalationProcess::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool PrivilegeEscalationProcess::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string PrivilegeEscalationProcess::GetUuid() const
{
    return m_uuid;
}

void PrivilegeEscalationProcess::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool PrivilegeEscalationProcess::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string PrivilegeEscalationProcess::GetQuuid() const
{
    return m_quuid;
}

void PrivilegeEscalationProcess::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool PrivilegeEscalationProcess::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string PrivilegeEscalationProcess::GetHostip() const
{
    return m_hostip;
}

void PrivilegeEscalationProcess::SetHostip(const string& _hostip)
{
    m_hostip = _hostip;
    m_hostipHasBeenSet = true;
}

bool PrivilegeEscalationProcess::HostipHasBeenSet() const
{
    return m_hostipHasBeenSet;
}

string PrivilegeEscalationProcess::GetProcessName() const
{
    return m_processName;
}

void PrivilegeEscalationProcess::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool PrivilegeEscalationProcess::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

string PrivilegeEscalationProcess::GetFullPath() const
{
    return m_fullPath;
}

void PrivilegeEscalationProcess::SetFullPath(const string& _fullPath)
{
    m_fullPath = _fullPath;
    m_fullPathHasBeenSet = true;
}

bool PrivilegeEscalationProcess::FullPathHasBeenSet() const
{
    return m_fullPathHasBeenSet;
}

string PrivilegeEscalationProcess::GetCmdLine() const
{
    return m_cmdLine;
}

void PrivilegeEscalationProcess::SetCmdLine(const string& _cmdLine)
{
    m_cmdLine = _cmdLine;
    m_cmdLineHasBeenSet = true;
}

bool PrivilegeEscalationProcess::CmdLineHasBeenSet() const
{
    return m_cmdLineHasBeenSet;
}

string PrivilegeEscalationProcess::GetUserName() const
{
    return m_userName;
}

void PrivilegeEscalationProcess::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool PrivilegeEscalationProcess::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string PrivilegeEscalationProcess::GetUserGroup() const
{
    return m_userGroup;
}

void PrivilegeEscalationProcess::SetUserGroup(const string& _userGroup)
{
    m_userGroup = _userGroup;
    m_userGroupHasBeenSet = true;
}

bool PrivilegeEscalationProcess::UserGroupHasBeenSet() const
{
    return m_userGroupHasBeenSet;
}

string PrivilegeEscalationProcess::GetProcFilePrivilege() const
{
    return m_procFilePrivilege;
}

void PrivilegeEscalationProcess::SetProcFilePrivilege(const string& _procFilePrivilege)
{
    m_procFilePrivilege = _procFilePrivilege;
    m_procFilePrivilegeHasBeenSet = true;
}

bool PrivilegeEscalationProcess::ProcFilePrivilegeHasBeenSet() const
{
    return m_procFilePrivilegeHasBeenSet;
}

string PrivilegeEscalationProcess::GetParentProcName() const
{
    return m_parentProcName;
}

void PrivilegeEscalationProcess::SetParentProcName(const string& _parentProcName)
{
    m_parentProcName = _parentProcName;
    m_parentProcNameHasBeenSet = true;
}

bool PrivilegeEscalationProcess::ParentProcNameHasBeenSet() const
{
    return m_parentProcNameHasBeenSet;
}

string PrivilegeEscalationProcess::GetParentProcUser() const
{
    return m_parentProcUser;
}

void PrivilegeEscalationProcess::SetParentProcUser(const string& _parentProcUser)
{
    m_parentProcUser = _parentProcUser;
    m_parentProcUserHasBeenSet = true;
}

bool PrivilegeEscalationProcess::ParentProcUserHasBeenSet() const
{
    return m_parentProcUserHasBeenSet;
}

string PrivilegeEscalationProcess::GetParentProcGroup() const
{
    return m_parentProcGroup;
}

void PrivilegeEscalationProcess::SetParentProcGroup(const string& _parentProcGroup)
{
    m_parentProcGroup = _parentProcGroup;
    m_parentProcGroupHasBeenSet = true;
}

bool PrivilegeEscalationProcess::ParentProcGroupHasBeenSet() const
{
    return m_parentProcGroupHasBeenSet;
}

string PrivilegeEscalationProcess::GetParentProcPath() const
{
    return m_parentProcPath;
}

void PrivilegeEscalationProcess::SetParentProcPath(const string& _parentProcPath)
{
    m_parentProcPath = _parentProcPath;
    m_parentProcPathHasBeenSet = true;
}

bool PrivilegeEscalationProcess::ParentProcPathHasBeenSet() const
{
    return m_parentProcPathHasBeenSet;
}

string PrivilegeEscalationProcess::GetProcTree() const
{
    return m_procTree;
}

void PrivilegeEscalationProcess::SetProcTree(const string& _procTree)
{
    m_procTree = _procTree;
    m_procTreeHasBeenSet = true;
}

bool PrivilegeEscalationProcess::ProcTreeHasBeenSet() const
{
    return m_procTreeHasBeenSet;
}

uint64_t PrivilegeEscalationProcess::GetStatus() const
{
    return m_status;
}

void PrivilegeEscalationProcess::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PrivilegeEscalationProcess::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PrivilegeEscalationProcess::GetCreateTime() const
{
    return m_createTime;
}

void PrivilegeEscalationProcess::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PrivilegeEscalationProcess::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string PrivilegeEscalationProcess::GetMachineName() const
{
    return m_machineName;
}

void PrivilegeEscalationProcess::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool PrivilegeEscalationProcess::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

MachineExtraInfo PrivilegeEscalationProcess::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void PrivilegeEscalationProcess::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool PrivilegeEscalationProcess::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

int64_t PrivilegeEscalationProcess::GetPid() const
{
    return m_pid;
}

void PrivilegeEscalationProcess::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool PrivilegeEscalationProcess::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

