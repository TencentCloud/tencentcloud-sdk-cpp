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

#include <tencentcloud/cwp/v20180228/model/AssetUserDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AssetUserDetail::AssetUserDetail() :
    m_machineIpHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_gidHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isRootHasBeenSet(false),
    m_lastLoginTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_isDomainHasBeenSet(false),
    m_isSshLoginHasBeenSet(false),
    m_homePathHasBeenSet(false),
    m_shellHasBeenSet(false),
    m_shellLoginStatusHasBeenSet(false),
    m_passwordChangeTimeHasBeenSet(false),
    m_passwordDueTimeHasBeenSet(false),
    m_passwordLockDaysHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_disableTimeHasBeenSet(false),
    m_lastLoginTerminalHasBeenSet(false),
    m_lastLoginLocHasBeenSet(false),
    m_lastLoginIpHasBeenSet(false),
    m_passwordWarnDaysHasBeenSet(false),
    m_passwordChangeTypeHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome AssetUserDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.Uid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uid = string(value["Uid"].GetString());
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("Gid") && !value["Gid"].IsNull())
    {
        if (!value["Gid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.Gid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gid = string(value["Gid"].GetString());
        m_gidHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsRoot") && !value["IsRoot"].IsNull())
    {
        if (!value["IsRoot"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.IsRoot` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isRoot = value["IsRoot"].GetUint64();
        m_isRootHasBeenSet = true;
    }

    if (value.HasMember("LastLoginTime") && !value["LastLoginTime"].IsNull())
    {
        if (!value["LastLoginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.LastLoginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastLoginTime = string(value["LastLoginTime"].GetString());
        m_lastLoginTimeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("UserType") && !value["UserType"].IsNull())
    {
        if (!value["UserType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.UserType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userType = value["UserType"].GetUint64();
        m_userTypeHasBeenSet = true;
    }

    if (value.HasMember("IsDomain") && !value["IsDomain"].IsNull())
    {
        if (!value["IsDomain"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.IsDomain` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isDomain = value["IsDomain"].GetUint64();
        m_isDomainHasBeenSet = true;
    }

    if (value.HasMember("IsSshLogin") && !value["IsSshLogin"].IsNull())
    {
        if (!value["IsSshLogin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.IsSshLogin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isSshLogin = value["IsSshLogin"].GetUint64();
        m_isSshLoginHasBeenSet = true;
    }

    if (value.HasMember("HomePath") && !value["HomePath"].IsNull())
    {
        if (!value["HomePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.HomePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_homePath = string(value["HomePath"].GetString());
        m_homePathHasBeenSet = true;
    }

    if (value.HasMember("Shell") && !value["Shell"].IsNull())
    {
        if (!value["Shell"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.Shell` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shell = string(value["Shell"].GetString());
        m_shellHasBeenSet = true;
    }

    if (value.HasMember("ShellLoginStatus") && !value["ShellLoginStatus"].IsNull())
    {
        if (!value["ShellLoginStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.ShellLoginStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shellLoginStatus = value["ShellLoginStatus"].GetUint64();
        m_shellLoginStatusHasBeenSet = true;
    }

    if (value.HasMember("PasswordChangeTime") && !value["PasswordChangeTime"].IsNull())
    {
        if (!value["PasswordChangeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.PasswordChangeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passwordChangeTime = string(value["PasswordChangeTime"].GetString());
        m_passwordChangeTimeHasBeenSet = true;
    }

    if (value.HasMember("PasswordDueTime") && !value["PasswordDueTime"].IsNull())
    {
        if (!value["PasswordDueTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.PasswordDueTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passwordDueTime = string(value["PasswordDueTime"].GetString());
        m_passwordDueTimeHasBeenSet = true;
    }

    if (value.HasMember("PasswordLockDays") && !value["PasswordLockDays"].IsNull())
    {
        if (!value["PasswordLockDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.PasswordLockDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_passwordLockDays = value["PasswordLockDays"].GetInt64();
        m_passwordLockDaysHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("DisableTime") && !value["DisableTime"].IsNull())
    {
        if (!value["DisableTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.DisableTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disableTime = string(value["DisableTime"].GetString());
        m_disableTimeHasBeenSet = true;
    }

    if (value.HasMember("LastLoginTerminal") && !value["LastLoginTerminal"].IsNull())
    {
        if (!value["LastLoginTerminal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.LastLoginTerminal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastLoginTerminal = string(value["LastLoginTerminal"].GetString());
        m_lastLoginTerminalHasBeenSet = true;
    }

    if (value.HasMember("LastLoginLoc") && !value["LastLoginLoc"].IsNull())
    {
        if (!value["LastLoginLoc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.LastLoginLoc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastLoginLoc = string(value["LastLoginLoc"].GetString());
        m_lastLoginLocHasBeenSet = true;
    }

    if (value.HasMember("LastLoginIp") && !value["LastLoginIp"].IsNull())
    {
        if (!value["LastLoginIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.LastLoginIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastLoginIp = string(value["LastLoginIp"].GetString());
        m_lastLoginIpHasBeenSet = true;
    }

    if (value.HasMember("PasswordWarnDays") && !value["PasswordWarnDays"].IsNull())
    {
        if (!value["PasswordWarnDays"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.PasswordWarnDays` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_passwordWarnDays = value["PasswordWarnDays"].GetUint64();
        m_passwordWarnDaysHasBeenSet = true;
    }

    if (value.HasMember("PasswordChangeType") && !value["PasswordChangeType"].IsNull())
    {
        if (!value["PasswordChangeType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.PasswordChangeType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_passwordChangeType = value["PasswordChangeType"].GetUint64();
        m_passwordChangeTypeHasBeenSet = true;
    }

    if (value.HasMember("Keys") && !value["Keys"].IsNull())
    {
        if (!value["Keys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.Keys` is not array type"));

        const rapidjson::Value &tmpValue = value["Keys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetUserKeyInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_keys.push_back(item);
        }
        m_keysHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetUserDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_disableTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disableTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastLoginTerminalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastLoginTerminal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastLoginTerminal.c_str(), allocator).Move(), allocator);
    }

    if (m_lastLoginLocHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastLoginLoc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastLoginLoc.c_str(), allocator).Move(), allocator);
    }

    if (m_lastLoginIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastLoginIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastLoginIp.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordWarnDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PasswordWarnDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passwordWarnDays, allocator);
    }

    if (m_passwordChangeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PasswordChangeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passwordChangeType, allocator);
    }

    if (m_keysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_keys.begin(); itr != m_keys.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string AssetUserDetail::GetMachineIp() const
{
    return m_machineIp;
}

void AssetUserDetail::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool AssetUserDetail::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string AssetUserDetail::GetMachineName() const
{
    return m_machineName;
}

void AssetUserDetail::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool AssetUserDetail::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string AssetUserDetail::GetUuid() const
{
    return m_uuid;
}

void AssetUserDetail::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool AssetUserDetail::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string AssetUserDetail::GetQuuid() const
{
    return m_quuid;
}

void AssetUserDetail::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool AssetUserDetail::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string AssetUserDetail::GetUid() const
{
    return m_uid;
}

void AssetUserDetail::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool AssetUserDetail::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string AssetUserDetail::GetGid() const
{
    return m_gid;
}

void AssetUserDetail::SetGid(const string& _gid)
{
    m_gid = _gid;
    m_gidHasBeenSet = true;
}

bool AssetUserDetail::GidHasBeenSet() const
{
    return m_gidHasBeenSet;
}

uint64_t AssetUserDetail::GetStatus() const
{
    return m_status;
}

void AssetUserDetail::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AssetUserDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t AssetUserDetail::GetIsRoot() const
{
    return m_isRoot;
}

void AssetUserDetail::SetIsRoot(const uint64_t& _isRoot)
{
    m_isRoot = _isRoot;
    m_isRootHasBeenSet = true;
}

bool AssetUserDetail::IsRootHasBeenSet() const
{
    return m_isRootHasBeenSet;
}

string AssetUserDetail::GetLastLoginTime() const
{
    return m_lastLoginTime;
}

void AssetUserDetail::SetLastLoginTime(const string& _lastLoginTime)
{
    m_lastLoginTime = _lastLoginTime;
    m_lastLoginTimeHasBeenSet = true;
}

bool AssetUserDetail::LastLoginTimeHasBeenSet() const
{
    return m_lastLoginTimeHasBeenSet;
}

string AssetUserDetail::GetName() const
{
    return m_name;
}

void AssetUserDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AssetUserDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t AssetUserDetail::GetUserType() const
{
    return m_userType;
}

void AssetUserDetail::SetUserType(const uint64_t& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool AssetUserDetail::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

uint64_t AssetUserDetail::GetIsDomain() const
{
    return m_isDomain;
}

void AssetUserDetail::SetIsDomain(const uint64_t& _isDomain)
{
    m_isDomain = _isDomain;
    m_isDomainHasBeenSet = true;
}

bool AssetUserDetail::IsDomainHasBeenSet() const
{
    return m_isDomainHasBeenSet;
}

uint64_t AssetUserDetail::GetIsSshLogin() const
{
    return m_isSshLogin;
}

void AssetUserDetail::SetIsSshLogin(const uint64_t& _isSshLogin)
{
    m_isSshLogin = _isSshLogin;
    m_isSshLoginHasBeenSet = true;
}

bool AssetUserDetail::IsSshLoginHasBeenSet() const
{
    return m_isSshLoginHasBeenSet;
}

string AssetUserDetail::GetHomePath() const
{
    return m_homePath;
}

void AssetUserDetail::SetHomePath(const string& _homePath)
{
    m_homePath = _homePath;
    m_homePathHasBeenSet = true;
}

bool AssetUserDetail::HomePathHasBeenSet() const
{
    return m_homePathHasBeenSet;
}

string AssetUserDetail::GetShell() const
{
    return m_shell;
}

void AssetUserDetail::SetShell(const string& _shell)
{
    m_shell = _shell;
    m_shellHasBeenSet = true;
}

bool AssetUserDetail::ShellHasBeenSet() const
{
    return m_shellHasBeenSet;
}

uint64_t AssetUserDetail::GetShellLoginStatus() const
{
    return m_shellLoginStatus;
}

void AssetUserDetail::SetShellLoginStatus(const uint64_t& _shellLoginStatus)
{
    m_shellLoginStatus = _shellLoginStatus;
    m_shellLoginStatusHasBeenSet = true;
}

bool AssetUserDetail::ShellLoginStatusHasBeenSet() const
{
    return m_shellLoginStatusHasBeenSet;
}

string AssetUserDetail::GetPasswordChangeTime() const
{
    return m_passwordChangeTime;
}

void AssetUserDetail::SetPasswordChangeTime(const string& _passwordChangeTime)
{
    m_passwordChangeTime = _passwordChangeTime;
    m_passwordChangeTimeHasBeenSet = true;
}

bool AssetUserDetail::PasswordChangeTimeHasBeenSet() const
{
    return m_passwordChangeTimeHasBeenSet;
}

string AssetUserDetail::GetPasswordDueTime() const
{
    return m_passwordDueTime;
}

void AssetUserDetail::SetPasswordDueTime(const string& _passwordDueTime)
{
    m_passwordDueTime = _passwordDueTime;
    m_passwordDueTimeHasBeenSet = true;
}

bool AssetUserDetail::PasswordDueTimeHasBeenSet() const
{
    return m_passwordDueTimeHasBeenSet;
}

int64_t AssetUserDetail::GetPasswordLockDays() const
{
    return m_passwordLockDays;
}

void AssetUserDetail::SetPasswordLockDays(const int64_t& _passwordLockDays)
{
    m_passwordLockDays = _passwordLockDays;
    m_passwordLockDaysHasBeenSet = true;
}

bool AssetUserDetail::PasswordLockDaysHasBeenSet() const
{
    return m_passwordLockDaysHasBeenSet;
}

string AssetUserDetail::GetRemark() const
{
    return m_remark;
}

void AssetUserDetail::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AssetUserDetail::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string AssetUserDetail::GetGroupName() const
{
    return m_groupName;
}

void AssetUserDetail::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool AssetUserDetail::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string AssetUserDetail::GetDisableTime() const
{
    return m_disableTime;
}

void AssetUserDetail::SetDisableTime(const string& _disableTime)
{
    m_disableTime = _disableTime;
    m_disableTimeHasBeenSet = true;
}

bool AssetUserDetail::DisableTimeHasBeenSet() const
{
    return m_disableTimeHasBeenSet;
}

string AssetUserDetail::GetLastLoginTerminal() const
{
    return m_lastLoginTerminal;
}

void AssetUserDetail::SetLastLoginTerminal(const string& _lastLoginTerminal)
{
    m_lastLoginTerminal = _lastLoginTerminal;
    m_lastLoginTerminalHasBeenSet = true;
}

bool AssetUserDetail::LastLoginTerminalHasBeenSet() const
{
    return m_lastLoginTerminalHasBeenSet;
}

string AssetUserDetail::GetLastLoginLoc() const
{
    return m_lastLoginLoc;
}

void AssetUserDetail::SetLastLoginLoc(const string& _lastLoginLoc)
{
    m_lastLoginLoc = _lastLoginLoc;
    m_lastLoginLocHasBeenSet = true;
}

bool AssetUserDetail::LastLoginLocHasBeenSet() const
{
    return m_lastLoginLocHasBeenSet;
}

string AssetUserDetail::GetLastLoginIp() const
{
    return m_lastLoginIp;
}

void AssetUserDetail::SetLastLoginIp(const string& _lastLoginIp)
{
    m_lastLoginIp = _lastLoginIp;
    m_lastLoginIpHasBeenSet = true;
}

bool AssetUserDetail::LastLoginIpHasBeenSet() const
{
    return m_lastLoginIpHasBeenSet;
}

uint64_t AssetUserDetail::GetPasswordWarnDays() const
{
    return m_passwordWarnDays;
}

void AssetUserDetail::SetPasswordWarnDays(const uint64_t& _passwordWarnDays)
{
    m_passwordWarnDays = _passwordWarnDays;
    m_passwordWarnDaysHasBeenSet = true;
}

bool AssetUserDetail::PasswordWarnDaysHasBeenSet() const
{
    return m_passwordWarnDaysHasBeenSet;
}

uint64_t AssetUserDetail::GetPasswordChangeType() const
{
    return m_passwordChangeType;
}

void AssetUserDetail::SetPasswordChangeType(const uint64_t& _passwordChangeType)
{
    m_passwordChangeType = _passwordChangeType;
    m_passwordChangeTypeHasBeenSet = true;
}

bool AssetUserDetail::PasswordChangeTypeHasBeenSet() const
{
    return m_passwordChangeTypeHasBeenSet;
}

vector<AssetUserKeyInfo> AssetUserDetail::GetKeys() const
{
    return m_keys;
}

void AssetUserDetail::SetKeys(const vector<AssetUserKeyInfo>& _keys)
{
    m_keys = _keys;
    m_keysHasBeenSet = true;
}

bool AssetUserDetail::KeysHasBeenSet() const
{
    return m_keysHasBeenSet;
}

string AssetUserDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void AssetUserDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AssetUserDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

