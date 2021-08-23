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

#include <tencentcloud/iot/v20180123/model/Action.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iot::V20180123::Model;
using namespace std;

Action::Action() :
    m_topicHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_ckafkaHasBeenSet(false)
{
}

CoreInternalOutcome Action::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Action.Topic` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_topic.Deserialize(value["Topic"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_topicHasBeenSet = true;
    }

    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Action.Service` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_service.Deserialize(value["Service"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("Ckafka") && !value["Ckafka"].IsNull())
    {
        if (!value["Ckafka"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Action.Ckafka` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ckafka.Deserialize(value["Ckafka"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ckafkaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Action::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_topic.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_service.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ckafkaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ckafka";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ckafka.ToJsonObject(value[key.c_str()], allocator);
    }

}


TopicAction Action::GetTopic() const
{
    return m_topic;
}

void Action::SetTopic(const TopicAction& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool Action::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

ServiceAction Action::GetService() const
{
    return m_service;
}

void Action::SetService(const ServiceAction& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool Action::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

CkafkaAction Action::GetCkafka() const
{
    return m_ckafka;
}

void Action::SetCkafka(const CkafkaAction& _ckafka)
{
    m_ckafka = _ckafka;
    m_ckafkaHasBeenSet = true;
}

bool Action::CkafkaHasBeenSet() const
{
    return m_ckafkaHasBeenSet;
}

