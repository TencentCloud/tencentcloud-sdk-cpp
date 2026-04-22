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

#include <tencentcloud/ess/v20201111/model/OperateFlowRemarksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

OperateFlowRemarksRequest::OperateFlowRemarksRequest() :
    m_operatorHasBeenSet(false),
    m_operateTypeHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_flowGroupIdHasBeenSet(false),
    m_flowItemHasBeenSet(false),
    m_flowItemsHasBeenSet(false)
{
}

string OperateFlowRemarksRequest::ToJsonString() const
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

    if (m_operateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operateType.c_str(), allocator).Move(), allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_flowGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowItem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_flowItem.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_flowItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_flowItems.begin(); itr != m_flowItems.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo OperateFlowRemarksRequest::GetOperator() const
{
    return m_operator;
}

void OperateFlowRemarksRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool OperateFlowRemarksRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string OperateFlowRemarksRequest::GetOperateType() const
{
    return m_operateType;
}

void OperateFlowRemarksRequest::SetOperateType(const string& _operateType)
{
    m_operateType = _operateType;
    m_operateTypeHasBeenSet = true;
}

bool OperateFlowRemarksRequest::OperateTypeHasBeenSet() const
{
    return m_operateTypeHasBeenSet;
}

string OperateFlowRemarksRequest::GetFlowId() const
{
    return m_flowId;
}

void OperateFlowRemarksRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool OperateFlowRemarksRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

Agent OperateFlowRemarksRequest::GetAgent() const
{
    return m_agent;
}

void OperateFlowRemarksRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool OperateFlowRemarksRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string OperateFlowRemarksRequest::GetFlowGroupId() const
{
    return m_flowGroupId;
}

void OperateFlowRemarksRequest::SetFlowGroupId(const string& _flowGroupId)
{
    m_flowGroupId = _flowGroupId;
    m_flowGroupIdHasBeenSet = true;
}

bool OperateFlowRemarksRequest::FlowGroupIdHasBeenSet() const
{
    return m_flowGroupIdHasBeenSet;
}

FlowRemarkItem OperateFlowRemarksRequest::GetFlowItem() const
{
    return m_flowItem;
}

void OperateFlowRemarksRequest::SetFlowItem(const FlowRemarkItem& _flowItem)
{
    m_flowItem = _flowItem;
    m_flowItemHasBeenSet = true;
}

bool OperateFlowRemarksRequest::FlowItemHasBeenSet() const
{
    return m_flowItemHasBeenSet;
}

vector<string> OperateFlowRemarksRequest::GetFlowItems() const
{
    return m_flowItems;
}

void OperateFlowRemarksRequest::SetFlowItems(const vector<string>& _flowItems)
{
    m_flowItems = _flowItems;
    m_flowItemsHasBeenSet = true;
}

bool OperateFlowRemarksRequest::FlowItemsHasBeenSet() const
{
    return m_flowItemsHasBeenSet;
}


