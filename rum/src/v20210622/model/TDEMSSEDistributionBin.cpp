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

#include <tencentcloud/rum/v20210622/model/TDEMSSEDistributionBin.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

TDEMSSEDistributionBin::TDEMSSEDistributionBin() :
    m_startHasBeenSet(false),
    m_endHasBeenSet(false),
    m_overflowHasBeenSet(false),
    m_countHasBeenSet(false),
    m_rateHasBeenSet(false)
{
}

CoreInternalOutcome TDEMSSEDistributionBin::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Start") && !value["Start"].IsNull())
    {
        if (!value["Start"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TDEMSSEDistributionBin.Start` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_start = value["Start"].GetDouble();
        m_startHasBeenSet = true;
    }

    if (value.HasMember("End") && !value["End"].IsNull())
    {
        if (!value["End"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TDEMSSEDistributionBin.End` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_end = value["End"].GetDouble();
        m_endHasBeenSet = true;
    }

    if (value.HasMember("Overflow") && !value["Overflow"].IsNull())
    {
        if (!value["Overflow"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TDEMSSEDistributionBin.Overflow` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_overflow = value["Overflow"].GetBool();
        m_overflowHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TDEMSSEDistributionBin.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Rate") && !value["Rate"].IsNull())
    {
        if (!value["Rate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TDEMSSEDistributionBin.Rate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rate = value["Rate"].GetDouble();
        m_rateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TDEMSSEDistributionBin::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Start";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_start, allocator);
    }

    if (m_endHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "End";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_end, allocator);
    }

    if (m_overflowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Overflow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_overflow, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_rateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rate, allocator);
    }

}


double TDEMSSEDistributionBin::GetStart() const
{
    return m_start;
}

void TDEMSSEDistributionBin::SetStart(const double& _start)
{
    m_start = _start;
    m_startHasBeenSet = true;
}

bool TDEMSSEDistributionBin::StartHasBeenSet() const
{
    return m_startHasBeenSet;
}

double TDEMSSEDistributionBin::GetEnd() const
{
    return m_end;
}

void TDEMSSEDistributionBin::SetEnd(const double& _end)
{
    m_end = _end;
    m_endHasBeenSet = true;
}

bool TDEMSSEDistributionBin::EndHasBeenSet() const
{
    return m_endHasBeenSet;
}

bool TDEMSSEDistributionBin::GetOverflow() const
{
    return m_overflow;
}

void TDEMSSEDistributionBin::SetOverflow(const bool& _overflow)
{
    m_overflow = _overflow;
    m_overflowHasBeenSet = true;
}

bool TDEMSSEDistributionBin::OverflowHasBeenSet() const
{
    return m_overflowHasBeenSet;
}

int64_t TDEMSSEDistributionBin::GetCount() const
{
    return m_count;
}

void TDEMSSEDistributionBin::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool TDEMSSEDistributionBin::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

double TDEMSSEDistributionBin::GetRate() const
{
    return m_rate;
}

void TDEMSSEDistributionBin::SetRate(const double& _rate)
{
    m_rate = _rate;
    m_rateHasBeenSet = true;
}

bool TDEMSSEDistributionBin::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

