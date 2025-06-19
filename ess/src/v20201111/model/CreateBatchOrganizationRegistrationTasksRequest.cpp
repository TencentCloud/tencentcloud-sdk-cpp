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

#include <tencentcloud/ess/v20201111/model/CreateBatchOrganizationRegistrationTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateBatchOrganizationRegistrationTasksRequest::CreateBatchOrganizationRegistrationTasksRequest() :
    m_operatorHasBeenSet(false),
    m_registrationOrganizationsHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_batchAuthMethodHasBeenSet(false)
{
}

string CreateBatchOrganizationRegistrationTasksRequest::ToJsonString() const
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

    if (m_registrationOrganizationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrationOrganizations";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_registrationOrganizations.begin(); itr != m_registrationOrganizations.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
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

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_batchAuthMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchAuthMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_batchAuthMethod, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateBatchOrganizationRegistrationTasksRequest::GetOperator() const
{
    return m_operator;
}

void CreateBatchOrganizationRegistrationTasksRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateBatchOrganizationRegistrationTasksRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<RegistrationOrganizationInfo> CreateBatchOrganizationRegistrationTasksRequest::GetRegistrationOrganizations() const
{
    return m_registrationOrganizations;
}

void CreateBatchOrganizationRegistrationTasksRequest::SetRegistrationOrganizations(const vector<RegistrationOrganizationInfo>& _registrationOrganizations)
{
    m_registrationOrganizations = _registrationOrganizations;
    m_registrationOrganizationsHasBeenSet = true;
}

bool CreateBatchOrganizationRegistrationTasksRequest::RegistrationOrganizationsHasBeenSet() const
{
    return m_registrationOrganizationsHasBeenSet;
}

Agent CreateBatchOrganizationRegistrationTasksRequest::GetAgent() const
{
    return m_agent;
}

void CreateBatchOrganizationRegistrationTasksRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateBatchOrganizationRegistrationTasksRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string CreateBatchOrganizationRegistrationTasksRequest::GetEndpoint() const
{
    return m_endpoint;
}

void CreateBatchOrganizationRegistrationTasksRequest::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool CreateBatchOrganizationRegistrationTasksRequest::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

uint64_t CreateBatchOrganizationRegistrationTasksRequest::GetBatchAuthMethod() const
{
    return m_batchAuthMethod;
}

void CreateBatchOrganizationRegistrationTasksRequest::SetBatchAuthMethod(const uint64_t& _batchAuthMethod)
{
    m_batchAuthMethod = _batchAuthMethod;
    m_batchAuthMethodHasBeenSet = true;
}

bool CreateBatchOrganizationRegistrationTasksRequest::BatchAuthMethodHasBeenSet() const
{
    return m_batchAuthMethodHasBeenSet;
}


