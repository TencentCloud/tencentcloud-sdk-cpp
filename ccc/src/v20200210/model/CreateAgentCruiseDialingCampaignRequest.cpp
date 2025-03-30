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

#include <tencentcloud/ccc/v20200210/model/CreateAgentCruiseDialingCampaignRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

CreateAgentCruiseDialingCampaignRequest::CreateAgentCruiseDialingCampaignRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_concurrencyNumberHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_calleesHasBeenSet(false),
    m_callersHasBeenSet(false),
    m_callOrderHasBeenSet(false),
    m_uUIHasBeenSet(false)
{
}

string CreateAgentCruiseDialingCampaignRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agent.c_str(), allocator).Move(), allocator);
    }

    if (m_concurrencyNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConcurrencyNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_concurrencyNumber, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_calleesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callees";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_callees.begin(); itr != m_callees.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_callersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_callers.begin(); itr != m_callers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_callOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_callOrder, allocator);
    }

    if (m_uUIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUI";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uUI.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateAgentCruiseDialingCampaignRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateAgentCruiseDialingCampaignRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateAgentCruiseDialingCampaignRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string CreateAgentCruiseDialingCampaignRequest::GetName() const
{
    return m_name;
}

void CreateAgentCruiseDialingCampaignRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAgentCruiseDialingCampaignRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateAgentCruiseDialingCampaignRequest::GetAgent() const
{
    return m_agent;
}

void CreateAgentCruiseDialingCampaignRequest::SetAgent(const string& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateAgentCruiseDialingCampaignRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

int64_t CreateAgentCruiseDialingCampaignRequest::GetConcurrencyNumber() const
{
    return m_concurrencyNumber;
}

void CreateAgentCruiseDialingCampaignRequest::SetConcurrencyNumber(const int64_t& _concurrencyNumber)
{
    m_concurrencyNumber = _concurrencyNumber;
    m_concurrencyNumberHasBeenSet = true;
}

bool CreateAgentCruiseDialingCampaignRequest::ConcurrencyNumberHasBeenSet() const
{
    return m_concurrencyNumberHasBeenSet;
}

int64_t CreateAgentCruiseDialingCampaignRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateAgentCruiseDialingCampaignRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateAgentCruiseDialingCampaignRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t CreateAgentCruiseDialingCampaignRequest::GetEndTime() const
{
    return m_endTime;
}

void CreateAgentCruiseDialingCampaignRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreateAgentCruiseDialingCampaignRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> CreateAgentCruiseDialingCampaignRequest::GetCallees() const
{
    return m_callees;
}

void CreateAgentCruiseDialingCampaignRequest::SetCallees(const vector<string>& _callees)
{
    m_callees = _callees;
    m_calleesHasBeenSet = true;
}

bool CreateAgentCruiseDialingCampaignRequest::CalleesHasBeenSet() const
{
    return m_calleesHasBeenSet;
}

vector<string> CreateAgentCruiseDialingCampaignRequest::GetCallers() const
{
    return m_callers;
}

void CreateAgentCruiseDialingCampaignRequest::SetCallers(const vector<string>& _callers)
{
    m_callers = _callers;
    m_callersHasBeenSet = true;
}

bool CreateAgentCruiseDialingCampaignRequest::CallersHasBeenSet() const
{
    return m_callersHasBeenSet;
}

int64_t CreateAgentCruiseDialingCampaignRequest::GetCallOrder() const
{
    return m_callOrder;
}

void CreateAgentCruiseDialingCampaignRequest::SetCallOrder(const int64_t& _callOrder)
{
    m_callOrder = _callOrder;
    m_callOrderHasBeenSet = true;
}

bool CreateAgentCruiseDialingCampaignRequest::CallOrderHasBeenSet() const
{
    return m_callOrderHasBeenSet;
}

string CreateAgentCruiseDialingCampaignRequest::GetUUI() const
{
    return m_uUI;
}

void CreateAgentCruiseDialingCampaignRequest::SetUUI(const string& _uUI)
{
    m_uUI = _uUI;
    m_uUIHasBeenSet = true;
}

bool CreateAgentCruiseDialingCampaignRequest::UUIHasBeenSet() const
{
    return m_uUIHasBeenSet;
}


