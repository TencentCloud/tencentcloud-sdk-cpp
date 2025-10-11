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

#include <tencentcloud/ess/v20201111/model/DescribeSingleSignOnEmployeesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

DescribeSingleSignOnEmployeesRequest::DescribeSingleSignOnEmployeesRequest() :
    m_operatorHasBeenSet(false),
    m_ssoApplicationIdHasBeenSet(false),
    m_openIdsHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeSingleSignOnEmployeesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ssoApplicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SsoApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ssoApplicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_openIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_openIds.begin(); itr != m_openIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
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


UserInfo DescribeSingleSignOnEmployeesRequest::GetOperator() const
{
    return m_operator;
}

void DescribeSingleSignOnEmployeesRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DescribeSingleSignOnEmployeesRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string DescribeSingleSignOnEmployeesRequest::GetSsoApplicationId() const
{
    return m_ssoApplicationId;
}

void DescribeSingleSignOnEmployeesRequest::SetSsoApplicationId(const string& _ssoApplicationId)
{
    m_ssoApplicationId = _ssoApplicationId;
    m_ssoApplicationIdHasBeenSet = true;
}

bool DescribeSingleSignOnEmployeesRequest::SsoApplicationIdHasBeenSet() const
{
    return m_ssoApplicationIdHasBeenSet;
}

vector<string> DescribeSingleSignOnEmployeesRequest::GetOpenIds() const
{
    return m_openIds;
}

void DescribeSingleSignOnEmployeesRequest::SetOpenIds(const vector<string>& _openIds)
{
    m_openIds = _openIds;
    m_openIdsHasBeenSet = true;
}

bool DescribeSingleSignOnEmployeesRequest::OpenIdsHasBeenSet() const
{
    return m_openIdsHasBeenSet;
}

Agent DescribeSingleSignOnEmployeesRequest::GetAgent() const
{
    return m_agent;
}

void DescribeSingleSignOnEmployeesRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool DescribeSingleSignOnEmployeesRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

uint64_t DescribeSingleSignOnEmployeesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSingleSignOnEmployeesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSingleSignOnEmployeesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeSingleSignOnEmployeesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSingleSignOnEmployeesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSingleSignOnEmployeesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


