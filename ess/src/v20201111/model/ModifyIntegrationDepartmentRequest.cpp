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

#include <tencentcloud/ess/v20201111/model/ModifyIntegrationDepartmentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ModifyIntegrationDepartmentRequest::ModifyIntegrationDepartmentRequest() :
    m_operatorHasBeenSet(false),
    m_deptIdHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_parentDeptIdHasBeenSet(false),
    m_deptNameHasBeenSet(false),
    m_deptOpenIdHasBeenSet(false),
    m_orderNoHasBeenSet(false)
{
}

string ModifyIntegrationDepartmentRequest::ToJsonString() const
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

    if (m_parentDeptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentDeptId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parentDeptId.c_str(), allocator).Move(), allocator);
    }

    if (m_deptNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeptName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deptName.c_str(), allocator).Move(), allocator);
    }

    if (m_deptOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeptOpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deptOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orderNo, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo ModifyIntegrationDepartmentRequest::GetOperator() const
{
    return m_operator;
}

void ModifyIntegrationDepartmentRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ModifyIntegrationDepartmentRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string ModifyIntegrationDepartmentRequest::GetDeptId() const
{
    return m_deptId;
}

void ModifyIntegrationDepartmentRequest::SetDeptId(const string& _deptId)
{
    m_deptId = _deptId;
    m_deptIdHasBeenSet = true;
}

bool ModifyIntegrationDepartmentRequest::DeptIdHasBeenSet() const
{
    return m_deptIdHasBeenSet;
}

Agent ModifyIntegrationDepartmentRequest::GetAgent() const
{
    return m_agent;
}

void ModifyIntegrationDepartmentRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ModifyIntegrationDepartmentRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ModifyIntegrationDepartmentRequest::GetParentDeptId() const
{
    return m_parentDeptId;
}

void ModifyIntegrationDepartmentRequest::SetParentDeptId(const string& _parentDeptId)
{
    m_parentDeptId = _parentDeptId;
    m_parentDeptIdHasBeenSet = true;
}

bool ModifyIntegrationDepartmentRequest::ParentDeptIdHasBeenSet() const
{
    return m_parentDeptIdHasBeenSet;
}

string ModifyIntegrationDepartmentRequest::GetDeptName() const
{
    return m_deptName;
}

void ModifyIntegrationDepartmentRequest::SetDeptName(const string& _deptName)
{
    m_deptName = _deptName;
    m_deptNameHasBeenSet = true;
}

bool ModifyIntegrationDepartmentRequest::DeptNameHasBeenSet() const
{
    return m_deptNameHasBeenSet;
}

string ModifyIntegrationDepartmentRequest::GetDeptOpenId() const
{
    return m_deptOpenId;
}

void ModifyIntegrationDepartmentRequest::SetDeptOpenId(const string& _deptOpenId)
{
    m_deptOpenId = _deptOpenId;
    m_deptOpenIdHasBeenSet = true;
}

bool ModifyIntegrationDepartmentRequest::DeptOpenIdHasBeenSet() const
{
    return m_deptOpenIdHasBeenSet;
}

uint64_t ModifyIntegrationDepartmentRequest::GetOrderNo() const
{
    return m_orderNo;
}

void ModifyIntegrationDepartmentRequest::SetOrderNo(const uint64_t& _orderNo)
{
    m_orderNo = _orderNo;
    m_orderNoHasBeenSet = true;
}

bool ModifyIntegrationDepartmentRequest::OrderNoHasBeenSet() const
{
    return m_orderNoHasBeenSet;
}


