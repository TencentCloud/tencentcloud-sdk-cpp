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

#include <tencentcloud/waf/v20180125/model/DescribeCustomRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace rapidjson;
using namespace std;

DescribeCustomRulesRequest::DescribeCustomRulesRequest() :
    m_domainHasBeenSet(false),
    m_pagingHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_searchHasBeenSet(false)
{
}

string DescribeCustomRulesRequest::ToJsonString() const
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

    if (m_pagingHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Paging";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_paging.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_editionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_edition.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_searchHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Search";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_search.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCustomRulesRequest::GetDomain() const
{
    return m_domain;
}

void DescribeCustomRulesRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeCustomRulesRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

DescribeCustomRulesPagingInfo DescribeCustomRulesRequest::GetPaging() const
{
    return m_paging;
}

void DescribeCustomRulesRequest::SetPaging(const DescribeCustomRulesPagingInfo& _paging)
{
    m_paging = _paging;
    m_pagingHasBeenSet = true;
}

bool DescribeCustomRulesRequest::PagingHasBeenSet() const
{
    return m_pagingHasBeenSet;
}

string DescribeCustomRulesRequest::GetEdition() const
{
    return m_edition;
}

void DescribeCustomRulesRequest::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool DescribeCustomRulesRequest::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

string DescribeCustomRulesRequest::GetActionType() const
{
    return m_actionType;
}

void DescribeCustomRulesRequest::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool DescribeCustomRulesRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string DescribeCustomRulesRequest::GetSearch() const
{
    return m_search;
}

void DescribeCustomRulesRequest::SetSearch(const string& _search)
{
    m_search = _search;
    m_searchHasBeenSet = true;
}

bool DescribeCustomRulesRequest::SearchHasBeenSet() const
{
    return m_searchHasBeenSet;
}


