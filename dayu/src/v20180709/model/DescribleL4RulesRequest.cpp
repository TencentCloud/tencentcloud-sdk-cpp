/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dayu/v20180709/model/DescribleL4RulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

DescribleL4RulesRequest::DescribleL4RulesRequest() :
    m_businessHasBeenSet(false),
    m_idHasBeenSet(false),
    m_ruleIdListHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribleL4RulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleIdList.begin(); itr != m_ruleIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribleL4RulesRequest::GetBusiness() const
{
    return m_business;
}

void DescribleL4RulesRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool DescribleL4RulesRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string DescribleL4RulesRequest::GetId() const
{
    return m_id;
}

void DescribleL4RulesRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribleL4RulesRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<string> DescribleL4RulesRequest::GetRuleIdList() const
{
    return m_ruleIdList;
}

void DescribleL4RulesRequest::SetRuleIdList(const vector<string>& _ruleIdList)
{
    m_ruleIdList = _ruleIdList;
    m_ruleIdListHasBeenSet = true;
}

bool DescribleL4RulesRequest::RuleIdListHasBeenSet() const
{
    return m_ruleIdListHasBeenSet;
}

uint64_t DescribleL4RulesRequest::GetLimit() const
{
    return m_limit;
}

void DescribleL4RulesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribleL4RulesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribleL4RulesRequest::GetOffset() const
{
    return m_offset;
}

void DescribleL4RulesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribleL4RulesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


