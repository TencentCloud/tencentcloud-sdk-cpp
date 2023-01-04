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

#include <tencentcloud/cwp/v20180228/model/AssetUserBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AssetUserBaseInfo::AssetUserBaseInfo() :
    m_machineIpHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_osInfoHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_gidHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isRootHasBeenSet(false),
    m_loginTypeHasBeenSet(false),
    m_lastLoginTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_isDomainHasBeenSet(false),
    m_isSudoHasBeenSet(false),
    m_isSshLoginHasBeenSet(false),
    m_homePathHasBeenSet(false),
    m_shellHasBeenSet(false),
    m_shellLoginStatusHasBeenSet(false),
    m_passwordChangeTimeHasBeenSet(false),
    m_passwordDueTimeHasBeenSet(false),
    m_passwordLockDaysHasBeenSet(false),
    m_passwordStatusHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_isNewHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false)
{
}

CoreInternalOutcome AssetUserBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("OsInfo") && !value["OsInfo"].IsNull())
    {
        if (!value["OsInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.OsInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osInfo = string(value["OsInfo"].GetString());
        m_osInfoHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.Uid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uid = string(value["Uid"].GetString());
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("Gid") && !value["Gid"].IsNull())
    {
        if (!value["Gid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.Gid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gid = string(value["Gid"].GetString());
        m_gidHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsRoot") && !value["IsRoot"].IsNull())
    {
        if (!value["IsRoot"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.IsRoot` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isRoot = value["IsRoot"].GetUint64();
        m_isRootHasBeenSet = true;
    }

    if (value.HasMember("LoginType") && !value["LoginType"].IsNull())
    {
        if (!value["LoginType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.LoginType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_loginType = value["LoginType"].GetUint64();
        m_loginTypeHasBeenSet = true;
    }

    if (value.HasMember("LastLoginTime") && !value["LastLoginTime"].IsNull())
    {
        if (!value["LastLoginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.LastLoginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastLoginTime = string(value["LastLoginTime"].GetString());
        m_lastLoginTimeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("UserType") && !value["UserType"].IsNull())
    {
        if (!value["UserType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.UserType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userType = value["UserType"].GetUint64();
        m_userTypeHasBeenSet = true;
    }

    if (value.HasMember("IsDomain") && !value["IsDomain"].IsNull())
    {
        if (!value["IsDomain"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.IsDomain` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isDomain = value["IsDomain"].GetUint64();
        m_isDomainHasBeenSet = true;
    }

    if (value.HasMember("IsSudo") && !value["IsSudo"].IsNull())
    {
        if (!value["IsSudo"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.IsSudo` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isSudo = value["IsSudo"].GetUint64();
        m_isSudoHasBeenSet = true;
    }

    if (value.HasMember("IsSshLogin") && !value["IsSshLogin"].IsNull())
    {
        if (!value["IsSshLogin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.IsSshLogin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isSshLogin = value["IsSshLogin"].GetUint64();
        m_isSshLoginHasBeenSet = true;
    }

    if (value.HasMember("HomePath") && !value["HomePath"].IsNull())
    {
        if (!value["HomePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.HomePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_homePath = string(value["HomePath"].GetString());
        m_homePathHasBeenSet = true;
    }

    if (value.HasMember("Shell") && !value["Shell"].IsNull())
    {
        if (!value["Shell"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.Shell` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shell = string(value["Shell"].GetString());
        m_shellHasBeenSet = true;
    }

    if (value.HasMember("ShellLoginStatus") && !value["ShellLoginStatus"].IsNull())
    {
        if (!value["ShellLoginStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.ShellLoginStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shellLoginStatus = value["ShellLoginStatus"].GetUint64();
        m_shellLoginStatusHasBeenSet = true;
    }

    if (value.HasMember("PasswordChangeTime") && !value["PasswordChangeTime"].IsNull())
    {
        if (!value["PasswordChangeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.PasswordChangeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passwordChangeTime = string(value["PasswordChangeTime"].GetString());
        m_passwordChangeTimeHasBeenSet = true;
    }

    if (value.HasMember("PasswordDueTime") && !value["PasswordDueTime"].IsNull())
    {
        if (!value["PasswordDueTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.PasswordDueTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passwordDueTime = string(value["PasswordDueTime"].GetString());
        m_passwordDueTimeHasBeenSet = true;
    }

    if (value.HasMember("PasswordLockDays") && !value["PasswordLockDays"].IsNull())
    {
        if (!value["PasswordLockDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.PasswordLockDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_passwordLockDays = value["PasswordLockDays"].GetInt64();
        m_passwordLockDaysHasBeenSet = true;
    }

    if (value.HasMember("PasswordStatus") && !value["PasswordStatus"].IsNull())
    {
        if (!value["PasswordStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.PasswordStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_passwordStatus = value["PasswordStatus"].GetInt64();
        m_passwordStatusHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("IsNew") && !value["IsNew"].IsNull())
    {
        if (!value["IsNew"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.IsNew` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isNew = value["IsNew"].GetInt64();
        m_isNewHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserBaseInfo.MachineExtraInfo` is not object type").SetRequestId(requestId));
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

void AssetUserBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_gidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gid.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_isRootHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRoot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRoot, allocator);
    }

    if (m_loginTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loginType, allocator);
    }

    if (m_lastLoginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastLoginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastLoginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userType, allocator);
    }

    if (m_isDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDomain, allocator);
    }

    if (m_isSudoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSudo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSudo, allocator);
    }

    if (m_isSshLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSshLogin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSshLogin, allocator);
    }

    if (m_homePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HomePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_homePath.c_str(), allocator).Move(), allocator);
    }

    if (m_shellHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Shell";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shell.c_str(), allocator).Move(), allocator);
    }

    if (m_shellLoginStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShellLoginStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shellLoginStatus, allocator);
    }

    if (m_passwordChangeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PasswordChangeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passwordChangeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordDueTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PasswordDueTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passwordDueTime.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordLockDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PasswordLockDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passwordLockDays, allocator);
    }

    if (m_passwordStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PasswordStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passwordStatus, allocator);
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


string AssetUserBaseInfo::GetMachineIp() const
{
    return m_machineIp;
}

void AssetUserBaseInfo::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool AssetUserBaseInfo::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string AssetUserBaseInfo::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void AssetUserBaseInfo::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool AssetUserBaseInfo::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

string AssetUserBaseInfo::GetMachineName() const
{
    return m_machineName;
}

void AssetUserBaseInfo::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool AssetUserBaseInfo::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string AssetUserBaseInfo::GetOsInfo() const
{
    return m_osInfo;
}

void AssetUserBaseInfo::SetOsInfo(const string& _osInfo)
{
    m_osInfo = _osInfo;
    m_osInfoHasBeenSet = true;
}

bool AssetUserBaseInfo::OsInfoHasBeenSet() const
{
    return m_osInfoHasBeenSet;
}

string AssetUserBaseInfo::GetUuid() const
{
    return m_uuid;
}

void AssetUserBaseInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool AssetUserBaseInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string AssetUserBaseInfo::GetQuuid() const
{
    return m_quuid;
}

void AssetUserBaseInfo::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool AssetUserBaseInfo::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string AssetUserBaseInfo::GetUid() const
{
    return m_uid;
}

void AssetUserBaseInfo::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool AssetUserBaseInfo::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string AssetUserBaseInfo::GetGid() const
{
    return m_gid;
}

void AssetUserBaseInfo::SetGid(const string& _gid)
{
    m_gid = _gid;
    m_gidHasBeenSet = true;
}

bool AssetUserBaseInfo::GidHasBeenSet() const
{
    return m_gidHasBeenSet;
}

uint64_t AssetUserBaseInfo::GetStatus() const
{
    return m_status;
}

void AssetUserBaseInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AssetUserBaseInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t AssetUserBaseInfo::GetIsRoot() const
{
    return m_isRoot;
}

void AssetUserBaseInfo::SetIsRoot(const uint64_t& _isRoot)
{
    m_isRoot = _isRoot;
    m_isRootHasBeenSet = true;
}

bool AssetUserBaseInfo::IsRootHasBeenSet() const
{
    return m_isRootHasBeenSet;
}

uint64_t AssetUserBaseInfo::GetLoginType() const
{
    return m_loginType;
}

void AssetUserBaseInfo::SetLoginType(const uint64_t& _loginType)
{
    m_loginType = _loginType;
    m_loginTypeHasBeenSet = true;
}

bool AssetUserBaseInfo::LoginTypeHasBeenSet() const
{
    return m_loginTypeHasBeenSet;
}

string AssetUserBaseInfo::GetLastLoginTime() const
{
    return m_lastLoginTime;
}

void AssetUserBaseInfo::SetLastLoginTime(const string& _lastLoginTime)
{
    m_lastLoginTime = _lastLoginTime;
    m_lastLoginTimeHasBeenSet = true;
}

bool AssetUserBaseInfo::LastLoginTimeHasBeenSet() const
{
    return m_lastLoginTimeHasBeenSet;
}

string AssetUserBaseInfo::GetName() const
{
    return m_name;
}

void AssetUserBaseInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AssetUserBaseInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t AssetUserBaseInfo::GetProjectId() const
{
    return m_projectId;
}

void AssetUserBaseInfo::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AssetUserBaseInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t AssetUserBaseInfo::GetUserType() const
{
    return m_userType;
}

void AssetUserBaseInfo::SetUserType(const uint64_t& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool AssetUserBaseInfo::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

uint64_t AssetUserBaseInfo::GetIsDomain() const
{
    return m_isDomain;
}

void AssetUserBaseInfo::SetIsDomain(const uint64_t& _isDomain)
{
    m_isDomain = _isDomain;
    m_isDomainHasBeenSet = true;
}

bool AssetUserBaseInfo::IsDomainHasBeenSet() const
{
    return m_isDomainHasBeenSet;
}

uint64_t AssetUserBaseInfo::GetIsSudo() const
{
    return m_isSudo;
}

void AssetUserBaseInfo::SetIsSudo(const uint64_t& _isSudo)
{
    m_isSudo = _isSudo;
    m_isSudoHasBeenSet = true;
}

bool AssetUserBaseInfo::IsSudoHasBeenSet() const
{
    return m_isSudoHasBeenSet;
}

uint64_t AssetUserBaseInfo::GetIsSshLogin() const
{
    return m_isSshLogin;
}

void AssetUserBaseInfo::SetIsSshLogin(const uint64_t& _isSshLogin)
{
    m_isSshLogin = _isSshLogin;
    m_isSshLoginHasBeenSet = true;
}

bool AssetUserBaseInfo::IsSshLoginHasBeenSet() const
{
    return m_isSshLoginHasBeenSet;
}

string AssetUserBaseInfo::GetHomePath() const
{
    return m_homePath;
}

void AssetUserBaseInfo::SetHomePath(const string& _homePath)
{
    m_homePath = _homePath;
    m_homePathHasBeenSet = true;
}

bool AssetUserBaseInfo::HomePathHasBeenSet() const
{
    return m_homePathHasBeenSet;
}

string AssetUserBaseInfo::GetShell() const
{
    return m_shell;
}

void AssetUserBaseInfo::SetShell(const string& _shell)
{
    m_shell = _shell;
    m_shellHasBeenSet = true;
}

bool AssetUserBaseInfo::ShellHasBeenSet() const
{
    return m_shellHasBeenSet;
}

uint64_t AssetUserBaseInfo::GetShellLoginStatus() const
{
    return m_shellLoginStatus;
}

void AssetUserBaseInfo::SetShellLoginStatus(const uint64_t& _shellLoginStatus)
{
    m_shellLoginStatus = _shellLoginStatus;
    m_shellLoginStatusHasBeenSet = true;
}

bool AssetUserBaseInfo::ShellLoginStatusHasBeenSet() const
{
    return m_shellLoginStatusHasBeenSet;
}

string AssetUserBaseInfo::GetPasswordChangeTime() const
{
    return m_passwordChangeTime;
}

void AssetUserBaseInfo::SetPasswordChangeTime(const string& _passwordChangeTime)
{
    m_passwordChangeTime = _passwordChangeTime;
    m_passwordChangeTimeHasBeenSet = true;
}

bool AssetUserBaseInfo::PasswordChangeTimeHasBeenSet() const
{
    return m_passwordChangeTimeHasBeenSet;
}

string AssetUserBaseInfo::GetPasswordDueTime() const
{
    return m_passwordDueTime;
}

void AssetUserBaseInfo::SetPasswordDueTime(const string& _passwordDueTime)
{
    m_passwordDueTime = _passwordDueTime;
    m_passwordDueTimeHasBeenSet = true;
}

bool AssetUserBaseInfo::PasswordDueTimeHasBeenSet() const
{
    return m_passwordDueTimeHasBeenSet;
}

int64_t AssetUserBaseInfo::GetPasswordLockDays() const
{
    return m_passwordLockDays;
}

void AssetUserBaseInfo::SetPasswordLockDays(const int64_t& _passwordLockDays)
{
    m_passwordLockDays = _passwordLockDays;
    m_passwordLockDaysHasBeenSet = true;
}

bool AssetUserBaseInfo::PasswordLockDaysHasBeenSet() const
{
    return m_passwordLockDaysHasBeenSet;
}

int64_t AssetUserBaseInfo::GetPasswordStatus() const
{
    return m_passwordStatus;
}

void AssetUserBaseInfo::SetPasswordStatus(const int64_t& _passwordStatus)
{
    m_passwordStatus = _passwordStatus;
    m_passwordStatusHasBeenSet = true;
}

bool AssetUserBaseInfo::PasswordStatusHasBeenSet() const
{
    return m_passwordStatusHasBeenSet;
}

string AssetUserBaseInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void AssetUserBaseInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AssetUserBaseInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AssetUserBaseInfo::GetFirstTime() const
{
    return m_firstTime;
}

void AssetUserBaseInfo::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool AssetUserBaseInfo::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

int64_t AssetUserBaseInfo::GetIsNew() const
{
    return m_isNew;
}

void AssetUserBaseInfo::SetIsNew(const int64_t& _isNew)
{
    m_isNew = _isNew;
    m_isNewHasBeenSet = true;
}

bool AssetUserBaseInfo::IsNewHasBeenSet() const
{
    return m_isNewHasBeenSet;
}

MachineExtraInfo AssetUserBaseInfo::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void AssetUserBaseInfo::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool AssetUserBaseInfo::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

