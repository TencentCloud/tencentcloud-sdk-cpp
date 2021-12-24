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

#include <tencentcloud/iecp/v20210914/model/DescribeApplicationsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeApplicationsRequest::DescribeApplicationsRequest() :
    m_namePatternHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_sortHasBeenSet(false)
{
}

string DescribeApplicationsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_namePatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamePattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namePattern.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeApplicationsRequest::GetNamePattern() const
{
    return m_namePattern;
}

void DescribeApplicationsRequest::SetNamePattern(const string& _namePattern)
{
    m_namePattern = _namePattern;
    m_namePatternHasBeenSet = true;
}

bool DescribeApplicationsRequest::NamePatternHasBeenSet() const
{
    return m_namePatternHasBeenSet;
}

uint64_t DescribeApplicationsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeApplicationsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeApplicationsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeApplicationsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeApplicationsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeApplicationsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<FieldSort> DescribeApplicationsRequest::GetSort() const
{
    return m_sort;
}

void DescribeApplicationsRequest::SetSort(const vector<FieldSort>& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeApplicationsRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}


