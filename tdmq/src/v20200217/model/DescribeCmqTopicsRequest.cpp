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

#include <tencentcloud/tdmq/v20200217/model/DescribeCmqTopicsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeCmqTopicsRequest::DescribeCmqTopicsRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_topicNameListHasBeenSet(false),
    m_isTagFilterHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeCmqTopicsRequest::ToJsonString() const
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

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_topicNameList.begin(); itr != m_topicNameList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isTagFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTagFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isTagFilter, allocator);
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


uint64_t DescribeCmqTopicsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCmqTopicsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCmqTopicsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeCmqTopicsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCmqTopicsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCmqTopicsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeCmqTopicsRequest::GetTopicName() const
{
    return m_topicName;
}

void DescribeCmqTopicsRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool DescribeCmqTopicsRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

vector<string> DescribeCmqTopicsRequest::GetTopicNameList() const
{
    return m_topicNameList;
}

void DescribeCmqTopicsRequest::SetTopicNameList(const vector<string>& _topicNameList)
{
    m_topicNameList = _topicNameList;
    m_topicNameListHasBeenSet = true;
}

bool DescribeCmqTopicsRequest::TopicNameListHasBeenSet() const
{
    return m_topicNameListHasBeenSet;
}

bool DescribeCmqTopicsRequest::GetIsTagFilter() const
{
    return m_isTagFilter;
}

void DescribeCmqTopicsRequest::SetIsTagFilter(const bool& _isTagFilter)
{
    m_isTagFilter = _isTagFilter;
    m_isTagFilterHasBeenSet = true;
}

bool DescribeCmqTopicsRequest::IsTagFilterHasBeenSet() const
{
    return m_isTagFilterHasBeenSet;
}

vector<Filter> DescribeCmqTopicsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeCmqTopicsRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeCmqTopicsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


