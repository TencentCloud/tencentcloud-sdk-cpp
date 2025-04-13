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

#include <tencentcloud/ccc/v20200210/model/AILatencyStatisticsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

AILatencyStatisticsInfo::AILatencyStatisticsInfo() :
    m_minLatencyHasBeenSet(false),
    m_middleLatencyHasBeenSet(false),
    m_p90LatencyHasBeenSet(false)
{
}

CoreInternalOutcome AILatencyStatisticsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MinLatency") && !value["MinLatency"].IsNull())
    {
        if (!value["MinLatency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AILatencyStatisticsInfo.MinLatency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minLatency = value["MinLatency"].GetInt64();
        m_minLatencyHasBeenSet = true;
    }

    if (value.HasMember("MiddleLatency") && !value["MiddleLatency"].IsNull())
    {
        if (!value["MiddleLatency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AILatencyStatisticsInfo.MiddleLatency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_middleLatency = value["MiddleLatency"].GetInt64();
        m_middleLatencyHasBeenSet = true;
    }

    if (value.HasMember("P90Latency") && !value["P90Latency"].IsNull())
    {
        if (!value["P90Latency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AILatencyStatisticsInfo.P90Latency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_p90Latency = value["P90Latency"].GetInt64();
        m_p90LatencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AILatencyStatisticsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_minLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minLatency, allocator);
    }

    if (m_middleLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiddleLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_middleLatency, allocator);
    }

    if (m_p90LatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P90Latency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_p90Latency, allocator);
    }

}


int64_t AILatencyStatisticsInfo::GetMinLatency() const
{
    return m_minLatency;
}

void AILatencyStatisticsInfo::SetMinLatency(const int64_t& _minLatency)
{
    m_minLatency = _minLatency;
    m_minLatencyHasBeenSet = true;
}

bool AILatencyStatisticsInfo::MinLatencyHasBeenSet() const
{
    return m_minLatencyHasBeenSet;
}

int64_t AILatencyStatisticsInfo::GetMiddleLatency() const
{
    return m_middleLatency;
}

void AILatencyStatisticsInfo::SetMiddleLatency(const int64_t& _middleLatency)
{
    m_middleLatency = _middleLatency;
    m_middleLatencyHasBeenSet = true;
}

bool AILatencyStatisticsInfo::MiddleLatencyHasBeenSet() const
{
    return m_middleLatencyHasBeenSet;
}

int64_t AILatencyStatisticsInfo::GetP90Latency() const
{
    return m_p90Latency;
}

void AILatencyStatisticsInfo::SetP90Latency(const int64_t& _p90Latency)
{
    m_p90Latency = _p90Latency;
    m_p90LatencyHasBeenSet = true;
}

bool AILatencyStatisticsInfo::P90LatencyHasBeenSet() const
{
    return m_p90LatencyHasBeenSet;
}

