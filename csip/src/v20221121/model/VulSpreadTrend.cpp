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

#include <tencentcloud/csip/v20221121/model/VulSpreadTrend.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VulSpreadTrend::VulSpreadTrend() :
    m_dateHasBeenSet(false),
    m_trendHasBeenSet(false)
{
}

CoreInternalOutcome VulSpreadTrend::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulSpreadTrend.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("Trend") && !value["Trend"].IsNull())
    {
        if (!value["Trend"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VulSpreadTrend.Trend` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_trend = value["Trend"].GetDouble();
        m_trendHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulSpreadTrend::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_trendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trend, allocator);
    }

}


string VulSpreadTrend::GetDate() const
{
    return m_date;
}

void VulSpreadTrend::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool VulSpreadTrend::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

double VulSpreadTrend::GetTrend() const
{
    return m_trend;
}

void VulSpreadTrend::SetTrend(const double& _trend)
{
    m_trend = _trend;
    m_trendHasBeenSet = true;
}

bool VulSpreadTrend::TrendHasBeenSet() const
{
    return m_trendHasBeenSet;
}

