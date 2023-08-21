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

#include <tencentcloud/ess/v20201111/model/CreateIntegrationDepartmentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateIntegrationDepartmentRequest::CreateIntegrationDepartmentRequest() :
    m_operatorHasBeenSet(false),
    m_deptNameHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_parentDeptIdHasBeenSet(false),
    m_parentDeptOpenIdHasBeenSet(false),
    m_deptOpenIdHasBeenSet(false),
    m_orderNoHasBeenSet(false)
{
}

string CreateIntegrationDepartmentRequest::ToJsonString() const
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

    if (m_deptNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeptName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deptName.c_str(), allocator).Move(), allocator);
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

    if (m_parentDeptOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentDeptOpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parentDeptOpenId.c_str(), allocator).Move(), allocator);
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


UserInfo CreateIntegrationDepartmentRequest::GetOperator() const
{
    return m_operator;
}

void CreateIntegrationDepartmentRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateIntegrationDepartmentRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateIntegrationDepartmentRequest::GetDeptName() const
{
    return m_deptName;
}

void CreateIntegrationDepartmentRequest::SetDeptName(const string& _deptName)
{
    m_deptName = _deptName;
    m_deptNameHasBeenSet = true;
}

bool CreateIntegrationDepartmentRequest::DeptNameHasBeenSet() const
{
    return m_deptNameHasBeenSet;
}

Agent CreateIntegrationDepartmentRequest::GetAgent() const
{
    return m_agent;
}

void CreateIntegrationDepartmentRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateIntegrationDepartmentRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string CreateIntegrationDepartmentRequest::GetParentDeptId() const
{
    return m_parentDeptId;
}

void CreateIntegrationDepartmentRequest::SetParentDeptId(const string& _parentDeptId)
{
    m_parentDeptId = _parentDeptId;
    m_parentDeptIdHasBeenSet = true;
}

bool CreateIntegrationDepartmentRequest::ParentDeptIdHasBeenSet() const
{
    return m_parentDeptIdHasBeenSet;
}

string CreateIntegrationDepartmentRequest::GetParentDeptOpenId() const
{
    return m_parentDeptOpenId;
}

void CreateIntegrationDepartmentRequest::SetParentDeptOpenId(const string& _parentDeptOpenId)
{
    m_parentDeptOpenId = _parentDeptOpenId;
    m_parentDeptOpenIdHasBeenSet = true;
}

bool CreateIntegrationDepartmentRequest::ParentDeptOpenIdHasBeenSet() const
{
    return m_parentDeptOpenIdHasBeenSet;
}

string CreateIntegrationDepartmentRequest::GetDeptOpenId() const
{
    return m_deptOpenId;
}

void CreateIntegrationDepartmentRequest::SetDeptOpenId(const string& _deptOpenId)
{
    m_deptOpenId = _deptOpenId;
    m_deptOpenIdHasBeenSet = true;
}

bool CreateIntegrationDepartmentRequest::DeptOpenIdHasBeenSet() const
{
    return m_deptOpenIdHasBeenSet;
}

uint64_t CreateIntegrationDepartmentRequest::GetOrderNo() const
{
    return m_orderNo;
}

void CreateIntegrationDepartmentRequest::SetOrderNo(const uint64_t& _orderNo)
{
    m_orderNo = _orderNo;
    m_orderNoHasBeenSet = true;
}

bool CreateIntegrationDepartmentRequest::OrderNoHasBeenSet() const
{
    return m_orderNoHasBeenSet;
}


