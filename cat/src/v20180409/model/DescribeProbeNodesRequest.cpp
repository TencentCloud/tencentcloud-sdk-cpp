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

#include <tencentcloud/cat/v20180409/model/DescribeProbeNodesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

DescribeProbeNodesRequest::DescribeProbeNodesRequest() :
    m_nodeTypeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_isIPv6HasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_payModeHasBeenSet(false)
{
}

string DescribeProbeNodesRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeProbeNodesRequest::GetNodeType() const
{
    return m_nodeType;
}

void DescribeProbeNodesRequest::SetNodeType(const int64_t& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool DescribeProbeNodesRequest::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

int64_t DescribeProbeNodesRequest::GetLocation() const
{
    return m_location;
}

void DescribeProbeNodesRequest::SetLocation(const int64_t& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool DescribeProbeNodesRequest::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

bool DescribeProbeNodesRequest::GetIsIPv6() const
{
    return m_isIPv6;
}

void DescribeProbeNodesRequest::SetIsIPv6(const bool& _isIPv6)
{
    m_isIPv6 = _isIPv6;
    m_isIPv6HasBeenSet = true;
}

bool DescribeProbeNodesRequest::IsIPv6HasBeenSet() const
{
    return m_isIPv6HasBeenSet;
}

string DescribeProbeNodesRequest::GetNodeName() const
{
    return m_nodeName;
}

void DescribeProbeNodesRequest::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool DescribeProbeNodesRequest::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

int64_t DescribeProbeNodesRequest::GetPayMode() const
{
    return m_payMode;
}

void DescribeProbeNodesRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool DescribeProbeNodesRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}


