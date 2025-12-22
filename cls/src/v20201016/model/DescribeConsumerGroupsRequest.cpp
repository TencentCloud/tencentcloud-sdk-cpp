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

#include <tencentcloud/cls/v20201016/model/DescribeConsumerGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DescribeConsumerGroupsRequest::DescribeConsumerGroupsRequest() :
    m_logsetIdHasBeenSet(false),
    m_topicsHasBeenSet(false)
{
}

string DescribeConsumerGroupsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topics";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_topics.begin(); itr != m_topics.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeConsumerGroupsRequest::GetLogsetId() const
{
    return m_logsetId;
}

void DescribeConsumerGroupsRequest::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool DescribeConsumerGroupsRequest::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

vector<string> DescribeConsumerGroupsRequest::GetTopics() const
{
    return m_topics;
}

void DescribeConsumerGroupsRequest::SetTopics(const vector<string>& _topics)
{
    m_topics = _topics;
    m_topicsHasBeenSet = true;
}

bool DescribeConsumerGroupsRequest::TopicsHasBeenSet() const
{
    return m_topicsHasBeenSet;
}


