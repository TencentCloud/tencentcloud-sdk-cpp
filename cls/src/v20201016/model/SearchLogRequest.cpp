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

#include <tencentcloud/cls/v20201016/model/SearchLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

SearchLogRequest::SearchLogRequest() :
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_syntaxRuleHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_topicsHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_samplingRateHasBeenSet(false),
    m_useNewAnalysisHasBeenSet(false),
    m_highLightHasBeenSet(false)
{
}

string SearchLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_from, allocator);
    }

    if (m_toHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "To";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_to, allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_syntaxRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyntaxRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_syntaxRule, allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topics";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topics.begin(); itr != m_topics.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sort.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }

    if (m_samplingRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SamplingRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_samplingRate, allocator);
    }

    if (m_useNewAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseNewAnalysis";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_useNewAnalysis, allocator);
    }

    if (m_highLightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighLight";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_highLight, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t SearchLogRequest::GetFrom() const
{
    return m_from;
}

void SearchLogRequest::SetFrom(const int64_t& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool SearchLogRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

int64_t SearchLogRequest::GetTo() const
{
    return m_to;
}

void SearchLogRequest::SetTo(const int64_t& _to)
{
    m_to = _to;
    m_toHasBeenSet = true;
}

bool SearchLogRequest::ToHasBeenSet() const
{
    return m_toHasBeenSet;
}

string SearchLogRequest::GetQuery() const
{
    return m_query;
}

void SearchLogRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool SearchLogRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

uint64_t SearchLogRequest::GetSyntaxRule() const
{
    return m_syntaxRule;
}

void SearchLogRequest::SetSyntaxRule(const uint64_t& _syntaxRule)
{
    m_syntaxRule = _syntaxRule;
    m_syntaxRuleHasBeenSet = true;
}

bool SearchLogRequest::SyntaxRuleHasBeenSet() const
{
    return m_syntaxRuleHasBeenSet;
}

string SearchLogRequest::GetTopicId() const
{
    return m_topicId;
}

void SearchLogRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool SearchLogRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

vector<MultiTopicSearchInformation> SearchLogRequest::GetTopics() const
{
    return m_topics;
}

void SearchLogRequest::SetTopics(const vector<MultiTopicSearchInformation>& _topics)
{
    m_topics = _topics;
    m_topicsHasBeenSet = true;
}

bool SearchLogRequest::TopicsHasBeenSet() const
{
    return m_topicsHasBeenSet;
}

string SearchLogRequest::GetSort() const
{
    return m_sort;
}

void SearchLogRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool SearchLogRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

int64_t SearchLogRequest::GetLimit() const
{
    return m_limit;
}

void SearchLogRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool SearchLogRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t SearchLogRequest::GetOffset() const
{
    return m_offset;
}

void SearchLogRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool SearchLogRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string SearchLogRequest::GetContext() const
{
    return m_context;
}

void SearchLogRequest::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool SearchLogRequest::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

double SearchLogRequest::GetSamplingRate() const
{
    return m_samplingRate;
}

void SearchLogRequest::SetSamplingRate(const double& _samplingRate)
{
    m_samplingRate = _samplingRate;
    m_samplingRateHasBeenSet = true;
}

bool SearchLogRequest::SamplingRateHasBeenSet() const
{
    return m_samplingRateHasBeenSet;
}

bool SearchLogRequest::GetUseNewAnalysis() const
{
    return m_useNewAnalysis;
}

void SearchLogRequest::SetUseNewAnalysis(const bool& _useNewAnalysis)
{
    m_useNewAnalysis = _useNewAnalysis;
    m_useNewAnalysisHasBeenSet = true;
}

bool SearchLogRequest::UseNewAnalysisHasBeenSet() const
{
    return m_useNewAnalysisHasBeenSet;
}

bool SearchLogRequest::GetHighLight() const
{
    return m_highLight;
}

void SearchLogRequest::SetHighLight(const bool& _highLight)
{
    m_highLight = _highLight;
    m_highLightHasBeenSet = true;
}

bool SearchLogRequest::HighLightHasBeenSet() const
{
    return m_highLightHasBeenSet;
}


