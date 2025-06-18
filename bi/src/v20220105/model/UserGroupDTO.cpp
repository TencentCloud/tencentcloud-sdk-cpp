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

#include <tencentcloud/bi/v20220105/model/UserGroupDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

UserGroupDTO::UserGroupDTO() :
    m_idHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_adminUserIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

CoreInternalOutcome UserGroupDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupDTO.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupDTO.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupDTO.ParentId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = value["ParentId"].GetInt64();
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupDTO.IsDefault` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetInt64();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("AdminUserId") && !value["AdminUserId"].IsNull())
    {
        if (!value["AdminUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupDTO.AdminUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminUserId = string(value["AdminUserId"].GetString());
        m_adminUserIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupDTO.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupDTO.Location` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_location = value["Location"].GetInt64();
        m_locationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserGroupDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parentId, allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_adminUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_location, allocator);
    }

}


int64_t UserGroupDTO::GetId() const
{
    return m_id;
}

void UserGroupDTO::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UserGroupDTO::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string UserGroupDTO::GetGroupName() const
{
    return m_groupName;
}

void UserGroupDTO::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool UserGroupDTO::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t UserGroupDTO::GetParentId() const
{
    return m_parentId;
}

void UserGroupDTO::SetParentId(const int64_t& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool UserGroupDTO::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

int64_t UserGroupDTO::GetIsDefault() const
{
    return m_isDefault;
}

void UserGroupDTO::SetIsDefault(const int64_t& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool UserGroupDTO::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

string UserGroupDTO::GetAdminUserId() const
{
    return m_adminUserId;
}

void UserGroupDTO::SetAdminUserId(const string& _adminUserId)
{
    m_adminUserId = _adminUserId;
    m_adminUserIdHasBeenSet = true;
}

bool UserGroupDTO::AdminUserIdHasBeenSet() const
{
    return m_adminUserIdHasBeenSet;
}

string UserGroupDTO::GetDescription() const
{
    return m_description;
}

void UserGroupDTO::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UserGroupDTO::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t UserGroupDTO::GetLocation() const
{
    return m_location;
}

void UserGroupDTO::SetLocation(const int64_t& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool UserGroupDTO::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

