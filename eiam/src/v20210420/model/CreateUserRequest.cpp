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

#include <tencentcloud/eiam/v20210420/model/CreateUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

CreateUserRequest::CreateUserRequest() :
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_userGroupIdsHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_orgNodeIdHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_pwdNeedResetHasBeenSet(false),
    m_secondaryOrgNodeIdListHasBeenSet(false)
{
}

string CreateUserRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
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

    if (m_userGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userGroupIds.begin(); itr != m_userGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_orgNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgNodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orgNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_expirationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expirationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_pwdNeedResetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PwdNeedReset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pwdNeedReset, allocator);
    }

    if (m_secondaryOrgNodeIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryOrgNodeIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_secondaryOrgNodeIdList.begin(); itr != m_secondaryOrgNodeIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
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

string CreateUserRequest::GetPassword() const
{
    return m_password;
}

void CreateUserRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateUserRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
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

vector<string> CreateUserRequest::GetUserGroupIds() const
{
    return m_userGroupIds;
}

void CreateUserRequest::SetUserGroupIds(const vector<string>& _userGroupIds)
{
    m_userGroupIds = _userGroupIds;
    m_userGroupIdsHasBeenSet = true;
}

bool CreateUserRequest::UserGroupIdsHasBeenSet() const
{
    return m_userGroupIdsHasBeenSet;
}

string CreateUserRequest::GetPhone() const
{
    return m_phone;
}

void CreateUserRequest::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool CreateUserRequest::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string CreateUserRequest::GetOrgNodeId() const
{
    return m_orgNodeId;
}

void CreateUserRequest::SetOrgNodeId(const string& _orgNodeId)
{
    m_orgNodeId = _orgNodeId;
    m_orgNodeIdHasBeenSet = true;
}

bool CreateUserRequest::OrgNodeIdHasBeenSet() const
{
    return m_orgNodeIdHasBeenSet;
}

string CreateUserRequest::GetExpirationTime() const
{
    return m_expirationTime;
}

void CreateUserRequest::SetExpirationTime(const string& _expirationTime)
{
    m_expirationTime = _expirationTime;
    m_expirationTimeHasBeenSet = true;
}

bool CreateUserRequest::ExpirationTimeHasBeenSet() const
{
    return m_expirationTimeHasBeenSet;
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

bool CreateUserRequest::GetPwdNeedReset() const
{
    return m_pwdNeedReset;
}

void CreateUserRequest::SetPwdNeedReset(const bool& _pwdNeedReset)
{
    m_pwdNeedReset = _pwdNeedReset;
    m_pwdNeedResetHasBeenSet = true;
}

bool CreateUserRequest::PwdNeedResetHasBeenSet() const
{
    return m_pwdNeedResetHasBeenSet;
}

vector<string> CreateUserRequest::GetSecondaryOrgNodeIdList() const
{
    return m_secondaryOrgNodeIdList;
}

void CreateUserRequest::SetSecondaryOrgNodeIdList(const vector<string>& _secondaryOrgNodeIdList)
{
    m_secondaryOrgNodeIdList = _secondaryOrgNodeIdList;
    m_secondaryOrgNodeIdListHasBeenSet = true;
}

bool CreateUserRequest::SecondaryOrgNodeIdListHasBeenSet() const
{
    return m_secondaryOrgNodeIdListHasBeenSet;
}


