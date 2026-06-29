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

#include <tencentcloud/csip/v20221121/model/DescribeCLSLogListV3Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeCLSLogListV3Request::DescribeCLSLogListV3Request() :
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_syntaxRuleHasBeenSet(false),
    m_topicsHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_samplingRateHasBeenSet(false),
    m_highLightHasBeenSet(false),
    m_useNewAnalysisHasBeenSet(false),
    m_queryOptimizeHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_subQueryTypesHasBeenSet(false)
{
}

string DescribeCLSLogListV3Request::ToJsonString() const
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

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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

    if (m_samplingRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SamplingRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_samplingRate, allocator);
    }

    if (m_highLightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighLight";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_highLight, allocator);
    }

    if (m_useNewAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseNewAnalysis";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_useNewAnalysis, allocator);
    }

    if (m_queryOptimizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryOptimize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryOptimize, allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }

    if (m_subQueryTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubQueryTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subQueryTypes.begin(); itr != m_subQueryTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeCLSLogListV3Request::GetFrom() const
{
    return m_from;
}

void DescribeCLSLogListV3Request::SetFrom(const int64_t& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool DescribeCLSLogListV3Request::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

int64_t DescribeCLSLogListV3Request::GetTo() const
{
    return m_to;
}

void DescribeCLSLogListV3Request::SetTo(const int64_t& _to)
{
    m_to = _to;
    m_toHasBeenSet = true;
}

bool DescribeCLSLogListV3Request::ToHasBeenSet() const
{
    return m_toHasBeenSet;
}

string DescribeCLSLogListV3Request::GetQuery() const
{
    return m_query;
}

void DescribeCLSLogListV3Request::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool DescribeCLSLogListV3Request::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

int64_t DescribeCLSLogListV3Request::GetSyntaxRule() const
{
    return m_syntaxRule;
}

void DescribeCLSLogListV3Request::SetSyntaxRule(const int64_t& _syntaxRule)
{
    m_syntaxRule = _syntaxRule;
    m_syntaxRuleHasBeenSet = true;
}

bool DescribeCLSLogListV3Request::SyntaxRuleHasBeenSet() const
{
    return m_syntaxRuleHasBeenSet;
}

vector<LogContextInfo> DescribeCLSLogListV3Request::GetTopics() const
{
    return m_topics;
}

void DescribeCLSLogListV3Request::SetTopics(const vector<LogContextInfo>& _topics)
{
    m_topics = _topics;
    m_topicsHasBeenSet = true;
}

bool DescribeCLSLogListV3Request::TopicsHasBeenSet() const
{
    return m_topicsHasBeenSet;
}

vector<string> DescribeCLSLogListV3Request::GetMemberId() const
{
    return m_memberId;
}

void DescribeCLSLogListV3Request::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeCLSLogListV3Request::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string DescribeCLSLogListV3Request::GetSort() const
{
    return m_sort;
}

void DescribeCLSLogListV3Request::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeCLSLogListV3Request::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

int64_t DescribeCLSLogListV3Request::GetLimit() const
{
    return m_limit;
}

void DescribeCLSLogListV3Request::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCLSLogListV3Request::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeCLSLogListV3Request::GetOffset() const
{
    return m_offset;
}

void DescribeCLSLogListV3Request::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCLSLogListV3Request::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

double DescribeCLSLogListV3Request::GetSamplingRate() const
{
    return m_samplingRate;
}

void DescribeCLSLogListV3Request::SetSamplingRate(const double& _samplingRate)
{
    m_samplingRate = _samplingRate;
    m_samplingRateHasBeenSet = true;
}

bool DescribeCLSLogListV3Request::SamplingRateHasBeenSet() const
{
    return m_samplingRateHasBeenSet;
}

bool DescribeCLSLogListV3Request::GetHighLight() const
{
    return m_highLight;
}

void DescribeCLSLogListV3Request::SetHighLight(const bool& _highLight)
{
    m_highLight = _highLight;
    m_highLightHasBeenSet = true;
}

bool DescribeCLSLogListV3Request::HighLightHasBeenSet() const
{
    return m_highLightHasBeenSet;
}

bool DescribeCLSLogListV3Request::GetUseNewAnalysis() const
{
    return m_useNewAnalysis;
}

void DescribeCLSLogListV3Request::SetUseNewAnalysis(const bool& _useNewAnalysis)
{
    m_useNewAnalysis = _useNewAnalysis;
    m_useNewAnalysisHasBeenSet = true;
}

bool DescribeCLSLogListV3Request::UseNewAnalysisHasBeenSet() const
{
    return m_useNewAnalysisHasBeenSet;
}

int64_t DescribeCLSLogListV3Request::GetQueryOptimize() const
{
    return m_queryOptimize;
}

void DescribeCLSLogListV3Request::SetQueryOptimize(const int64_t& _queryOptimize)
{
    m_queryOptimize = _queryOptimize;
    m_queryOptimizeHasBeenSet = true;
}

bool DescribeCLSLogListV3Request::QueryOptimizeHasBeenSet() const
{
    return m_queryOptimizeHasBeenSet;
}

string DescribeCLSLogListV3Request::GetTopicId() const
{
    return m_topicId;
}

void DescribeCLSLogListV3Request::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool DescribeCLSLogListV3Request::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string DescribeCLSLogListV3Request::GetContext() const
{
    return m_context;
}

void DescribeCLSLogListV3Request::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool DescribeCLSLogListV3Request::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

vector<string> DescribeCLSLogListV3Request::GetSubQueryTypes() const
{
    return m_subQueryTypes;
}

void DescribeCLSLogListV3Request::SetSubQueryTypes(const vector<string>& _subQueryTypes)
{
    m_subQueryTypes = _subQueryTypes;
    m_subQueryTypesHasBeenSet = true;
}

bool DescribeCLSLogListV3Request::SubQueryTypesHasBeenSet() const
{
    return m_subQueryTypesHasBeenSet;
}


