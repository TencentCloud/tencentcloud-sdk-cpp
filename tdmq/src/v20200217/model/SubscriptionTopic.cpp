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

#include <tencentcloud/tdmq/v20200217/model/SubscriptionTopic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

SubscriptionTopic::SubscriptionTopic() :
    m_environmentIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_subscriptionNameHasBeenSet(false)
{
}

CoreInternalOutcome SubscriptionTopic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvironmentId") && !value["EnvironmentId"].IsNull())
    {
        if (!value["EnvironmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubscriptionTopic.EnvironmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentId = string(value["EnvironmentId"].GetString());
        m_environmentIdHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubscriptionTopic.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("SubscriptionName") && !value["SubscriptionName"].IsNull())
    {
        if (!value["SubscriptionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubscriptionTopic.SubscriptionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subscriptionName = string(value["SubscriptionName"].GetString());
        m_subscriptionNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubscriptionTopic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_subscriptionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscriptionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subscriptionName.c_str(), allocator).Move(), allocator);
    }

}


string SubscriptionTopic::GetEnvironmentId() const
{
    return m_environmentId;
}

void SubscriptionTopic::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool SubscriptionTopic::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string SubscriptionTopic::GetTopicName() const
{
    return m_topicName;
}

void SubscriptionTopic::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool SubscriptionTopic::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string SubscriptionTopic::GetSubscriptionName() const
{
    return m_subscriptionName;
}

void SubscriptionTopic::SetSubscriptionName(const string& _subscriptionName)
{
    m_subscriptionName = _subscriptionName;
    m_subscriptionNameHasBeenSet = true;
}

bool SubscriptionTopic::SubscriptionNameHasBeenSet() const
{
    return m_subscriptionNameHasBeenSet;
}

