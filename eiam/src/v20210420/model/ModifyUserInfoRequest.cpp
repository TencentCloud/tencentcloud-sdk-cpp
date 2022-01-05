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

#include <tencentcloud/eiam/v20210420/model/ModifyUserInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

ModifyUserInfoRequest::ModifyUserInfoRequest() :
    m_userNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_userGroupIdsHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_pwdNeedResetHasBeenSet(false),
    m_orgNodeIdHasBeenSet(false),
    m_secondaryOrgNodeIdListHasBeenSet(false)
{
}

string ModifyUserInfoRequest::ToJsonString() const
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

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_expirationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expirationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
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

    if (m_orgNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgNodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orgNodeId.c_str(), allocator).Move(), allocator);
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


string ModifyUserInfoRequest::GetUserName() const
{
    return m_userName;
}

void ModifyUserInfoRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ModifyUserInfoRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ModifyUserInfoRequest::GetDisplayName() const
{
    return m_displayName;
}

void ModifyUserInfoRequest::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool ModifyUserInfoRequest::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string ModifyUserInfoRequest::GetDescription() const
{
    return m_description;
}

void ModifyUserInfoRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyUserInfoRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> ModifyUserInfoRequest::GetUserGroupIds() const
{
    return m_userGroupIds;
}

void ModifyUserInfoRequest::SetUserGroupIds(const vector<string>& _userGroupIds)
{
    m_userGroupIds = _userGroupIds;
    m_userGroupIdsHasBeenSet = true;
}

bool ModifyUserInfoRequest::UserGroupIdsHasBeenSet() const
{
    return m_userGroupIdsHasBeenSet;
}

string ModifyUserInfoRequest::GetUserId() const
{
    return m_userId;
}

void ModifyUserInfoRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ModifyUserInfoRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string ModifyUserInfoRequest::GetPhone() const
{
    return m_phone;
}

void ModifyUserInfoRequest::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool ModifyUserInfoRequest::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string ModifyUserInfoRequest::GetExpirationTime() const
{
    return m_expirationTime;
}

void ModifyUserInfoRequest::SetExpirationTime(const string& _expirationTime)
{
    m_expirationTime = _expirationTime;
    m_expirationTimeHasBeenSet = true;
}

bool ModifyUserInfoRequest::ExpirationTimeHasBeenSet() const
{
    return m_expirationTimeHasBeenSet;
}

string ModifyUserInfoRequest::GetPassword() const
{
    return m_password;
}

void ModifyUserInfoRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool ModifyUserInfoRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string ModifyUserInfoRequest::GetEmail() const
{
    return m_email;
}

void ModifyUserInfoRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool ModifyUserInfoRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

bool ModifyUserInfoRequest::GetPwdNeedReset() const
{
    return m_pwdNeedReset;
}

void ModifyUserInfoRequest::SetPwdNeedReset(const bool& _pwdNeedReset)
{
    m_pwdNeedReset = _pwdNeedReset;
    m_pwdNeedResetHasBeenSet = true;
}

bool ModifyUserInfoRequest::PwdNeedResetHasBeenSet() const
{
    return m_pwdNeedResetHasBeenSet;
}

string ModifyUserInfoRequest::GetOrgNodeId() const
{
    return m_orgNodeId;
}

void ModifyUserInfoRequest::SetOrgNodeId(const string& _orgNodeId)
{
    m_orgNodeId = _orgNodeId;
    m_orgNodeIdHasBeenSet = true;
}

bool ModifyUserInfoRequest::OrgNodeIdHasBeenSet() const
{
    return m_orgNodeIdHasBeenSet;
}

vector<string> ModifyUserInfoRequest::GetSecondaryOrgNodeIdList() const
{
    return m_secondaryOrgNodeIdList;
}

void ModifyUserInfoRequest::SetSecondaryOrgNodeIdList(const vector<string>& _secondaryOrgNodeIdList)
{
    m_secondaryOrgNodeIdList = _secondaryOrgNodeIdList;
    m_secondaryOrgNodeIdListHasBeenSet = true;
}

bool ModifyUserInfoRequest::SecondaryOrgNodeIdListHasBeenSet() const
{
    return m_secondaryOrgNodeIdListHasBeenSet;
}


