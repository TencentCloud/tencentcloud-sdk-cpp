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

#include <tencentcloud/iecp/v20210914/model/DescribeNodeUnitRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeNodeUnitRequest::DescribeNodeUnitRequest() :
    m_edgeUnitIdHasBeenSet(false),
    m_nodeGroupNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_nameFilterHasBeenSet(false)
{
}

string DescribeNodeUnitRequest::ToJsonString() const
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

    if (m_nodeGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_nameFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nameFilter.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeNodeUnitRequest::GetEdgeUnitId() const
{
    return m_edgeUnitId;
}

void DescribeNodeUnitRequest::SetEdgeUnitId(const uint64_t& _edgeUnitId)
{
    m_edgeUnitId = _edgeUnitId;
    m_edgeUnitIdHasBeenSet = true;
}

bool DescribeNodeUnitRequest::EdgeUnitIdHasBeenSet() const
{
    return m_edgeUnitIdHasBeenSet;
}

string DescribeNodeUnitRequest::GetNodeGroupName() const
{
    return m_nodeGroupName;
}

void DescribeNodeUnitRequest::SetNodeGroupName(const string& _nodeGroupName)
{
    m_nodeGroupName = _nodeGroupName;
    m_nodeGroupNameHasBeenSet = true;
}

bool DescribeNodeUnitRequest::NodeGroupNameHasBeenSet() const
{
    return m_nodeGroupNameHasBeenSet;
}

string DescribeNodeUnitRequest::GetNamespace() const
{
    return m_namespace;
}

void DescribeNodeUnitRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool DescribeNodeUnitRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

int64_t DescribeNodeUnitRequest::GetLimit() const
{
    return m_limit;
}

void DescribeNodeUnitRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeNodeUnitRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeNodeUnitRequest::GetOffset() const
{
    return m_offset;
}

void DescribeNodeUnitRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeNodeUnitRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeNodeUnitRequest::GetNameFilter() const
{
    return m_nameFilter;
}

void DescribeNodeUnitRequest::SetNameFilter(const string& _nameFilter)
{
    m_nameFilter = _nameFilter;
    m_nameFilterHasBeenSet = true;
}

bool DescribeNodeUnitRequest::NameFilterHasBeenSet() const
{
    return m_nameFilterHasBeenSet;
}


