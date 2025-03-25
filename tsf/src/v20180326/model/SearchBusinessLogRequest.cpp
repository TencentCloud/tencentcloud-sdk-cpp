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

#include <tencentcloud/tsf/v20180326/model/SearchBusinessLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

SearchBusinessLogRequest::SearchBusinessLogRequest() :
    m_configIdHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_searchWordsHasBeenSet(false),
    m_groupIdsHasBeenSet(false),
    m_searchWordTypeHasBeenSet(false),
    m_batchTypeHasBeenSet(false),
    m_scrollIdHasBeenSet(false),
    m_searchAfterHasBeenSet(false)
{
}

string SearchBusinessLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
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

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderType.c_str(), allocator).Move(), allocator);
    }

    if (m_searchWordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchWords";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_searchWords.begin(); itr != m_searchWords.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_groupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIds.begin(); itr != m_groupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_searchWordTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchWordType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchWordType.c_str(), allocator).Move(), allocator);
    }

    if (m_batchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_batchType.c_str(), allocator).Move(), allocator);
    }

    if (m_scrollIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScrollId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scrollId.c_str(), allocator).Move(), allocator);
    }

    if (m_searchAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchAfter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_searchAfter.begin(); itr != m_searchAfter.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SearchBusinessLogRequest::GetConfigId() const
{
    return m_configId;
}

void SearchBusinessLogRequest::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool SearchBusinessLogRequest::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

vector<string> SearchBusinessLogRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void SearchBusinessLogRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool SearchBusinessLogRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

string SearchBusinessLogRequest::GetStartTime() const
{
    return m_startTime;
}

void SearchBusinessLogRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SearchBusinessLogRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string SearchBusinessLogRequest::GetEndTime() const
{
    return m_endTime;
}

void SearchBusinessLogRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SearchBusinessLogRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t SearchBusinessLogRequest::GetOffset() const
{
    return m_offset;
}

void SearchBusinessLogRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool SearchBusinessLogRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t SearchBusinessLogRequest::GetLimit() const
{
    return m_limit;
}

void SearchBusinessLogRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool SearchBusinessLogRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string SearchBusinessLogRequest::GetOrderBy() const
{
    return m_orderBy;
}

void SearchBusinessLogRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool SearchBusinessLogRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string SearchBusinessLogRequest::GetOrderType() const
{
    return m_orderType;
}

void SearchBusinessLogRequest::SetOrderType(const string& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool SearchBusinessLogRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

vector<string> SearchBusinessLogRequest::GetSearchWords() const
{
    return m_searchWords;
}

void SearchBusinessLogRequest::SetSearchWords(const vector<string>& _searchWords)
{
    m_searchWords = _searchWords;
    m_searchWordsHasBeenSet = true;
}

bool SearchBusinessLogRequest::SearchWordsHasBeenSet() const
{
    return m_searchWordsHasBeenSet;
}

vector<string> SearchBusinessLogRequest::GetGroupIds() const
{
    return m_groupIds;
}

void SearchBusinessLogRequest::SetGroupIds(const vector<string>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool SearchBusinessLogRequest::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

string SearchBusinessLogRequest::GetSearchWordType() const
{
    return m_searchWordType;
}

void SearchBusinessLogRequest::SetSearchWordType(const string& _searchWordType)
{
    m_searchWordType = _searchWordType;
    m_searchWordTypeHasBeenSet = true;
}

bool SearchBusinessLogRequest::SearchWordTypeHasBeenSet() const
{
    return m_searchWordTypeHasBeenSet;
}

string SearchBusinessLogRequest::GetBatchType() const
{
    return m_batchType;
}

void SearchBusinessLogRequest::SetBatchType(const string& _batchType)
{
    m_batchType = _batchType;
    m_batchTypeHasBeenSet = true;
}

bool SearchBusinessLogRequest::BatchTypeHasBeenSet() const
{
    return m_batchTypeHasBeenSet;
}

string SearchBusinessLogRequest::GetScrollId() const
{
    return m_scrollId;
}

void SearchBusinessLogRequest::SetScrollId(const string& _scrollId)
{
    m_scrollId = _scrollId;
    m_scrollIdHasBeenSet = true;
}

bool SearchBusinessLogRequest::ScrollIdHasBeenSet() const
{
    return m_scrollIdHasBeenSet;
}

vector<string> SearchBusinessLogRequest::GetSearchAfter() const
{
    return m_searchAfter;
}

void SearchBusinessLogRequest::SetSearchAfter(const vector<string>& _searchAfter)
{
    m_searchAfter = _searchAfter;
    m_searchAfterHasBeenSet = true;
}

bool SearchBusinessLogRequest::SearchAfterHasBeenSet() const
{
    return m_searchAfterHasBeenSet;
}


