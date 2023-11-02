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

#include <tencentcloud/dnspod/v20210323/model/ModifyDomainCustomLineRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

ModifyDomainCustomLineRequest::ModifyDomainCustomLineRequest() :
    m_domainHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_preNameHasBeenSet(false),
    m_domainIdHasBeenSet(false)
{
}

string ModifyDomainCustomLineRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_preNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_preName.c_str(), allocator).Move(), allocator);
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


string ModifyDomainCustomLineRequest::GetDomain() const
{
    return m_domain;
}

void ModifyDomainCustomLineRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyDomainCustomLineRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ModifyDomainCustomLineRequest::GetName() const
{
    return m_name;
}

void ModifyDomainCustomLineRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyDomainCustomLineRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyDomainCustomLineRequest::GetArea() const
{
    return m_area;
}

void ModifyDomainCustomLineRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool ModifyDomainCustomLineRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string ModifyDomainCustomLineRequest::GetPreName() const
{
    return m_preName;
}

void ModifyDomainCustomLineRequest::SetPreName(const string& _preName)
{
    m_preName = _preName;
    m_preNameHasBeenSet = true;
}

bool ModifyDomainCustomLineRequest::PreNameHasBeenSet() const
{
    return m_preNameHasBeenSet;
}

uint64_t ModifyDomainCustomLineRequest::GetDomainId() const
{
    return m_domainId;
}

void ModifyDomainCustomLineRequest::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool ModifyDomainCustomLineRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}


