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

#include <tencentcloud/cls/v20201016/model/QueryRangeMetricRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

QueryRangeMetricRequest::QueryRangeMetricRequest() :
    m_topicIdHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_startHasBeenSet(false),
    m_endHasBeenSet(false),
    m_stepHasBeenSet(false)
{
}

string QueryRangeMetricRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_startHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Start";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_start, allocator);
    }

    if (m_endHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "End";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_end, allocator);
    }

    if (m_stepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Step";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_step, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryRangeMetricRequest::GetTopicId() const
{
    return m_topicId;
}

void QueryRangeMetricRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool QueryRangeMetricRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string QueryRangeMetricRequest::GetQuery() const
{
    return m_query;
}

void QueryRangeMetricRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool QueryRangeMetricRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

uint64_t QueryRangeMetricRequest::GetStart() const
{
    return m_start;
}

void QueryRangeMetricRequest::SetStart(const uint64_t& _start)
{
    m_start = _start;
    m_startHasBeenSet = true;
}

bool QueryRangeMetricRequest::StartHasBeenSet() const
{
    return m_startHasBeenSet;
}

uint64_t QueryRangeMetricRequest::GetEnd() const
{
    return m_end;
}

void QueryRangeMetricRequest::SetEnd(const uint64_t& _end)
{
    m_end = _end;
    m_endHasBeenSet = true;
}

bool QueryRangeMetricRequest::EndHasBeenSet() const
{
    return m_endHasBeenSet;
}

uint64_t QueryRangeMetricRequest::GetStep() const
{
    return m_step;
}

void QueryRangeMetricRequest::SetStep(const uint64_t& _step)
{
    m_step = _step;
    m_stepHasBeenSet = true;
}

bool QueryRangeMetricRequest::StepHasBeenSet() const
{
    return m_stepHasBeenSet;
}


