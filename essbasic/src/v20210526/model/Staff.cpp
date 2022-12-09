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

#include <tencentcloud/essbasic/v20210526/model/Staff.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

Staff::Staff() :
    m_userIdHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_rolesHasBeenSet(false),
    m_departmentHasBeenSet(false),
    m_verifiedHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_verifiedOnHasBeenSet(false),
    m_quiteJobHasBeenSet(false)
{
}

CoreInternalOutcome Staff::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Staff.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Staff.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Staff.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Staff.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("OpenId") && !value["OpenId"].IsNull())
    {
        if (!value["OpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Staff.OpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openId = string(value["OpenId"].GetString());
        m_openIdHasBeenSet = true;
    }

    if (value.HasMember("Roles") && !value["Roles"].IsNull())
    {
        if (!value["Roles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Staff.Roles` is not array type"));

        const rapidjson::Value &tmpValue = value["Roles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StaffRole item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_roles.push_back(item);
        }
        m_rolesHasBeenSet = true;
    }

    if (value.HasMember("Department") && !value["Department"].IsNull())
    {
        if (!value["Department"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Staff.Department` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_department.Deserialize(value["Department"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_departmentHasBeenSet = true;
    }

    if (value.HasMember("Verified") && !value["Verified"].IsNull())
    {
        if (!value["Verified"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Staff.Verified` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_verified = value["Verified"].GetBool();
        m_verifiedHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Staff.CreatedOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = value["CreatedOn"].GetInt64();
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("VerifiedOn") && !value["VerifiedOn"].IsNull())
    {
        if (!value["VerifiedOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Staff.VerifiedOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_verifiedOn = value["VerifiedOn"].GetInt64();
        m_verifiedOnHasBeenSet = true;
    }

    if (value.HasMember("QuiteJob") && !value["QuiteJob"].IsNull())
    {
        if (!value["QuiteJob"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Staff.QuiteJob` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quiteJob = value["QuiteJob"].GetInt64();
        m_quiteJobHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Staff::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_rolesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Roles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_roles.begin(); itr != m_roles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_departmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Department";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_department.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_verifiedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Verified";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verified, allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdOn, allocator);
    }

    if (m_verifiedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifiedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verifiedOn, allocator);
    }

    if (m_quiteJobHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuiteJob";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quiteJob, allocator);
    }

}


string Staff::GetUserId() const
{
    return m_userId;
}

void Staff::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool Staff::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string Staff::GetDisplayName() const
{
    return m_displayName;
}

void Staff::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool Staff::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string Staff::GetMobile() const
{
    return m_mobile;
}

void Staff::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool Staff::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string Staff::GetEmail() const
{
    return m_email;
}

void Staff::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool Staff::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string Staff::GetOpenId() const
{
    return m_openId;
}

void Staff::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool Staff::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

vector<StaffRole> Staff::GetRoles() const
{
    return m_roles;
}

void Staff::SetRoles(const vector<StaffRole>& _roles)
{
    m_roles = _roles;
    m_rolesHasBeenSet = true;
}

bool Staff::RolesHasBeenSet() const
{
    return m_rolesHasBeenSet;
}

Department Staff::GetDepartment() const
{
    return m_department;
}

void Staff::SetDepartment(const Department& _department)
{
    m_department = _department;
    m_departmentHasBeenSet = true;
}

bool Staff::DepartmentHasBeenSet() const
{
    return m_departmentHasBeenSet;
}

bool Staff::GetVerified() const
{
    return m_verified;
}

void Staff::SetVerified(const bool& _verified)
{
    m_verified = _verified;
    m_verifiedHasBeenSet = true;
}

bool Staff::VerifiedHasBeenSet() const
{
    return m_verifiedHasBeenSet;
}

int64_t Staff::GetCreatedOn() const
{
    return m_createdOn;
}

void Staff::SetCreatedOn(const int64_t& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool Staff::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

int64_t Staff::GetVerifiedOn() const
{
    return m_verifiedOn;
}

void Staff::SetVerifiedOn(const int64_t& _verifiedOn)
{
    m_verifiedOn = _verifiedOn;
    m_verifiedOnHasBeenSet = true;
}

bool Staff::VerifiedOnHasBeenSet() const
{
    return m_verifiedOnHasBeenSet;
}

int64_t Staff::GetQuiteJob() const
{
    return m_quiteJob;
}

void Staff::SetQuiteJob(const int64_t& _quiteJob)
{
    m_quiteJob = _quiteJob;
    m_quiteJobHasBeenSet = true;
}

bool Staff::QuiteJobHasBeenSet() const
{
    return m_quiteJobHasBeenSet;
}

