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

#include <tencentcloud/bi/v20220105/model/UserGroupTreeVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

UserGroupTreeVO::UserGroupTreeVO() :
    m_idHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_parentNameHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_adminUserIdHasBeenSet(false),
    m_userListHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_childrenHasBeenSet(false),
    m_hasChildrenHasBeenSet(false),
    m_resourceListHasBeenSet(false)
{
}

CoreInternalOutcome UserGroupTreeVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupTreeVO.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupTreeVO.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupTreeVO.ParentId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = value["ParentId"].GetInt64();
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("ParentName") && !value["ParentName"].IsNull())
    {
        if (!value["ParentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupTreeVO.ParentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentName = string(value["ParentName"].GetString());
        m_parentNameHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupTreeVO.IsDefault` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetInt64();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("AdminUserId") && !value["AdminUserId"].IsNull())
    {
        if (!value["AdminUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupTreeVO.AdminUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminUserId = string(value["AdminUserId"].GetString());
        m_adminUserIdHasBeenSet = true;
    }

    if (value.HasMember("UserList") && !value["UserList"].IsNull())
    {
        if (!value["UserList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserGroupTreeVO.UserList` is not array type"));

        const rapidjson::Value &tmpValue = value["UserList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserVO item;
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

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupTreeVO.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupTreeVO.Location` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_location = value["Location"].GetInt64();
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("Children") && !value["Children"].IsNull())
    {
        if (!value["Children"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserGroupTreeVO.Children` is not array type"));

        const rapidjson::Value &tmpValue = value["Children"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserGroupTreeVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_children.push_back(item);
        }
        m_childrenHasBeenSet = true;
    }

    if (value.HasMember("HasChildren") && !value["HasChildren"].IsNull())
    {
        if (!value["HasChildren"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupTreeVO.HasChildren` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasChildren = value["HasChildren"].GetBool();
        m_hasChildrenHasBeenSet = true;
    }

    if (value.HasMember("ResourceList") && !value["ResourceList"].IsNull())
    {
        if (!value["ResourceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserGroupTreeVO.ResourceList` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceList.push_back(item);
        }
        m_resourceListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserGroupTreeVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_childrenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Children";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_children.begin(); itr != m_children.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hasChildrenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasChildren";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasChildren, allocator);
    }

    if (m_resourceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceList.begin(); itr != m_resourceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t UserGroupTreeVO::GetId() const
{
    return m_id;
}

void UserGroupTreeVO::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UserGroupTreeVO::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string UserGroupTreeVO::GetGroupName() const
{
    return m_groupName;
}

void UserGroupTreeVO::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool UserGroupTreeVO::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t UserGroupTreeVO::GetParentId() const
{
    return m_parentId;
}

void UserGroupTreeVO::SetParentId(const int64_t& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool UserGroupTreeVO::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

string UserGroupTreeVO::GetParentName() const
{
    return m_parentName;
}

void UserGroupTreeVO::SetParentName(const string& _parentName)
{
    m_parentName = _parentName;
    m_parentNameHasBeenSet = true;
}

bool UserGroupTreeVO::ParentNameHasBeenSet() const
{
    return m_parentNameHasBeenSet;
}

int64_t UserGroupTreeVO::GetIsDefault() const
{
    return m_isDefault;
}

void UserGroupTreeVO::SetIsDefault(const int64_t& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool UserGroupTreeVO::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

string UserGroupTreeVO::GetAdminUserId() const
{
    return m_adminUserId;
}

void UserGroupTreeVO::SetAdminUserId(const string& _adminUserId)
{
    m_adminUserId = _adminUserId;
    m_adminUserIdHasBeenSet = true;
}

bool UserGroupTreeVO::AdminUserIdHasBeenSet() const
{
    return m_adminUserIdHasBeenSet;
}

vector<UserVO> UserGroupTreeVO::GetUserList() const
{
    return m_userList;
}

void UserGroupTreeVO::SetUserList(const vector<UserVO>& _userList)
{
    m_userList = _userList;
    m_userListHasBeenSet = true;
}

bool UserGroupTreeVO::UserListHasBeenSet() const
{
    return m_userListHasBeenSet;
}

string UserGroupTreeVO::GetDescription() const
{
    return m_description;
}

void UserGroupTreeVO::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UserGroupTreeVO::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t UserGroupTreeVO::GetLocation() const
{
    return m_location;
}

void UserGroupTreeVO::SetLocation(const int64_t& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool UserGroupTreeVO::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

vector<UserGroupTreeVO> UserGroupTreeVO::GetChildren() const
{
    return m_children;
}

void UserGroupTreeVO::SetChildren(const vector<UserGroupTreeVO>& _children)
{
    m_children = _children;
    m_childrenHasBeenSet = true;
}

bool UserGroupTreeVO::ChildrenHasBeenSet() const
{
    return m_childrenHasBeenSet;
}

bool UserGroupTreeVO::GetHasChildren() const
{
    return m_hasChildren;
}

void UserGroupTreeVO::SetHasChildren(const bool& _hasChildren)
{
    m_hasChildren = _hasChildren;
    m_hasChildrenHasBeenSet = true;
}

bool UserGroupTreeVO::HasChildrenHasBeenSet() const
{
    return m_hasChildrenHasBeenSet;
}

vector<ResourceDTO> UserGroupTreeVO::GetResourceList() const
{
    return m_resourceList;
}

void UserGroupTreeVO::SetResourceList(const vector<ResourceDTO>& _resourceList)
{
    m_resourceList = _resourceList;
    m_resourceListHasBeenSet = true;
}

bool UserGroupTreeVO::ResourceListHasBeenSet() const
{
    return m_resourceListHasBeenSet;
}

