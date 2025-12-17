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

#include <tencentcloud/evt/v20250217/model/CreateRoleUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Evt::V20250217::Model;
using namespace std;

CreateRoleUserRequest::CreateRoleUserRequest() :
    m_roleSystemIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_tencentUinHasBeenSet(false)
{
}

string CreateRoleUserRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_roleSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roleSystemId, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enabled, allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_attributesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attributes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attributes.begin(); itr != m_attributes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_tencentUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TencentUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tencentUin, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateRoleUserRequest::GetRoleSystemId() const
{
    return m_roleSystemId;
}

void CreateRoleUserRequest::SetRoleSystemId(const int64_t& _roleSystemId)
{
    m_roleSystemId = _roleSystemId;
    m_roleSystemIdHasBeenSet = true;
}

bool CreateRoleUserRequest::RoleSystemIdHasBeenSet() const
{
    return m_roleSystemIdHasBeenSet;
}

string CreateRoleUserRequest::GetUserId() const
{
    return m_userId;
}

void CreateRoleUserRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CreateRoleUserRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string CreateRoleUserRequest::GetUsername() const
{
    return m_username;
}

void CreateRoleUserRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool CreateRoleUserRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

uint64_t CreateRoleUserRequest::GetEnabled() const
{
    return m_enabled;
}

void CreateRoleUserRequest::SetEnabled(const uint64_t& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool CreateRoleUserRequest::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string CreateRoleUserRequest::GetPhone() const
{
    return m_phone;
}

void CreateRoleUserRequest::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool CreateRoleUserRequest::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

vector<UserAttribute> CreateRoleUserRequest::GetAttributes() const
{
    return m_attributes;
}

void CreateRoleUserRequest::SetAttributes(const vector<UserAttribute>& _attributes)
{
    m_attributes = _attributes;
    m_attributesHasBeenSet = true;
}

bool CreateRoleUserRequest::AttributesHasBeenSet() const
{
    return m_attributesHasBeenSet;
}

uint64_t CreateRoleUserRequest::GetTencentUin() const
{
    return m_tencentUin;
}

void CreateRoleUserRequest::SetTencentUin(const uint64_t& _tencentUin)
{
    m_tencentUin = _tencentUin;
    m_tencentUinHasBeenSet = true;
}

bool CreateRoleUserRequest::TencentUinHasBeenSet() const
{
    return m_tencentUinHasBeenSet;
}


