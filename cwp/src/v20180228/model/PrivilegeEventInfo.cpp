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

#include <tencentcloud/cwp/v20180228/model/PrivilegeEventInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

PrivilegeEventInfo::PrivilegeEventInfo() :
    m_idHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_hostIpHasBeenSet(false),
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
    m_psTreeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_suggestSchemeHasBeenSet(false),
    m_harmDescribeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_referencesHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_newCapsHasBeenSet(false),
    m_machineStatusHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome PrivilegeEventInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("FullPath") && !value["FullPath"].IsNull())
    {
        if (!value["FullPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.FullPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullPath = string(value["FullPath"].GetString());
        m_fullPathHasBeenSet = true;
    }

    if (value.HasMember("CmdLine") && !value["CmdLine"].IsNull())
    {
        if (!value["CmdLine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.CmdLine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmdLine = string(value["CmdLine"].GetString());
        m_cmdLineHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("UserGroup") && !value["UserGroup"].IsNull())
    {
        if (!value["UserGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.UserGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroup = string(value["UserGroup"].GetString());
        m_userGroupHasBeenSet = true;
    }

    if (value.HasMember("ProcFilePrivilege") && !value["ProcFilePrivilege"].IsNull())
    {
        if (!value["ProcFilePrivilege"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.ProcFilePrivilege` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_procFilePrivilege = string(value["ProcFilePrivilege"].GetString());
        m_procFilePrivilegeHasBeenSet = true;
    }

    if (value.HasMember("ParentProcName") && !value["ParentProcName"].IsNull())
    {
        if (!value["ParentProcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.ParentProcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentProcName = string(value["ParentProcName"].GetString());
        m_parentProcNameHasBeenSet = true;
    }

    if (value.HasMember("ParentProcUser") && !value["ParentProcUser"].IsNull())
    {
        if (!value["ParentProcUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.ParentProcUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentProcUser = string(value["ParentProcUser"].GetString());
        m_parentProcUserHasBeenSet = true;
    }

    if (value.HasMember("ParentProcGroup") && !value["ParentProcGroup"].IsNull())
    {
        if (!value["ParentProcGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.ParentProcGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentProcGroup = string(value["ParentProcGroup"].GetString());
        m_parentProcGroupHasBeenSet = true;
    }

    if (value.HasMember("ParentProcPath") && !value["ParentProcPath"].IsNull())
    {
        if (!value["ParentProcPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.ParentProcPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentProcPath = string(value["ParentProcPath"].GetString());
        m_parentProcPathHasBeenSet = true;
    }

    if (value.HasMember("PsTree") && !value["PsTree"].IsNull())
    {
        if (!value["PsTree"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.PsTree` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_psTree = string(value["PsTree"].GetString());
        m_psTreeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("SuggestScheme") && !value["SuggestScheme"].IsNull())
    {
        if (!value["SuggestScheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.SuggestScheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestScheme = string(value["SuggestScheme"].GetString());
        m_suggestSchemeHasBeenSet = true;
    }

    if (value.HasMember("HarmDescribe") && !value["HarmDescribe"].IsNull())
    {
        if (!value["HarmDescribe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.HarmDescribe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_harmDescribe = string(value["HarmDescribe"].GetString());
        m_harmDescribeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("References") && !value["References"].IsNull())
    {
        if (!value["References"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.References` is not array type"));

        const rapidjson::Value &tmpValue = value["References"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_references.push_back((*itr).GetString());
        }
        m_referencesHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("NewCaps") && !value["NewCaps"].IsNull())
    {
        if (!value["NewCaps"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.NewCaps` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newCaps = string(value["NewCaps"].GetString());
        m_newCapsHasBeenSet = true;
    }

    if (value.HasMember("MachineStatus") && !value["MachineStatus"].IsNull())
    {
        if (!value["MachineStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.MachineStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineStatus = string(value["MachineStatus"].GetString());
        m_machineStatusHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEventInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrivilegeEventInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
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

    if (m_psTreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PsTree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_psTree.c_str(), allocator).Move(), allocator);
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

    if (m_suggestSchemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuggestScheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestScheme.c_str(), allocator).Move(), allocator);
    }

    if (m_harmDescribeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HarmDescribe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_harmDescribe.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_referencesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "References";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_references.begin(); itr != m_references.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_machineWanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineWanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineWanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_newCapsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewCaps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newCaps.c_str(), allocator).Move(), allocator);
    }

    if (m_machineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t PrivilegeEventInfo::GetId() const
{
    return m_id;
}

void PrivilegeEventInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool PrivilegeEventInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string PrivilegeEventInfo::GetUuid() const
{
    return m_uuid;
}

void PrivilegeEventInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool PrivilegeEventInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string PrivilegeEventInfo::GetQuuid() const
{
    return m_quuid;
}

void PrivilegeEventInfo::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool PrivilegeEventInfo::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string PrivilegeEventInfo::GetHostIp() const
{
    return m_hostIp;
}

void PrivilegeEventInfo::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool PrivilegeEventInfo::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string PrivilegeEventInfo::GetProcessName() const
{
    return m_processName;
}

void PrivilegeEventInfo::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool PrivilegeEventInfo::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

string PrivilegeEventInfo::GetFullPath() const
{
    return m_fullPath;
}

void PrivilegeEventInfo::SetFullPath(const string& _fullPath)
{
    m_fullPath = _fullPath;
    m_fullPathHasBeenSet = true;
}

bool PrivilegeEventInfo::FullPathHasBeenSet() const
{
    return m_fullPathHasBeenSet;
}

string PrivilegeEventInfo::GetCmdLine() const
{
    return m_cmdLine;
}

void PrivilegeEventInfo::SetCmdLine(const string& _cmdLine)
{
    m_cmdLine = _cmdLine;
    m_cmdLineHasBeenSet = true;
}

bool PrivilegeEventInfo::CmdLineHasBeenSet() const
{
    return m_cmdLineHasBeenSet;
}

string PrivilegeEventInfo::GetUserName() const
{
    return m_userName;
}

void PrivilegeEventInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool PrivilegeEventInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string PrivilegeEventInfo::GetUserGroup() const
{
    return m_userGroup;
}

void PrivilegeEventInfo::SetUserGroup(const string& _userGroup)
{
    m_userGroup = _userGroup;
    m_userGroupHasBeenSet = true;
}

bool PrivilegeEventInfo::UserGroupHasBeenSet() const
{
    return m_userGroupHasBeenSet;
}

string PrivilegeEventInfo::GetProcFilePrivilege() const
{
    return m_procFilePrivilege;
}

void PrivilegeEventInfo::SetProcFilePrivilege(const string& _procFilePrivilege)
{
    m_procFilePrivilege = _procFilePrivilege;
    m_procFilePrivilegeHasBeenSet = true;
}

bool PrivilegeEventInfo::ProcFilePrivilegeHasBeenSet() const
{
    return m_procFilePrivilegeHasBeenSet;
}

string PrivilegeEventInfo::GetParentProcName() const
{
    return m_parentProcName;
}

void PrivilegeEventInfo::SetParentProcName(const string& _parentProcName)
{
    m_parentProcName = _parentProcName;
    m_parentProcNameHasBeenSet = true;
}

bool PrivilegeEventInfo::ParentProcNameHasBeenSet() const
{
    return m_parentProcNameHasBeenSet;
}

string PrivilegeEventInfo::GetParentProcUser() const
{
    return m_parentProcUser;
}

void PrivilegeEventInfo::SetParentProcUser(const string& _parentProcUser)
{
    m_parentProcUser = _parentProcUser;
    m_parentProcUserHasBeenSet = true;
}

bool PrivilegeEventInfo::ParentProcUserHasBeenSet() const
{
    return m_parentProcUserHasBeenSet;
}

string PrivilegeEventInfo::GetParentProcGroup() const
{
    return m_parentProcGroup;
}

void PrivilegeEventInfo::SetParentProcGroup(const string& _parentProcGroup)
{
    m_parentProcGroup = _parentProcGroup;
    m_parentProcGroupHasBeenSet = true;
}

bool PrivilegeEventInfo::ParentProcGroupHasBeenSet() const
{
    return m_parentProcGroupHasBeenSet;
}

string PrivilegeEventInfo::GetParentProcPath() const
{
    return m_parentProcPath;
}

void PrivilegeEventInfo::SetParentProcPath(const string& _parentProcPath)
{
    m_parentProcPath = _parentProcPath;
    m_parentProcPathHasBeenSet = true;
}

bool PrivilegeEventInfo::ParentProcPathHasBeenSet() const
{
    return m_parentProcPathHasBeenSet;
}

string PrivilegeEventInfo::GetPsTree() const
{
    return m_psTree;
}

void PrivilegeEventInfo::SetPsTree(const string& _psTree)
{
    m_psTree = _psTree;
    m_psTreeHasBeenSet = true;
}

bool PrivilegeEventInfo::PsTreeHasBeenSet() const
{
    return m_psTreeHasBeenSet;
}

uint64_t PrivilegeEventInfo::GetStatus() const
{
    return m_status;
}

void PrivilegeEventInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PrivilegeEventInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PrivilegeEventInfo::GetCreateTime() const
{
    return m_createTime;
}

void PrivilegeEventInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PrivilegeEventInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string PrivilegeEventInfo::GetMachineName() const
{
    return m_machineName;
}

void PrivilegeEventInfo::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool PrivilegeEventInfo::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string PrivilegeEventInfo::GetSuggestScheme() const
{
    return m_suggestScheme;
}

void PrivilegeEventInfo::SetSuggestScheme(const string& _suggestScheme)
{
    m_suggestScheme = _suggestScheme;
    m_suggestSchemeHasBeenSet = true;
}

bool PrivilegeEventInfo::SuggestSchemeHasBeenSet() const
{
    return m_suggestSchemeHasBeenSet;
}

string PrivilegeEventInfo::GetHarmDescribe() const
{
    return m_harmDescribe;
}

void PrivilegeEventInfo::SetHarmDescribe(const string& _harmDescribe)
{
    m_harmDescribe = _harmDescribe;
    m_harmDescribeHasBeenSet = true;
}

bool PrivilegeEventInfo::HarmDescribeHasBeenSet() const
{
    return m_harmDescribeHasBeenSet;
}

vector<string> PrivilegeEventInfo::GetTags() const
{
    return m_tags;
}

void PrivilegeEventInfo::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool PrivilegeEventInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> PrivilegeEventInfo::GetReferences() const
{
    return m_references;
}

void PrivilegeEventInfo::SetReferences(const vector<string>& _references)
{
    m_references = _references;
    m_referencesHasBeenSet = true;
}

bool PrivilegeEventInfo::ReferencesHasBeenSet() const
{
    return m_referencesHasBeenSet;
}

string PrivilegeEventInfo::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void PrivilegeEventInfo::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool PrivilegeEventInfo::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

string PrivilegeEventInfo::GetNewCaps() const
{
    return m_newCaps;
}

void PrivilegeEventInfo::SetNewCaps(const string& _newCaps)
{
    m_newCaps = _newCaps;
    m_newCapsHasBeenSet = true;
}

bool PrivilegeEventInfo::NewCapsHasBeenSet() const
{
    return m_newCapsHasBeenSet;
}

string PrivilegeEventInfo::GetMachineStatus() const
{
    return m_machineStatus;
}

void PrivilegeEventInfo::SetMachineStatus(const string& _machineStatus)
{
    m_machineStatus = _machineStatus;
    m_machineStatusHasBeenSet = true;
}

bool PrivilegeEventInfo::MachineStatusHasBeenSet() const
{
    return m_machineStatusHasBeenSet;
}

string PrivilegeEventInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void PrivilegeEventInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool PrivilegeEventInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

