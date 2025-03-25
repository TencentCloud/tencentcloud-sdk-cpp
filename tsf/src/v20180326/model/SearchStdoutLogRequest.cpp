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

#include <tencentcloud/tsf/v20180326/model/SearchStdoutLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

SearchStdoutLogRequest::SearchStdoutLogRequest() :
    m_instanceIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_searchWordsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_searchWordTypeHasBeenSet(false),
    m_batchTypeHasBeenSet(false),
    m_scrollIdHasBeenSet(false),
    m_searchAfterHasBeenSet(false)
{
}

string SearchStdoutLogRequest::ToJsonString() const
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

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
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


string SearchStdoutLogRequest::GetInstanceId() const
{
    return m_instanceId;
}

void SearchStdoutLogRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SearchStdoutLogRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t SearchStdoutLogRequest::GetLimit() const
{
    return m_limit;
}

void SearchStdoutLogRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool SearchStdoutLogRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> SearchStdoutLogRequest::GetSearchWords() const
{
    return m_searchWords;
}

void SearchStdoutLogRequest::SetSearchWords(const vector<string>& _searchWords)
{
    m_searchWords = _searchWords;
    m_searchWordsHasBeenSet = true;
}

bool SearchStdoutLogRequest::SearchWordsHasBeenSet() const
{
    return m_searchWordsHasBeenSet;
}

string SearchStdoutLogRequest::GetStartTime() const
{
    return m_startTime;
}

void SearchStdoutLogRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SearchStdoutLogRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string SearchStdoutLogRequest::GetGroupId() const
{
    return m_groupId;
}

void SearchStdoutLogRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool SearchStdoutLogRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string SearchStdoutLogRequest::GetEndTime() const
{
    return m_endTime;
}

void SearchStdoutLogRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SearchStdoutLogRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t SearchStdoutLogRequest::GetOffset() const
{
    return m_offset;
}

void SearchStdoutLogRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool SearchStdoutLogRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string SearchStdoutLogRequest::GetOrderBy() const
{
    return m_orderBy;
}

void SearchStdoutLogRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool SearchStdoutLogRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string SearchStdoutLogRequest::GetOrderType() const
{
    return m_orderType;
}

void SearchStdoutLogRequest::SetOrderType(const string& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool SearchStdoutLogRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

string SearchStdoutLogRequest::GetSearchWordType() const
{
    return m_searchWordType;
}

void SearchStdoutLogRequest::SetSearchWordType(const string& _searchWordType)
{
    m_searchWordType = _searchWordType;
    m_searchWordTypeHasBeenSet = true;
}

bool SearchStdoutLogRequest::SearchWordTypeHasBeenSet() const
{
    return m_searchWordTypeHasBeenSet;
}

string SearchStdoutLogRequest::GetBatchType() const
{
    return m_batchType;
}

void SearchStdoutLogRequest::SetBatchType(const string& _batchType)
{
    m_batchType = _batchType;
    m_batchTypeHasBeenSet = true;
}

bool SearchStdoutLogRequest::BatchTypeHasBeenSet() const
{
    return m_batchTypeHasBeenSet;
}

string SearchStdoutLogRequest::GetScrollId() const
{
    return m_scrollId;
}

void SearchStdoutLogRequest::SetScrollId(const string& _scrollId)
{
    m_scrollId = _scrollId;
    m_scrollIdHasBeenSet = true;
}

bool SearchStdoutLogRequest::ScrollIdHasBeenSet() const
{
    return m_scrollIdHasBeenSet;
}

vector<string> SearchStdoutLogRequest::GetSearchAfter() const
{
    return m_searchAfter;
}

void SearchStdoutLogRequest::SetSearchAfter(const vector<string>& _searchAfter)
{
    m_searchAfter = _searchAfter;
    m_searchAfterHasBeenSet = true;
}

bool SearchStdoutLogRequest::SearchAfterHasBeenSet() const
{
    return m_searchAfterHasBeenSet;
}


