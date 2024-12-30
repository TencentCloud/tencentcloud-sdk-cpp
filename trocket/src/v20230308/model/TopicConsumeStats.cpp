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

#include <tencentcloud/trocket/v20230308/model/TopicConsumeStats.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

TopicConsumeStats::TopicConsumeStats() :
    m_topicHasBeenSet(false),
    m_topicTypeHasBeenSet(false),
    m_queueNumHasBeenSet(false),
    m_consumerLagHasBeenSet(false),
    m_subStringHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
}

CoreInternalOutcome TopicConsumeStats::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicConsumeStats.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("TopicType") && !value["TopicType"].IsNull())
    {
        if (!value["TopicType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicConsumeStats.TopicType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicType = string(value["TopicType"].GetString());
        m_topicTypeHasBeenSet = true;
    }

    if (value.HasMember("QueueNum") && !value["QueueNum"].IsNull())
    {
        if (!value["QueueNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicConsumeStats.QueueNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_queueNum = value["QueueNum"].GetInt64();
        m_queueNumHasBeenSet = true;
    }

    if (value.HasMember("ConsumerLag") && !value["ConsumerLag"].IsNull())
    {
        if (!value["ConsumerLag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicConsumeStats.ConsumerLag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consumerLag = value["ConsumerLag"].GetInt64();
        m_consumerLagHasBeenSet = true;
    }

    if (value.HasMember("SubString") && !value["SubString"].IsNull())
    {
        if (!value["SubString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicConsumeStats.SubString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subString = string(value["SubString"].GetString());
        m_subStringHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicConsumeStats.LastUpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = value["LastUpdateTime"].GetInt64();
        m_lastUpdateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicConsumeStats::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_topicTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicType.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queueNum, allocator);
    }

    if (m_consumerLagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerLag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumerLag, allocator);
    }

    if (m_subStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subString.c_str(), allocator).Move(), allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastUpdateTime, allocator);
    }

}


string TopicConsumeStats::GetTopic() const
{
    return m_topic;
}

void TopicConsumeStats::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool TopicConsumeStats::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string TopicConsumeStats::GetTopicType() const
{
    return m_topicType;
}

void TopicConsumeStats::SetTopicType(const string& _topicType)
{
    m_topicType = _topicType;
    m_topicTypeHasBeenSet = true;
}

bool TopicConsumeStats::TopicTypeHasBeenSet() const
{
    return m_topicTypeHasBeenSet;
}

int64_t TopicConsumeStats::GetQueueNum() const
{
    return m_queueNum;
}

void TopicConsumeStats::SetQueueNum(const int64_t& _queueNum)
{
    m_queueNum = _queueNum;
    m_queueNumHasBeenSet = true;
}

bool TopicConsumeStats::QueueNumHasBeenSet() const
{
    return m_queueNumHasBeenSet;
}

int64_t TopicConsumeStats::GetConsumerLag() const
{
    return m_consumerLag;
}

void TopicConsumeStats::SetConsumerLag(const int64_t& _consumerLag)
{
    m_consumerLag = _consumerLag;
    m_consumerLagHasBeenSet = true;
}

bool TopicConsumeStats::ConsumerLagHasBeenSet() const
{
    return m_consumerLagHasBeenSet;
}

string TopicConsumeStats::GetSubString() const
{
    return m_subString;
}

void TopicConsumeStats::SetSubString(const string& _subString)
{
    m_subString = _subString;
    m_subStringHasBeenSet = true;
}

bool TopicConsumeStats::SubStringHasBeenSet() const
{
    return m_subStringHasBeenSet;
}

int64_t TopicConsumeStats::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void TopicConsumeStats::SetLastUpdateTime(const int64_t& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool TopicConsumeStats::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

