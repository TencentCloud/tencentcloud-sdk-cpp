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

#include <tencentcloud/ckafka/v20190819/model/DescribeDatahubTopicsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

DescribeDatahubTopicsRequest::DescribeDatahubTopicsRequest() :
    m_searchWordHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_queryFromConnectResourceHasBeenSet(false),
    m_connectResourceIdHasBeenSet(false),
    m_topicRegularExpressionHasBeenSet(false)
{
}

string DescribeDatahubTopicsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_searchWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchWord.c_str(), allocator).Move(), allocator);
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

    if (m_queryFromConnectResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryFromConnectResource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryFromConnectResource, allocator);
    }

    if (m_connectResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connectResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicRegularExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicRegularExpression";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicRegularExpression.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDatahubTopicsRequest::GetSearchWord() const
{
    return m_searchWord;
}

void DescribeDatahubTopicsRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool DescribeDatahubTopicsRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}

uint64_t DescribeDatahubTopicsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDatahubTopicsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDatahubTopicsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeDatahubTopicsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDatahubTopicsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDatahubTopicsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

bool DescribeDatahubTopicsRequest::GetQueryFromConnectResource() const
{
    return m_queryFromConnectResource;
}

void DescribeDatahubTopicsRequest::SetQueryFromConnectResource(const bool& _queryFromConnectResource)
{
    m_queryFromConnectResource = _queryFromConnectResource;
    m_queryFromConnectResourceHasBeenSet = true;
}

bool DescribeDatahubTopicsRequest::QueryFromConnectResourceHasBeenSet() const
{
    return m_queryFromConnectResourceHasBeenSet;
}

string DescribeDatahubTopicsRequest::GetConnectResourceId() const
{
    return m_connectResourceId;
}

void DescribeDatahubTopicsRequest::SetConnectResourceId(const string& _connectResourceId)
{
    m_connectResourceId = _connectResourceId;
    m_connectResourceIdHasBeenSet = true;
}

bool DescribeDatahubTopicsRequest::ConnectResourceIdHasBeenSet() const
{
    return m_connectResourceIdHasBeenSet;
}

string DescribeDatahubTopicsRequest::GetTopicRegularExpression() const
{
    return m_topicRegularExpression;
}

void DescribeDatahubTopicsRequest::SetTopicRegularExpression(const string& _topicRegularExpression)
{
    m_topicRegularExpression = _topicRegularExpression;
    m_topicRegularExpressionHasBeenSet = true;
}

bool DescribeDatahubTopicsRequest::TopicRegularExpressionHasBeenSet() const
{
    return m_topicRegularExpressionHasBeenSet;
}


