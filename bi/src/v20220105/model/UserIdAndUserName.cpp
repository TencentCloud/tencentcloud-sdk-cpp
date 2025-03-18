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

#include <tencentcloud/bi/v20220105/model/UserIdAndUserName.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

UserIdAndUserName::UserIdAndUserName() :
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_lastLoginHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_firstModifyHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_areaCodeHasBeenSet(false),
    m_createdUserHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedUserHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_globalUserNameHasBeenSet(false),
    m_globalUserCodeHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_appUserIdHasBeenSet(false),
    m_appUserAliasNameHasBeenSet(false),
    m_appUserNameHasBeenSet(false),
    m_inValidateAppRangeHasBeenSet(false),
    m_emailActivationStatusHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome UserIdAndUserName::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdAndUserName.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdAndUserName.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("CorpId") && !value["CorpId"].IsNull())
    {
        if (!value["CorpId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdAndUserName.CorpId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_corpId = string(value["CorpId"].GetString());
        m_corpIdHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdAndUserName.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("LastLogin") && !value["LastLogin"].IsNull())
    {
        if (!value["LastLogin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdAndUserName.LastLogin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastLogin = string(value["LastLogin"].GetString());
        m_lastLoginHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdAndUserName.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FirstModify") && !value["FirstModify"].IsNull())
    {
        if (!value["FirstModify"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdAndUserName.FirstModify` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_firstModify = value["FirstModify"].GetInt64();
        m_firstModifyHasBeenSet = true;
    }

    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdAndUserName.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (value.HasMember("AreaCode") && !value["AreaCode"].IsNull())
    {
        if (!value["AreaCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdAndUserName.AreaCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_areaCode = string(value["AreaCode"].GetString());
        m_areaCodeHasBeenSet = true;
    }

    if (value.HasMember("CreatedUser") && !value["CreatedUser"].IsNull())
    {
        if (!value["CreatedUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdAndUserName.CreatedUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdUser = string(value["CreatedUser"].GetString());
        m_createdUserHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdAndUserName.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedUser") && !value["UpdatedUser"].IsNull())
    {
        if (!value["UpdatedUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdAndUserName.UpdatedUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedUser = string(value["UpdatedUser"].GetString());
        m_updatedUserHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdAndUserName.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("GlobalUserName") && !value["GlobalUserName"].IsNull())
    {
        if (!value["GlobalUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdAndUserName.GlobalUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_globalUserName = string(value["GlobalUserName"].GetString());
        m_globalUserNameHasBeenSet = true;
    }

    if (value.HasMember("GlobalUserCode") && !value["GlobalUserCode"].IsNull())
    {
        if (!value["GlobalUserCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdAndUserName.GlobalUserCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_globalUserCode = string(value["GlobalUserCode"].GetString());
        m_globalUserCodeHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdAndUserName.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdAndUserName.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AppUserId") && !value["AppUserId"].IsNull())
    {
        if (!value["AppUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdAndUserName.AppUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appUserId = string(value["AppUserId"].GetString());
        m_appUserIdHasBeenSet = true;
    }

    if (value.HasMember("AppUserAliasName") && !value["AppUserAliasName"].IsNull())
    {
        if (!value["AppUserAliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdAndUserName.AppUserAliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appUserAliasName = string(value["AppUserAliasName"].GetString());
        m_appUserAliasNameHasBeenSet = true;
    }

    if (value.HasMember("AppUserName") && !value["AppUserName"].IsNull())
    {
        if (!value["AppUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdAndUserName.AppUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appUserName = string(value["AppUserName"].GetString());
        m_appUserNameHasBeenSet = true;
    }

    if (value.HasMember("InValidateAppRange") && !value["InValidateAppRange"].IsNull())
    {
        if (!value["InValidateAppRange"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdAndUserName.InValidateAppRange` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_inValidateAppRange = value["InValidateAppRange"].GetBool();
        m_inValidateAppRangeHasBeenSet = true;
    }

    if (value.HasMember("EmailActivationStatus") && !value["EmailActivationStatus"].IsNull())
    {
        if (!value["EmailActivationStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdAndUserName.EmailActivationStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_emailActivationStatus = value["EmailActivationStatus"].GetInt64();
        m_emailActivationStatusHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdAndUserName.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserIdAndUserName::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_corpId.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_lastLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastLogin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastLogin.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_firstModifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstModify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstModify, allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_areaCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_areaCode.c_str(), allocator).Move(), allocator);
    }

    if (m_createdUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdUser.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedUser.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_globalUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_globalUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_globalUserCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalUserCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_globalUserCode.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_appUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_appUserAliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppUserAliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appUserAliasName.c_str(), allocator).Move(), allocator);
    }

    if (m_appUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_inValidateAppRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InValidateAppRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inValidateAppRange, allocator);
    }

    if (m_emailActivationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmailActivationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_emailActivationStatus, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

}


string UserIdAndUserName::GetUserId() const
{
    return m_userId;
}

void UserIdAndUserName::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool UserIdAndUserName::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string UserIdAndUserName::GetUserName() const
{
    return m_userName;
}

void UserIdAndUserName::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool UserIdAndUserName::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string UserIdAndUserName::GetCorpId() const
{
    return m_corpId;
}

void UserIdAndUserName::SetCorpId(const string& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool UserIdAndUserName::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string UserIdAndUserName::GetEmail() const
{
    return m_email;
}

void UserIdAndUserName::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool UserIdAndUserName::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string UserIdAndUserName::GetLastLogin() const
{
    return m_lastLogin;
}

void UserIdAndUserName::SetLastLogin(const string& _lastLogin)
{
    m_lastLogin = _lastLogin;
    m_lastLoginHasBeenSet = true;
}

bool UserIdAndUserName::LastLoginHasBeenSet() const
{
    return m_lastLoginHasBeenSet;
}

int64_t UserIdAndUserName::GetStatus() const
{
    return m_status;
}

void UserIdAndUserName::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UserIdAndUserName::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t UserIdAndUserName::GetFirstModify() const
{
    return m_firstModify;
}

void UserIdAndUserName::SetFirstModify(const int64_t& _firstModify)
{
    m_firstModify = _firstModify;
    m_firstModifyHasBeenSet = true;
}

bool UserIdAndUserName::FirstModifyHasBeenSet() const
{
    return m_firstModifyHasBeenSet;
}

string UserIdAndUserName::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void UserIdAndUserName::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool UserIdAndUserName::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string UserIdAndUserName::GetAreaCode() const
{
    return m_areaCode;
}

void UserIdAndUserName::SetAreaCode(const string& _areaCode)
{
    m_areaCode = _areaCode;
    m_areaCodeHasBeenSet = true;
}

bool UserIdAndUserName::AreaCodeHasBeenSet() const
{
    return m_areaCodeHasBeenSet;
}

string UserIdAndUserName::GetCreatedUser() const
{
    return m_createdUser;
}

void UserIdAndUserName::SetCreatedUser(const string& _createdUser)
{
    m_createdUser = _createdUser;
    m_createdUserHasBeenSet = true;
}

bool UserIdAndUserName::CreatedUserHasBeenSet() const
{
    return m_createdUserHasBeenSet;
}

string UserIdAndUserName::GetCreatedAt() const
{
    return m_createdAt;
}

void UserIdAndUserName::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool UserIdAndUserName::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string UserIdAndUserName::GetUpdatedUser() const
{
    return m_updatedUser;
}

void UserIdAndUserName::SetUpdatedUser(const string& _updatedUser)
{
    m_updatedUser = _updatedUser;
    m_updatedUserHasBeenSet = true;
}

bool UserIdAndUserName::UpdatedUserHasBeenSet() const
{
    return m_updatedUserHasBeenSet;
}

string UserIdAndUserName::GetUpdatedAt() const
{
    return m_updatedAt;
}

void UserIdAndUserName::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool UserIdAndUserName::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string UserIdAndUserName::GetGlobalUserName() const
{
    return m_globalUserName;
}

void UserIdAndUserName::SetGlobalUserName(const string& _globalUserName)
{
    m_globalUserName = _globalUserName;
    m_globalUserNameHasBeenSet = true;
}

bool UserIdAndUserName::GlobalUserNameHasBeenSet() const
{
    return m_globalUserNameHasBeenSet;
}

string UserIdAndUserName::GetGlobalUserCode() const
{
    return m_globalUserCode;
}

void UserIdAndUserName::SetGlobalUserCode(const string& _globalUserCode)
{
    m_globalUserCode = _globalUserCode;
    m_globalUserCodeHasBeenSet = true;
}

bool UserIdAndUserName::GlobalUserCodeHasBeenSet() const
{
    return m_globalUserCodeHasBeenSet;
}

string UserIdAndUserName::GetMobile() const
{
    return m_mobile;
}

void UserIdAndUserName::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool UserIdAndUserName::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string UserIdAndUserName::GetAppId() const
{
    return m_appId;
}

void UserIdAndUserName::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool UserIdAndUserName::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string UserIdAndUserName::GetAppUserId() const
{
    return m_appUserId;
}

void UserIdAndUserName::SetAppUserId(const string& _appUserId)
{
    m_appUserId = _appUserId;
    m_appUserIdHasBeenSet = true;
}

bool UserIdAndUserName::AppUserIdHasBeenSet() const
{
    return m_appUserIdHasBeenSet;
}

string UserIdAndUserName::GetAppUserAliasName() const
{
    return m_appUserAliasName;
}

void UserIdAndUserName::SetAppUserAliasName(const string& _appUserAliasName)
{
    m_appUserAliasName = _appUserAliasName;
    m_appUserAliasNameHasBeenSet = true;
}

bool UserIdAndUserName::AppUserAliasNameHasBeenSet() const
{
    return m_appUserAliasNameHasBeenSet;
}

string UserIdAndUserName::GetAppUserName() const
{
    return m_appUserName;
}

void UserIdAndUserName::SetAppUserName(const string& _appUserName)
{
    m_appUserName = _appUserName;
    m_appUserNameHasBeenSet = true;
}

bool UserIdAndUserName::AppUserNameHasBeenSet() const
{
    return m_appUserNameHasBeenSet;
}

bool UserIdAndUserName::GetInValidateAppRange() const
{
    return m_inValidateAppRange;
}

void UserIdAndUserName::SetInValidateAppRange(const bool& _inValidateAppRange)
{
    m_inValidateAppRange = _inValidateAppRange;
    m_inValidateAppRangeHasBeenSet = true;
}

bool UserIdAndUserName::InValidateAppRangeHasBeenSet() const
{
    return m_inValidateAppRangeHasBeenSet;
}

int64_t UserIdAndUserName::GetEmailActivationStatus() const
{
    return m_emailActivationStatus;
}

void UserIdAndUserName::SetEmailActivationStatus(const int64_t& _emailActivationStatus)
{
    m_emailActivationStatus = _emailActivationStatus;
    m_emailActivationStatusHasBeenSet = true;
}

bool UserIdAndUserName::EmailActivationStatusHasBeenSet() const
{
    return m_emailActivationStatusHasBeenSet;
}

uint64_t UserIdAndUserName::GetId() const
{
    return m_id;
}

void UserIdAndUserName::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UserIdAndUserName::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

