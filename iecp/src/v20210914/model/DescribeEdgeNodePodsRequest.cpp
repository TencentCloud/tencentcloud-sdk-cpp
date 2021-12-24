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

#include <tencentcloud/iecp/v20210914/model/DescribeEdgeNodePodsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeEdgeNodePodsRequest::DescribeEdgeNodePodsRequest() :
    m_edgeUnitIdHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_podNamePatternHasBeenSet(false)
{
}

string DescribeEdgeNodePodsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_edgeUnitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeUnitId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_edgeUnitId, allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeId, allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_podNamePatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodNamePattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_podNamePattern.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeEdgeNodePodsRequest::GetEdgeUnitId() const
{
    return m_edgeUnitId;
}

void DescribeEdgeNodePodsRequest::SetEdgeUnitId(const uint64_t& _edgeUnitId)
{
    m_edgeUnitId = _edgeUnitId;
    m_edgeUnitIdHasBeenSet = true;
}

bool DescribeEdgeNodePodsRequest::EdgeUnitIdHasBeenSet() const
{
    return m_edgeUnitIdHasBeenSet;
}

uint64_t DescribeEdgeNodePodsRequest::GetNodeId() const
{
    return m_nodeId;
}

void DescribeEdgeNodePodsRequest::SetNodeId(const uint64_t& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool DescribeEdgeNodePodsRequest::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string DescribeEdgeNodePodsRequest::GetNamespace() const
{
    return m_namespace;
}

void DescribeEdgeNodePodsRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool DescribeEdgeNodePodsRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string DescribeEdgeNodePodsRequest::GetPodNamePattern() const
{
    return m_podNamePattern;
}

void DescribeEdgeNodePodsRequest::SetPodNamePattern(const string& _podNamePattern)
{
    m_podNamePattern = _podNamePattern;
    m_podNamePatternHasBeenSet = true;
}

bool DescribeEdgeNodePodsRequest::PodNamePatternHasBeenSet() const
{
    return m_podNamePatternHasBeenSet;
}


