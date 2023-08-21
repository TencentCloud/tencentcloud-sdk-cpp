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

#include <tencentcloud/ess/v20201111/model/DeleteIntegrationDepartmentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

DeleteIntegrationDepartmentRequest::DeleteIntegrationDepartmentRequest() :
    m_operatorHasBeenSet(false),
    m_deptIdHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_receiveDeptIdHasBeenSet(false)
{
}

string DeleteIntegrationDepartmentRequest::ToJsonString() const
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

    if (m_deptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeptId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deptId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_receiveDeptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiveDeptId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_receiveDeptId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo DeleteIntegrationDepartmentRequest::GetOperator() const
{
    return m_operator;
}

void DeleteIntegrationDepartmentRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DeleteIntegrationDepartmentRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string DeleteIntegrationDepartmentRequest::GetDeptId() const
{
    return m_deptId;
}

void DeleteIntegrationDepartmentRequest::SetDeptId(const string& _deptId)
{
    m_deptId = _deptId;
    m_deptIdHasBeenSet = true;
}

bool DeleteIntegrationDepartmentRequest::DeptIdHasBeenSet() const
{
    return m_deptIdHasBeenSet;
}

Agent DeleteIntegrationDepartmentRequest::GetAgent() const
{
    return m_agent;
}

void DeleteIntegrationDepartmentRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool DeleteIntegrationDepartmentRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string DeleteIntegrationDepartmentRequest::GetReceiveDeptId() const
{
    return m_receiveDeptId;
}

void DeleteIntegrationDepartmentRequest::SetReceiveDeptId(const string& _receiveDeptId)
{
    m_receiveDeptId = _receiveDeptId;
    m_receiveDeptIdHasBeenSet = true;
}

bool DeleteIntegrationDepartmentRequest::ReceiveDeptIdHasBeenSet() const
{
    return m_receiveDeptIdHasBeenSet;
}


