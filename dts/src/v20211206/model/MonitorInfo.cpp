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

#include <tencentcloud/dts/v20211206/model/MonitorInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

MonitorInfo::MonitorInfo() :
    m_partitionNoHasBeenSet(false),
    m_consumerGroupOffsetHasBeenSet(false),
    m_consumerGroupLagHasBeenSet(false),
    m_latencyHasBeenSet(false)
{
}

CoreInternalOutcome MonitorInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PartitionNo") && !value["PartitionNo"].IsNull())
    {
        if (!value["PartitionNo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorInfo.PartitionNo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionNo = value["PartitionNo"].GetInt64();
        m_partitionNoHasBeenSet = true;
    }

    if (value.HasMember("ConsumerGroupOffset") && !value["ConsumerGroupOffset"].IsNull())
    {
        if (!value["ConsumerGroupOffset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorInfo.ConsumerGroupOffset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consumerGroupOffset = value["ConsumerGroupOffset"].GetInt64();
        m_consumerGroupOffsetHasBeenSet = true;
    }

    if (value.HasMember("ConsumerGroupLag") && !value["ConsumerGroupLag"].IsNull())
    {
        if (!value["ConsumerGroupLag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorInfo.ConsumerGroupLag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consumerGroupLag = value["ConsumerGroupLag"].GetInt64();
        m_consumerGroupLagHasBeenSet = true;
    }

    if (value.HasMember("Latency") && !value["Latency"].IsNull())
    {
        if (!value["Latency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorInfo.Latency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_latency = value["Latency"].GetInt64();
        m_latencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonitorInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partitionNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionNo, allocator);
    }

    if (m_consumerGroupOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroupOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumerGroupOffset, allocator);
    }

    if (m_consumerGroupLagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroupLag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumerGroupLag, allocator);
    }

    if (m_latencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Latency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latency, allocator);
    }

}


int64_t MonitorInfo::GetPartitionNo() const
{
    return m_partitionNo;
}

void MonitorInfo::SetPartitionNo(const int64_t& _partitionNo)
{
    m_partitionNo = _partitionNo;
    m_partitionNoHasBeenSet = true;
}

bool MonitorInfo::PartitionNoHasBeenSet() const
{
    return m_partitionNoHasBeenSet;
}

int64_t MonitorInfo::GetConsumerGroupOffset() const
{
    return m_consumerGroupOffset;
}

void MonitorInfo::SetConsumerGroupOffset(const int64_t& _consumerGroupOffset)
{
    m_consumerGroupOffset = _consumerGroupOffset;
    m_consumerGroupOffsetHasBeenSet = true;
}

bool MonitorInfo::ConsumerGroupOffsetHasBeenSet() const
{
    return m_consumerGroupOffsetHasBeenSet;
}

int64_t MonitorInfo::GetConsumerGroupLag() const
{
    return m_consumerGroupLag;
}

void MonitorInfo::SetConsumerGroupLag(const int64_t& _consumerGroupLag)
{
    m_consumerGroupLag = _consumerGroupLag;
    m_consumerGroupLagHasBeenSet = true;
}

bool MonitorInfo::ConsumerGroupLagHasBeenSet() const
{
    return m_consumerGroupLagHasBeenSet;
}

int64_t MonitorInfo::GetLatency() const
{
    return m_latency;
}

void MonitorInfo::SetLatency(const int64_t& _latency)
{
    m_latency = _latency;
    m_latencyHasBeenSet = true;
}

bool MonitorInfo::LatencyHasBeenSet() const
{
    return m_latencyHasBeenSet;
}

