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

#include <tencentcloud/tdmq/v20200217/model/DescribeCmqQueuesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeCmqQueuesRequest::DescribeCmqQueuesRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_queueNameListHasBeenSet(false),
    m_isTagFilterHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeCmqQueuesRequest::ToJsonString() const
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

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_queueNameList.begin(); itr != m_queueNameList.end(); ++itr)
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


uint64_t DescribeCmqQueuesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCmqQueuesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCmqQueuesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeCmqQueuesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCmqQueuesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCmqQueuesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeCmqQueuesRequest::GetQueueName() const
{
    return m_queueName;
}

void DescribeCmqQueuesRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool DescribeCmqQueuesRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

vector<string> DescribeCmqQueuesRequest::GetQueueNameList() const
{
    return m_queueNameList;
}

void DescribeCmqQueuesRequest::SetQueueNameList(const vector<string>& _queueNameList)
{
    m_queueNameList = _queueNameList;
    m_queueNameListHasBeenSet = true;
}

bool DescribeCmqQueuesRequest::QueueNameListHasBeenSet() const
{
    return m_queueNameListHasBeenSet;
}

bool DescribeCmqQueuesRequest::GetIsTagFilter() const
{
    return m_isTagFilter;
}

void DescribeCmqQueuesRequest::SetIsTagFilter(const bool& _isTagFilter)
{
    m_isTagFilter = _isTagFilter;
    m_isTagFilterHasBeenSet = true;
}

bool DescribeCmqQueuesRequest::IsTagFilterHasBeenSet() const
{
    return m_isTagFilterHasBeenSet;
}

vector<Filter> DescribeCmqQueuesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeCmqQueuesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeCmqQueuesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


