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

#include <tencentcloud/ess/v20201111/model/ModifySingleSignOnEmployeesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ModifySingleSignOnEmployeesRequest::ModifySingleSignOnEmployeesRequest() :
    m_operatorHasBeenSet(false),
    m_ssoApplicationIdHasBeenSet(false),
    m_employeeHasBeenSet(false),
    m_agentHasBeenSet(false)
{
}

string ModifySingleSignOnEmployeesRequest::ToJsonString() const
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

    if (m_employeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Employee";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_employee.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo ModifySingleSignOnEmployeesRequest::GetOperator() const
{
    return m_operator;
}

void ModifySingleSignOnEmployeesRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ModifySingleSignOnEmployeesRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string ModifySingleSignOnEmployeesRequest::GetSsoApplicationId() const
{
    return m_ssoApplicationId;
}

void ModifySingleSignOnEmployeesRequest::SetSsoApplicationId(const string& _ssoApplicationId)
{
    m_ssoApplicationId = _ssoApplicationId;
    m_ssoApplicationIdHasBeenSet = true;
}

bool ModifySingleSignOnEmployeesRequest::SsoApplicationIdHasBeenSet() const
{
    return m_ssoApplicationIdHasBeenSet;
}

SingleSignOnEmployees ModifySingleSignOnEmployeesRequest::GetEmployee() const
{
    return m_employee;
}

void ModifySingleSignOnEmployeesRequest::SetEmployee(const SingleSignOnEmployees& _employee)
{
    m_employee = _employee;
    m_employeeHasBeenSet = true;
}

bool ModifySingleSignOnEmployeesRequest::EmployeeHasBeenSet() const
{
    return m_employeeHasBeenSet;
}

Agent ModifySingleSignOnEmployeesRequest::GetAgent() const
{
    return m_agent;
}

void ModifySingleSignOnEmployeesRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ModifySingleSignOnEmployeesRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}


