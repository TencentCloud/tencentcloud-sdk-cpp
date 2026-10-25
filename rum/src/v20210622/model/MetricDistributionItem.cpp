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

#include <tencentcloud/rum/v20210622/model/MetricDistributionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

MetricDistributionItem::MetricDistributionItem() :
    m_valueHasBeenSet(false),
    m_countHasBeenSet(false),
    m_affectedUserHasBeenSet(false),
    m_rateHasBeenSet(false),
    m_affectedUserRateHasBeenSet(false),
    m_avgHasBeenSet(false),
    m_p50HasBeenSet(false),
    m_p75HasBeenSet(false),
    m_p95HasBeenSet(false),
    m_p99HasBeenSet(false)
{
}

CoreInternalOutcome MetricDistributionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricDistributionItem.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricDistributionItem.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("AffectedUser") && !value["AffectedUser"].IsNull())
    {
        if (!value["AffectedUser"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricDistributionItem.AffectedUser` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_affectedUser = value["AffectedUser"].GetInt64();
        m_affectedUserHasBeenSet = true;
    }

    if (value.HasMember("Rate") && !value["Rate"].IsNull())
    {
        if (!value["Rate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricDistributionItem.Rate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rate = value["Rate"].GetDouble();
        m_rateHasBeenSet = true;
    }

    if (value.HasMember("AffectedUserRate") && !value["AffectedUserRate"].IsNull())
    {
        if (!value["AffectedUserRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricDistributionItem.AffectedUserRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_affectedUserRate = value["AffectedUserRate"].GetDouble();
        m_affectedUserRateHasBeenSet = true;
    }

    if (value.HasMember("Avg") && !value["Avg"].IsNull())
    {
        if (!value["Avg"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricDistributionItem.Avg` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avg = value["Avg"].GetDouble();
        m_avgHasBeenSet = true;
    }

    if (value.HasMember("P50") && !value["P50"].IsNull())
    {
        if (!value["P50"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricDistributionItem.P50` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_p50 = value["P50"].GetDouble();
        m_p50HasBeenSet = true;
    }

    if (value.HasMember("P75") && !value["P75"].IsNull())
    {
        if (!value["P75"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricDistributionItem.P75` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_p75 = value["P75"].GetDouble();
        m_p75HasBeenSet = true;
    }

    if (value.HasMember("P95") && !value["P95"].IsNull())
    {
        if (!value["P95"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricDistributionItem.P95` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_p95 = value["P95"].GetDouble();
        m_p95HasBeenSet = true;
    }

    if (value.HasMember("P99") && !value["P99"].IsNull())
    {
        if (!value["P99"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricDistributionItem.P99` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_p99 = value["P99"].GetDouble();
        m_p99HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricDistributionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_affectedUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectedUser, allocator);
    }

    if (m_rateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rate, allocator);
    }

    if (m_affectedUserRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedUserRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectedUserRate, allocator);
    }

    if (m_avgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Avg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avg, allocator);
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


string MetricDistributionItem::GetValue() const
{
    return m_value;
}

void MetricDistributionItem::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool MetricDistributionItem::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

int64_t MetricDistributionItem::GetCount() const
{
    return m_count;
}

void MetricDistributionItem::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool MetricDistributionItem::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t MetricDistributionItem::GetAffectedUser() const
{
    return m_affectedUser;
}

void MetricDistributionItem::SetAffectedUser(const int64_t& _affectedUser)
{
    m_affectedUser = _affectedUser;
    m_affectedUserHasBeenSet = true;
}

bool MetricDistributionItem::AffectedUserHasBeenSet() const
{
    return m_affectedUserHasBeenSet;
}

double MetricDistributionItem::GetRate() const
{
    return m_rate;
}

void MetricDistributionItem::SetRate(const double& _rate)
{
    m_rate = _rate;
    m_rateHasBeenSet = true;
}

bool MetricDistributionItem::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

double MetricDistributionItem::GetAffectedUserRate() const
{
    return m_affectedUserRate;
}

void MetricDistributionItem::SetAffectedUserRate(const double& _affectedUserRate)
{
    m_affectedUserRate = _affectedUserRate;
    m_affectedUserRateHasBeenSet = true;
}

bool MetricDistributionItem::AffectedUserRateHasBeenSet() const
{
    return m_affectedUserRateHasBeenSet;
}

double MetricDistributionItem::GetAvg() const
{
    return m_avg;
}

void MetricDistributionItem::SetAvg(const double& _avg)
{
    m_avg = _avg;
    m_avgHasBeenSet = true;
}

bool MetricDistributionItem::AvgHasBeenSet() const
{
    return m_avgHasBeenSet;
}

double MetricDistributionItem::GetP50() const
{
    return m_p50;
}

void MetricDistributionItem::SetP50(const double& _p50)
{
    m_p50 = _p50;
    m_p50HasBeenSet = true;
}

bool MetricDistributionItem::P50HasBeenSet() const
{
    return m_p50HasBeenSet;
}

double MetricDistributionItem::GetP75() const
{
    return m_p75;
}

void MetricDistributionItem::SetP75(const double& _p75)
{
    m_p75 = _p75;
    m_p75HasBeenSet = true;
}

bool MetricDistributionItem::P75HasBeenSet() const
{
    return m_p75HasBeenSet;
}

double MetricDistributionItem::GetP95() const
{
    return m_p95;
}

void MetricDistributionItem::SetP95(const double& _p95)
{
    m_p95 = _p95;
    m_p95HasBeenSet = true;
}

bool MetricDistributionItem::P95HasBeenSet() const
{
    return m_p95HasBeenSet;
}

double MetricDistributionItem::GetP99() const
{
    return m_p99;
}

void MetricDistributionItem::SetP99(const double& _p99)
{
    m_p99 = _p99;
    m_p99HasBeenSet = true;
}

bool MetricDistributionItem::P99HasBeenSet() const
{
    return m_p99HasBeenSet;
}

