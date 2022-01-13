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

#include <tencentcloud/tcb/v20180608/model/SearchClsLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

SearchClsLogRequest::SearchClsLogRequest() :
    m_envIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_useLuceneHasBeenSet(false)
{
}

string SearchClsLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
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

    if (m_queryStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryString";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryString.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sort.c_str(), allocator).Move(), allocator);
    }

    if (m_useLuceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseLucene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_useLucene, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SearchClsLogRequest::GetEnvId() const
{
    return m_envId;
}

void SearchClsLogRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool SearchClsLogRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string SearchClsLogRequest::GetStartTime() const
{
    return m_startTime;
}

void SearchClsLogRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SearchClsLogRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string SearchClsLogRequest::GetEndTime() const
{
    return m_endTime;
}

void SearchClsLogRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SearchClsLogRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string SearchClsLogRequest::GetQueryString() const
{
    return m_queryString;
}

void SearchClsLogRequest::SetQueryString(const string& _queryString)
{
    m_queryString = _queryString;
    m_queryStringHasBeenSet = true;
}

bool SearchClsLogRequest::QueryStringHasBeenSet() const
{
    return m_queryStringHasBeenSet;
}

uint64_t SearchClsLogRequest::GetLimit() const
{
    return m_limit;
}

void SearchClsLogRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool SearchClsLogRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string SearchClsLogRequest::GetContext() const
{
    return m_context;
}

void SearchClsLogRequest::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool SearchClsLogRequest::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

string SearchClsLogRequest::GetSort() const
{
    return m_sort;
}

void SearchClsLogRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool SearchClsLogRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

bool SearchClsLogRequest::GetUseLucene() const
{
    return m_useLucene;
}

void SearchClsLogRequest::SetUseLucene(const bool& _useLucene)
{
    m_useLucene = _useLucene;
    m_useLuceneHasBeenSet = true;
}

bool SearchClsLogRequest::UseLuceneHasBeenSet() const
{
    return m_useLuceneHasBeenSet;
}


