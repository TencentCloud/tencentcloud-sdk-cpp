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

#include <tencentcloud/essbasic/v20210526/model/DescribeFlowDetailInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

DescribeFlowDetailInfoRequest::DescribeFlowDetailInfoRequest() :
    m_agentHasBeenSet(false),
    m_flowIdsHasBeenSet(false),
    m_flowGroupIdHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string DescribeFlowDetailInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_flowGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent DescribeFlowDetailInfoRequest::GetAgent() const
{
    return m_agent;
}

void DescribeFlowDetailInfoRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool DescribeFlowDetailInfoRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

vector<string> DescribeFlowDetailInfoRequest::GetFlowIds() const
{
    return m_flowIds;
}

void DescribeFlowDetailInfoRequest::SetFlowIds(const vector<string>& _flowIds)
{
    m_flowIds = _flowIds;
    m_flowIdsHasBeenSet = true;
}

bool DescribeFlowDetailInfoRequest::FlowIdsHasBeenSet() const
{
    return m_flowIdsHasBeenSet;
}

string DescribeFlowDetailInfoRequest::GetFlowGroupId() const
{
    return m_flowGroupId;
}

void DescribeFlowDetailInfoRequest::SetFlowGroupId(const string& _flowGroupId)
{
    m_flowGroupId = _flowGroupId;
    m_flowGroupIdHasBeenSet = true;
}

bool DescribeFlowDetailInfoRequest::FlowGroupIdHasBeenSet() const
{
    return m_flowGroupIdHasBeenSet;
}

UserInfo DescribeFlowDetailInfoRequest::GetOperator() const
{
    return m_operator;
}

void DescribeFlowDetailInfoRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DescribeFlowDetailInfoRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


