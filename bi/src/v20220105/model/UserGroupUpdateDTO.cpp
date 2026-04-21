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

#include <tencentcloud/bi/v20220105/model/UserGroupUpdateDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

UserGroupUpdateDTO::UserGroupUpdateDTO() :
    m_adminUserIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_parentNameHasBeenSet(false)
{
}

CoreInternalOutcome UserGroupUpdateDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AdminUserId") && !value["AdminUserId"].IsNull())
    {
        if (!value["AdminUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupUpdateDTO.AdminUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminUserId = string(value["AdminUserId"].GetString());
        m_adminUserIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupUpdateDTO.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupUpdateDTO.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupUpdateDTO.Location` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_location = value["Location"].GetInt64();
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupUpdateDTO.ParentId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = value["ParentId"].GetInt64();
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupUpdateDTO.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ParentName") && !value["ParentName"].IsNull())
    {
        if (!value["ParentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupUpdateDTO.ParentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentName = string(value["ParentName"].GetString());
        m_parentNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserGroupUpdateDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_location, allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parentId, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_parentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentName.c_str(), allocator).Move(), allocator);
    }

}


string UserGroupUpdateDTO::GetAdminUserId() const
{
    return m_adminUserId;
}

void UserGroupUpdateDTO::SetAdminUserId(const string& _adminUserId)
{
    m_adminUserId = _adminUserId;
    m_adminUserIdHasBeenSet = true;
}

bool UserGroupUpdateDTO::AdminUserIdHasBeenSet() const
{
    return m_adminUserIdHasBeenSet;
}

string UserGroupUpdateDTO::GetDescription() const
{
    return m_description;
}

void UserGroupUpdateDTO::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UserGroupUpdateDTO::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UserGroupUpdateDTO::GetGroupName() const
{
    return m_groupName;
}

void UserGroupUpdateDTO::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool UserGroupUpdateDTO::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t UserGroupUpdateDTO::GetLocation() const
{
    return m_location;
}

void UserGroupUpdateDTO::SetLocation(const int64_t& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool UserGroupUpdateDTO::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

int64_t UserGroupUpdateDTO::GetParentId() const
{
    return m_parentId;
}

void UserGroupUpdateDTO::SetParentId(const int64_t& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool UserGroupUpdateDTO::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

int64_t UserGroupUpdateDTO::GetId() const
{
    return m_id;
}

void UserGroupUpdateDTO::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UserGroupUpdateDTO::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string UserGroupUpdateDTO::GetParentName() const
{
    return m_parentName;
}

void UserGroupUpdateDTO::SetParentName(const string& _parentName)
{
    m_parentName = _parentName;
    m_parentNameHasBeenSet = true;
}

bool UserGroupUpdateDTO::ParentNameHasBeenSet() const
{
    return m_parentNameHasBeenSet;
}

