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

#include <tencentcloud/dnspod/v20210323/model/ModifyDomainOwnerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace rapidjson;
using namespace std;

ModifyDomainOwnerRequest::ModifyDomainOwnerRequest() :
    m_domainHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_domainIdHasBeenSet(false)
{
}

string ModifyDomainOwnerRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_accountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_account.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domainId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDomainOwnerRequest::GetDomain() const
{
    return m_domain;
}

void ModifyDomainOwnerRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyDomainOwnerRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ModifyDomainOwnerRequest::GetAccount() const
{
    return m_account;
}

void ModifyDomainOwnerRequest::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool ModifyDomainOwnerRequest::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

uint64_t ModifyDomainOwnerRequest::GetDomainId() const
{
    return m_domainId;
}

void ModifyDomainOwnerRequest::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool ModifyDomainOwnerRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}


