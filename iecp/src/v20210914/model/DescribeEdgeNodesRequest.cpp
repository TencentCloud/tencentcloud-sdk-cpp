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

#include <tencentcloud/iecp/v20210914/model/DescribeEdgeNodesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeEdgeNodesRequest::DescribeEdgeNodesRequest() :
    m_edgeUnitIdHasBeenSet(false),
    m_namePatternHasBeenSet(false),
    m_nameMatchedListHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_nodeTypeHasBeenSet(false)
{
}

string DescribeEdgeNodesRequest::ToJsonString() const
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

    if (m_namePatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamePattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namePattern.c_str(), allocator).Move(), allocator);
    }

    if (m_nameMatchedListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameMatchedList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nameMatchedList.begin(); itr != m_nameMatchedList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sort.begin(); itr != m_sort.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeEdgeNodesRequest::GetEdgeUnitId() const
{
    return m_edgeUnitId;
}

void DescribeEdgeNodesRequest::SetEdgeUnitId(const uint64_t& _edgeUnitId)
{
    m_edgeUnitId = _edgeUnitId;
    m_edgeUnitIdHasBeenSet = true;
}

bool DescribeEdgeNodesRequest::EdgeUnitIdHasBeenSet() const
{
    return m_edgeUnitIdHasBeenSet;
}

string DescribeEdgeNodesRequest::GetNamePattern() const
{
    return m_namePattern;
}

void DescribeEdgeNodesRequest::SetNamePattern(const string& _namePattern)
{
    m_namePattern = _namePattern;
    m_namePatternHasBeenSet = true;
}

bool DescribeEdgeNodesRequest::NamePatternHasBeenSet() const
{
    return m_namePatternHasBeenSet;
}

vector<string> DescribeEdgeNodesRequest::GetNameMatchedList() const
{
    return m_nameMatchedList;
}

void DescribeEdgeNodesRequest::SetNameMatchedList(const vector<string>& _nameMatchedList)
{
    m_nameMatchedList = _nameMatchedList;
    m_nameMatchedListHasBeenSet = true;
}

bool DescribeEdgeNodesRequest::NameMatchedListHasBeenSet() const
{
    return m_nameMatchedListHasBeenSet;
}

vector<Sort> DescribeEdgeNodesRequest::GetSort() const
{
    return m_sort;
}

void DescribeEdgeNodesRequest::SetSort(const vector<Sort>& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeEdgeNodesRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

uint64_t DescribeEdgeNodesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeEdgeNodesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeEdgeNodesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeEdgeNodesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeEdgeNodesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeEdgeNodesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeEdgeNodesRequest::GetNodeType() const
{
    return m_nodeType;
}

void DescribeEdgeNodesRequest::SetNodeType(const int64_t& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool DescribeEdgeNodesRequest::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}


