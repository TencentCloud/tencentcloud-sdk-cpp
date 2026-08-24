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

#include <tencentcloud/bdrc/v20260330/model/FlowControlRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

FlowControlRule::FlowControlRule() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_maxBandwidthMBpsHasBeenSet(false)
{
}

CoreInternalOutcome FlowControlRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowControlRule.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowControlRule.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxBandwidthMBps") && !value["MaxBandwidthMBps"].IsNull())
    {
        if (!value["MaxBandwidthMBps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowControlRule.MaxBandwidthMBps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBandwidthMBps = value["MaxBandwidthMBps"].GetUint64();
        m_maxBandwidthMBpsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowControlRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_maxBandwidthMBpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBandwidthMBps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBandwidthMBps, allocator);
    }

}


string FlowControlRule::GetStartTime() const
{
    return m_startTime;
}

void FlowControlRule::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool FlowControlRule::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string FlowControlRule::GetEndTime() const
{
    return m_endTime;
}

void FlowControlRule::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool FlowControlRule::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t FlowControlRule::GetMaxBandwidthMBps() const
{
    return m_maxBandwidthMBps;
}

void FlowControlRule::SetMaxBandwidthMBps(const uint64_t& _maxBandwidthMBps)
{
    m_maxBandwidthMBps = _maxBandwidthMBps;
    m_maxBandwidthMBpsHasBeenSet = true;
}

bool FlowControlRule::MaxBandwidthMBpsHasBeenSet() const
{
    return m_maxBandwidthMBpsHasBeenSet;
}

