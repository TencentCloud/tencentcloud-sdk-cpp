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

#include <tencentcloud/cam/v20190116/model/ListEntitiesForPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

ListEntitiesForPolicyRequest::ListEntitiesForPolicyRequest() :
    m_policyIdHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_rpHasBeenSet(false),
    m_entityFilterHasBeenSet(false)
{
}

string ListEntitiesForPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policyId, allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_rpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rp, allocator);
    }

    if (m_entityFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entityFilter.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ListEntitiesForPolicyRequest::GetPolicyId() const
{
    return m_policyId;
}

void ListEntitiesForPolicyRequest::SetPolicyId(const uint64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool ListEntitiesForPolicyRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

uint64_t ListEntitiesForPolicyRequest::GetPage() const
{
    return m_page;
}

void ListEntitiesForPolicyRequest::SetPage(const uint64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool ListEntitiesForPolicyRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

uint64_t ListEntitiesForPolicyRequest::GetRp() const
{
    return m_rp;
}

void ListEntitiesForPolicyRequest::SetRp(const uint64_t& _rp)
{
    m_rp = _rp;
    m_rpHasBeenSet = true;
}

bool ListEntitiesForPolicyRequest::RpHasBeenSet() const
{
    return m_rpHasBeenSet;
}

string ListEntitiesForPolicyRequest::GetEntityFilter() const
{
    return m_entityFilter;
}

void ListEntitiesForPolicyRequest::SetEntityFilter(const string& _entityFilter)
{
    m_entityFilter = _entityFilter;
    m_entityFilterHasBeenSet = true;
}

bool ListEntitiesForPolicyRequest::EntityFilterHasBeenSet() const
{
    return m_entityFilterHasBeenSet;
}


