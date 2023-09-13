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

#include <tencentcloud/weilingwith/v20230427/model/SsoTeamUser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

SsoTeamUser::SsoTeamUser() :
    m_userIdHasBeenSet(false),
    m_realNameHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createAtHasBeenSet(false),
    m_departmentIdHasBeenSet(false),
    m_departmentNameHasBeenSet(false),
    m_linkFilterHasBeenSet(false)
{
}

CoreInternalOutcome SsoTeamUser::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SsoTeamUser.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("RealName") && !value["RealName"].IsNull())
    {
        if (!value["RealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SsoTeamUser.RealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realName = string(value["RealName"].GetString());
        m_realNameHasBeenSet = true;
    }

    if (value.HasMember("UserType") && !value["UserType"].IsNull())
    {
        if (!value["UserType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SsoTeamUser.UserType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userType = string(value["UserType"].GetString());
        m_userTypeHasBeenSet = true;
    }

    if (value.HasMember("TenantId") && !value["TenantId"].IsNull())
    {
        if (!value["TenantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SsoTeamUser.TenantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tenantId = string(value["TenantId"].GetString());
        m_tenantIdHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SsoTeamUser.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SsoTeamUser.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SsoTeamUser.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateAt") && !value["CreateAt"].IsNull())
    {
        if (!value["CreateAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SsoTeamUser.CreateAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createAt = value["CreateAt"].GetInt64();
        m_createAtHasBeenSet = true;
    }

    if (value.HasMember("DepartmentId") && !value["DepartmentId"].IsNull())
    {
        if (!value["DepartmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SsoTeamUser.DepartmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_departmentId = string(value["DepartmentId"].GetString());
        m_departmentIdHasBeenSet = true;
    }

    if (value.HasMember("DepartmentName") && !value["DepartmentName"].IsNull())
    {
        if (!value["DepartmentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SsoTeamUser.DepartmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_departmentName = string(value["DepartmentName"].GetString());
        m_departmentNameHasBeenSet = true;
    }

    if (value.HasMember("LinkFilter") && !value["LinkFilter"].IsNull())
    {
        if (!value["LinkFilter"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SsoTeamUser.LinkFilter` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_linkFilter = value["LinkFilter"].GetInt64();
        m_linkFilterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SsoTeamUser::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
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

    if (m_linkFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_linkFilter, allocator);
    }

}


string SsoTeamUser::GetUserId() const
{
    return m_userId;
}

void SsoTeamUser::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool SsoTeamUser::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string SsoTeamUser::GetRealName() const
{
    return m_realName;
}

void SsoTeamUser::SetRealName(const string& _realName)
{
    m_realName = _realName;
    m_realNameHasBeenSet = true;
}

bool SsoTeamUser::RealNameHasBeenSet() const
{
    return m_realNameHasBeenSet;
}

string SsoTeamUser::GetUserType() const
{
    return m_userType;
}

void SsoTeamUser::SetUserType(const string& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool SsoTeamUser::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

string SsoTeamUser::GetTenantId() const
{
    return m_tenantId;
}

void SsoTeamUser::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool SsoTeamUser::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

string SsoTeamUser::GetEmail() const
{
    return m_email;
}

void SsoTeamUser::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool SsoTeamUser::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string SsoTeamUser::GetPhone() const
{
    return m_phone;
}

void SsoTeamUser::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool SsoTeamUser::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

int64_t SsoTeamUser::GetStatus() const
{
    return m_status;
}

void SsoTeamUser::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SsoTeamUser::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t SsoTeamUser::GetCreateAt() const
{
    return m_createAt;
}

void SsoTeamUser::SetCreateAt(const int64_t& _createAt)
{
    m_createAt = _createAt;
    m_createAtHasBeenSet = true;
}

bool SsoTeamUser::CreateAtHasBeenSet() const
{
    return m_createAtHasBeenSet;
}

string SsoTeamUser::GetDepartmentId() const
{
    return m_departmentId;
}

void SsoTeamUser::SetDepartmentId(const string& _departmentId)
{
    m_departmentId = _departmentId;
    m_departmentIdHasBeenSet = true;
}

bool SsoTeamUser::DepartmentIdHasBeenSet() const
{
    return m_departmentIdHasBeenSet;
}

string SsoTeamUser::GetDepartmentName() const
{
    return m_departmentName;
}

void SsoTeamUser::SetDepartmentName(const string& _departmentName)
{
    m_departmentName = _departmentName;
    m_departmentNameHasBeenSet = true;
}

bool SsoTeamUser::DepartmentNameHasBeenSet() const
{
    return m_departmentNameHasBeenSet;
}

int64_t SsoTeamUser::GetLinkFilter() const
{
    return m_linkFilter;
}

void SsoTeamUser::SetLinkFilter(const int64_t& _linkFilter)
{
    m_linkFilter = _linkFilter;
    m_linkFilterHasBeenSet = true;
}

bool SsoTeamUser::LinkFilterHasBeenSet() const
{
    return m_linkFilterHasBeenSet;
}

