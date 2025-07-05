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

#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitGridEventsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeEdgeUnitGridEventsRequest::DescribeEdgeUnitGridEventsRequest() :
    m_edgeUnitIdHasBeenSet(false),
    m_gridNameHasBeenSet(false),
    m_workloadKindHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_nodeUnitHasBeenSet(false),
    m_podNameHasBeenSet(false)
{
}

string DescribeEdgeUnitGridEventsRequest::ToJsonString() const
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

    if (m_gridNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GridName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gridName.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadKind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workloadKind.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeEdgeUnitGridEventsRequest::GetEdgeUnitId() const
{
    return m_edgeUnitId;
}

void DescribeEdgeUnitGridEventsRequest::SetEdgeUnitId(const uint64_t& _edgeUnitId)
{
    m_edgeUnitId = _edgeUnitId;
    m_edgeUnitIdHasBeenSet = true;
}

bool DescribeEdgeUnitGridEventsRequest::EdgeUnitIdHasBeenSet() const
{
    return m_edgeUnitIdHasBeenSet;
}

string DescribeEdgeUnitGridEventsRequest::GetGridName() const
{
    return m_gridName;
}

void DescribeEdgeUnitGridEventsRequest::SetGridName(const string& _gridName)
{
    m_gridName = _gridName;
    m_gridNameHasBeenSet = true;
}

bool DescribeEdgeUnitGridEventsRequest::GridNameHasBeenSet() const
{
    return m_gridNameHasBeenSet;
}

string DescribeEdgeUnitGridEventsRequest::GetWorkloadKind() const
{
    return m_workloadKind;
}

void DescribeEdgeUnitGridEventsRequest::SetWorkloadKind(const string& _workloadKind)
{
    m_workloadKind = _workloadKind;
    m_workloadKindHasBeenSet = true;
}

bool DescribeEdgeUnitGridEventsRequest::WorkloadKindHasBeenSet() const
{
    return m_workloadKindHasBeenSet;
}

string DescribeEdgeUnitGridEventsRequest::GetNamespace() const
{
    return m_namespace;
}

void DescribeEdgeUnitGridEventsRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool DescribeEdgeUnitGridEventsRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string DescribeEdgeUnitGridEventsRequest::GetNodeUnit() const
{
    return m_nodeUnit;
}

void DescribeEdgeUnitGridEventsRequest::SetNodeUnit(const string& _nodeUnit)
{
    m_nodeUnit = _nodeUnit;
    m_nodeUnitHasBeenSet = true;
}

bool DescribeEdgeUnitGridEventsRequest::NodeUnitHasBeenSet() const
{
    return m_nodeUnitHasBeenSet;
}

string DescribeEdgeUnitGridEventsRequest::GetPodName() const
{
    return m_podName;
}

void DescribeEdgeUnitGridEventsRequest::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool DescribeEdgeUnitGridEventsRequest::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}


