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

#include <tencentcloud/essbasic/v20210526/model/ChannelCreateDynamicFlowApproverRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCreateDynamicFlowApproverRequest::ChannelCreateDynamicFlowApproverRequest() :
    m_fillDynamicFlowListHasBeenSet(false),
    m_agentHasBeenSet(false)
{
}

string ChannelCreateDynamicFlowApproverRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fillDynamicFlowListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FillDynamicFlowList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fillDynamicFlowList.begin(); itr != m_fillDynamicFlowList.end(); ++itr, ++i)
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


vector<DynamicFlowInfo> ChannelCreateDynamicFlowApproverRequest::GetFillDynamicFlowList() const
{
    return m_fillDynamicFlowList;
}

void ChannelCreateDynamicFlowApproverRequest::SetFillDynamicFlowList(const vector<DynamicFlowInfo>& _fillDynamicFlowList)
{
    m_fillDynamicFlowList = _fillDynamicFlowList;
    m_fillDynamicFlowListHasBeenSet = true;
}

bool ChannelCreateDynamicFlowApproverRequest::FillDynamicFlowListHasBeenSet() const
{
    return m_fillDynamicFlowListHasBeenSet;
}

Agent ChannelCreateDynamicFlowApproverRequest::GetAgent() const
{
    return m_agent;
}

void ChannelCreateDynamicFlowApproverRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelCreateDynamicFlowApproverRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}


