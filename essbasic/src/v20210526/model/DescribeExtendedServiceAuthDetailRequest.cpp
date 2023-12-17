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

#include <tencentcloud/essbasic/v20210526/model/DescribeExtendedServiceAuthDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

DescribeExtendedServiceAuthDetailRequest::DescribeExtendedServiceAuthDetailRequest() :
    m_agentHasBeenSet(false),
    m_extendServiceTypeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeExtendedServiceAuthDetailRequest::ToJsonString() const
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

    if (m_extendServiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extendServiceType.c_str(), allocator).Move(), allocator);
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


Agent DescribeExtendedServiceAuthDetailRequest::GetAgent() const
{
    return m_agent;
}

void DescribeExtendedServiceAuthDetailRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool DescribeExtendedServiceAuthDetailRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string DescribeExtendedServiceAuthDetailRequest::GetExtendServiceType() const
{
    return m_extendServiceType;
}

void DescribeExtendedServiceAuthDetailRequest::SetExtendServiceType(const string& _extendServiceType)
{
    m_extendServiceType = _extendServiceType;
    m_extendServiceTypeHasBeenSet = true;
}

bool DescribeExtendedServiceAuthDetailRequest::ExtendServiceTypeHasBeenSet() const
{
    return m_extendServiceTypeHasBeenSet;
}

int64_t DescribeExtendedServiceAuthDetailRequest::GetLimit() const
{
    return m_limit;
}

void DescribeExtendedServiceAuthDetailRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeExtendedServiceAuthDetailRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeExtendedServiceAuthDetailRequest::GetOffset() const
{
    return m_offset;
}

void DescribeExtendedServiceAuthDetailRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeExtendedServiceAuthDetailRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


