/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cls/v20201016/model/GetMetricLabelValuesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

GetMetricLabelValuesRequest::GetMetricLabelValuesRequest() :
    m_topicIdHasBeenSet(false),
    m_labelNameHasBeenSet(false),
    m_startHasBeenSet(false),
    m_endHasBeenSet(false),
    m_matchHasBeenSet(false)
{
}

string GetMetricLabelValuesRequest::ToJsonString() const
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

    if (m_labelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_labelName.c_str(), allocator).Move(), allocator);
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

    if (m_matchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Match";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_match.begin(); itr != m_match.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetMetricLabelValuesRequest::GetTopicId() const
{
    return m_topicId;
}

void GetMetricLabelValuesRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool GetMetricLabelValuesRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string GetMetricLabelValuesRequest::GetLabelName() const
{
    return m_labelName;
}

void GetMetricLabelValuesRequest::SetLabelName(const string& _labelName)
{
    m_labelName = _labelName;
    m_labelNameHasBeenSet = true;
}

bool GetMetricLabelValuesRequest::LabelNameHasBeenSet() const
{
    return m_labelNameHasBeenSet;
}

uint64_t GetMetricLabelValuesRequest::GetStart() const
{
    return m_start;
}

void GetMetricLabelValuesRequest::SetStart(const uint64_t& _start)
{
    m_start = _start;
    m_startHasBeenSet = true;
}

bool GetMetricLabelValuesRequest::StartHasBeenSet() const
{
    return m_startHasBeenSet;
}

uint64_t GetMetricLabelValuesRequest::GetEnd() const
{
    return m_end;
}

void GetMetricLabelValuesRequest::SetEnd(const uint64_t& _end)
{
    m_end = _end;
    m_endHasBeenSet = true;
}

bool GetMetricLabelValuesRequest::EndHasBeenSet() const
{
    return m_endHasBeenSet;
}

vector<string> GetMetricLabelValuesRequest::GetMatch() const
{
    return m_match;
}

void GetMetricLabelValuesRequest::SetMatch(const vector<string>& _match)
{
    m_match = _match;
    m_matchHasBeenSet = true;
}

bool GetMetricLabelValuesRequest::MatchHasBeenSet() const
{
    return m_matchHasBeenSet;
}


