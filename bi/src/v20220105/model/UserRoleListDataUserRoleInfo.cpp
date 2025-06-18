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

#include <tencentcloud/bi/v20220105/model/UserRoleListDataUserRoleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

UserRoleListDataUserRoleInfo::UserRoleListDataUserRoleInfo() :
    m_idHasBeenSet(false),
    m_roleListHasBeenSet(false),
    m_roleIdListHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_createdUserHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedUserHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_lastLoginHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_areaCodeHasBeenSet(false),
    m_rootAccountHasBeenSet(false),
    m_corpAdminHasBeenSet(false),
    m_appUserIdHasBeenSet(false),
    m_appUserAliasNameHasBeenSet(false),
    m_appUserNameHasBeenSet(false),
    m_inValidateAppRangeHasBeenSet(false),
    m_appOpenUserIdHasBeenSet(false),
    m_emailActivationStatusHasBeenSet(false),
    m_userGroupListHasBeenSet(false)
{
}

CoreInternalOutcome UserRoleListDataUserRoleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("RoleList") && !value["RoleList"].IsNull())
    {
        if (!value["RoleList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.RoleList` is not array type"));

        const rapidjson::Value &tmpValue = value["RoleList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserRoleListDataRoleInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_roleList.push_back(item);
        }
        m_roleListHasBeenSet = true;
    }

    if (value.HasMember("RoleIdList") && !value["RoleIdList"].IsNull())
    {
        if (!value["RoleIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.RoleIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["RoleIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_roleIdList.push_back((*itr).GetUint64());
        }
        m_roleIdListHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("CorpId") && !value["CorpId"].IsNull())
    {
        if (!value["CorpId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.CorpId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_corpId = string(value["CorpId"].GetString());
        m_corpIdHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("CreatedUser") && !value["CreatedUser"].IsNull())
    {
        if (!value["CreatedUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.CreatedUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdUser = string(value["CreatedUser"].GetString());
        m_createdUserHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedUser") && !value["UpdatedUser"].IsNull())
    {
        if (!value["UpdatedUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.UpdatedUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedUser = string(value["UpdatedUser"].GetString());
        m_updatedUserHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("LastLogin") && !value["LastLogin"].IsNull())
    {
        if (!value["LastLogin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.LastLogin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastLogin = string(value["LastLogin"].GetString());
        m_lastLoginHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (value.HasMember("AreaCode") && !value["AreaCode"].IsNull())
    {
        if (!value["AreaCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.AreaCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_areaCode = string(value["AreaCode"].GetString());
        m_areaCodeHasBeenSet = true;
    }

    if (value.HasMember("RootAccount") && !value["RootAccount"].IsNull())
    {
        if (!value["RootAccount"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.RootAccount` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_rootAccount = value["RootAccount"].GetBool();
        m_rootAccountHasBeenSet = true;
    }

    if (value.HasMember("CorpAdmin") && !value["CorpAdmin"].IsNull())
    {
        if (!value["CorpAdmin"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.CorpAdmin` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_corpAdmin = value["CorpAdmin"].GetBool();
        m_corpAdminHasBeenSet = true;
    }

    if (value.HasMember("AppUserId") && !value["AppUserId"].IsNull())
    {
        if (!value["AppUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.AppUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appUserId = string(value["AppUserId"].GetString());
        m_appUserIdHasBeenSet = true;
    }

    if (value.HasMember("AppUserAliasName") && !value["AppUserAliasName"].IsNull())
    {
        if (!value["AppUserAliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.AppUserAliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appUserAliasName = string(value["AppUserAliasName"].GetString());
        m_appUserAliasNameHasBeenSet = true;
    }

    if (value.HasMember("AppUserName") && !value["AppUserName"].IsNull())
    {
        if (!value["AppUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.AppUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appUserName = string(value["AppUserName"].GetString());
        m_appUserNameHasBeenSet = true;
    }

    if (value.HasMember("InValidateAppRange") && !value["InValidateAppRange"].IsNull())
    {
        if (!value["InValidateAppRange"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.InValidateAppRange` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_inValidateAppRange = value["InValidateAppRange"].GetBool();
        m_inValidateAppRangeHasBeenSet = true;
    }

    if (value.HasMember("AppOpenUserId") && !value["AppOpenUserId"].IsNull())
    {
        if (!value["AppOpenUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.AppOpenUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appOpenUserId = string(value["AppOpenUserId"].GetString());
        m_appOpenUserIdHasBeenSet = true;
    }

    if (value.HasMember("EmailActivationStatus") && !value["EmailActivationStatus"].IsNull())
    {
        if (!value["EmailActivationStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.EmailActivationStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_emailActivationStatus = value["EmailActivationStatus"].GetInt64();
        m_emailActivationStatusHasBeenSet = true;
    }

    if (value.HasMember("UserGroupList") && !value["UserGroupList"].IsNull())
    {
        if (!value["UserGroupList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataUserRoleInfo.UserGroupList` is not array type"));

        const rapidjson::Value &tmpValue = value["UserGroupList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserGroupDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_userGroupList.push_back(item);
        }
        m_userGroupListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserRoleListDataUserRoleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_roleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_roleList.begin(); itr != m_roleList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_roleIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_roleIdList.begin(); itr != m_roleIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

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

    if (m_rootAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rootAccount, allocator);
    }

    if (m_corpAdminHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpAdmin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_corpAdmin, allocator);
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

    if (m_appOpenUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppOpenUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appOpenUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_emailActivationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmailActivationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_emailActivationStatus, allocator);
    }

    if (m_userGroupListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userGroupList.begin(); itr != m_userGroupList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t UserRoleListDataUserRoleInfo::GetId() const
{
    return m_id;
}

void UserRoleListDataUserRoleInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<UserRoleListDataRoleInfo> UserRoleListDataUserRoleInfo::GetRoleList() const
{
    return m_roleList;
}

void UserRoleListDataUserRoleInfo::SetRoleList(const vector<UserRoleListDataRoleInfo>& _roleList)
{
    m_roleList = _roleList;
    m_roleListHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::RoleListHasBeenSet() const
{
    return m_roleListHasBeenSet;
}

vector<uint64_t> UserRoleListDataUserRoleInfo::GetRoleIdList() const
{
    return m_roleIdList;
}

void UserRoleListDataUserRoleInfo::SetRoleIdList(const vector<uint64_t>& _roleIdList)
{
    m_roleIdList = _roleIdList;
    m_roleIdListHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::RoleIdListHasBeenSet() const
{
    return m_roleIdListHasBeenSet;
}

string UserRoleListDataUserRoleInfo::GetUserId() const
{
    return m_userId;
}

void UserRoleListDataUserRoleInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string UserRoleListDataUserRoleInfo::GetUserName() const
{
    return m_userName;
}

void UserRoleListDataUserRoleInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string UserRoleListDataUserRoleInfo::GetCorpId() const
{
    return m_corpId;
}

void UserRoleListDataUserRoleInfo::SetCorpId(const string& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string UserRoleListDataUserRoleInfo::GetEmail() const
{
    return m_email;
}

void UserRoleListDataUserRoleInfo::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string UserRoleListDataUserRoleInfo::GetCreatedUser() const
{
    return m_createdUser;
}

void UserRoleListDataUserRoleInfo::SetCreatedUser(const string& _createdUser)
{
    m_createdUser = _createdUser;
    m_createdUserHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::CreatedUserHasBeenSet() const
{
    return m_createdUserHasBeenSet;
}

string UserRoleListDataUserRoleInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void UserRoleListDataUserRoleInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string UserRoleListDataUserRoleInfo::GetUpdatedUser() const
{
    return m_updatedUser;
}

void UserRoleListDataUserRoleInfo::SetUpdatedUser(const string& _updatedUser)
{
    m_updatedUser = _updatedUser;
    m_updatedUserHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::UpdatedUserHasBeenSet() const
{
    return m_updatedUserHasBeenSet;
}

string UserRoleListDataUserRoleInfo::GetUpdatedAt() const
{
    return m_updatedAt;
}

void UserRoleListDataUserRoleInfo::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string UserRoleListDataUserRoleInfo::GetLastLogin() const
{
    return m_lastLogin;
}

void UserRoleListDataUserRoleInfo::SetLastLogin(const string& _lastLogin)
{
    m_lastLogin = _lastLogin;
    m_lastLoginHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::LastLoginHasBeenSet() const
{
    return m_lastLoginHasBeenSet;
}

int64_t UserRoleListDataUserRoleInfo::GetStatus() const
{
    return m_status;
}

void UserRoleListDataUserRoleInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string UserRoleListDataUserRoleInfo::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void UserRoleListDataUserRoleInfo::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string UserRoleListDataUserRoleInfo::GetAreaCode() const
{
    return m_areaCode;
}

void UserRoleListDataUserRoleInfo::SetAreaCode(const string& _areaCode)
{
    m_areaCode = _areaCode;
    m_areaCodeHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::AreaCodeHasBeenSet() const
{
    return m_areaCodeHasBeenSet;
}

bool UserRoleListDataUserRoleInfo::GetRootAccount() const
{
    return m_rootAccount;
}

void UserRoleListDataUserRoleInfo::SetRootAccount(const bool& _rootAccount)
{
    m_rootAccount = _rootAccount;
    m_rootAccountHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::RootAccountHasBeenSet() const
{
    return m_rootAccountHasBeenSet;
}

bool UserRoleListDataUserRoleInfo::GetCorpAdmin() const
{
    return m_corpAdmin;
}

void UserRoleListDataUserRoleInfo::SetCorpAdmin(const bool& _corpAdmin)
{
    m_corpAdmin = _corpAdmin;
    m_corpAdminHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::CorpAdminHasBeenSet() const
{
    return m_corpAdminHasBeenSet;
}

string UserRoleListDataUserRoleInfo::GetAppUserId() const
{
    return m_appUserId;
}

void UserRoleListDataUserRoleInfo::SetAppUserId(const string& _appUserId)
{
    m_appUserId = _appUserId;
    m_appUserIdHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::AppUserIdHasBeenSet() const
{
    return m_appUserIdHasBeenSet;
}

string UserRoleListDataUserRoleInfo::GetAppUserAliasName() const
{
    return m_appUserAliasName;
}

void UserRoleListDataUserRoleInfo::SetAppUserAliasName(const string& _appUserAliasName)
{
    m_appUserAliasName = _appUserAliasName;
    m_appUserAliasNameHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::AppUserAliasNameHasBeenSet() const
{
    return m_appUserAliasNameHasBeenSet;
}

string UserRoleListDataUserRoleInfo::GetAppUserName() const
{
    return m_appUserName;
}

void UserRoleListDataUserRoleInfo::SetAppUserName(const string& _appUserName)
{
    m_appUserName = _appUserName;
    m_appUserNameHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::AppUserNameHasBeenSet() const
{
    return m_appUserNameHasBeenSet;
}

bool UserRoleListDataUserRoleInfo::GetInValidateAppRange() const
{
    return m_inValidateAppRange;
}

void UserRoleListDataUserRoleInfo::SetInValidateAppRange(const bool& _inValidateAppRange)
{
    m_inValidateAppRange = _inValidateAppRange;
    m_inValidateAppRangeHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::InValidateAppRangeHasBeenSet() const
{
    return m_inValidateAppRangeHasBeenSet;
}

string UserRoleListDataUserRoleInfo::GetAppOpenUserId() const
{
    return m_appOpenUserId;
}

void UserRoleListDataUserRoleInfo::SetAppOpenUserId(const string& _appOpenUserId)
{
    m_appOpenUserId = _appOpenUserId;
    m_appOpenUserIdHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::AppOpenUserIdHasBeenSet() const
{
    return m_appOpenUserIdHasBeenSet;
}

int64_t UserRoleListDataUserRoleInfo::GetEmailActivationStatus() const
{
    return m_emailActivationStatus;
}

void UserRoleListDataUserRoleInfo::SetEmailActivationStatus(const int64_t& _emailActivationStatus)
{
    m_emailActivationStatus = _emailActivationStatus;
    m_emailActivationStatusHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::EmailActivationStatusHasBeenSet() const
{
    return m_emailActivationStatusHasBeenSet;
}

vector<UserGroupDTO> UserRoleListDataUserRoleInfo::GetUserGroupList() const
{
    return m_userGroupList;
}

void UserRoleListDataUserRoleInfo::SetUserGroupList(const vector<UserGroupDTO>& _userGroupList)
{
    m_userGroupList = _userGroupList;
    m_userGroupListHasBeenSet = true;
}

bool UserRoleListDataUserRoleInfo::UserGroupListHasBeenSet() const
{
    return m_userGroupListHasBeenSet;
}

