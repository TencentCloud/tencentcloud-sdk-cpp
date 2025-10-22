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

#include <tencentcloud/ess/v20201111/model/SingleSignOnEmployees.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

SingleSignOnEmployees::SingleSignOnEmployees() :
    m_openIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_roleIdsHasBeenSet(false),
    m_isVerifiedHasBeenSet(false),
    m_createdOnHasBeenSet(false)
{
}

CoreInternalOutcome SingleSignOnEmployees::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OpenId") && !value["OpenId"].IsNull())
    {
        if (!value["OpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingleSignOnEmployees.OpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openId = string(value["OpenId"].GetString());
        m_openIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingleSignOnEmployees.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingleSignOnEmployees.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingleSignOnEmployees.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingleSignOnEmployees.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("RoleIds") && !value["RoleIds"].IsNull())
    {
        if (!value["RoleIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SingleSignOnEmployees.RoleIds` is not array type"));

        const rapidjson::Value &tmpValue = value["RoleIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_roleIds.push_back((*itr).GetString());
        }
        m_roleIdsHasBeenSet = true;
    }

    if (value.HasMember("IsVerified") && !value["IsVerified"].IsNull())
    {
        if (!value["IsVerified"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SingleSignOnEmployees.IsVerified` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isVerified = value["IsVerified"].GetBool();
        m_isVerifiedHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SingleSignOnEmployees.CreatedOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = value["CreatedOn"].GetInt64();
        m_createdOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SingleSignOnEmployees::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_roleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_roleIds.begin(); itr != m_roleIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isVerifiedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsVerified";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isVerified, allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdOn, allocator);
    }

}


string SingleSignOnEmployees::GetOpenId() const
{
    return m_openId;
}

void SingleSignOnEmployees::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool SingleSignOnEmployees::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string SingleSignOnEmployees::GetName() const
{
    return m_name;
}

void SingleSignOnEmployees::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SingleSignOnEmployees::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SingleSignOnEmployees::GetMobile() const
{
    return m_mobile;
}

void SingleSignOnEmployees::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool SingleSignOnEmployees::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string SingleSignOnEmployees::GetUserId() const
{
    return m_userId;
}

void SingleSignOnEmployees::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool SingleSignOnEmployees::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string SingleSignOnEmployees::GetEmail() const
{
    return m_email;
}

void SingleSignOnEmployees::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool SingleSignOnEmployees::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

vector<string> SingleSignOnEmployees::GetRoleIds() const
{
    return m_roleIds;
}

void SingleSignOnEmployees::SetRoleIds(const vector<string>& _roleIds)
{
    m_roleIds = _roleIds;
    m_roleIdsHasBeenSet = true;
}

bool SingleSignOnEmployees::RoleIdsHasBeenSet() const
{
    return m_roleIdsHasBeenSet;
}

bool SingleSignOnEmployees::GetIsVerified() const
{
    return m_isVerified;
}

void SingleSignOnEmployees::SetIsVerified(const bool& _isVerified)
{
    m_isVerified = _isVerified;
    m_isVerifiedHasBeenSet = true;
}

bool SingleSignOnEmployees::IsVerifiedHasBeenSet() const
{
    return m_isVerifiedHasBeenSet;
}

int64_t SingleSignOnEmployees::GetCreatedOn() const
{
    return m_createdOn;
}

void SingleSignOnEmployees::SetCreatedOn(const int64_t& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool SingleSignOnEmployees::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

