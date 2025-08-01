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

#include <tencentcloud/ess/v20201111/model/CreateBatchContractReviewTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateBatchContractReviewTaskRequest::CreateBatchContractReviewTaskRequest() :
    m_operatorHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_checklistIdHasBeenSet(false),
    m_agentHasBeenSet(false)
{
}

string CreateBatchContractReviewTaskRequest::ToJsonString() const
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

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIds.begin(); itr != m_resourceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policyType, allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_role.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_checklistIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChecklistId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checklistId.c_str(), allocator).Move(), allocator);
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


UserInfo CreateBatchContractReviewTaskRequest::GetOperator() const
{
    return m_operator;
}

void CreateBatchContractReviewTaskRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateBatchContractReviewTaskRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<string> CreateBatchContractReviewTaskRequest::GetResourceIds() const
{
    return m_resourceIds;
}

void CreateBatchContractReviewTaskRequest::SetResourceIds(const vector<string>& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool CreateBatchContractReviewTaskRequest::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

int64_t CreateBatchContractReviewTaskRequest::GetPolicyType() const
{
    return m_policyType;
}

void CreateBatchContractReviewTaskRequest::SetPolicyType(const int64_t& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool CreateBatchContractReviewTaskRequest::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

RiskIdentificationRoleInfo CreateBatchContractReviewTaskRequest::GetRole() const
{
    return m_role;
}

void CreateBatchContractReviewTaskRequest::SetRole(const RiskIdentificationRoleInfo& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool CreateBatchContractReviewTaskRequest::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string CreateBatchContractReviewTaskRequest::GetChecklistId() const
{
    return m_checklistId;
}

void CreateBatchContractReviewTaskRequest::SetChecklistId(const string& _checklistId)
{
    m_checklistId = _checklistId;
    m_checklistIdHasBeenSet = true;
}

bool CreateBatchContractReviewTaskRequest::ChecklistIdHasBeenSet() const
{
    return m_checklistIdHasBeenSet;
}

Agent CreateBatchContractReviewTaskRequest::GetAgent() const
{
    return m_agent;
}

void CreateBatchContractReviewTaskRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateBatchContractReviewTaskRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}


