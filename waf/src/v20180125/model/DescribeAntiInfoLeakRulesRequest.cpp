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

#include <tencentcloud/waf/v20180125/model/DescribeAntiInfoLeakRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeAntiInfoLeakRulesRequest::DescribeAntiInfoLeakRulesRequest() :
    m_domainHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_pageInfoHasBeenSet(false)
{
}

string DescribeAntiInfoLeakRulesRequest::ToJsonString() const
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

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_actionType, allocator);
    }

    if (m_pageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pageInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAntiInfoLeakRulesRequest::GetDomain() const
{
    return m_domain;
}

void DescribeAntiInfoLeakRulesRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeAntiInfoLeakRulesRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t DescribeAntiInfoLeakRulesRequest::GetActionType() const
{
    return m_actionType;
}

void DescribeAntiInfoLeakRulesRequest::SetActionType(const int64_t& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool DescribeAntiInfoLeakRulesRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

PageInfo DescribeAntiInfoLeakRulesRequest::GetPageInfo() const
{
    return m_pageInfo;
}

void DescribeAntiInfoLeakRulesRequest::SetPageInfo(const PageInfo& _pageInfo)
{
    m_pageInfo = _pageInfo;
    m_pageInfoHasBeenSet = true;
}

bool DescribeAntiInfoLeakRulesRequest::PageInfoHasBeenSet() const
{
    return m_pageInfoHasBeenSet;
}


