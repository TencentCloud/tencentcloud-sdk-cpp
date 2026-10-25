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

#include <tencentcloud/rum/v20210622/model/TDEMSSEPercentilePoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

TDEMSSEPercentilePoint::TDEMSSEPercentilePoint() :
    m_timeHasBeenSet(false),
    m_averageHasBeenSet(false),
    m_p50HasBeenSet(false),
    m_p75HasBeenSet(false),
    m_p95HasBeenSet(false),
    m_p99HasBeenSet(false)
{
}

CoreInternalOutcome TDEMSSEPercentilePoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TDEMSSEPercentilePoint.Time` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_time = value["Time"].GetInt64();
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Average") && !value["Average"].IsNull())
    {
        if (!value["Average"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TDEMSSEPercentilePoint.Average` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_average = value["Average"].GetDouble();
        m_averageHasBeenSet = true;
    }

    if (value.HasMember("P50") && !value["P50"].IsNull())
    {
        if (!value["P50"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TDEMSSEPercentilePoint.P50` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_p50 = value["P50"].GetDouble();
        m_p50HasBeenSet = true;
    }

    if (value.HasMember("P75") && !value["P75"].IsNull())
    {
        if (!value["P75"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TDEMSSEPercentilePoint.P75` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_p75 = value["P75"].GetDouble();
        m_p75HasBeenSet = true;
    }

    if (value.HasMember("P95") && !value["P95"].IsNull())
    {
        if (!value["P95"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TDEMSSEPercentilePoint.P95` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_p95 = value["P95"].GetDouble();
        m_p95HasBeenSet = true;
    }

    if (value.HasMember("P99") && !value["P99"].IsNull())
    {
        if (!value["P99"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TDEMSSEPercentilePoint.P99` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_p99 = value["P99"].GetDouble();
        m_p99HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TDEMSSEPercentilePoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_time, allocator);
    }

    if (m_averageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Average";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_average, allocator);
    }

    if (m_p50HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P50";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_p50, allocator);
    }

    if (m_p75HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P75";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_p75, allocator);
    }

    if (m_p95HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P95";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_p95, allocator);
    }

    if (m_p99HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P99";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_p99, allocator);
    }

}


int64_t TDEMSSEPercentilePoint::GetTime() const
{
    return m_time;
}

void TDEMSSEPercentilePoint::SetTime(const int64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool TDEMSSEPercentilePoint::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

double TDEMSSEPercentilePoint::GetAverage() const
{
    return m_average;
}

void TDEMSSEPercentilePoint::SetAverage(const double& _average)
{
    m_average = _average;
    m_averageHasBeenSet = true;
}

bool TDEMSSEPercentilePoint::AverageHasBeenSet() const
{
    return m_averageHasBeenSet;
}

double TDEMSSEPercentilePoint::GetP50() const
{
    return m_p50;
}

void TDEMSSEPercentilePoint::SetP50(const double& _p50)
{
    m_p50 = _p50;
    m_p50HasBeenSet = true;
}

bool TDEMSSEPercentilePoint::P50HasBeenSet() const
{
    return m_p50HasBeenSet;
}

double TDEMSSEPercentilePoint::GetP75() const
{
    return m_p75;
}

void TDEMSSEPercentilePoint::SetP75(const double& _p75)
{
    m_p75 = _p75;
    m_p75HasBeenSet = true;
}

bool TDEMSSEPercentilePoint::P75HasBeenSet() const
{
    return m_p75HasBeenSet;
}

double TDEMSSEPercentilePoint::GetP95() const
{
    return m_p95;
}

void TDEMSSEPercentilePoint::SetP95(const double& _p95)
{
    m_p95 = _p95;
    m_p95HasBeenSet = true;
}

bool TDEMSSEPercentilePoint::P95HasBeenSet() const
{
    return m_p95HasBeenSet;
}

double TDEMSSEPercentilePoint::GetP99() const
{
    return m_p99;
}

void TDEMSSEPercentilePoint::SetP99(const double& _p99)
{
    m_p99 = _p99;
    m_p99HasBeenSet = true;
}

bool TDEMSSEPercentilePoint::P99HasBeenSet() const
{
    return m_p99HasBeenSet;
}

