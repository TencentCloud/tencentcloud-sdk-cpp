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

#include <tencentcloud/mqtt/v20240516/model/MQTTClientSubscription.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

MQTTClientSubscription::MQTTClientSubscription() :
    m_topicFilterHasBeenSet(false),
    m_qosHasBeenSet(false),
    m_lagHasBeenSet(false),
    m_inflightHasBeenSet(false)
{
}

CoreInternalOutcome MQTTClientSubscription::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicFilter") && !value["TopicFilter"].IsNull())
    {
        if (!value["TopicFilter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTClientSubscription.TopicFilter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicFilter = string(value["TopicFilter"].GetString());
        m_topicFilterHasBeenSet = true;
    }

    if (value.HasMember("Qos") && !value["Qos"].IsNull())
    {
        if (!value["Qos"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTClientSubscription.Qos` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qos = value["Qos"].GetInt64();
        m_qosHasBeenSet = true;
    }

    if (value.HasMember("Lag") && !value["Lag"].IsNull())
    {
        if (!value["Lag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTClientSubscription.Lag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lag = value["Lag"].GetInt64();
        m_lagHasBeenSet = true;
    }

    if (value.HasMember("Inflight") && !value["Inflight"].IsNull())
    {
        if (!value["Inflight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTClientSubscription.Inflight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inflight = value["Inflight"].GetInt64();
        m_inflightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MQTTClientSubscription::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicFilter.c_str(), allocator).Move(), allocator);
    }

    if (m_qosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qos, allocator);
    }

    if (m_lagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lag, allocator);
    }

    if (m_inflightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Inflight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inflight, allocator);
    }

}


string MQTTClientSubscription::GetTopicFilter() const
{
    return m_topicFilter;
}

void MQTTClientSubscription::SetTopicFilter(const string& _topicFilter)
{
    m_topicFilter = _topicFilter;
    m_topicFilterHasBeenSet = true;
}

bool MQTTClientSubscription::TopicFilterHasBeenSet() const
{
    return m_topicFilterHasBeenSet;
}

int64_t MQTTClientSubscription::GetQos() const
{
    return m_qos;
}

void MQTTClientSubscription::SetQos(const int64_t& _qos)
{
    m_qos = _qos;
    m_qosHasBeenSet = true;
}

bool MQTTClientSubscription::QosHasBeenSet() const
{
    return m_qosHasBeenSet;
}

int64_t MQTTClientSubscription::GetLag() const
{
    return m_lag;
}

void MQTTClientSubscription::SetLag(const int64_t& _lag)
{
    m_lag = _lag;
    m_lagHasBeenSet = true;
}

bool MQTTClientSubscription::LagHasBeenSet() const
{
    return m_lagHasBeenSet;
}

int64_t MQTTClientSubscription::GetInflight() const
{
    return m_inflight;
}

void MQTTClientSubscription::SetInflight(const int64_t& _inflight)
{
    m_inflight = _inflight;
    m_inflightHasBeenSet = true;
}

bool MQTTClientSubscription::InflightHasBeenSet() const
{
    return m_inflightHasBeenSet;
}

