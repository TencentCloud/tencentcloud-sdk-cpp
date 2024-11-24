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

#include <tencentcloud/ess/v20201111/model/CreateBatchInitOrganizationUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateBatchInitOrganizationUrlRequest::CreateBatchInitOrganizationUrlRequest() :
    m_operatorHasBeenSet(false),
    m_operateTypesHasBeenSet(false),
    m_organizationIdsHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_authorizedOrganizationIdHasBeenSet(false)
{
}

string CreateBatchInitOrganizationUrlRequest::ToJsonString() const
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

    if (m_operateTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_operateTypes.begin(); itr != m_operateTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_organizationIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_organizationIds.begin(); itr != m_organizationIds.end(); ++itr)
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

    if (m_authorizedOrganizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedOrganizationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authorizedOrganizationId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateBatchInitOrganizationUrlRequest::GetOperator() const
{
    return m_operator;
}

void CreateBatchInitOrganizationUrlRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateBatchInitOrganizationUrlRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<string> CreateBatchInitOrganizationUrlRequest::GetOperateTypes() const
{
    return m_operateTypes;
}

void CreateBatchInitOrganizationUrlRequest::SetOperateTypes(const vector<string>& _operateTypes)
{
    m_operateTypes = _operateTypes;
    m_operateTypesHasBeenSet = true;
}

bool CreateBatchInitOrganizationUrlRequest::OperateTypesHasBeenSet() const
{
    return m_operateTypesHasBeenSet;
}

vector<string> CreateBatchInitOrganizationUrlRequest::GetOrganizationIds() const
{
    return m_organizationIds;
}

void CreateBatchInitOrganizationUrlRequest::SetOrganizationIds(const vector<string>& _organizationIds)
{
    m_organizationIds = _organizationIds;
    m_organizationIdsHasBeenSet = true;
}

bool CreateBatchInitOrganizationUrlRequest::OrganizationIdsHasBeenSet() const
{
    return m_organizationIdsHasBeenSet;
}

Agent CreateBatchInitOrganizationUrlRequest::GetAgent() const
{
    return m_agent;
}

void CreateBatchInitOrganizationUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateBatchInitOrganizationUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string CreateBatchInitOrganizationUrlRequest::GetAuthorizedOrganizationId() const
{
    return m_authorizedOrganizationId;
}

void CreateBatchInitOrganizationUrlRequest::SetAuthorizedOrganizationId(const string& _authorizedOrganizationId)
{
    m_authorizedOrganizationId = _authorizedOrganizationId;
    m_authorizedOrganizationIdHasBeenSet = true;
}

bool CreateBatchInitOrganizationUrlRequest::AuthorizedOrganizationIdHasBeenSet() const
{
    return m_authorizedOrganizationIdHasBeenSet;
}


