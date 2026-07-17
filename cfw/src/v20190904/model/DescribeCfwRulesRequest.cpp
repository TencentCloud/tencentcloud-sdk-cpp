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

#include <tencentcloud/cfw/v20190904/model/DescribeCfwRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeCfwRulesRequest::DescribeCfwRulesRequest() :
    m_ruleTypeHasBeenSet(false),
    m_listTypeHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeCfwRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_listTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listType.c_str(), allocator).Move(), allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_direction, allocator);
    }

    if (m_ruleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleAction, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleId, allocator);
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


string DescribeCfwRulesRequest::GetRuleType() const
{
    return m_ruleType;
}

void DescribeCfwRulesRequest::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool DescribeCfwRulesRequest::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string DescribeCfwRulesRequest::GetListType() const
{
    return m_listType;
}

void DescribeCfwRulesRequest::SetListType(const string& _listType)
{
    m_listType = _listType;
    m_listTypeHasBeenSet = true;
}

bool DescribeCfwRulesRequest::ListTypeHasBeenSet() const
{
    return m_listTypeHasBeenSet;
}

int64_t DescribeCfwRulesRequest::GetDirection() const
{
    return m_direction;
}

void DescribeCfwRulesRequest::SetDirection(const int64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool DescribeCfwRulesRequest::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

int64_t DescribeCfwRulesRequest::GetRuleAction() const
{
    return m_ruleAction;
}

void DescribeCfwRulesRequest::SetRuleAction(const int64_t& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool DescribeCfwRulesRequest::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

int64_t DescribeCfwRulesRequest::GetRuleId() const
{
    return m_ruleId;
}

void DescribeCfwRulesRequest::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DescribeCfwRulesRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

int64_t DescribeCfwRulesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCfwRulesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCfwRulesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeCfwRulesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCfwRulesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCfwRulesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


