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

#include <tencentcloud/cls/v20201016/model/ModifyConsumerGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyConsumerGroupRequest::ModifyConsumerGroupRequest() :
    m_consumerGroupHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_topicsHasBeenSet(false),
    m_logsetIdHasBeenSet(false)
{
}

string ModifyConsumerGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_consumerGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_consumerGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
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

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyConsumerGroupRequest::GetConsumerGroup() const
{
    return m_consumerGroup;
}

void ModifyConsumerGroupRequest::SetConsumerGroup(const string& _consumerGroup)
{
    m_consumerGroup = _consumerGroup;
    m_consumerGroupHasBeenSet = true;
}

bool ModifyConsumerGroupRequest::ConsumerGroupHasBeenSet() const
{
    return m_consumerGroupHasBeenSet;
}

uint64_t ModifyConsumerGroupRequest::GetTimeout() const
{
    return m_timeout;
}

void ModifyConsumerGroupRequest::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool ModifyConsumerGroupRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

vector<string> ModifyConsumerGroupRequest::GetTopics() const
{
    return m_topics;
}

void ModifyConsumerGroupRequest::SetTopics(const vector<string>& _topics)
{
    m_topics = _topics;
    m_topicsHasBeenSet = true;
}

bool ModifyConsumerGroupRequest::TopicsHasBeenSet() const
{
    return m_topicsHasBeenSet;
}

string ModifyConsumerGroupRequest::GetLogsetId() const
{
    return m_logsetId;
}

void ModifyConsumerGroupRequest::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool ModifyConsumerGroupRequest::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}


