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

#include <tencentcloud/ckafka/v20190819/model/LatestBrokerVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

LatestBrokerVersion::LatestBrokerVersion() :
    m_kafkaVersionHasBeenSet(false),
    m_brokerVersionHasBeenSet(false)
{
}

CoreInternalOutcome LatestBrokerVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KafkaVersion") && !value["KafkaVersion"].IsNull())
    {
        if (!value["KafkaVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestBrokerVersion.KafkaVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaVersion = string(value["KafkaVersion"].GetString());
        m_kafkaVersionHasBeenSet = true;
    }

    if (value.HasMember("BrokerVersion") && !value["BrokerVersion"].IsNull())
    {
        if (!value["BrokerVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestBrokerVersion.BrokerVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brokerVersion = string(value["BrokerVersion"].GetString());
        m_brokerVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LatestBrokerVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_kafkaVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_brokerVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrokerVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brokerVersion.c_str(), allocator).Move(), allocator);
    }

}


string LatestBrokerVersion::GetKafkaVersion() const
{
    return m_kafkaVersion;
}

void LatestBrokerVersion::SetKafkaVersion(const string& _kafkaVersion)
{
    m_kafkaVersion = _kafkaVersion;
    m_kafkaVersionHasBeenSet = true;
}

bool LatestBrokerVersion::KafkaVersionHasBeenSet() const
{
    return m_kafkaVersionHasBeenSet;
}

string LatestBrokerVersion::GetBrokerVersion() const
{
    return m_brokerVersion;
}

void LatestBrokerVersion::SetBrokerVersion(const string& _brokerVersion)
{
    m_brokerVersion = _brokerVersion;
    m_brokerVersionHasBeenSet = true;
}

bool LatestBrokerVersion::BrokerVersionHasBeenSet() const
{
    return m_brokerVersionHasBeenSet;
}

