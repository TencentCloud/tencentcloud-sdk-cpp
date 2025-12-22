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

#include <tencentcloud/cls/v20201016/model/ConsumerGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ConsumerGroupInfo::ConsumerGroupInfo() :
    m_consumerGroupHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_topicsHasBeenSet(false)
{
}

CoreInternalOutcome ConsumerGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConsumerGroup") && !value["ConsumerGroup"].IsNull())
    {
        if (!value["ConsumerGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerGroupInfo.ConsumerGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerGroup = string(value["ConsumerGroup"].GetString());
        m_consumerGroupHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerGroupInfo.Timeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetUint64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("Topics") && !value["Topics"].IsNull())
    {
        if (!value["Topics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConsumerGroupInfo.Topics` is not array type"));

        const rapidjson::Value &tmpValue = value["Topics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_topics.push_back((*itr).GetString());
        }
        m_topicsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsumerGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_consumerGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_topicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_topics.begin(); itr != m_topics.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ConsumerGroupInfo::GetConsumerGroup() const
{
    return m_consumerGroup;
}

void ConsumerGroupInfo::SetConsumerGroup(const string& _consumerGroup)
{
    m_consumerGroup = _consumerGroup;
    m_consumerGroupHasBeenSet = true;
}

bool ConsumerGroupInfo::ConsumerGroupHasBeenSet() const
{
    return m_consumerGroupHasBeenSet;
}

uint64_t ConsumerGroupInfo::GetTimeout() const
{
    return m_timeout;
}

void ConsumerGroupInfo::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool ConsumerGroupInfo::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

vector<string> ConsumerGroupInfo::GetTopics() const
{
    return m_topics;
}

void ConsumerGroupInfo::SetTopics(const vector<string>& _topics)
{
    m_topics = _topics;
    m_topicsHasBeenSet = true;
}

bool ConsumerGroupInfo::TopicsHasBeenSet() const
{
    return m_topicsHasBeenSet;
}

