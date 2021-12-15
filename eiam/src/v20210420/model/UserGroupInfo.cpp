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

#include <tencentcloud/eiam/v20210420/model/UserGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

UserGroupInfo::UserGroupInfo() :
    m_displayNameHasBeenSet(false),
    m_userGroupIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdDateHasBeenSet(false)
{
}

CoreInternalOutcome UserGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupInfo.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("UserGroupId") && !value["UserGroupId"].IsNull())
    {
        if (!value["UserGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupInfo.UserGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroupId = string(value["UserGroupId"].GetString());
        m_userGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreatedDate") && !value["CreatedDate"].IsNull())
    {
        if (!value["CreatedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupInfo.CreatedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdDate = string(value["CreatedDate"].GetString());
        m_createdDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_userGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createdDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdDate.c_str(), allocator).Move(), allocator);
    }

}


string UserGroupInfo::GetDisplayName() const
{
    return m_displayName;
}

void UserGroupInfo::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool UserGroupInfo::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string UserGroupInfo::GetUserGroupId() const
{
    return m_userGroupId;
}

void UserGroupInfo::SetUserGroupId(const string& _userGroupId)
{
    m_userGroupId = _userGroupId;
    m_userGroupIdHasBeenSet = true;
}

bool UserGroupInfo::UserGroupIdHasBeenSet() const
{
    return m_userGroupIdHasBeenSet;
}

string UserGroupInfo::GetDescription() const
{
    return m_description;
}

void UserGroupInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UserGroupInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UserGroupInfo::GetCreatedDate() const
{
    return m_createdDate;
}

void UserGroupInfo::SetCreatedDate(const string& _createdDate)
{
    m_createdDate = _createdDate;
    m_createdDateHasBeenSet = true;
}

bool UserGroupInfo::CreatedDateHasBeenSet() const
{
    return m_createdDateHasBeenSet;
}

