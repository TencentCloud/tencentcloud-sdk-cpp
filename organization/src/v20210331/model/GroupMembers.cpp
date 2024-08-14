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

#include <tencentcloud/organization/v20210331/model/GroupMembers.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

GroupMembers::GroupMembers() :
    m_userNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_userStatusHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_joinTimeHasBeenSet(false)
{
}

CoreInternalOutcome GroupMembers::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupMembers.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupMembers.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupMembers.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupMembers.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("UserStatus") && !value["UserStatus"].IsNull())
    {
        if (!value["UserStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupMembers.UserStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userStatus = string(value["UserStatus"].GetString());
        m_userStatusHasBeenSet = true;
    }

    if (value.HasMember("UserType") && !value["UserType"].IsNull())
    {
        if (!value["UserType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupMembers.UserType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userType = string(value["UserType"].GetString());
        m_userTypeHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupMembers.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("JoinTime") && !value["JoinTime"].IsNull())
    {
        if (!value["JoinTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupMembers.JoinTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_joinTime = string(value["JoinTime"].GetString());
        m_joinTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupMembers::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
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

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_userStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userType.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_joinTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_joinTime.c_str(), allocator).Move(), allocator);
    }

}


string GroupMembers::GetUserName() const
{
    return m_userName;
}

void GroupMembers::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool GroupMembers::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string GroupMembers::GetDisplayName() const
{
    return m_displayName;
}

void GroupMembers::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool GroupMembers::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string GroupMembers::GetDescription() const
{
    return m_description;
}

void GroupMembers::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool GroupMembers::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string GroupMembers::GetEmail() const
{
    return m_email;
}

void GroupMembers::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool GroupMembers::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string GroupMembers::GetUserStatus() const
{
    return m_userStatus;
}

void GroupMembers::SetUserStatus(const string& _userStatus)
{
    m_userStatus = _userStatus;
    m_userStatusHasBeenSet = true;
}

bool GroupMembers::UserStatusHasBeenSet() const
{
    return m_userStatusHasBeenSet;
}

string GroupMembers::GetUserType() const
{
    return m_userType;
}

void GroupMembers::SetUserType(const string& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool GroupMembers::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

string GroupMembers::GetUserId() const
{
    return m_userId;
}

void GroupMembers::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool GroupMembers::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string GroupMembers::GetJoinTime() const
{
    return m_joinTime;
}

void GroupMembers::SetJoinTime(const string& _joinTime)
{
    m_joinTime = _joinTime;
    m_joinTimeHasBeenSet = true;
}

bool GroupMembers::JoinTimeHasBeenSet() const
{
    return m_joinTimeHasBeenSet;
}

