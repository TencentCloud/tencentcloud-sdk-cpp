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

#include <tencentcloud/cat/v20180409/model/DescribeNodesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

DescribeNodesRequest::DescribeNodesRequest() :
    m_nodeTypeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_isIPv6HasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_taskTypeHasBeenSet(false)
{
}

string DescribeNodesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeType, allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_location, allocator);
    }

    if (m_isIPv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIPv6";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isIPv6, allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeNodesRequest::GetNodeType() const
{
    return m_nodeType;
}

void DescribeNodesRequest::SetNodeType(const int64_t& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool DescribeNodesRequest::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

int64_t DescribeNodesRequest::GetLocation() const
{
    return m_location;
}

void DescribeNodesRequest::SetLocation(const int64_t& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool DescribeNodesRequest::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

bool DescribeNodesRequest::GetIsIPv6() const
{
    return m_isIPv6;
}

void DescribeNodesRequest::SetIsIPv6(const bool& _isIPv6)
{
    m_isIPv6 = _isIPv6;
    m_isIPv6HasBeenSet = true;
}

bool DescribeNodesRequest::IsIPv6HasBeenSet() const
{
    return m_isIPv6HasBeenSet;
}

string DescribeNodesRequest::GetNodeName() const
{
    return m_nodeName;
}

void DescribeNodesRequest::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool DescribeNodesRequest::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

int64_t DescribeNodesRequest::GetPayMode() const
{
    return m_payMode;
}

void DescribeNodesRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool DescribeNodesRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t DescribeNodesRequest::GetTaskType() const
{
    return m_taskType;
}

void DescribeNodesRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool DescribeNodesRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}


