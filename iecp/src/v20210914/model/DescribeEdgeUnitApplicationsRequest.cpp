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

#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitApplicationsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeEdgeUnitApplicationsRequest::DescribeEdgeUnitApplicationsRequest() :
    m_edgeUnitIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_namePatternHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

string DescribeEdgeUnitApplicationsRequest::ToJsonString() const
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

    if (m_namePatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamePattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namePattern.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeEdgeUnitApplicationsRequest::GetEdgeUnitId() const
{
    return m_edgeUnitId;
}

void DescribeEdgeUnitApplicationsRequest::SetEdgeUnitId(const uint64_t& _edgeUnitId)
{
    m_edgeUnitId = _edgeUnitId;
    m_edgeUnitIdHasBeenSet = true;
}

bool DescribeEdgeUnitApplicationsRequest::EdgeUnitIdHasBeenSet() const
{
    return m_edgeUnitIdHasBeenSet;
}

uint64_t DescribeEdgeUnitApplicationsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeEdgeUnitApplicationsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeEdgeUnitApplicationsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeEdgeUnitApplicationsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeEdgeUnitApplicationsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeEdgeUnitApplicationsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeEdgeUnitApplicationsRequest::GetNamePattern() const
{
    return m_namePattern;
}

void DescribeEdgeUnitApplicationsRequest::SetNamePattern(const string& _namePattern)
{
    m_namePattern = _namePattern;
    m_namePatternHasBeenSet = true;
}

bool DescribeEdgeUnitApplicationsRequest::NamePatternHasBeenSet() const
{
    return m_namePatternHasBeenSet;
}

vector<FieldSort> DescribeEdgeUnitApplicationsRequest::GetSort() const
{
    return m_sort;
}

void DescribeEdgeUnitApplicationsRequest::SetSort(const vector<FieldSort>& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeEdgeUnitApplicationsRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

string DescribeEdgeUnitApplicationsRequest::GetNamespace() const
{
    return m_namespace;
}

void DescribeEdgeUnitApplicationsRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool DescribeEdgeUnitApplicationsRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}


