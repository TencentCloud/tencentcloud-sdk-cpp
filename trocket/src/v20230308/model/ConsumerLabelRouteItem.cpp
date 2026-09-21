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

#include <tencentcloud/trocket/v20230308/model/ConsumerLabelRouteItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

ConsumerLabelRouteItem::ConsumerLabelRouteItem() :
    m_topicHasBeenSet(false),
    m_matchConditionHasBeenSet(false),
    m_targetConsumerLabelHasBeenSet(false)
{
}

CoreInternalOutcome ConsumerLabelRouteItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerLabelRouteItem.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("MatchCondition") && !value["MatchCondition"].IsNull())
    {
        if (!value["MatchCondition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerLabelRouteItem.MatchCondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchCondition = string(value["MatchCondition"].GetString());
        m_matchConditionHasBeenSet = true;
    }

    if (value.HasMember("TargetConsumerLabel") && !value["TargetConsumerLabel"].IsNull())
    {
        if (!value["TargetConsumerLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerLabelRouteItem.TargetConsumerLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetConsumerLabel = string(value["TargetConsumerLabel"].GetString());
        m_targetConsumerLabelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsumerLabelRouteItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_matchConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchCondition.c_str(), allocator).Move(), allocator);
    }

    if (m_targetConsumerLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetConsumerLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetConsumerLabel.c_str(), allocator).Move(), allocator);
    }

}


string ConsumerLabelRouteItem::GetTopic() const
{
    return m_topic;
}

void ConsumerLabelRouteItem::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool ConsumerLabelRouteItem::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string ConsumerLabelRouteItem::GetMatchCondition() const
{
    return m_matchCondition;
}

void ConsumerLabelRouteItem::SetMatchCondition(const string& _matchCondition)
{
    m_matchCondition = _matchCondition;
    m_matchConditionHasBeenSet = true;
}

bool ConsumerLabelRouteItem::MatchConditionHasBeenSet() const
{
    return m_matchConditionHasBeenSet;
}

string ConsumerLabelRouteItem::GetTargetConsumerLabel() const
{
    return m_targetConsumerLabel;
}

void ConsumerLabelRouteItem::SetTargetConsumerLabel(const string& _targetConsumerLabel)
{
    m_targetConsumerLabel = _targetConsumerLabel;
    m_targetConsumerLabelHasBeenSet = true;
}

bool ConsumerLabelRouteItem::TargetConsumerLabelHasBeenSet() const
{
    return m_targetConsumerLabelHasBeenSet;
}

