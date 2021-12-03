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

#include <tencentcloud/tdmq/v20200217/model/RocketMQClusterRecentStats.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RocketMQClusterRecentStats::RocketMQClusterRecentStats() :
    m_topicNumHasBeenSet(false),
    m_producedMsgNumHasBeenSet(false),
    m_consumedMsgNumHasBeenSet(false),
    m_accumulativeMsgNumHasBeenSet(false)
{
}

CoreInternalOutcome RocketMQClusterRecentStats::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicNum") && !value["TopicNum"].IsNull())
    {
        if (!value["TopicNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterRecentStats.TopicNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNum = value["TopicNum"].GetUint64();
        m_topicNumHasBeenSet = true;
    }

    if (value.HasMember("ProducedMsgNum") && !value["ProducedMsgNum"].IsNull())
    {
        if (!value["ProducedMsgNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterRecentStats.ProducedMsgNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_producedMsgNum = value["ProducedMsgNum"].GetUint64();
        m_producedMsgNumHasBeenSet = true;
    }

    if (value.HasMember("ConsumedMsgNum") && !value["ConsumedMsgNum"].IsNull())
    {
        if (!value["ConsumedMsgNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterRecentStats.ConsumedMsgNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_consumedMsgNum = value["ConsumedMsgNum"].GetUint64();
        m_consumedMsgNumHasBeenSet = true;
    }

    if (value.HasMember("AccumulativeMsgNum") && !value["AccumulativeMsgNum"].IsNull())
    {
        if (!value["AccumulativeMsgNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterRecentStats.AccumulativeMsgNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accumulativeMsgNum = value["AccumulativeMsgNum"].GetUint64();
        m_accumulativeMsgNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RocketMQClusterRecentStats::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicNum, allocator);
    }

    if (m_producedMsgNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProducedMsgNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_producedMsgNum, allocator);
    }

    if (m_consumedMsgNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumedMsgNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumedMsgNum, allocator);
    }

    if (m_accumulativeMsgNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccumulativeMsgNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accumulativeMsgNum, allocator);
    }

}


uint64_t RocketMQClusterRecentStats::GetTopicNum() const
{
    return m_topicNum;
}

void RocketMQClusterRecentStats::SetTopicNum(const uint64_t& _topicNum)
{
    m_topicNum = _topicNum;
    m_topicNumHasBeenSet = true;
}

bool RocketMQClusterRecentStats::TopicNumHasBeenSet() const
{
    return m_topicNumHasBeenSet;
}

uint64_t RocketMQClusterRecentStats::GetProducedMsgNum() const
{
    return m_producedMsgNum;
}

void RocketMQClusterRecentStats::SetProducedMsgNum(const uint64_t& _producedMsgNum)
{
    m_producedMsgNum = _producedMsgNum;
    m_producedMsgNumHasBeenSet = true;
}

bool RocketMQClusterRecentStats::ProducedMsgNumHasBeenSet() const
{
    return m_producedMsgNumHasBeenSet;
}

uint64_t RocketMQClusterRecentStats::GetConsumedMsgNum() const
{
    return m_consumedMsgNum;
}

void RocketMQClusterRecentStats::SetConsumedMsgNum(const uint64_t& _consumedMsgNum)
{
    m_consumedMsgNum = _consumedMsgNum;
    m_consumedMsgNumHasBeenSet = true;
}

bool RocketMQClusterRecentStats::ConsumedMsgNumHasBeenSet() const
{
    return m_consumedMsgNumHasBeenSet;
}

uint64_t RocketMQClusterRecentStats::GetAccumulativeMsgNum() const
{
    return m_accumulativeMsgNum;
}

void RocketMQClusterRecentStats::SetAccumulativeMsgNum(const uint64_t& _accumulativeMsgNum)
{
    m_accumulativeMsgNum = _accumulativeMsgNum;
    m_accumulativeMsgNumHasBeenSet = true;
}

bool RocketMQClusterRecentStats::AccumulativeMsgNumHasBeenSet() const
{
    return m_accumulativeMsgNumHasBeenSet;
}

