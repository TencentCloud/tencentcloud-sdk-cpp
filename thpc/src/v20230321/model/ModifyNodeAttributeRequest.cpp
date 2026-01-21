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

#include <tencentcloud/thpc/v20230321/model/ModifyNodeAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

ModifyNodeAttributeRequest::ModifyNodeAttributeRequest() :
    m_nodeIdHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_nodeAllocateStateHasBeenSet(false),
    m_queueNameHasBeenSet(false)
{
}

string ModifyNodeAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeAllocateStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeAllocateState";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeAllocateState.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyNodeAttributeRequest::GetNodeId() const
{
    return m_nodeId;
}

void ModifyNodeAttributeRequest::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool ModifyNodeAttributeRequest::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string ModifyNodeAttributeRequest::GetNodeName() const
{
    return m_nodeName;
}

void ModifyNodeAttributeRequest::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool ModifyNodeAttributeRequest::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string ModifyNodeAttributeRequest::GetNodeAllocateState() const
{
    return m_nodeAllocateState;
}

void ModifyNodeAttributeRequest::SetNodeAllocateState(const string& _nodeAllocateState)
{
    m_nodeAllocateState = _nodeAllocateState;
    m_nodeAllocateStateHasBeenSet = true;
}

bool ModifyNodeAttributeRequest::NodeAllocateStateHasBeenSet() const
{
    return m_nodeAllocateStateHasBeenSet;
}

string ModifyNodeAttributeRequest::GetQueueName() const
{
    return m_queueName;
}

void ModifyNodeAttributeRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool ModifyNodeAttributeRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}


