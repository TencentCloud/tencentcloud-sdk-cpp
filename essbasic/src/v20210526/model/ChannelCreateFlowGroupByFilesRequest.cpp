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

#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowGroupByFilesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCreateFlowGroupByFilesRequest::ChannelCreateFlowGroupByFilesRequest() :
    m_flowFileInfosHasBeenSet(false),
    m_flowGroupNameHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_approverVerifyTypeHasBeenSet(false),
    m_flowGroupOptionsHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string ChannelCreateFlowGroupByFilesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_flowFileInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowFileInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowFileInfos.begin(); itr != m_flowFileInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_flowGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_approverVerifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverVerifyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_approverVerifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_flowGroupOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowGroupOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_flowGroupOptions.ToJsonObject(d[key.c_str()], allocator);
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


vector<FlowFileInfo> ChannelCreateFlowGroupByFilesRequest::GetFlowFileInfos() const
{
    return m_flowFileInfos;
}

void ChannelCreateFlowGroupByFilesRequest::SetFlowFileInfos(const vector<FlowFileInfo>& _flowFileInfos)
{
    m_flowFileInfos = _flowFileInfos;
    m_flowFileInfosHasBeenSet = true;
}

bool ChannelCreateFlowGroupByFilesRequest::FlowFileInfosHasBeenSet() const
{
    return m_flowFileInfosHasBeenSet;
}

string ChannelCreateFlowGroupByFilesRequest::GetFlowGroupName() const
{
    return m_flowGroupName;
}

void ChannelCreateFlowGroupByFilesRequest::SetFlowGroupName(const string& _flowGroupName)
{
    m_flowGroupName = _flowGroupName;
    m_flowGroupNameHasBeenSet = true;
}

bool ChannelCreateFlowGroupByFilesRequest::FlowGroupNameHasBeenSet() const
{
    return m_flowGroupNameHasBeenSet;
}

Agent ChannelCreateFlowGroupByFilesRequest::GetAgent() const
{
    return m_agent;
}

void ChannelCreateFlowGroupByFilesRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelCreateFlowGroupByFilesRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ChannelCreateFlowGroupByFilesRequest::GetApproverVerifyType() const
{
    return m_approverVerifyType;
}

void ChannelCreateFlowGroupByFilesRequest::SetApproverVerifyType(const string& _approverVerifyType)
{
    m_approverVerifyType = _approverVerifyType;
    m_approverVerifyTypeHasBeenSet = true;
}

bool ChannelCreateFlowGroupByFilesRequest::ApproverVerifyTypeHasBeenSet() const
{
    return m_approverVerifyTypeHasBeenSet;
}

FlowGroupOptions ChannelCreateFlowGroupByFilesRequest::GetFlowGroupOptions() const
{
    return m_flowGroupOptions;
}

void ChannelCreateFlowGroupByFilesRequest::SetFlowGroupOptions(const FlowGroupOptions& _flowGroupOptions)
{
    m_flowGroupOptions = _flowGroupOptions;
    m_flowGroupOptionsHasBeenSet = true;
}

bool ChannelCreateFlowGroupByFilesRequest::FlowGroupOptionsHasBeenSet() const
{
    return m_flowGroupOptionsHasBeenSet;
}

UserInfo ChannelCreateFlowGroupByFilesRequest::GetOperator() const
{
    return m_operator;
}

void ChannelCreateFlowGroupByFilesRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ChannelCreateFlowGroupByFilesRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


