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

#include <tencentcloud/iecp/v20210914/model/DescribeEdgeNodePodContainersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeEdgeNodePodContainersRequest::DescribeEdgeNodePodContainersRequest() :
    m_edgeUnitIdHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

string DescribeEdgeNodePodContainersRequest::ToJsonString() const
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

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeEdgeNodePodContainersRequest::GetEdgeUnitId() const
{
    return m_edgeUnitId;
}

void DescribeEdgeNodePodContainersRequest::SetEdgeUnitId(const uint64_t& _edgeUnitId)
{
    m_edgeUnitId = _edgeUnitId;
    m_edgeUnitIdHasBeenSet = true;
}

bool DescribeEdgeNodePodContainersRequest::EdgeUnitIdHasBeenSet() const
{
    return m_edgeUnitIdHasBeenSet;
}

uint64_t DescribeEdgeNodePodContainersRequest::GetNodeId() const
{
    return m_nodeId;
}

void DescribeEdgeNodePodContainersRequest::SetNodeId(const uint64_t& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool DescribeEdgeNodePodContainersRequest::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string DescribeEdgeNodePodContainersRequest::GetPodName() const
{
    return m_podName;
}

void DescribeEdgeNodePodContainersRequest::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool DescribeEdgeNodePodContainersRequest::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string DescribeEdgeNodePodContainersRequest::GetNamespace() const
{
    return m_namespace;
}

void DescribeEdgeNodePodContainersRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool DescribeEdgeNodePodContainersRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}


