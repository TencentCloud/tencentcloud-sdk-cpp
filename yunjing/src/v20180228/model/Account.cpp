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

#include <tencentcloud/yunjing/v20180228/model/Account.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

Account::Account() :
    m_idHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_privilegeHasBeenSet(false),
    m_accountCreateTimeHasBeenSet(false),
    m_lastLoginTimeHasBeenSet(false)
{
}

CoreInternalOutcome Account::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Account.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Account.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Account.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Account.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Account.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("Groups") && !value["Groups"].IsNull())
    {
        if (!value["Groups"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Account.Groups` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groups = string(value["Groups"].GetString());
        m_groupsHasBeenSet = true;
    }

    if (value.HasMember("Privilege") && !value["Privilege"].IsNull())
    {
        if (!value["Privilege"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Account.Privilege` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privilege = string(value["Privilege"].GetString());
        m_privilegeHasBeenSet = true;
    }

    if (value.HasMember("AccountCreateTime") && !value["AccountCreateTime"].IsNull())
    {
        if (!value["AccountCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Account.AccountCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountCreateTime = string(value["AccountCreateTime"].GetString());
        m_accountCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("LastLoginTime") && !value["LastLoginTime"].IsNull())
    {
        if (!value["LastLoginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Account.LastLoginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastLoginTime = string(value["LastLoginTime"].GetString());
        m_lastLoginTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Account::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_groupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Groups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groups.c_str(), allocator).Move(), allocator);
    }

    if (m_privilegeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privilege";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privilege.c_str(), allocator).Move(), allocator);
    }

    if (m_accountCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastLoginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastLoginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastLoginTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t Account::GetId() const
{
    return m_id;
}

void Account::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Account::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Account::GetUuid() const
{
    return m_uuid;
}

void Account::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool Account::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string Account::GetMachineIp() const
{
    return m_machineIp;
}

void Account::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool Account::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string Account::GetMachineName() const
{
    return m_machineName;
}

void Account::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool Account::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string Account::GetUsername() const
{
    return m_username;
}

void Account::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool Account::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string Account::GetGroups() const
{
    return m_groups;
}

void Account::SetGroups(const string& _groups)
{
    m_groups = _groups;
    m_groupsHasBeenSet = true;
}

bool Account::GroupsHasBeenSet() const
{
    return m_groupsHasBeenSet;
}

string Account::GetPrivilege() const
{
    return m_privilege;
}

void Account::SetPrivilege(const string& _privilege)
{
    m_privilege = _privilege;
    m_privilegeHasBeenSet = true;
}

bool Account::PrivilegeHasBeenSet() const
{
    return m_privilegeHasBeenSet;
}

string Account::GetAccountCreateTime() const
{
    return m_accountCreateTime;
}

void Account::SetAccountCreateTime(const string& _accountCreateTime)
{
    m_accountCreateTime = _accountCreateTime;
    m_accountCreateTimeHasBeenSet = true;
}

bool Account::AccountCreateTimeHasBeenSet() const
{
    return m_accountCreateTimeHasBeenSet;
}

string Account::GetLastLoginTime() const
{
    return m_lastLoginTime;
}

void Account::SetLastLoginTime(const string& _lastLoginTime)
{
    m_lastLoginTime = _lastLoginTime;
    m_lastLoginTimeHasBeenSet = true;
}

bool Account::LastLoginTimeHasBeenSet() const
{
    return m_lastLoginTimeHasBeenSet;
}

