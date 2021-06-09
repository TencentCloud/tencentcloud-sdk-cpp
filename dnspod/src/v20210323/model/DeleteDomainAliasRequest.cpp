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

#include <tencentcloud/dnspod/v20210323/model/DeleteDomainAliasRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

DeleteDomainAliasRequest::DeleteDomainAliasRequest() :
    m_domainAliasIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_domainIdHasBeenSet(false)
{
}

string DeleteDomainAliasRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainAliasIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainAliasId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domainAliasId, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domainId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DeleteDomainAliasRequest::GetDomainAliasId() const
{
    return m_domainAliasId;
}

void DeleteDomainAliasRequest::SetDomainAliasId(const int64_t& _domainAliasId)
{
    m_domainAliasId = _domainAliasId;
    m_domainAliasIdHasBeenSet = true;
}

bool DeleteDomainAliasRequest::DomainAliasIdHasBeenSet() const
{
    return m_domainAliasIdHasBeenSet;
}

string DeleteDomainAliasRequest::GetDomain() const
{
    return m_domain;
}

void DeleteDomainAliasRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DeleteDomainAliasRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t DeleteDomainAliasRequest::GetDomainId() const
{
    return m_domainId;
}

void DeleteDomainAliasRequest::SetDomainId(const int64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool DeleteDomainAliasRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}


