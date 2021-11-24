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

#include <tencentcloud/tdmq/v20200217/model/AMQPClusterRecentStats.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

AMQPClusterRecentStats::AMQPClusterRecentStats() :
    m_queueNumHasBeenSet(false),
    m_producedMsgNumHasBeenSet(false),
    m_accumulativeMsgNumHasBeenSet(false),
    m_exchangeNumHasBeenSet(false)
{
}

CoreInternalOutcome AMQPClusterRecentStats::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QueueNum") && !value["QueueNum"].IsNull())
    {
        if (!value["QueueNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPClusterRecentStats.QueueNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_queueNum = value["QueueNum"].GetUint64();
        m_queueNumHasBeenSet = true;
    }

    if (value.HasMember("ProducedMsgNum") && !value["ProducedMsgNum"].IsNull())
    {
        if (!value["ProducedMsgNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPClusterRecentStats.ProducedMsgNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_producedMsgNum = value["ProducedMsgNum"].GetUint64();
        m_producedMsgNumHasBeenSet = true;
    }

    if (value.HasMember("AccumulativeMsgNum") && !value["AccumulativeMsgNum"].IsNull())
    {
        if (!value["AccumulativeMsgNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPClusterRecentStats.AccumulativeMsgNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accumulativeMsgNum = value["AccumulativeMsgNum"].GetUint64();
        m_accumulativeMsgNumHasBeenSet = true;
    }

    if (value.HasMember("ExchangeNum") && !value["ExchangeNum"].IsNull())
    {
        if (!value["ExchangeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPClusterRecentStats.ExchangeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exchangeNum = value["ExchangeNum"].GetUint64();
        m_exchangeNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AMQPClusterRecentStats::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_queueNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queueNum, allocator);
    }

    if (m_producedMsgNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProducedMsgNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_producedMsgNum, allocator);
    }

    if (m_accumulativeMsgNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccumulativeMsgNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accumulativeMsgNum, allocator);
    }

    if (m_exchangeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExchangeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exchangeNum, allocator);
    }

}


uint64_t AMQPClusterRecentStats::GetQueueNum() const
{
    return m_queueNum;
}

void AMQPClusterRecentStats::SetQueueNum(const uint64_t& _queueNum)
{
    m_queueNum = _queueNum;
    m_queueNumHasBeenSet = true;
}

bool AMQPClusterRecentStats::QueueNumHasBeenSet() const
{
    return m_queueNumHasBeenSet;
}

uint64_t AMQPClusterRecentStats::GetProducedMsgNum() const
{
    return m_producedMsgNum;
}

void AMQPClusterRecentStats::SetProducedMsgNum(const uint64_t& _producedMsgNum)
{
    m_producedMsgNum = _producedMsgNum;
    m_producedMsgNumHasBeenSet = true;
}

bool AMQPClusterRecentStats::ProducedMsgNumHasBeenSet() const
{
    return m_producedMsgNumHasBeenSet;
}

uint64_t AMQPClusterRecentStats::GetAccumulativeMsgNum() const
{
    return m_accumulativeMsgNum;
}

void AMQPClusterRecentStats::SetAccumulativeMsgNum(const uint64_t& _accumulativeMsgNum)
{
    m_accumulativeMsgNum = _accumulativeMsgNum;
    m_accumulativeMsgNumHasBeenSet = true;
}

bool AMQPClusterRecentStats::AccumulativeMsgNumHasBeenSet() const
{
    return m_accumulativeMsgNumHasBeenSet;
}

uint64_t AMQPClusterRecentStats::GetExchangeNum() const
{
    return m_exchangeNum;
}

void AMQPClusterRecentStats::SetExchangeNum(const uint64_t& _exchangeNum)
{
    m_exchangeNum = _exchangeNum;
    m_exchangeNumHasBeenSet = true;
}

bool AMQPClusterRecentStats::ExchangeNumHasBeenSet() const
{
    return m_exchangeNumHasBeenSet;
}

