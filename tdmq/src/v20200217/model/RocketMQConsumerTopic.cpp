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

#include <tencentcloud/tdmq/v20200217/model/RocketMQConsumerTopic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RocketMQConsumerTopic::RocketMQConsumerTopic() :
    m_topicHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_partitionNumHasBeenSet(false),
    m_accumulativeHasBeenSet(false),
    m_lastConsumptionTimeHasBeenSet(false),
    m_subRuleHasBeenSet(false)
{
}

CoreInternalOutcome RocketMQConsumerTopic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQConsumerTopic.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQConsumerTopic.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("PartitionNum") && !value["PartitionNum"].IsNull())
    {
        if (!value["PartitionNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQConsumerTopic.PartitionNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionNum = value["PartitionNum"].GetUint64();
        m_partitionNumHasBeenSet = true;
    }

    if (value.HasMember("Accumulative") && !value["Accumulative"].IsNull())
    {
        if (!value["Accumulative"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQConsumerTopic.Accumulative` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accumulative = value["Accumulative"].GetInt64();
        m_accumulativeHasBeenSet = true;
    }

    if (value.HasMember("LastConsumptionTime") && !value["LastConsumptionTime"].IsNull())
    {
        if (!value["LastConsumptionTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQConsumerTopic.LastConsumptionTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastConsumptionTime = value["LastConsumptionTime"].GetUint64();
        m_lastConsumptionTimeHasBeenSet = true;
    }

    if (value.HasMember("SubRule") && !value["SubRule"].IsNull())
    {
        if (!value["SubRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQConsumerTopic.SubRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subRule = string(value["SubRule"].GetString());
        m_subRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RocketMQConsumerTopic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionNum, allocator);
    }

    if (m_accumulativeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Accumulative";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accumulative, allocator);
    }

    if (m_lastConsumptionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastConsumptionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastConsumptionTime, allocator);
    }

    if (m_subRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subRule.c_str(), allocator).Move(), allocator);
    }

}


string RocketMQConsumerTopic::GetTopic() const
{
    return m_topic;
}

void RocketMQConsumerTopic::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool RocketMQConsumerTopic::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string RocketMQConsumerTopic::GetType() const
{
    return m_type;
}

void RocketMQConsumerTopic::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RocketMQConsumerTopic::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t RocketMQConsumerTopic::GetPartitionNum() const
{
    return m_partitionNum;
}

void RocketMQConsumerTopic::SetPartitionNum(const uint64_t& _partitionNum)
{
    m_partitionNum = _partitionNum;
    m_partitionNumHasBeenSet = true;
}

bool RocketMQConsumerTopic::PartitionNumHasBeenSet() const
{
    return m_partitionNumHasBeenSet;
}

int64_t RocketMQConsumerTopic::GetAccumulative() const
{
    return m_accumulative;
}

void RocketMQConsumerTopic::SetAccumulative(const int64_t& _accumulative)
{
    m_accumulative = _accumulative;
    m_accumulativeHasBeenSet = true;
}

bool RocketMQConsumerTopic::AccumulativeHasBeenSet() const
{
    return m_accumulativeHasBeenSet;
}

uint64_t RocketMQConsumerTopic::GetLastConsumptionTime() const
{
    return m_lastConsumptionTime;
}

void RocketMQConsumerTopic::SetLastConsumptionTime(const uint64_t& _lastConsumptionTime)
{
    m_lastConsumptionTime = _lastConsumptionTime;
    m_lastConsumptionTimeHasBeenSet = true;
}

bool RocketMQConsumerTopic::LastConsumptionTimeHasBeenSet() const
{
    return m_lastConsumptionTimeHasBeenSet;
}

string RocketMQConsumerTopic::GetSubRule() const
{
    return m_subRule;
}

void RocketMQConsumerTopic::SetSubRule(const string& _subRule)
{
    m_subRule = _subRule;
    m_subRuleHasBeenSet = true;
}

bool RocketMQConsumerTopic::SubRuleHasBeenSet() const
{
    return m_subRuleHasBeenSet;
}

