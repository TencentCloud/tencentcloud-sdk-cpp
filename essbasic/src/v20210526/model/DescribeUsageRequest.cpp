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

#include <tencentcloud/essbasic/v20210526/model/DescribeUsageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

DescribeUsageRequest::DescribeUsageRequest() :
    m_agentHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_needAggregateHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string DescribeUsageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_startDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }

    if (m_needAggregateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedAggregate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needAggregate, allocator);
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

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent DescribeUsageRequest::GetAgent() const
{
    return m_agent;
}

void DescribeUsageRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool DescribeUsageRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string DescribeUsageRequest::GetStartDate() const
{
    return m_startDate;
}

void DescribeUsageRequest::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool DescribeUsageRequest::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string DescribeUsageRequest::GetEndDate() const
{
    return m_endDate;
}

void DescribeUsageRequest::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool DescribeUsageRequest::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

bool DescribeUsageRequest::GetNeedAggregate() const
{
    return m_needAggregate;
}

void DescribeUsageRequest::SetNeedAggregate(const bool& _needAggregate)
{
    m_needAggregate = _needAggregate;
    m_needAggregateHasBeenSet = true;
}

bool DescribeUsageRequest::NeedAggregateHasBeenSet() const
{
    return m_needAggregateHasBeenSet;
}

uint64_t DescribeUsageRequest::GetLimit() const
{
    return m_limit;
}

void DescribeUsageRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeUsageRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeUsageRequest::GetOffset() const
{
    return m_offset;
}

void DescribeUsageRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeUsageRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

UserInfo DescribeUsageRequest::GetOperator() const
{
    return m_operator;
}

void DescribeUsageRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DescribeUsageRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


