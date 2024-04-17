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

#include <tencentcloud/organization/v20210331/model/ListPoliciesForTargetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

ListPoliciesForTargetRequest::ListPoliciesForTargetRequest() :
    m_targetIdHasBeenSet(false),
    m_rpHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_keywordHasBeenSet(false)
{
}

string ListPoliciesForTargetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_targetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_targetId, allocator);
    }

    if (m_rpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rp, allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ListPoliciesForTargetRequest::GetTargetId() const
{
    return m_targetId;
}

void ListPoliciesForTargetRequest::SetTargetId(const uint64_t& _targetId)
{
    m_targetId = _targetId;
    m_targetIdHasBeenSet = true;
}

bool ListPoliciesForTargetRequest::TargetIdHasBeenSet() const
{
    return m_targetIdHasBeenSet;
}

uint64_t ListPoliciesForTargetRequest::GetRp() const
{
    return m_rp;
}

void ListPoliciesForTargetRequest::SetRp(const uint64_t& _rp)
{
    m_rp = _rp;
    m_rpHasBeenSet = true;
}

bool ListPoliciesForTargetRequest::RpHasBeenSet() const
{
    return m_rpHasBeenSet;
}

uint64_t ListPoliciesForTargetRequest::GetPage() const
{
    return m_page;
}

void ListPoliciesForTargetRequest::SetPage(const uint64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool ListPoliciesForTargetRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

string ListPoliciesForTargetRequest::GetPolicyType() const
{
    return m_policyType;
}

void ListPoliciesForTargetRequest::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool ListPoliciesForTargetRequest::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

string ListPoliciesForTargetRequest::GetKeyword() const
{
    return m_keyword;
}

void ListPoliciesForTargetRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool ListPoliciesForTargetRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}


