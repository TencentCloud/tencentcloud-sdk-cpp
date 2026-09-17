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

#include <tencentcloud/cls/v20201016/model/SourceTopicConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

SourceTopicConfig::SourceTopicConfig() :
    m_topicFilterTypeHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_topicsHasBeenSet(false)
{
}

CoreInternalOutcome SourceTopicConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicFilterType") && !value["TopicFilterType"].IsNull())
    {
        if (!value["TopicFilterType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceTopicConfig.TopicFilterType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_topicFilterType = value["TopicFilterType"].GetUint64();
        m_topicFilterTypeHasBeenSet = true;
    }

    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceTopicConfig.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("Topics") && !value["Topics"].IsNull())
    {
        if (!value["Topics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SourceTopicConfig.Topics` is not array type"));

        const rapidjson::Value &tmpValue = value["Topics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SourceTopicInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topics.push_back(item);
        }
        m_topicsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SourceTopicConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicFilterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicFilterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicFilterType, allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topics.begin(); itr != m_topics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t SourceTopicConfig::GetTopicFilterType() const
{
    return m_topicFilterType;
}

void SourceTopicConfig::SetTopicFilterType(const uint64_t& _topicFilterType)
{
    m_topicFilterType = _topicFilterType;
    m_topicFilterTypeHasBeenSet = true;
}

bool SourceTopicConfig::TopicFilterTypeHasBeenSet() const
{
    return m_topicFilterTypeHasBeenSet;
}

string SourceTopicConfig::GetLogsetId() const
{
    return m_logsetId;
}

void SourceTopicConfig::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool SourceTopicConfig::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

vector<SourceTopicInfo> SourceTopicConfig::GetTopics() const
{
    return m_topics;
}

void SourceTopicConfig::SetTopics(const vector<SourceTopicInfo>& _topics)
{
    m_topics = _topics;
    m_topicsHasBeenSet = true;
}

bool SourceTopicConfig::TopicsHasBeenSet() const
{
    return m_topicsHasBeenSet;
}

