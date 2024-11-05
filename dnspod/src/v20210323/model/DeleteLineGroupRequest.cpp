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

#include <tencentcloud/dnspod/v20210323/model/DeleteLineGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

DeleteLineGroupRequest::DeleteLineGroupRequest() :
    m_domainHasBeenSet(false),
    m_lineGroupIdHasBeenSet(false),
    m_domainIdHasBeenSet(false)
{
}

string DeleteLineGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_lineGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lineGroupId, allocator);
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


string DeleteLineGroupRequest::GetDomain() const
{
    return m_domain;
}

void DeleteLineGroupRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DeleteLineGroupRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t DeleteLineGroupRequest::GetLineGroupId() const
{
    return m_lineGroupId;
}

void DeleteLineGroupRequest::SetLineGroupId(const uint64_t& _lineGroupId)
{
    m_lineGroupId = _lineGroupId;
    m_lineGroupIdHasBeenSet = true;
}

bool DeleteLineGroupRequest::LineGroupIdHasBeenSet() const
{
    return m_lineGroupIdHasBeenSet;
}

uint64_t DeleteLineGroupRequest::GetDomainId() const
{
    return m_domainId;
}

void DeleteLineGroupRequest::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool DeleteLineGroupRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}


