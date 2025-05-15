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

#include <tencentcloud/emr/v20190103/model/UserManagerFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

UserManagerFilter::UserManagerFilter() :
    m_userNameHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_groupsHasBeenSet(false)
{
}

CoreInternalOutcome UserManagerFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserManagerFilter.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("UserType") && !value["UserType"].IsNull())
    {
        if (!value["UserType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserManagerFilter.UserType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userType = string(value["UserType"].GetString());
        m_userTypeHasBeenSet = true;
    }

    if (value.HasMember("Groups") && !value["Groups"].IsNull())
    {
        if (!value["Groups"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserManagerFilter.Groups` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groups = string(value["Groups"].GetString());
        m_groupsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserManagerFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userType.c_str(), allocator).Move(), allocator);
    }

    if (m_groupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Groups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groups.c_str(), allocator).Move(), allocator);
    }

}


string UserManagerFilter::GetUserName() const
{
    return m_userName;
}

void UserManagerFilter::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool UserManagerFilter::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string UserManagerFilter::GetUserType() const
{
    return m_userType;
}

void UserManagerFilter::SetUserType(const string& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool UserManagerFilter::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

string UserManagerFilter::GetGroups() const
{
    return m_groups;
}

void UserManagerFilter::SetGroups(const string& _groups)
{
    m_groups = _groups;
    m_groupsHasBeenSet = true;
}

bool UserManagerFilter::GroupsHasBeenSet() const
{
    return m_groupsHasBeenSet;
}

