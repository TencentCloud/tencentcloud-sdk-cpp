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

#include <tencentcloud/tdmq/v20200217/model/Topic_Simplification.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

Topic_Simplification::Topic_Simplification() :
    m_topicNameHasBeenSet(false),
    m_pulsarTopicTypeHasBeenSet(false)
{
}

CoreInternalOutcome Topic_Simplification::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic_Simplification.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("PulsarTopicType") && !value["PulsarTopicType"].IsNull())
    {
        if (!value["PulsarTopicType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Topic_Simplification.PulsarTopicType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pulsarTopicType = value["PulsarTopicType"].GetInt64();
        m_pulsarTopicTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Topic_Simplification::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_pulsarTopicTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PulsarTopicType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pulsarTopicType, allocator);
    }

}


string Topic_Simplification::GetTopicName() const
{
    return m_topicName;
}

void Topic_Simplification::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool Topic_Simplification::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

int64_t Topic_Simplification::GetPulsarTopicType() const
{
    return m_pulsarTopicType;
}

void Topic_Simplification::SetPulsarTopicType(const int64_t& _pulsarTopicType)
{
    m_pulsarTopicType = _pulsarTopicType;
    m_pulsarTopicTypeHasBeenSet = true;
}

bool Topic_Simplification::PulsarTopicTypeHasBeenSet() const
{
    return m_pulsarTopicTypeHasBeenSet;
}

