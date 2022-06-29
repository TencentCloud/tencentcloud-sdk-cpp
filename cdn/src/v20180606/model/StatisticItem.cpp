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

#include <tencentcloud/cdn/v20180606/model/StatisticItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

StatisticItem::StatisticItem() :
    m_typeHasBeenSet(false),
    m_unBlockTimeHasBeenSet(false),
    m_bpsThresholdHasBeenSet(false),
    m_counterMeasureHasBeenSet(false),
    m_alertPercentageHasBeenSet(false),
    m_alertSwitchHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_cycleHasBeenSet(false),
    m_switchHasBeenSet(false)
{
}

CoreInternalOutcome StatisticItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("UnBlockTime") && !value["UnBlockTime"].IsNull())
    {
        if (!value["UnBlockTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticItem.UnBlockTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unBlockTime = value["UnBlockTime"].GetUint64();
        m_unBlockTimeHasBeenSet = true;
    }

    if (value.HasMember("BpsThreshold") && !value["BpsThreshold"].IsNull())
    {
        if (!value["BpsThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticItem.BpsThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bpsThreshold = value["BpsThreshold"].GetUint64();
        m_bpsThresholdHasBeenSet = true;
    }

    if (value.HasMember("CounterMeasure") && !value["CounterMeasure"].IsNull())
    {
        if (!value["CounterMeasure"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticItem.CounterMeasure` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_counterMeasure = string(value["CounterMeasure"].GetString());
        m_counterMeasureHasBeenSet = true;
    }

    if (value.HasMember("AlertPercentage") && !value["AlertPercentage"].IsNull())
    {
        if (!value["AlertPercentage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticItem.AlertPercentage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alertPercentage = value["AlertPercentage"].GetUint64();
        m_alertPercentageHasBeenSet = true;
    }

    if (value.HasMember("AlertSwitch") && !value["AlertSwitch"].IsNull())
    {
        if (!value["AlertSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticItem.AlertSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alertSwitch = string(value["AlertSwitch"].GetString());
        m_alertSwitchHasBeenSet = true;
    }

    if (value.HasMember("Metric") && !value["Metric"].IsNull())
    {
        if (!value["Metric"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticItem.Metric` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metric = string(value["Metric"].GetString());
        m_metricHasBeenSet = true;
    }

    if (value.HasMember("Cycle") && !value["Cycle"].IsNull())
    {
        if (!value["Cycle"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticItem.Cycle` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cycle = value["Cycle"].GetUint64();
        m_cycleHasBeenSet = true;
    }

    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticItem.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StatisticItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_unBlockTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnBlockTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unBlockTime, allocator);
    }

    if (m_bpsThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BpsThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bpsThreshold, allocator);
    }

    if (m_counterMeasureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CounterMeasure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_counterMeasure.c_str(), allocator).Move(), allocator);
    }

    if (m_alertPercentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertPercentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alertPercentage, allocator);
    }

    if (m_alertSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alertSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cycle, allocator);
    }

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

}


string StatisticItem::GetType() const
{
    return m_type;
}

void StatisticItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool StatisticItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t StatisticItem::GetUnBlockTime() const
{
    return m_unBlockTime;
}

void StatisticItem::SetUnBlockTime(const uint64_t& _unBlockTime)
{
    m_unBlockTime = _unBlockTime;
    m_unBlockTimeHasBeenSet = true;
}

bool StatisticItem::UnBlockTimeHasBeenSet() const
{
    return m_unBlockTimeHasBeenSet;
}

uint64_t StatisticItem::GetBpsThreshold() const
{
    return m_bpsThreshold;
}

void StatisticItem::SetBpsThreshold(const uint64_t& _bpsThreshold)
{
    m_bpsThreshold = _bpsThreshold;
    m_bpsThresholdHasBeenSet = true;
}

bool StatisticItem::BpsThresholdHasBeenSet() const
{
    return m_bpsThresholdHasBeenSet;
}

string StatisticItem::GetCounterMeasure() const
{
    return m_counterMeasure;
}

void StatisticItem::SetCounterMeasure(const string& _counterMeasure)
{
    m_counterMeasure = _counterMeasure;
    m_counterMeasureHasBeenSet = true;
}

bool StatisticItem::CounterMeasureHasBeenSet() const
{
    return m_counterMeasureHasBeenSet;
}

uint64_t StatisticItem::GetAlertPercentage() const
{
    return m_alertPercentage;
}

void StatisticItem::SetAlertPercentage(const uint64_t& _alertPercentage)
{
    m_alertPercentage = _alertPercentage;
    m_alertPercentageHasBeenSet = true;
}

bool StatisticItem::AlertPercentageHasBeenSet() const
{
    return m_alertPercentageHasBeenSet;
}

string StatisticItem::GetAlertSwitch() const
{
    return m_alertSwitch;
}

void StatisticItem::SetAlertSwitch(const string& _alertSwitch)
{
    m_alertSwitch = _alertSwitch;
    m_alertSwitchHasBeenSet = true;
}

bool StatisticItem::AlertSwitchHasBeenSet() const
{
    return m_alertSwitchHasBeenSet;
}

string StatisticItem::GetMetric() const
{
    return m_metric;
}

void StatisticItem::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool StatisticItem::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

uint64_t StatisticItem::GetCycle() const
{
    return m_cycle;
}

void StatisticItem::SetCycle(const uint64_t& _cycle)
{
    m_cycle = _cycle;
    m_cycleHasBeenSet = true;
}

bool StatisticItem::CycleHasBeenSet() const
{
    return m_cycleHasBeenSet;
}

string StatisticItem::GetSwitch() const
{
    return m_switch;
}

void StatisticItem::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool StatisticItem::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

