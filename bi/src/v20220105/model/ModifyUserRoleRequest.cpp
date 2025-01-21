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

#include <tencentcloud/bi/v20220105/model/ModifyUserRoleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

ModifyUserRoleRequest::ModifyUserRoleRequest() :
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
    m_passwordExpiredHasBeenSet(false)
{
}

string ModifyUserRoleRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyUserRoleRequest::GetUserId() const
{
    return m_userId;
}

void ModifyUserRoleRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ModifyUserRoleRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

vector<int64_t> ModifyUserRoleRequest::GetRoleIdList() const
{
    return m_roleIdList;
}

void ModifyUserRoleRequest::SetRoleIdList(const vector<int64_t>& _roleIdList)
{
    m_roleIdList = _roleIdList;
    m_roleIdListHasBeenSet = true;
}

bool ModifyUserRoleRequest::RoleIdListHasBeenSet() const
{
    return m_roleIdListHasBeenSet;
}

string ModifyUserRoleRequest::GetEmail() const
{
    return m_email;
}

void ModifyUserRoleRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool ModifyUserRoleRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string ModifyUserRoleRequest::GetUserName() const
{
    return m_userName;
}

void ModifyUserRoleRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ModifyUserRoleRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ModifyUserRoleRequest::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void ModifyUserRoleRequest::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool ModifyUserRoleRequest::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string ModifyUserRoleRequest::GetAreaCode() const
{
    return m_areaCode;
}

void ModifyUserRoleRequest::SetAreaCode(const string& _areaCode)
{
    m_areaCode = _areaCode;
    m_areaCodeHasBeenSet = true;
}

bool ModifyUserRoleRequest::AreaCodeHasBeenSet() const
{
    return m_areaCodeHasBeenSet;
}

string ModifyUserRoleRequest::GetAppUserId() const
{
    return m_appUserId;
}

void ModifyUserRoleRequest::SetAppUserId(const string& _appUserId)
{
    m_appUserId = _appUserId;
    m_appUserIdHasBeenSet = true;
}

bool ModifyUserRoleRequest::AppUserIdHasBeenSet() const
{
    return m_appUserIdHasBeenSet;
}

int64_t ModifyUserRoleRequest::GetLoginSecurityStatus() const
{
    return m_loginSecurityStatus;
}

void ModifyUserRoleRequest::SetLoginSecurityStatus(const int64_t& _loginSecurityStatus)
{
    m_loginSecurityStatus = _loginSecurityStatus;
    m_loginSecurityStatusHasBeenSet = true;
}

bool ModifyUserRoleRequest::LoginSecurityStatusHasBeenSet() const
{
    return m_loginSecurityStatusHasBeenSet;
}

int64_t ModifyUserRoleRequest::GetResetPassWordTip() const
{
    return m_resetPassWordTip;
}

void ModifyUserRoleRequest::SetResetPassWordTip(const int64_t& _resetPassWordTip)
{
    m_resetPassWordTip = _resetPassWordTip;
    m_resetPassWordTipHasBeenSet = true;
}

bool ModifyUserRoleRequest::ResetPassWordTipHasBeenSet() const
{
    return m_resetPassWordTipHasBeenSet;
}

int64_t ModifyUserRoleRequest::GetForceResetPassWord() const
{
    return m_forceResetPassWord;
}

void ModifyUserRoleRequest::SetForceResetPassWord(const int64_t& _forceResetPassWord)
{
    m_forceResetPassWord = _forceResetPassWord;
    m_forceResetPassWordHasBeenSet = true;
}

bool ModifyUserRoleRequest::ForceResetPassWordHasBeenSet() const
{
    return m_forceResetPassWordHasBeenSet;
}

int64_t ModifyUserRoleRequest::GetPasswordExpired() const
{
    return m_passwordExpired;
}

void ModifyUserRoleRequest::SetPasswordExpired(const int64_t& _passwordExpired)
{
    m_passwordExpired = _passwordExpired;
    m_passwordExpiredHasBeenSet = true;
}

bool ModifyUserRoleRequest::PasswordExpiredHasBeenSet() const
{
    return m_passwordExpiredHasBeenSet;
}


