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

#include <tencentcloud/weilingwith/v20230427/model/SsoUser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

SsoUser::SsoUser() :
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_realNameHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_userGroupHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createAtHasBeenSet(false),
    m_updateAtHasBeenSet(false),
    m_belongTeamHasBeenSet(false),
    m_departmentIdHasBeenSet(false),
    m_departmentNameHasBeenSet(false),
    m_departmentUserIdHasBeenSet(false),
    m_passwordHasBeenSet(false)
{
}

CoreInternalOutcome SsoUser::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SsoUser.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SsoUser.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("RealName") && !value["RealName"].IsNull())
    {
        if (!value["RealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SsoUser.RealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realName = string(value["RealName"].GetString());
        m_realNameHasBeenSet = true;
    }

    if (value.HasMember("UserType") && !value["UserType"].IsNull())
    {
        if (!value["UserType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SsoUser.UserType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userType = string(value["UserType"].GetString());
        m_userTypeHasBeenSet = true;
    }

    if (value.HasMember("TenantId") && !value["TenantId"].IsNull())
    {
        if (!value["TenantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SsoUser.TenantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tenantId = string(value["TenantId"].GetString());
        m_tenantIdHasBeenSet = true;
    }

    if (value.HasMember("UserGroup") && !value["UserGroup"].IsNull())
    {
        if (!value["UserGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SsoUser.UserGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroup = string(value["UserGroup"].GetString());
        m_userGroupHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SsoUser.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SsoUser.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SsoUser.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateAt") && !value["CreateAt"].IsNull())
    {
        if (!value["CreateAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SsoUser.CreateAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createAt = value["CreateAt"].GetInt64();
        m_createAtHasBeenSet = true;
    }

    if (value.HasMember("UpdateAt") && !value["UpdateAt"].IsNull())
    {
        if (!value["UpdateAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SsoUser.UpdateAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateAt = value["UpdateAt"].GetInt64();
        m_updateAtHasBeenSet = true;
    }

    if (value.HasMember("BelongTeam") && !value["BelongTeam"].IsNull())
    {
        if (!value["BelongTeam"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SsoUser.BelongTeam` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_belongTeam = value["BelongTeam"].GetInt64();
        m_belongTeamHasBeenSet = true;
    }

    if (value.HasMember("DepartmentId") && !value["DepartmentId"].IsNull())
    {
        if (!value["DepartmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SsoUser.DepartmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_departmentId = string(value["DepartmentId"].GetString());
        m_departmentIdHasBeenSet = true;
    }

    if (value.HasMember("DepartmentName") && !value["DepartmentName"].IsNull())
    {
        if (!value["DepartmentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SsoUser.DepartmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_departmentName = string(value["DepartmentName"].GetString());
        m_departmentNameHasBeenSet = true;
    }

    if (value.HasMember("DepartmentUserId") && !value["DepartmentUserId"].IsNull())
    {
        if (!value["DepartmentUserId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SsoUser.DepartmentUserId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_departmentUserId = value["DepartmentUserId"].GetInt64();
        m_departmentUserIdHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SsoUser.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SsoUser::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_realNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realName.c_str(), allocator).Move(), allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userType.c_str(), allocator).Move(), allocator);
    }

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tenantId.c_str(), allocator).Move(), allocator);
    }

    if (m_userGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createAt, allocator);
    }

    if (m_updateAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateAt, allocator);
    }

    if (m_belongTeamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BelongTeam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_belongTeam, allocator);
    }

    if (m_departmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_departmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_departmentName.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_departmentUserId, allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

}


string SsoUser::GetUserId() const
{
    return m_userId;
}

void SsoUser::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool SsoUser::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string SsoUser::GetUserName() const
{
    return m_userName;
}

void SsoUser::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool SsoUser::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string SsoUser::GetRealName() const
{
    return m_realName;
}

void SsoUser::SetRealName(const string& _realName)
{
    m_realName = _realName;
    m_realNameHasBeenSet = true;
}

bool SsoUser::RealNameHasBeenSet() const
{
    return m_realNameHasBeenSet;
}

string SsoUser::GetUserType() const
{
    return m_userType;
}

void SsoUser::SetUserType(const string& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool SsoUser::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

string SsoUser::GetTenantId() const
{
    return m_tenantId;
}

void SsoUser::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool SsoUser::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

string SsoUser::GetUserGroup() const
{
    return m_userGroup;
}

void SsoUser::SetUserGroup(const string& _userGroup)
{
    m_userGroup = _userGroup;
    m_userGroupHasBeenSet = true;
}

bool SsoUser::UserGroupHasBeenSet() const
{
    return m_userGroupHasBeenSet;
}

string SsoUser::GetEmail() const
{
    return m_email;
}

void SsoUser::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool SsoUser::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string SsoUser::GetPhone() const
{
    return m_phone;
}

void SsoUser::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool SsoUser::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

uint64_t SsoUser::GetStatus() const
{
    return m_status;
}

void SsoUser::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SsoUser::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t SsoUser::GetCreateAt() const
{
    return m_createAt;
}

void SsoUser::SetCreateAt(const int64_t& _createAt)
{
    m_createAt = _createAt;
    m_createAtHasBeenSet = true;
}

bool SsoUser::CreateAtHasBeenSet() const
{
    return m_createAtHasBeenSet;
}

int64_t SsoUser::GetUpdateAt() const
{
    return m_updateAt;
}

void SsoUser::SetUpdateAt(const int64_t& _updateAt)
{
    m_updateAt = _updateAt;
    m_updateAtHasBeenSet = true;
}

bool SsoUser::UpdateAtHasBeenSet() const
{
    return m_updateAtHasBeenSet;
}

int64_t SsoUser::GetBelongTeam() const
{
    return m_belongTeam;
}

void SsoUser::SetBelongTeam(const int64_t& _belongTeam)
{
    m_belongTeam = _belongTeam;
    m_belongTeamHasBeenSet = true;
}

bool SsoUser::BelongTeamHasBeenSet() const
{
    return m_belongTeamHasBeenSet;
}

string SsoUser::GetDepartmentId() const
{
    return m_departmentId;
}

void SsoUser::SetDepartmentId(const string& _departmentId)
{
    m_departmentId = _departmentId;
    m_departmentIdHasBeenSet = true;
}

bool SsoUser::DepartmentIdHasBeenSet() const
{
    return m_departmentIdHasBeenSet;
}

string SsoUser::GetDepartmentName() const
{
    return m_departmentName;
}

void SsoUser::SetDepartmentName(const string& _departmentName)
{
    m_departmentName = _departmentName;
    m_departmentNameHasBeenSet = true;
}

bool SsoUser::DepartmentNameHasBeenSet() const
{
    return m_departmentNameHasBeenSet;
}

int64_t SsoUser::GetDepartmentUserId() const
{
    return m_departmentUserId;
}

void SsoUser::SetDepartmentUserId(const int64_t& _departmentUserId)
{
    m_departmentUserId = _departmentUserId;
    m_departmentUserIdHasBeenSet = true;
}

bool SsoUser::DepartmentUserIdHasBeenSet() const
{
    return m_departmentUserIdHasBeenSet;
}

string SsoUser::GetPassword() const
{
    return m_password;
}

void SsoUser::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool SsoUser::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

