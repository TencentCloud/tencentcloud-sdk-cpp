/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/lowcode/v20210108/model/WedaRole.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

WedaRole::WedaRole() :
    m_nameHasBeenSet(false),
    m_roleIdentityHasBeenSet(false),
    m_idHasBeenSet(false),
    m_parentRoleIdHasBeenSet(false),
    m_childRoleIdHasBeenSet(false),
    m_envIdentityHasBeenSet(false),
    m_isReleasedHasBeenSet(false)
{
}

CoreInternalOutcome WedaRole::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WedaRole.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("RoleIdentity") && !value["RoleIdentity"].IsNull())
    {
        if (!value["RoleIdentity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WedaRole.RoleIdentity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleIdentity = string(value["RoleIdentity"].GetString());
        m_roleIdentityHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WedaRole.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ParentRoleId") && !value["ParentRoleId"].IsNull())
    {
        if (!value["ParentRoleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WedaRole.ParentRoleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_parentRoleId = value["ParentRoleId"].GetInt64();
        m_parentRoleIdHasBeenSet = true;
    }

    if (value.HasMember("ChildRoleId") && !value["ChildRoleId"].IsNull())
    {
        if (!value["ChildRoleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WedaRole.ChildRoleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_childRoleId = value["ChildRoleId"].GetInt64();
        m_childRoleIdHasBeenSet = true;
    }

    if (value.HasMember("EnvIdentity") && !value["EnvIdentity"].IsNull())
    {
        if (!value["EnvIdentity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WedaRole.EnvIdentity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envIdentity = string(value["EnvIdentity"].GetString());
        m_envIdentityHasBeenSet = true;
    }

    if (value.HasMember("IsReleased") && !value["IsReleased"].IsNull())
    {
        if (!value["IsReleased"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WedaRole.IsReleased` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isReleased = value["IsReleased"].GetBool();
        m_isReleasedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WedaRole::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_roleIdentityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleIdentity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleIdentity.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_parentRoleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentRoleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parentRoleId, allocator);
    }

    if (m_childRoleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChildRoleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_childRoleId, allocator);
    }

    if (m_envIdentityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvIdentity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envIdentity.c_str(), allocator).Move(), allocator);
    }

    if (m_isReleasedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsReleased";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isReleased, allocator);
    }

}


string WedaRole::GetName() const
{
    return m_name;
}

void WedaRole::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool WedaRole::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string WedaRole::GetRoleIdentity() const
{
    return m_roleIdentity;
}

void WedaRole::SetRoleIdentity(const string& _roleIdentity)
{
    m_roleIdentity = _roleIdentity;
    m_roleIdentityHasBeenSet = true;
}

bool WedaRole::RoleIdentityHasBeenSet() const
{
    return m_roleIdentityHasBeenSet;
}

int64_t WedaRole::GetId() const
{
    return m_id;
}

void WedaRole::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool WedaRole::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t WedaRole::GetParentRoleId() const
{
    return m_parentRoleId;
}

void WedaRole::SetParentRoleId(const int64_t& _parentRoleId)
{
    m_parentRoleId = _parentRoleId;
    m_parentRoleIdHasBeenSet = true;
}

bool WedaRole::ParentRoleIdHasBeenSet() const
{
    return m_parentRoleIdHasBeenSet;
}

int64_t WedaRole::GetChildRoleId() const
{
    return m_childRoleId;
}

void WedaRole::SetChildRoleId(const int64_t& _childRoleId)
{
    m_childRoleId = _childRoleId;
    m_childRoleIdHasBeenSet = true;
}

bool WedaRole::ChildRoleIdHasBeenSet() const
{
    return m_childRoleIdHasBeenSet;
}

string WedaRole::GetEnvIdentity() const
{
    return m_envIdentity;
}

void WedaRole::SetEnvIdentity(const string& _envIdentity)
{
    m_envIdentity = _envIdentity;
    m_envIdentityHasBeenSet = true;
}

bool WedaRole::EnvIdentityHasBeenSet() const
{
    return m_envIdentityHasBeenSet;
}

bool WedaRole::GetIsReleased() const
{
    return m_isReleased;
}

void WedaRole::SetIsReleased(const bool& _isReleased)
{
    m_isReleased = _isReleased;
    m_isReleasedHasBeenSet = true;
}

bool WedaRole::IsReleasedHasBeenSet() const
{
    return m_isReleasedHasBeenSet;
}

