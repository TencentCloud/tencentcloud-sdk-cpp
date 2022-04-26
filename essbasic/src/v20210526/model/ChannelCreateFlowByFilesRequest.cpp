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

#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowByFilesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCreateFlowByFilesRequest::ChannelCreateFlowByFilesRequest() :
    m_agentHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_fileIdsHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_flowDescriptionHasBeenSet(false),
    m_flowTypeHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_flowApproversHasBeenSet(false),
    m_unorderedHasBeenSet(false),
    m_componentsHasBeenSet(false)
{
}

string ChannelCreateFlowByFilesRequest::ToJsonString() const
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

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_fileIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileIds.begin(); itr != m_fileIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deadline, allocator);
    }

    if (m_flowDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_flowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowType.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_flowApproversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowApprovers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowApprovers.begin(); itr != m_flowApprovers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_unorderedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unordered";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_unordered, allocator);
    }

    if (m_componentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Components";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_components.begin(); itr != m_components.end(); ++itr, ++i)
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


Agent ChannelCreateFlowByFilesRequest::GetAgent() const
{
    return m_agent;
}

void ChannelCreateFlowByFilesRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

UserInfo ChannelCreateFlowByFilesRequest::GetOperator() const
{
    return m_operator;
}

void ChannelCreateFlowByFilesRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<string> ChannelCreateFlowByFilesRequest::GetFileIds() const
{
    return m_fileIds;
}

void ChannelCreateFlowByFilesRequest::SetFileIds(const vector<string>& _fileIds)
{
    m_fileIds = _fileIds;
    m_fileIdsHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::FileIdsHasBeenSet() const
{
    return m_fileIdsHasBeenSet;
}

string ChannelCreateFlowByFilesRequest::GetFlowName() const
{
    return m_flowName;
}

void ChannelCreateFlowByFilesRequest::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

int64_t ChannelCreateFlowByFilesRequest::GetDeadline() const
{
    return m_deadline;
}

void ChannelCreateFlowByFilesRequest::SetDeadline(const int64_t& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

string ChannelCreateFlowByFilesRequest::GetFlowDescription() const
{
    return m_flowDescription;
}

void ChannelCreateFlowByFilesRequest::SetFlowDescription(const string& _flowDescription)
{
    m_flowDescription = _flowDescription;
    m_flowDescriptionHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::FlowDescriptionHasBeenSet() const
{
    return m_flowDescriptionHasBeenSet;
}

string ChannelCreateFlowByFilesRequest::GetFlowType() const
{
    return m_flowType;
}

void ChannelCreateFlowByFilesRequest::SetFlowType(const string& _flowType)
{
    m_flowType = _flowType;
    m_flowTypeHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::FlowTypeHasBeenSet() const
{
    return m_flowTypeHasBeenSet;
}

string ChannelCreateFlowByFilesRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void ChannelCreateFlowByFilesRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

vector<FlowApproverInfo> ChannelCreateFlowByFilesRequest::GetFlowApprovers() const
{
    return m_flowApprovers;
}

void ChannelCreateFlowByFilesRequest::SetFlowApprovers(const vector<FlowApproverInfo>& _flowApprovers)
{
    m_flowApprovers = _flowApprovers;
    m_flowApproversHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::FlowApproversHasBeenSet() const
{
    return m_flowApproversHasBeenSet;
}

bool ChannelCreateFlowByFilesRequest::GetUnordered() const
{
    return m_unordered;
}

void ChannelCreateFlowByFilesRequest::SetUnordered(const bool& _unordered)
{
    m_unordered = _unordered;
    m_unorderedHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::UnorderedHasBeenSet() const
{
    return m_unorderedHasBeenSet;
}

vector<Component> ChannelCreateFlowByFilesRequest::GetComponents() const
{
    return m_components;
}

void ChannelCreateFlowByFilesRequest::SetComponents(const vector<Component>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}


