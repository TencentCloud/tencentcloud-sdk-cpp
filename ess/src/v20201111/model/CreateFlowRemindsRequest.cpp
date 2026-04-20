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

#include <tencentcloud/ess/v20201111/model/CreateFlowRemindsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateFlowRemindsRequest::CreateFlowRemindsRequest() :
    m_operatorHasBeenSet(false),
    m_flowIdsHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_remindTypesHasBeenSet(false),
    m_remindEmailInfosHasBeenSet(false)
{
}

string CreateFlowRemindsRequest::ToJsonString() const
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

    if (m_remindTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemindTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_remindTypes.begin(); itr != m_remindTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_remindEmailInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemindEmailInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_remindEmailInfos.begin(); itr != m_remindEmailInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateFlowRemindsRequest::GetOperator() const
{
    return m_operator;
}

void CreateFlowRemindsRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateFlowRemindsRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<string> CreateFlowRemindsRequest::GetFlowIds() const
{
    return m_flowIds;
}

void CreateFlowRemindsRequest::SetFlowIds(const vector<string>& _flowIds)
{
    m_flowIds = _flowIds;
    m_flowIdsHasBeenSet = true;
}

bool CreateFlowRemindsRequest::FlowIdsHasBeenSet() const
{
    return m_flowIdsHasBeenSet;
}

Agent CreateFlowRemindsRequest::GetAgent() const
{
    return m_agent;
}

void CreateFlowRemindsRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateFlowRemindsRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

vector<string> CreateFlowRemindsRequest::GetRemindTypes() const
{
    return m_remindTypes;
}

void CreateFlowRemindsRequest::SetRemindTypes(const vector<string>& _remindTypes)
{
    m_remindTypes = _remindTypes;
    m_remindTypesHasBeenSet = true;
}

bool CreateFlowRemindsRequest::RemindTypesHasBeenSet() const
{
    return m_remindTypesHasBeenSet;
}

vector<RemindEmailInfo> CreateFlowRemindsRequest::GetRemindEmailInfos() const
{
    return m_remindEmailInfos;
}

void CreateFlowRemindsRequest::SetRemindEmailInfos(const vector<RemindEmailInfo>& _remindEmailInfos)
{
    m_remindEmailInfos = _remindEmailInfos;
    m_remindEmailInfosHasBeenSet = true;
}

bool CreateFlowRemindsRequest::RemindEmailInfosHasBeenSet() const
{
    return m_remindEmailInfosHasBeenSet;
}


