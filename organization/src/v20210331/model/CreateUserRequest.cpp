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

#include <tencentcloud/organization/v20210331/model/CreateUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

CreateUserRequest::CreateUserRequest() :
    m_zoneIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_userStatusHasBeenSet(false),
    m_userTypeHasBeenSet(false)
{
}

string CreateUserRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_firstNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_firstName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lastName.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_userStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateUserRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateUserRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateUserRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateUserRequest::GetUserName() const
{
    return m_userName;
}

void CreateUserRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool CreateUserRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string CreateUserRequest::GetFirstName() const
{
    return m_firstName;
}

void CreateUserRequest::SetFirstName(const string& _firstName)
{
    m_firstName = _firstName;
    m_firstNameHasBeenSet = true;
}

bool CreateUserRequest::FirstNameHasBeenSet() const
{
    return m_firstNameHasBeenSet;
}

string CreateUserRequest::GetLastName() const
{
    return m_lastName;
}

void CreateUserRequest::SetLastName(const string& _lastName)
{
    m_lastName = _lastName;
    m_lastNameHasBeenSet = true;
}

bool CreateUserRequest::LastNameHasBeenSet() const
{
    return m_lastNameHasBeenSet;
}

string CreateUserRequest::GetDisplayName() const
{
    return m_displayName;
}

void CreateUserRequest::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool CreateUserRequest::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string CreateUserRequest::GetDescription() const
{
    return m_description;
}

void CreateUserRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateUserRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateUserRequest::GetEmail() const
{
    return m_email;
}

void CreateUserRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool CreateUserRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string CreateUserRequest::GetUserStatus() const
{
    return m_userStatus;
}

void CreateUserRequest::SetUserStatus(const string& _userStatus)
{
    m_userStatus = _userStatus;
    m_userStatusHasBeenSet = true;
}

bool CreateUserRequest::UserStatusHasBeenSet() const
{
    return m_userStatusHasBeenSet;
}

string CreateUserRequest::GetUserType() const
{
    return m_userType;
}

void CreateUserRequest::SetUserType(const string& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool CreateUserRequest::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}


