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

#include <tencentcloud/ess/v20201111/model/IntegrateRole.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

IntegrateRole::IntegrateRole() :
    m_roleIdHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_roleStatusHasBeenSet(false),
    m_isGroupRoleHasBeenSet(false),
    m_subOrgIdListHasBeenSet(false),
    m_permissionGroupsHasBeenSet(false)
{
}

CoreInternalOutcome IntegrateRole::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleId") && !value["RoleId"].IsNull())
    {
        if (!value["RoleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrateRole.RoleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleId = string(value["RoleId"].GetString());
        m_roleIdHasBeenSet = true;
    }

    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrateRole.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("RoleStatus") && !value["RoleStatus"].IsNull())
    {
        if (!value["RoleStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrateRole.RoleStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roleStatus = value["RoleStatus"].GetUint64();
        m_roleStatusHasBeenSet = true;
    }

    if (value.HasMember("IsGroupRole") && !value["IsGroupRole"].IsNull())
    {
        if (!value["IsGroupRole"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrateRole.IsGroupRole` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isGroupRole = value["IsGroupRole"].GetBool();
        m_isGroupRoleHasBeenSet = true;
    }

    if (value.HasMember("SubOrgIdList") && !value["SubOrgIdList"].IsNull())
    {
        if (!value["SubOrgIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntegrateRole.SubOrgIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["SubOrgIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subOrgIdList.push_back((*itr).GetString());
        }
        m_subOrgIdListHasBeenSet = true;
    }

    if (value.HasMember("PermissionGroups") && !value["PermissionGroups"].IsNull())
    {
        if (!value["PermissionGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntegrateRole.PermissionGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["PermissionGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PermissionGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_permissionGroups.push_back(item);
        }
        m_permissionGroupsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntegrateRole::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_roleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roleStatus, allocator);
    }

    if (m_isGroupRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGroupRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isGroupRole, allocator);
    }

    if (m_subOrgIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubOrgIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subOrgIdList.begin(); itr != m_subOrgIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_permissionGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_permissionGroups.begin(); itr != m_permissionGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string IntegrateRole::GetRoleId() const
{
    return m_roleId;
}

void IntegrateRole::SetRoleId(const string& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool IntegrateRole::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

string IntegrateRole::GetRoleName() const
{
    return m_roleName;
}

void IntegrateRole::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool IntegrateRole::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

uint64_t IntegrateRole::GetRoleStatus() const
{
    return m_roleStatus;
}

void IntegrateRole::SetRoleStatus(const uint64_t& _roleStatus)
{
    m_roleStatus = _roleStatus;
    m_roleStatusHasBeenSet = true;
}

bool IntegrateRole::RoleStatusHasBeenSet() const
{
    return m_roleStatusHasBeenSet;
}

bool IntegrateRole::GetIsGroupRole() const
{
    return m_isGroupRole;
}

void IntegrateRole::SetIsGroupRole(const bool& _isGroupRole)
{
    m_isGroupRole = _isGroupRole;
    m_isGroupRoleHasBeenSet = true;
}

bool IntegrateRole::IsGroupRoleHasBeenSet() const
{
    return m_isGroupRoleHasBeenSet;
}

vector<string> IntegrateRole::GetSubOrgIdList() const
{
    return m_subOrgIdList;
}

void IntegrateRole::SetSubOrgIdList(const vector<string>& _subOrgIdList)
{
    m_subOrgIdList = _subOrgIdList;
    m_subOrgIdListHasBeenSet = true;
}

bool IntegrateRole::SubOrgIdListHasBeenSet() const
{
    return m_subOrgIdListHasBeenSet;
}

vector<PermissionGroup> IntegrateRole::GetPermissionGroups() const
{
    return m_permissionGroups;
}

void IntegrateRole::SetPermissionGroups(const vector<PermissionGroup>& _permissionGroups)
{
    m_permissionGroups = _permissionGroups;
    m_permissionGroupsHasBeenSet = true;
}

bool IntegrateRole::PermissionGroupsHasBeenSet() const
{
    return m_permissionGroupsHasBeenSet;
}

