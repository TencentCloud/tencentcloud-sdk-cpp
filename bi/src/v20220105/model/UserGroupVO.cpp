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

#include <tencentcloud/bi/v20220105/model/UserGroupVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

UserGroupVO::UserGroupVO() :
    m_idHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_parentNameHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_adminUserIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_userListHasBeenSet(false)
{
}

CoreInternalOutcome UserGroupVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupVO.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupVO.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupVO.ParentId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = value["ParentId"].GetInt64();
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("ParentName") && !value["ParentName"].IsNull())
    {
        if (!value["ParentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupVO.ParentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentName = string(value["ParentName"].GetString());
        m_parentNameHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupVO.IsDefault` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetInt64();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("AdminUserId") && !value["AdminUserId"].IsNull())
    {
        if (!value["AdminUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupVO.AdminUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminUserId = string(value["AdminUserId"].GetString());
        m_adminUserIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupVO.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupVO.Location` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_location = value["Location"].GetInt64();
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("UserList") && !value["UserList"].IsNull())
    {
        if (!value["UserList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserGroupVO.UserList` is not array type"));

        const rapidjson::Value &tmpValue = value["UserList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserGroupUserInfoVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_userList.push_back(item);
        }
        m_userListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserGroupVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_parentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentName.c_str(), allocator).Move(), allocator);
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

    if (m_userListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userList.begin(); itr != m_userList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t UserGroupVO::GetId() const
{
    return m_id;
}

void UserGroupVO::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UserGroupVO::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string UserGroupVO::GetGroupName() const
{
    return m_groupName;
}

void UserGroupVO::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool UserGroupVO::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t UserGroupVO::GetParentId() const
{
    return m_parentId;
}

void UserGroupVO::SetParentId(const int64_t& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool UserGroupVO::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

string UserGroupVO::GetParentName() const
{
    return m_parentName;
}

void UserGroupVO::SetParentName(const string& _parentName)
{
    m_parentName = _parentName;
    m_parentNameHasBeenSet = true;
}

bool UserGroupVO::ParentNameHasBeenSet() const
{
    return m_parentNameHasBeenSet;
}

int64_t UserGroupVO::GetIsDefault() const
{
    return m_isDefault;
}

void UserGroupVO::SetIsDefault(const int64_t& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool UserGroupVO::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

string UserGroupVO::GetAdminUserId() const
{
    return m_adminUserId;
}

void UserGroupVO::SetAdminUserId(const string& _adminUserId)
{
    m_adminUserId = _adminUserId;
    m_adminUserIdHasBeenSet = true;
}

bool UserGroupVO::AdminUserIdHasBeenSet() const
{
    return m_adminUserIdHasBeenSet;
}

string UserGroupVO::GetDescription() const
{
    return m_description;
}

void UserGroupVO::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UserGroupVO::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t UserGroupVO::GetLocation() const
{
    return m_location;
}

void UserGroupVO::SetLocation(const int64_t& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool UserGroupVO::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

vector<UserGroupUserInfoVO> UserGroupVO::GetUserList() const
{
    return m_userList;
}

void UserGroupVO::SetUserList(const vector<UserGroupUserInfoVO>& _userList)
{
    m_userList = _userList;
    m_userListHasBeenSet = true;
}

bool UserGroupVO::UserListHasBeenSet() const
{
    return m_userListHasBeenSet;
}

