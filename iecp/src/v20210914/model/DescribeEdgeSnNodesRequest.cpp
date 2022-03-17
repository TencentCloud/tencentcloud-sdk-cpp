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

#include <tencentcloud/iecp/v20210914/model/DescribeEdgeSnNodesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeEdgeSnNodesRequest::DescribeEdgeSnNodesRequest() :
    m_edgeUnitIdHasBeenSet(false),
    m_namePatternHasBeenSet(false),
    m_sNPatternHasBeenSet(false),
    m_remarkPatternHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeEdgeSnNodesRequest::ToJsonString() const
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

    if (m_sNPatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SNPattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sNPattern.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkPatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemarkPattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remarkPattern.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeEdgeSnNodesRequest::GetEdgeUnitId() const
{
    return m_edgeUnitId;
}

void DescribeEdgeSnNodesRequest::SetEdgeUnitId(const uint64_t& _edgeUnitId)
{
    m_edgeUnitId = _edgeUnitId;
    m_edgeUnitIdHasBeenSet = true;
}

bool DescribeEdgeSnNodesRequest::EdgeUnitIdHasBeenSet() const
{
    return m_edgeUnitIdHasBeenSet;
}

string DescribeEdgeSnNodesRequest::GetNamePattern() const
{
    return m_namePattern;
}

void DescribeEdgeSnNodesRequest::SetNamePattern(const string& _namePattern)
{
    m_namePattern = _namePattern;
    m_namePatternHasBeenSet = true;
}

bool DescribeEdgeSnNodesRequest::NamePatternHasBeenSet() const
{
    return m_namePatternHasBeenSet;
}

string DescribeEdgeSnNodesRequest::GetSNPattern() const
{
    return m_sNPattern;
}

void DescribeEdgeSnNodesRequest::SetSNPattern(const string& _sNPattern)
{
    m_sNPattern = _sNPattern;
    m_sNPatternHasBeenSet = true;
}

bool DescribeEdgeSnNodesRequest::SNPatternHasBeenSet() const
{
    return m_sNPatternHasBeenSet;
}

string DescribeEdgeSnNodesRequest::GetRemarkPattern() const
{
    return m_remarkPattern;
}

void DescribeEdgeSnNodesRequest::SetRemarkPattern(const string& _remarkPattern)
{
    m_remarkPattern = _remarkPattern;
    m_remarkPatternHasBeenSet = true;
}

bool DescribeEdgeSnNodesRequest::RemarkPatternHasBeenSet() const
{
    return m_remarkPatternHasBeenSet;
}

uint64_t DescribeEdgeSnNodesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeEdgeSnNodesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeEdgeSnNodesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeEdgeSnNodesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeEdgeSnNodesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeEdgeSnNodesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


