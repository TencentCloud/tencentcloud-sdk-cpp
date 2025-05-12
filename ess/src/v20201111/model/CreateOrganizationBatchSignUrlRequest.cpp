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

#include <tencentcloud/ess/v20201111/model/CreateOrganizationBatchSignUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateOrganizationBatchSignUrlRequest::CreateOrganizationBatchSignUrlRequest() :
    m_operatorHasBeenSet(false),
    m_flowIdsHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_recipientIdsHasBeenSet(false),
    m_flowGroupIdHasBeenSet(false)
{
}

string CreateOrganizationBatchSignUrlRequest::ToJsonString() const
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

    if (m_flowIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_flowIds.begin(); itr != m_flowIds.end(); ++itr)
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

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_recipientIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecipientIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recipientIds.begin(); itr != m_recipientIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_flowGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowGroupId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateOrganizationBatchSignUrlRequest::GetOperator() const
{
    return m_operator;
}

void CreateOrganizationBatchSignUrlRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateOrganizationBatchSignUrlRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<string> CreateOrganizationBatchSignUrlRequest::GetFlowIds() const
{
    return m_flowIds;
}

void CreateOrganizationBatchSignUrlRequest::SetFlowIds(const vector<string>& _flowIds)
{
    m_flowIds = _flowIds;
    m_flowIdsHasBeenSet = true;
}

bool CreateOrganizationBatchSignUrlRequest::FlowIdsHasBeenSet() const
{
    return m_flowIdsHasBeenSet;
}

Agent CreateOrganizationBatchSignUrlRequest::GetAgent() const
{
    return m_agent;
}

void CreateOrganizationBatchSignUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateOrganizationBatchSignUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string CreateOrganizationBatchSignUrlRequest::GetUserId() const
{
    return m_userId;
}

void CreateOrganizationBatchSignUrlRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CreateOrganizationBatchSignUrlRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string CreateOrganizationBatchSignUrlRequest::GetName() const
{
    return m_name;
}

void CreateOrganizationBatchSignUrlRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateOrganizationBatchSignUrlRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateOrganizationBatchSignUrlRequest::GetMobile() const
{
    return m_mobile;
}

void CreateOrganizationBatchSignUrlRequest::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool CreateOrganizationBatchSignUrlRequest::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

vector<string> CreateOrganizationBatchSignUrlRequest::GetRecipientIds() const
{
    return m_recipientIds;
}

void CreateOrganizationBatchSignUrlRequest::SetRecipientIds(const vector<string>& _recipientIds)
{
    m_recipientIds = _recipientIds;
    m_recipientIdsHasBeenSet = true;
}

bool CreateOrganizationBatchSignUrlRequest::RecipientIdsHasBeenSet() const
{
    return m_recipientIdsHasBeenSet;
}

string CreateOrganizationBatchSignUrlRequest::GetFlowGroupId() const
{
    return m_flowGroupId;
}

void CreateOrganizationBatchSignUrlRequest::SetFlowGroupId(const string& _flowGroupId)
{
    m_flowGroupId = _flowGroupId;
    m_flowGroupIdHasBeenSet = true;
}

bool CreateOrganizationBatchSignUrlRequest::FlowGroupIdHasBeenSet() const
{
    return m_flowGroupIdHasBeenSet;
}


