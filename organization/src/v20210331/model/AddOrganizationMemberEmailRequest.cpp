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

#include <tencentcloud/organization/v20210331/model/AddOrganizationMemberEmailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

AddOrganizationMemberEmailRequest::AddOrganizationMemberEmailRequest() :
    m_memberUinHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_phoneHasBeenSet(false)
{
}

string AddOrganizationMemberEmailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_memberUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memberUin, allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_countryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_countryCode.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t AddOrganizationMemberEmailRequest::GetMemberUin() const
{
    return m_memberUin;
}

void AddOrganizationMemberEmailRequest::SetMemberUin(const int64_t& _memberUin)
{
    m_memberUin = _memberUin;
    m_memberUinHasBeenSet = true;
}

bool AddOrganizationMemberEmailRequest::MemberUinHasBeenSet() const
{
    return m_memberUinHasBeenSet;
}

string AddOrganizationMemberEmailRequest::GetEmail() const
{
    return m_email;
}

void AddOrganizationMemberEmailRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool AddOrganizationMemberEmailRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string AddOrganizationMemberEmailRequest::GetCountryCode() const
{
    return m_countryCode;
}

void AddOrganizationMemberEmailRequest::SetCountryCode(const string& _countryCode)
{
    m_countryCode = _countryCode;
    m_countryCodeHasBeenSet = true;
}

bool AddOrganizationMemberEmailRequest::CountryCodeHasBeenSet() const
{
    return m_countryCodeHasBeenSet;
}

string AddOrganizationMemberEmailRequest::GetPhone() const
{
    return m_phone;
}

void AddOrganizationMemberEmailRequest::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool AddOrganizationMemberEmailRequest::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}


