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

#include <tencentcloud/ess/v20201111/model/DescribeIntegrationDepartmentsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

DescribeIntegrationDepartmentsRequest::DescribeIntegrationDepartmentsRequest() :
    m_operatorHasBeenSet(false),
    m_queryTypeHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_deptIdHasBeenSet(false),
    m_deptOpenIdHasBeenSet(false)
{
}

string DescribeIntegrationDepartmentsRequest::ToJsonString() const
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

    if (m_queryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryType, allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_deptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeptId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deptId.c_str(), allocator).Move(), allocator);
    }

    if (m_deptOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeptOpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deptOpenId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo DescribeIntegrationDepartmentsRequest::GetOperator() const
{
    return m_operator;
}

void DescribeIntegrationDepartmentsRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DescribeIntegrationDepartmentsRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

uint64_t DescribeIntegrationDepartmentsRequest::GetQueryType() const
{
    return m_queryType;
}

void DescribeIntegrationDepartmentsRequest::SetQueryType(const uint64_t& _queryType)
{
    m_queryType = _queryType;
    m_queryTypeHasBeenSet = true;
}

bool DescribeIntegrationDepartmentsRequest::QueryTypeHasBeenSet() const
{
    return m_queryTypeHasBeenSet;
}

Agent DescribeIntegrationDepartmentsRequest::GetAgent() const
{
    return m_agent;
}

void DescribeIntegrationDepartmentsRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool DescribeIntegrationDepartmentsRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string DescribeIntegrationDepartmentsRequest::GetDeptId() const
{
    return m_deptId;
}

void DescribeIntegrationDepartmentsRequest::SetDeptId(const string& _deptId)
{
    m_deptId = _deptId;
    m_deptIdHasBeenSet = true;
}

bool DescribeIntegrationDepartmentsRequest::DeptIdHasBeenSet() const
{
    return m_deptIdHasBeenSet;
}

string DescribeIntegrationDepartmentsRequest::GetDeptOpenId() const
{
    return m_deptOpenId;
}

void DescribeIntegrationDepartmentsRequest::SetDeptOpenId(const string& _deptOpenId)
{
    m_deptOpenId = _deptOpenId;
    m_deptOpenIdHasBeenSet = true;
}

bool DescribeIntegrationDepartmentsRequest::DeptOpenIdHasBeenSet() const
{
    return m_deptOpenIdHasBeenSet;
}


