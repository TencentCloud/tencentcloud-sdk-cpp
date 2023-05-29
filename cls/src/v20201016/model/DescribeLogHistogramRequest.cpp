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

#include <tencentcloud/cls/v20201016/model/DescribeLogHistogramRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DescribeLogHistogramRequest::DescribeLogHistogramRequest() :
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_syntaxRuleHasBeenSet(false)
{
}

string DescribeLogHistogramRequest::ToJsonString() const
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

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_interval, allocator);
    }

    if (m_syntaxRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyntaxRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_syntaxRule, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeLogHistogramRequest::GetFrom() const
{
    return m_from;
}

void DescribeLogHistogramRequest::SetFrom(const int64_t& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool DescribeLogHistogramRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

int64_t DescribeLogHistogramRequest::GetTo() const
{
    return m_to;
}

void DescribeLogHistogramRequest::SetTo(const int64_t& _to)
{
    m_to = _to;
    m_toHasBeenSet = true;
}

bool DescribeLogHistogramRequest::ToHasBeenSet() const
{
    return m_toHasBeenSet;
}

string DescribeLogHistogramRequest::GetQuery() const
{
    return m_query;
}

void DescribeLogHistogramRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool DescribeLogHistogramRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

string DescribeLogHistogramRequest::GetTopicId() const
{
    return m_topicId;
}

void DescribeLogHistogramRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool DescribeLogHistogramRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

int64_t DescribeLogHistogramRequest::GetInterval() const
{
    return m_interval;
}

void DescribeLogHistogramRequest::SetInterval(const int64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool DescribeLogHistogramRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

uint64_t DescribeLogHistogramRequest::GetSyntaxRule() const
{
    return m_syntaxRule;
}

void DescribeLogHistogramRequest::SetSyntaxRule(const uint64_t& _syntaxRule)
{
    m_syntaxRule = _syntaxRule;
    m_syntaxRuleHasBeenSet = true;
}

bool DescribeLogHistogramRequest::SyntaxRuleHasBeenSet() const
{
    return m_syntaxRuleHasBeenSet;
}


