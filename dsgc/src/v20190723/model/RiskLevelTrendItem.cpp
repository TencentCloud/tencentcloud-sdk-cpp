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

#include <tencentcloud/dsgc/v20190723/model/RiskLevelTrendItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

RiskLevelTrendItem::RiskLevelTrendItem() :
    m_dateHasBeenSet(false),
    m_highHasBeenSet(false),
    m_mediumHasBeenSet(false),
    m_lowHasBeenSet(false),
    m_totalHasBeenSet(false)
{
}

CoreInternalOutcome RiskLevelTrendItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevelTrendItem.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("High") && !value["High"].IsNull())
    {
        if (!value["High"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevelTrendItem.High` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_high = value["High"].GetUint64();
        m_highHasBeenSet = true;
    }

    if (value.HasMember("Medium") && !value["Medium"].IsNull())
    {
        if (!value["Medium"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevelTrendItem.Medium` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_medium = value["Medium"].GetUint64();
        m_mediumHasBeenSet = true;
    }

    if (value.HasMember("Low") && !value["Low"].IsNull())
    {
        if (!value["Low"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevelTrendItem.Low` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_low = value["Low"].GetUint64();
        m_lowHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevelTrendItem.Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskLevelTrendItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_highHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "High";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_high, allocator);
    }

    if (m_mediumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Medium";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_medium, allocator);
    }

    if (m_lowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Low";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_low, allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

}


string RiskLevelTrendItem::GetDate() const
{
    return m_date;
}

void RiskLevelTrendItem::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool RiskLevelTrendItem::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

uint64_t RiskLevelTrendItem::GetHigh() const
{
    return m_high;
}

void RiskLevelTrendItem::SetHigh(const uint64_t& _high)
{
    m_high = _high;
    m_highHasBeenSet = true;
}

bool RiskLevelTrendItem::HighHasBeenSet() const
{
    return m_highHasBeenSet;
}

uint64_t RiskLevelTrendItem::GetMedium() const
{
    return m_medium;
}

void RiskLevelTrendItem::SetMedium(const uint64_t& _medium)
{
    m_medium = _medium;
    m_mediumHasBeenSet = true;
}

bool RiskLevelTrendItem::MediumHasBeenSet() const
{
    return m_mediumHasBeenSet;
}

uint64_t RiskLevelTrendItem::GetLow() const
{
    return m_low;
}

void RiskLevelTrendItem::SetLow(const uint64_t& _low)
{
    m_low = _low;
    m_lowHasBeenSet = true;
}

bool RiskLevelTrendItem::LowHasBeenSet() const
{
    return m_lowHasBeenSet;
}

uint64_t RiskLevelTrendItem::GetTotal() const
{
    return m_total;
}

void RiskLevelTrendItem::SetTotal(const uint64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool RiskLevelTrendItem::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

