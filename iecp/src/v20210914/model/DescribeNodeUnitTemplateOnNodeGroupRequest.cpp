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

#include <tencentcloud/iecp/v20210914/model/DescribeNodeUnitTemplateOnNodeGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeNodeUnitTemplateOnNodeGroupRequest::DescribeNodeUnitTemplateOnNodeGroupRequest() :
    m_edgeUnitIdHasBeenSet(false),
    m_nodeGroupNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_nodeUnitNamePatternHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderHasBeenSet(false)
{
}

string DescribeNodeUnitTemplateOnNodeGroupRequest::ToJsonString() const
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

    if (m_nodeUnitNamePatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeUnitNamePattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeUnitNamePattern.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeNodeUnitTemplateOnNodeGroupRequest::GetEdgeUnitId() const
{
    return m_edgeUnitId;
}

void DescribeNodeUnitTemplateOnNodeGroupRequest::SetEdgeUnitId(const uint64_t& _edgeUnitId)
{
    m_edgeUnitId = _edgeUnitId;
    m_edgeUnitIdHasBeenSet = true;
}

bool DescribeNodeUnitTemplateOnNodeGroupRequest::EdgeUnitIdHasBeenSet() const
{
    return m_edgeUnitIdHasBeenSet;
}

string DescribeNodeUnitTemplateOnNodeGroupRequest::GetNodeGroupName() const
{
    return m_nodeGroupName;
}

void DescribeNodeUnitTemplateOnNodeGroupRequest::SetNodeGroupName(const string& _nodeGroupName)
{
    m_nodeGroupName = _nodeGroupName;
    m_nodeGroupNameHasBeenSet = true;
}

bool DescribeNodeUnitTemplateOnNodeGroupRequest::NodeGroupNameHasBeenSet() const
{
    return m_nodeGroupNameHasBeenSet;
}

string DescribeNodeUnitTemplateOnNodeGroupRequest::GetNamespace() const
{
    return m_namespace;
}

void DescribeNodeUnitTemplateOnNodeGroupRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool DescribeNodeUnitTemplateOnNodeGroupRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string DescribeNodeUnitTemplateOnNodeGroupRequest::GetNodeUnitNamePattern() const
{
    return m_nodeUnitNamePattern;
}

void DescribeNodeUnitTemplateOnNodeGroupRequest::SetNodeUnitNamePattern(const string& _nodeUnitNamePattern)
{
    m_nodeUnitNamePattern = _nodeUnitNamePattern;
    m_nodeUnitNamePatternHasBeenSet = true;
}

bool DescribeNodeUnitTemplateOnNodeGroupRequest::NodeUnitNamePatternHasBeenSet() const
{
    return m_nodeUnitNamePatternHasBeenSet;
}

uint64_t DescribeNodeUnitTemplateOnNodeGroupRequest::GetOffset() const
{
    return m_offset;
}

void DescribeNodeUnitTemplateOnNodeGroupRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeNodeUnitTemplateOnNodeGroupRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeNodeUnitTemplateOnNodeGroupRequest::GetLimit() const
{
    return m_limit;
}

void DescribeNodeUnitTemplateOnNodeGroupRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeNodeUnitTemplateOnNodeGroupRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeNodeUnitTemplateOnNodeGroupRequest::GetOrder() const
{
    return m_order;
}

void DescribeNodeUnitTemplateOnNodeGroupRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeNodeUnitTemplateOnNodeGroupRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}


