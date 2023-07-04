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

#include <tencentcloud/ciam/v20220331/model/UserGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

UserGroup::UserGroup() :
    m_userGroupIdHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_userStoreIdHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_lastModifyDateHasBeenSet(false)
{
}

CoreInternalOutcome UserGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserGroupId") && !value["UserGroupId"].IsNull())
    {
        if (!value["UserGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroup.UserGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroupId = string(value["UserGroupId"].GetString());
        m_userGroupIdHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroup.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroup.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("UserStoreId") && !value["UserStoreId"].IsNull())
    {
        if (!value["UserStoreId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroup.UserStoreId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userStoreId = string(value["UserStoreId"].GetString());
        m_userStoreIdHasBeenSet = true;
    }

    if (value.HasMember("TenantId") && !value["TenantId"].IsNull())
    {
        if (!value["TenantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroup.TenantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tenantId = string(value["TenantId"].GetString());
        m_tenantIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedDate") && !value["CreatedDate"].IsNull())
    {
        if (!value["CreatedDate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroup.CreatedDate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdDate = value["CreatedDate"].GetInt64();
        m_createdDateHasBeenSet = true;
    }

    if (value.HasMember("LastModifyDate") && !value["LastModifyDate"].IsNull())
    {
        if (!value["LastModifyDate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroup.LastModifyDate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifyDate = value["LastModifyDate"].GetInt64();
        m_lastModifyDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_userStoreIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserStoreId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userStoreId.c_str(), allocator).Move(), allocator);
    }

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tenantId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdDate, allocator);
    }

    if (m_lastModifyDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifyDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastModifyDate, allocator);
    }

}


string UserGroup::GetUserGroupId() const
{
    return m_userGroupId;
}

void UserGroup::SetUserGroupId(const string& _userGroupId)
{
    m_userGroupId = _userGroupId;
    m_userGroupIdHasBeenSet = true;
}

bool UserGroup::UserGroupIdHasBeenSet() const
{
    return m_userGroupIdHasBeenSet;
}

string UserGroup::GetDisplayName() const
{
    return m_displayName;
}

void UserGroup::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool UserGroup::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string UserGroup::GetDescription() const
{
    return m_description;
}

void UserGroup::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UserGroup::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UserGroup::GetUserStoreId() const
{
    return m_userStoreId;
}

void UserGroup::SetUserStoreId(const string& _userStoreId)
{
    m_userStoreId = _userStoreId;
    m_userStoreIdHasBeenSet = true;
}

bool UserGroup::UserStoreIdHasBeenSet() const
{
    return m_userStoreIdHasBeenSet;
}

string UserGroup::GetTenantId() const
{
    return m_tenantId;
}

void UserGroup::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool UserGroup::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

int64_t UserGroup::GetCreatedDate() const
{
    return m_createdDate;
}

void UserGroup::SetCreatedDate(const int64_t& _createdDate)
{
    m_createdDate = _createdDate;
    m_createdDateHasBeenSet = true;
}

bool UserGroup::CreatedDateHasBeenSet() const
{
    return m_createdDateHasBeenSet;
}

int64_t UserGroup::GetLastModifyDate() const
{
    return m_lastModifyDate;
}

void UserGroup::SetLastModifyDate(const int64_t& _lastModifyDate)
{
    m_lastModifyDate = _lastModifyDate;
    m_lastModifyDateHasBeenSet = true;
}

bool UserGroup::LastModifyDateHasBeenSet() const
{
    return m_lastModifyDateHasBeenSet;
}

