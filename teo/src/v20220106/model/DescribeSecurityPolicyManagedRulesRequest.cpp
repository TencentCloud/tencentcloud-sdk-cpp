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

#include <tencentcloud/teo/v20220106/model/DescribeSecurityPolicyManagedRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

DescribeSecurityPolicyManagedRulesRequest::DescribeSecurityPolicyManagedRulesRequest() :
    m_zoneIdHasBeenSet(false),
    m_entityHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_perPageHasBeenSet(false)
{
}

string DescribeSecurityPolicyManagedRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_entityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entity.c_str(), allocator).Move(), allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_perPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PerPage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_perPage, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSecurityPolicyManagedRulesRequest::GetZoneId() const
{
    return m_zoneId;
}

void DescribeSecurityPolicyManagedRulesRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool DescribeSecurityPolicyManagedRulesRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string DescribeSecurityPolicyManagedRulesRequest::GetEntity() const
{
    return m_entity;
}

void DescribeSecurityPolicyManagedRulesRequest::SetEntity(const string& _entity)
{
    m_entity = _entity;
    m_entityHasBeenSet = true;
}

bool DescribeSecurityPolicyManagedRulesRequest::EntityHasBeenSet() const
{
    return m_entityHasBeenSet;
}

int64_t DescribeSecurityPolicyManagedRulesRequest::GetPage() const
{
    return m_page;
}

void DescribeSecurityPolicyManagedRulesRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeSecurityPolicyManagedRulesRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeSecurityPolicyManagedRulesRequest::GetPerPage() const
{
    return m_perPage;
}

void DescribeSecurityPolicyManagedRulesRequest::SetPerPage(const int64_t& _perPage)
{
    m_perPage = _perPage;
    m_perPageHasBeenSet = true;
}

bool DescribeSecurityPolicyManagedRulesRequest::PerPageHasBeenSet() const
{
    return m_perPageHasBeenSet;
}


