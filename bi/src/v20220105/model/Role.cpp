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

#include <tencentcloud/bi/v20220105/model/Role.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

Role::Role() :
    m_idHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_roleTypeHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdUserHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedUserHasBeenSet(false),
    m_scopeTypeHasBeenSet(false),
    m_canChooseHasBeenSet(false),
    m_moduleCollectionHasBeenSet(false)
{
}

CoreInternalOutcome Role::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Role.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Role.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("CorpId") && !value["CorpId"].IsNull())
    {
        if (!value["CorpId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Role.CorpId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_corpId = string(value["CorpId"].GetString());
        m_corpIdHasBeenSet = true;
    }

    if (value.HasMember("RoleType") && !value["RoleType"].IsNull())
    {
        if (!value["RoleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Role.RoleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleType = string(value["RoleType"].GetString());
        m_roleTypeHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Role.Scope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scope = string(value["Scope"].GetString());
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Role.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Role.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("CreatedUser") && !value["CreatedUser"].IsNull())
    {
        if (!value["CreatedUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Role.CreatedUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdUser = string(value["CreatedUser"].GetString());
        m_createdUserHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Role.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedUser") && !value["UpdatedUser"].IsNull())
    {
        if (!value["UpdatedUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Role.UpdatedUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedUser = string(value["UpdatedUser"].GetString());
        m_updatedUserHasBeenSet = true;
    }

    if (value.HasMember("ScopeType") && !value["ScopeType"].IsNull())
    {
        if (!value["ScopeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Role.ScopeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scopeType = value["ScopeType"].GetInt64();
        m_scopeTypeHasBeenSet = true;
    }

    if (value.HasMember("CanChoose") && !value["CanChoose"].IsNull())
    {
        if (!value["CanChoose"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Role.CanChoose` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canChoose = value["CanChoose"].GetBool();
        m_canChooseHasBeenSet = true;
    }

    if (value.HasMember("ModuleCollection") && !value["ModuleCollection"].IsNull())
    {
        if (!value["ModuleCollection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Role.ModuleCollection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moduleCollection = string(value["ModuleCollection"].GetString());
        m_moduleCollectionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Role::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_corpId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleType.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_createdUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdUser.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedUser.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScopeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scopeType, allocator);
    }

    if (m_canChooseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanChoose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canChoose, allocator);
    }

    if (m_moduleCollectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleCollection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moduleCollection.c_str(), allocator).Move(), allocator);
    }

}


uint64_t Role::GetId() const
{
    return m_id;
}

void Role::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Role::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Role::GetRoleName() const
{
    return m_roleName;
}

void Role::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool Role::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string Role::GetCorpId() const
{
    return m_corpId;
}

void Role::SetCorpId(const string& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool Role::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string Role::GetRoleType() const
{
    return m_roleType;
}

void Role::SetRoleType(const string& _roleType)
{
    m_roleType = _roleType;
    m_roleTypeHasBeenSet = true;
}

bool Role::RoleTypeHasBeenSet() const
{
    return m_roleTypeHasBeenSet;
}

string Role::GetScope() const
{
    return m_scope;
}

void Role::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool Role::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

string Role::GetDescription() const
{
    return m_description;
}

void Role::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Role::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Role::GetCreatedAt() const
{
    return m_createdAt;
}

void Role::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool Role::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string Role::GetCreatedUser() const
{
    return m_createdUser;
}

void Role::SetCreatedUser(const string& _createdUser)
{
    m_createdUser = _createdUser;
    m_createdUserHasBeenSet = true;
}

bool Role::CreatedUserHasBeenSet() const
{
    return m_createdUserHasBeenSet;
}

string Role::GetUpdatedAt() const
{
    return m_updatedAt;
}

void Role::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool Role::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string Role::GetUpdatedUser() const
{
    return m_updatedUser;
}

void Role::SetUpdatedUser(const string& _updatedUser)
{
    m_updatedUser = _updatedUser;
    m_updatedUserHasBeenSet = true;
}

bool Role::UpdatedUserHasBeenSet() const
{
    return m_updatedUserHasBeenSet;
}

int64_t Role::GetScopeType() const
{
    return m_scopeType;
}

void Role::SetScopeType(const int64_t& _scopeType)
{
    m_scopeType = _scopeType;
    m_scopeTypeHasBeenSet = true;
}

bool Role::ScopeTypeHasBeenSet() const
{
    return m_scopeTypeHasBeenSet;
}

bool Role::GetCanChoose() const
{
    return m_canChoose;
}

void Role::SetCanChoose(const bool& _canChoose)
{
    m_canChoose = _canChoose;
    m_canChooseHasBeenSet = true;
}

bool Role::CanChooseHasBeenSet() const
{
    return m_canChooseHasBeenSet;
}

string Role::GetModuleCollection() const
{
    return m_moduleCollection;
}

void Role::SetModuleCollection(const string& _moduleCollection)
{
    m_moduleCollection = _moduleCollection;
    m_moduleCollectionHasBeenSet = true;
}

bool Role::ModuleCollectionHasBeenSet() const
{
    return m_moduleCollectionHasBeenSet;
}

