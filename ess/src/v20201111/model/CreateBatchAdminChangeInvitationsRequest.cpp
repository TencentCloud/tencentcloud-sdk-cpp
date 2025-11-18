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

#include <tencentcloud/ess/v20201111/model/CreateBatchAdminChangeInvitationsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateBatchAdminChangeInvitationsRequest::CreateBatchAdminChangeInvitationsRequest() :
    m_operatorHasBeenSet(false),
    m_adminChangeInvitationInfosHasBeenSet(false),
    m_agentHasBeenSet(false)
{
}

string CreateBatchAdminChangeInvitationsRequest::ToJsonString() const
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

    if (m_adminChangeInvitationInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminChangeInvitationInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_adminChangeInvitationInfos.begin(); itr != m_adminChangeInvitationInfos.end(); ++itr, ++i)
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateBatchAdminChangeInvitationsRequest::GetOperator() const
{
    return m_operator;
}

void CreateBatchAdminChangeInvitationsRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateBatchAdminChangeInvitationsRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<AdminChangeInvitationInfo> CreateBatchAdminChangeInvitationsRequest::GetAdminChangeInvitationInfos() const
{
    return m_adminChangeInvitationInfos;
}

void CreateBatchAdminChangeInvitationsRequest::SetAdminChangeInvitationInfos(const vector<AdminChangeInvitationInfo>& _adminChangeInvitationInfos)
{
    m_adminChangeInvitationInfos = _adminChangeInvitationInfos;
    m_adminChangeInvitationInfosHasBeenSet = true;
}

bool CreateBatchAdminChangeInvitationsRequest::AdminChangeInvitationInfosHasBeenSet() const
{
    return m_adminChangeInvitationInfosHasBeenSet;
}

Agent CreateBatchAdminChangeInvitationsRequest::GetAgent() const
{
    return m_agent;
}

void CreateBatchAdminChangeInvitationsRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateBatchAdminChangeInvitationsRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}


