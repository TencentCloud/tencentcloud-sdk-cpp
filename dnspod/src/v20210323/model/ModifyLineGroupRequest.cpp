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

#include <tencentcloud/dnspod/v20210323/model/ModifyLineGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

ModifyLineGroupRequest::ModifyLineGroupRequest() :
    m_nameHasBeenSet(false),
    m_linesHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_lineGroupIdHasBeenSet(false),
    m_domainIdHasBeenSet(false)
{
}

string ModifyLineGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_linesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lines";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lines.c_str(), allocator).Move(), allocator);
    }

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


string ModifyLineGroupRequest::GetName() const
{
    return m_name;
}

void ModifyLineGroupRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyLineGroupRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyLineGroupRequest::GetLines() const
{
    return m_lines;
}

void ModifyLineGroupRequest::SetLines(const string& _lines)
{
    m_lines = _lines;
    m_linesHasBeenSet = true;
}

bool ModifyLineGroupRequest::LinesHasBeenSet() const
{
    return m_linesHasBeenSet;
}

string ModifyLineGroupRequest::GetDomain() const
{
    return m_domain;
}

void ModifyLineGroupRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyLineGroupRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t ModifyLineGroupRequest::GetLineGroupId() const
{
    return m_lineGroupId;
}

void ModifyLineGroupRequest::SetLineGroupId(const uint64_t& _lineGroupId)
{
    m_lineGroupId = _lineGroupId;
    m_lineGroupIdHasBeenSet = true;
}

bool ModifyLineGroupRequest::LineGroupIdHasBeenSet() const
{
    return m_lineGroupIdHasBeenSet;
}

uint64_t ModifyLineGroupRequest::GetDomainId() const
{
    return m_domainId;
}

void ModifyLineGroupRequest::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool ModifyLineGroupRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}


