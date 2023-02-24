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

#include <tencentcloud/ckafka/v20190819/model/DescribeInstancesDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

DescribeInstancesDetailRequest::DescribeInstancesDetailRequest() :
    m_instanceIdHasBeenSet(false),
    m_searchWordHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_tagKeyHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_instanceIdListHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

string DescribeInstancesDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_searchWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchWord.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_status.begin(); itr != m_status.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
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

    if (m_tagKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tagKey.c_str(), allocator).Move(), allocator);
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

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceIds.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIdList.begin(); itr != m_instanceIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
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


string DescribeInstancesDetailRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeInstancesDetailRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeInstancesDetailRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeInstancesDetailRequest::GetSearchWord() const
{
    return m_searchWord;
}

void DescribeInstancesDetailRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool DescribeInstancesDetailRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}

vector<int64_t> DescribeInstancesDetailRequest::GetStatus() const
{
    return m_status;
}

void DescribeInstancesDetailRequest::SetStatus(const vector<int64_t>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeInstancesDetailRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeInstancesDetailRequest::GetOffset() const
{
    return m_offset;
}

void DescribeInstancesDetailRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeInstancesDetailRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeInstancesDetailRequest::GetLimit() const
{
    return m_limit;
}

void DescribeInstancesDetailRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeInstancesDetailRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeInstancesDetailRequest::GetTagKey() const
{
    return m_tagKey;
}

void DescribeInstancesDetailRequest::SetTagKey(const string& _tagKey)
{
    m_tagKey = _tagKey;
    m_tagKeyHasBeenSet = true;
}

bool DescribeInstancesDetailRequest::TagKeyHasBeenSet() const
{
    return m_tagKeyHasBeenSet;
}

vector<Filter> DescribeInstancesDetailRequest::GetFilters() const
{
    return m_filters;
}

void DescribeInstancesDetailRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeInstancesDetailRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeInstancesDetailRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void DescribeInstancesDetailRequest::SetInstanceIds(const string& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DescribeInstancesDetailRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

vector<string> DescribeInstancesDetailRequest::GetInstanceIdList() const
{
    return m_instanceIdList;
}

void DescribeInstancesDetailRequest::SetInstanceIdList(const vector<string>& _instanceIdList)
{
    m_instanceIdList = _instanceIdList;
    m_instanceIdListHasBeenSet = true;
}

bool DescribeInstancesDetailRequest::InstanceIdListHasBeenSet() const
{
    return m_instanceIdListHasBeenSet;
}

vector<Tag> DescribeInstancesDetailRequest::GetTagList() const
{
    return m_tagList;
}

void DescribeInstancesDetailRequest::SetTagList(const vector<Tag>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool DescribeInstancesDetailRequest::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}


