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

#include <tencentcloud/live/v20180801/model/BillDataInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

BillDataInfo::BillDataInfo() :
    m_timeHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_fluxHasBeenSet(false),
    m_peakTimeHasBeenSet(false)
{
}

CoreInternalOutcome BillDataInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDataInfo.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BillDataInfo.Bandwidth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetDouble();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("Flux") && !value["Flux"].IsNull())
    {
        if (!value["Flux"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BillDataInfo.Flux` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_flux = value["Flux"].GetDouble();
        m_fluxHasBeenSet = true;
    }

    if (value.HasMember("PeakTime") && !value["PeakTime"].IsNull())
    {
        if (!value["PeakTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDataInfo.PeakTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peakTime = string(value["PeakTime"].GetString());
        m_peakTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BillDataInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_fluxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flux";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flux, allocator);
    }

    if (m_peakTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeakTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peakTime.c_str(), allocator).Move(), allocator);
    }

}


string BillDataInfo::GetTime() const
{
    return m_time;
}

void BillDataInfo::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool BillDataInfo::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

double BillDataInfo::GetBandwidth() const
{
    return m_bandwidth;
}

void BillDataInfo::SetBandwidth(const double& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool BillDataInfo::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

double BillDataInfo::GetFlux() const
{
    return m_flux;
}

void BillDataInfo::SetFlux(const double& _flux)
{
    m_flux = _flux;
    m_fluxHasBeenSet = true;
}

bool BillDataInfo::FluxHasBeenSet() const
{
    return m_fluxHasBeenSet;
}

string BillDataInfo::GetPeakTime() const
{
    return m_peakTime;
}

void BillDataInfo::SetPeakTime(const string& _peakTime)
{
    m_peakTime = _peakTime;
    m_peakTimeHasBeenSet = true;
}

bool BillDataInfo::PeakTimeHasBeenSet() const
{
    return m_peakTimeHasBeenSet;
}

