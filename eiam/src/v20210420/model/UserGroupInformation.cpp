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

#include <tencentcloud/eiam/v20210420/model/UserGroupInformation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

UserGroupInformation::UserGroupInformation() :
    m_userGroupIdHasBeenSet(false),
    m_userGroupNameHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false)
{
}

CoreInternalOutcome UserGroupInformation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserGroupId") && !value["UserGroupId"].IsNull())
    {
        if (!value["UserGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupInformation.UserGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroupId = string(value["UserGroupId"].GetString());
        m_userGroupIdHasBeenSet = true;
    }

    if (value.HasMember("UserGroupName") && !value["UserGroupName"].IsNull())
    {
        if (!value["UserGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupInformation.UserGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroupName = string(value["UserGroupName"].GetString());
        m_userGroupNameHasBeenSet = true;
    }

    if (value.HasMember("LastModifiedDate") && !value["LastModifiedDate"].IsNull())
    {
        if (!value["LastModifiedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupInformation.LastModifiedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifiedDate = string(value["LastModifiedDate"].GetString());
        m_lastModifiedDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserGroupInformation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_userGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifiedDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifiedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModifiedDate.c_str(), allocator).Move(), allocator);
    }

}


string UserGroupInformation::GetUserGroupId() const
{
    return m_userGroupId;
}

void UserGroupInformation::SetUserGroupId(const string& _userGroupId)
{
    m_userGroupId = _userGroupId;
    m_userGroupIdHasBeenSet = true;
}

bool UserGroupInformation::UserGroupIdHasBeenSet() const
{
    return m_userGroupIdHasBeenSet;
}

string UserGroupInformation::GetUserGroupName() const
{
    return m_userGroupName;
}

void UserGroupInformation::SetUserGroupName(const string& _userGroupName)
{
    m_userGroupName = _userGroupName;
    m_userGroupNameHasBeenSet = true;
}

bool UserGroupInformation::UserGroupNameHasBeenSet() const
{
    return m_userGroupNameHasBeenSet;
}

string UserGroupInformation::GetLastModifiedDate() const
{
    return m_lastModifiedDate;
}

void UserGroupInformation::SetLastModifiedDate(const string& _lastModifiedDate)
{
    m_lastModifiedDate = _lastModifiedDate;
    m_lastModifiedDateHasBeenSet = true;
}

bool UserGroupInformation::LastModifiedDateHasBeenSet() const
{
    return m_lastModifiedDateHasBeenSet;
}

