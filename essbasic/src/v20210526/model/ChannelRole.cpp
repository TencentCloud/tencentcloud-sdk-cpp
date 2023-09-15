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

#include <tencentcloud/essbasic/v20210526/model/ChannelRole.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelRole::ChannelRole() :
    m_roleIdHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_roleStatusHasBeenSet(false),
    m_permissionGroupsHasBeenSet(false)
{
}

CoreInternalOutcome ChannelRole::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleId") && !value["RoleId"].IsNull())
    {
        if (!value["RoleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelRole.RoleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleId = string(value["RoleId"].GetString());
        m_roleIdHasBeenSet = true;
    }

    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelRole.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("RoleStatus") && !value["RoleStatus"].IsNull())
    {
        if (!value["RoleStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelRole.RoleStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roleStatus = value["RoleStatus"].GetUint64();
        m_roleStatusHasBeenSet = true;
    }

    if (value.HasMember("PermissionGroups") && !value["PermissionGroups"].IsNull())
    {
        if (!value["PermissionGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChannelRole.PermissionGroups` is not array type"));

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

void ChannelRole::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string ChannelRole::GetRoleId() const
{
    return m_roleId;
}

void ChannelRole::SetRoleId(const string& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool ChannelRole::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

string ChannelRole::GetRoleName() const
{
    return m_roleName;
}

void ChannelRole::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool ChannelRole::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

uint64_t ChannelRole::GetRoleStatus() const
{
    return m_roleStatus;
}

void ChannelRole::SetRoleStatus(const uint64_t& _roleStatus)
{
    m_roleStatus = _roleStatus;
    m_roleStatusHasBeenSet = true;
}

bool ChannelRole::RoleStatusHasBeenSet() const
{
    return m_roleStatusHasBeenSet;
}

vector<PermissionGroup> ChannelRole::GetPermissionGroups() const
{
    return m_permissionGroups;
}

void ChannelRole::SetPermissionGroups(const vector<PermissionGroup>& _permissionGroups)
{
    m_permissionGroups = _permissionGroups;
    m_permissionGroupsHasBeenSet = true;
}

bool ChannelRole::PermissionGroupsHasBeenSet() const
{
    return m_permissionGroupsHasBeenSet;
}

