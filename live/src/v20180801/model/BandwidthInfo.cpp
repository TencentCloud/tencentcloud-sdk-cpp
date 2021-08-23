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

#include <tencentcloud/live/v20180801/model/BandwidthInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

BandwidthInfo::BandwidthInfo() :
    m_timeHasBeenSet(false),
    m_bandwidthHasBeenSet(false)
{
}

CoreInternalOutcome BandwidthInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthInfo.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthInfo.Bandwidth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetDouble();
        m_bandwidthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BandwidthInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

}


string BandwidthInfo::GetTime() const
{
    return m_time;
}

void BandwidthInfo::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool BandwidthInfo::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

double BandwidthInfo::GetBandwidth() const
{
    return m_bandwidth;
}

void BandwidthInfo::SetBandwidth(const double& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool BandwidthInfo::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

