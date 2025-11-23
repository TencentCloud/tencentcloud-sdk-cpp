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

#include <tencentcloud/ctem/v20231128/model/CreateDomainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

CreateDomainRequest::CreateDomainRequest() :
    m_customerIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_iCPHasBeenSet(false),
    m_registeredTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_companyHasBeenSet(false),
    m_enterpriseUidHasBeenSet(false)
{
}

string CreateDomainRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_customerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_customerId, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_iCPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ICP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iCP.c_str(), allocator).Move(), allocator);
    }

    if (m_registeredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisteredTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registeredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_companyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Company";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_company.c_str(), allocator).Move(), allocator);
    }

    if (m_enterpriseUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseUid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enterpriseUid.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateDomainRequest::GetCustomerId() const
{
    return m_customerId;
}

void CreateDomainRequest::SetCustomerId(const int64_t& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool CreateDomainRequest::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

string CreateDomainRequest::GetDomain() const
{
    return m_domain;
}

void CreateDomainRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateDomainRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CreateDomainRequest::GetICP() const
{
    return m_iCP;
}

void CreateDomainRequest::SetICP(const string& _iCP)
{
    m_iCP = _iCP;
    m_iCPHasBeenSet = true;
}

bool CreateDomainRequest::ICPHasBeenSet() const
{
    return m_iCPHasBeenSet;
}

string CreateDomainRequest::GetRegisteredTime() const
{
    return m_registeredTime;
}

void CreateDomainRequest::SetRegisteredTime(const string& _registeredTime)
{
    m_registeredTime = _registeredTime;
    m_registeredTimeHasBeenSet = true;
}

bool CreateDomainRequest::RegisteredTimeHasBeenSet() const
{
    return m_registeredTimeHasBeenSet;
}

string CreateDomainRequest::GetExpiredTime() const
{
    return m_expiredTime;
}

void CreateDomainRequest::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool CreateDomainRequest::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string CreateDomainRequest::GetCompany() const
{
    return m_company;
}

void CreateDomainRequest::SetCompany(const string& _company)
{
    m_company = _company;
    m_companyHasBeenSet = true;
}

bool CreateDomainRequest::CompanyHasBeenSet() const
{
    return m_companyHasBeenSet;
}

string CreateDomainRequest::GetEnterpriseUid() const
{
    return m_enterpriseUid;
}

void CreateDomainRequest::SetEnterpriseUid(const string& _enterpriseUid)
{
    m_enterpriseUid = _enterpriseUid;
    m_enterpriseUidHasBeenSet = true;
}

bool CreateDomainRequest::EnterpriseUidHasBeenSet() const
{
    return m_enterpriseUidHasBeenSet;
}


