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

#include <tencentcloud/tione/v20191022/model/DescribeTrainingJobsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

DescribeTrainingJobsRequest::DescribeTrainingJobsRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_creationTimeAfterHasBeenSet(false),
    m_creationTimeBeforeHasBeenSet(false),
    m_nameContainsHasBeenSet(false),
    m_statusEqualsHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeTrainingJobsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_creationTimeAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTimeAfter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_creationTimeAfter.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeBeforeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTimeBefore";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_creationTimeBefore.c_str(), allocator).Move(), allocator);
    }

    if (m_nameContainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameContains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nameContains.c_str(), allocator).Move(), allocator);
    }

    if (m_statusEqualsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusEquals";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_statusEquals.c_str(), allocator).Move(), allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
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


uint64_t DescribeTrainingJobsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTrainingJobsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTrainingJobsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeTrainingJobsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTrainingJobsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTrainingJobsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeTrainingJobsRequest::GetCreationTimeAfter() const
{
    return m_creationTimeAfter;
}

void DescribeTrainingJobsRequest::SetCreationTimeAfter(const string& _creationTimeAfter)
{
    m_creationTimeAfter = _creationTimeAfter;
    m_creationTimeAfterHasBeenSet = true;
}

bool DescribeTrainingJobsRequest::CreationTimeAfterHasBeenSet() const
{
    return m_creationTimeAfterHasBeenSet;
}

string DescribeTrainingJobsRequest::GetCreationTimeBefore() const
{
    return m_creationTimeBefore;
}

void DescribeTrainingJobsRequest::SetCreationTimeBefore(const string& _creationTimeBefore)
{
    m_creationTimeBefore = _creationTimeBefore;
    m_creationTimeBeforeHasBeenSet = true;
}

bool DescribeTrainingJobsRequest::CreationTimeBeforeHasBeenSet() const
{
    return m_creationTimeBeforeHasBeenSet;
}

string DescribeTrainingJobsRequest::GetNameContains() const
{
    return m_nameContains;
}

void DescribeTrainingJobsRequest::SetNameContains(const string& _nameContains)
{
    m_nameContains = _nameContains;
    m_nameContainsHasBeenSet = true;
}

bool DescribeTrainingJobsRequest::NameContainsHasBeenSet() const
{
    return m_nameContainsHasBeenSet;
}

string DescribeTrainingJobsRequest::GetStatusEquals() const
{
    return m_statusEquals;
}

void DescribeTrainingJobsRequest::SetStatusEquals(const string& _statusEquals)
{
    m_statusEquals = _statusEquals;
    m_statusEqualsHasBeenSet = true;
}

bool DescribeTrainingJobsRequest::StatusEqualsHasBeenSet() const
{
    return m_statusEqualsHasBeenSet;
}

vector<Filter> DescribeTrainingJobsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeTrainingJobsRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeTrainingJobsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


