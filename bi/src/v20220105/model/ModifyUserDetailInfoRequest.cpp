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

#include <tencentcloud/bi/v20220105/model/ModifyUserDetailInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

ModifyUserDetailInfoRequest::ModifyUserDetailInfoRequest() :
    m_userIdHasBeenSet(false),
    m_roleIdListHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_areaCodeHasBeenSet(false),
    m_appUserIdHasBeenSet(false),
    m_loginSecurityStatusHasBeenSet(false),
    m_resetPassWordTipHasBeenSet(false),
    m_forceResetPassWordHasBeenSet(false),
    m_passwordExpiredHasBeenSet(false),
    m_userGroupIdListHasBeenSet(false)
{
}

string ModifyUserDetailInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_roleIdList.begin(); itr != m_roleIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_areaCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_areaCode.c_str(), allocator).Move(), allocator);
    }

    if (m_appUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_loginSecurityStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSecurityStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_loginSecurityStatus, allocator);
    }

    if (m_resetPassWordTipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResetPassWordTip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resetPassWordTip, allocator);
    }

    if (m_forceResetPassWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceResetPassWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceResetPassWord, allocator);
    }

    if (m_passwordExpiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PasswordExpired";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_passwordExpired, allocator);
    }

    if (m_userGroupIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userGroupIdList.begin(); itr != m_userGroupIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyUserDetailInfoRequest::GetUserId() const
{
    return m_userId;
}

void ModifyUserDetailInfoRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ModifyUserDetailInfoRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

vector<int64_t> ModifyUserDetailInfoRequest::GetRoleIdList() const
{
    return m_roleIdList;
}

void ModifyUserDetailInfoRequest::SetRoleIdList(const vector<int64_t>& _roleIdList)
{
    m_roleIdList = _roleIdList;
    m_roleIdListHasBeenSet = true;
}

bool ModifyUserDetailInfoRequest::RoleIdListHasBeenSet() const
{
    return m_roleIdListHasBeenSet;
}

string ModifyUserDetailInfoRequest::GetEmail() const
{
    return m_email;
}

void ModifyUserDetailInfoRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool ModifyUserDetailInfoRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string ModifyUserDetailInfoRequest::GetUserName() const
{
    return m_userName;
}

void ModifyUserDetailInfoRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ModifyUserDetailInfoRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ModifyUserDetailInfoRequest::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void ModifyUserDetailInfoRequest::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool ModifyUserDetailInfoRequest::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string ModifyUserDetailInfoRequest::GetAreaCode() const
{
    return m_areaCode;
}

void ModifyUserDetailInfoRequest::SetAreaCode(const string& _areaCode)
{
    m_areaCode = _areaCode;
    m_areaCodeHasBeenSet = true;
}

bool ModifyUserDetailInfoRequest::AreaCodeHasBeenSet() const
{
    return m_areaCodeHasBeenSet;
}

string ModifyUserDetailInfoRequest::GetAppUserId() const
{
    return m_appUserId;
}

void ModifyUserDetailInfoRequest::SetAppUserId(const string& _appUserId)
{
    m_appUserId = _appUserId;
    m_appUserIdHasBeenSet = true;
}

bool ModifyUserDetailInfoRequest::AppUserIdHasBeenSet() const
{
    return m_appUserIdHasBeenSet;
}

int64_t ModifyUserDetailInfoRequest::GetLoginSecurityStatus() const
{
    return m_loginSecurityStatus;
}

void ModifyUserDetailInfoRequest::SetLoginSecurityStatus(const int64_t& _loginSecurityStatus)
{
    m_loginSecurityStatus = _loginSecurityStatus;
    m_loginSecurityStatusHasBeenSet = true;
}

bool ModifyUserDetailInfoRequest::LoginSecurityStatusHasBeenSet() const
{
    return m_loginSecurityStatusHasBeenSet;
}

int64_t ModifyUserDetailInfoRequest::GetResetPassWordTip() const
{
    return m_resetPassWordTip;
}

void ModifyUserDetailInfoRequest::SetResetPassWordTip(const int64_t& _resetPassWordTip)
{
    m_resetPassWordTip = _resetPassWordTip;
    m_resetPassWordTipHasBeenSet = true;
}

bool ModifyUserDetailInfoRequest::ResetPassWordTipHasBeenSet() const
{
    return m_resetPassWordTipHasBeenSet;
}

int64_t ModifyUserDetailInfoRequest::GetForceResetPassWord() const
{
    return m_forceResetPassWord;
}

void ModifyUserDetailInfoRequest::SetForceResetPassWord(const int64_t& _forceResetPassWord)
{
    m_forceResetPassWord = _forceResetPassWord;
    m_forceResetPassWordHasBeenSet = true;
}

bool ModifyUserDetailInfoRequest::ForceResetPassWordHasBeenSet() const
{
    return m_forceResetPassWordHasBeenSet;
}

int64_t ModifyUserDetailInfoRequest::GetPasswordExpired() const
{
    return m_passwordExpired;
}

void ModifyUserDetailInfoRequest::SetPasswordExpired(const int64_t& _passwordExpired)
{
    m_passwordExpired = _passwordExpired;
    m_passwordExpiredHasBeenSet = true;
}

bool ModifyUserDetailInfoRequest::PasswordExpiredHasBeenSet() const
{
    return m_passwordExpiredHasBeenSet;
}

vector<int64_t> ModifyUserDetailInfoRequest::GetUserGroupIdList() const
{
    return m_userGroupIdList;
}

void ModifyUserDetailInfoRequest::SetUserGroupIdList(const vector<int64_t>& _userGroupIdList)
{
    m_userGroupIdList = _userGroupIdList;
    m_userGroupIdListHasBeenSet = true;
}

bool ModifyUserDetailInfoRequest::UserGroupIdListHasBeenSet() const
{
    return m_userGroupIdListHasBeenSet;
}


