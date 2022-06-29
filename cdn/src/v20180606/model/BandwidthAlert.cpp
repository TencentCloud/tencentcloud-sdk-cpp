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

#include <tencentcloud/cdn/v20180606/model/BandwidthAlert.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

BandwidthAlert::BandwidthAlert() :
    m_switchHasBeenSet(false),
    m_bpsThresholdHasBeenSet(false),
    m_counterMeasureHasBeenSet(false),
    m_lastTriggerTimeHasBeenSet(false),
    m_alertSwitchHasBeenSet(false),
    m_alertPercentageHasBeenSet(false),
    m_lastTriggerTimeOverseasHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_statisticItemsHasBeenSet(false)
{
}

CoreInternalOutcome BandwidthAlert::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthAlert.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("BpsThreshold") && !value["BpsThreshold"].IsNull())
    {
        if (!value["BpsThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthAlert.BpsThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bpsThreshold = value["BpsThreshold"].GetInt64();
        m_bpsThresholdHasBeenSet = true;
    }

    if (value.HasMember("CounterMeasure") && !value["CounterMeasure"].IsNull())
    {
        if (!value["CounterMeasure"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthAlert.CounterMeasure` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_counterMeasure = string(value["CounterMeasure"].GetString());
        m_counterMeasureHasBeenSet = true;
    }

    if (value.HasMember("LastTriggerTime") && !value["LastTriggerTime"].IsNull())
    {
        if (!value["LastTriggerTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthAlert.LastTriggerTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTriggerTime = string(value["LastTriggerTime"].GetString());
        m_lastTriggerTimeHasBeenSet = true;
    }

    if (value.HasMember("AlertSwitch") && !value["AlertSwitch"].IsNull())
    {
        if (!value["AlertSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthAlert.AlertSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alertSwitch = string(value["AlertSwitch"].GetString());
        m_alertSwitchHasBeenSet = true;
    }

    if (value.HasMember("AlertPercentage") && !value["AlertPercentage"].IsNull())
    {
        if (!value["AlertPercentage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthAlert.AlertPercentage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alertPercentage = value["AlertPercentage"].GetInt64();
        m_alertPercentageHasBeenSet = true;
    }

    if (value.HasMember("LastTriggerTimeOverseas") && !value["LastTriggerTimeOverseas"].IsNull())
    {
        if (!value["LastTriggerTimeOverseas"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthAlert.LastTriggerTimeOverseas` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTriggerTimeOverseas = string(value["LastTriggerTimeOverseas"].GetString());
        m_lastTriggerTimeOverseasHasBeenSet = true;
    }

    if (value.HasMember("Metric") && !value["Metric"].IsNull())
    {
        if (!value["Metric"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthAlert.Metric` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metric = string(value["Metric"].GetString());
        m_metricHasBeenSet = true;
    }

    if (value.HasMember("StatisticItems") && !value["StatisticItems"].IsNull())
    {
        if (!value["StatisticItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BandwidthAlert.StatisticItems` is not array type"));

        const rapidjson::Value &tmpValue = value["StatisticItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StatisticItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_statisticItems.push_back(item);
        }
        m_statisticItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BandwidthAlert::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
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

    if (m_lastTriggerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTriggerTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTriggerTime.c_str(), allocator).Move(), allocator);
    }

    if (m_alertSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alertSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_alertPercentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertPercentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alertPercentage, allocator);
    }

    if (m_lastTriggerTimeOverseasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTriggerTimeOverseas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTriggerTimeOverseas.c_str(), allocator).Move(), allocator);
    }

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_statisticItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatisticItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_statisticItems.begin(); itr != m_statisticItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string BandwidthAlert::GetSwitch() const
{
    return m_switch;
}

void BandwidthAlert::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool BandwidthAlert::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

int64_t BandwidthAlert::GetBpsThreshold() const
{
    return m_bpsThreshold;
}

void BandwidthAlert::SetBpsThreshold(const int64_t& _bpsThreshold)
{
    m_bpsThreshold = _bpsThreshold;
    m_bpsThresholdHasBeenSet = true;
}

bool BandwidthAlert::BpsThresholdHasBeenSet() const
{
    return m_bpsThresholdHasBeenSet;
}

string BandwidthAlert::GetCounterMeasure() const
{
    return m_counterMeasure;
}

void BandwidthAlert::SetCounterMeasure(const string& _counterMeasure)
{
    m_counterMeasure = _counterMeasure;
    m_counterMeasureHasBeenSet = true;
}

bool BandwidthAlert::CounterMeasureHasBeenSet() const
{
    return m_counterMeasureHasBeenSet;
}

string BandwidthAlert::GetLastTriggerTime() const
{
    return m_lastTriggerTime;
}

void BandwidthAlert::SetLastTriggerTime(const string& _lastTriggerTime)
{
    m_lastTriggerTime = _lastTriggerTime;
    m_lastTriggerTimeHasBeenSet = true;
}

bool BandwidthAlert::LastTriggerTimeHasBeenSet() const
{
    return m_lastTriggerTimeHasBeenSet;
}

string BandwidthAlert::GetAlertSwitch() const
{
    return m_alertSwitch;
}

void BandwidthAlert::SetAlertSwitch(const string& _alertSwitch)
{
    m_alertSwitch = _alertSwitch;
    m_alertSwitchHasBeenSet = true;
}

bool BandwidthAlert::AlertSwitchHasBeenSet() const
{
    return m_alertSwitchHasBeenSet;
}

int64_t BandwidthAlert::GetAlertPercentage() const
{
    return m_alertPercentage;
}

void BandwidthAlert::SetAlertPercentage(const int64_t& _alertPercentage)
{
    m_alertPercentage = _alertPercentage;
    m_alertPercentageHasBeenSet = true;
}

bool BandwidthAlert::AlertPercentageHasBeenSet() const
{
    return m_alertPercentageHasBeenSet;
}

string BandwidthAlert::GetLastTriggerTimeOverseas() const
{
    return m_lastTriggerTimeOverseas;
}

void BandwidthAlert::SetLastTriggerTimeOverseas(const string& _lastTriggerTimeOverseas)
{
    m_lastTriggerTimeOverseas = _lastTriggerTimeOverseas;
    m_lastTriggerTimeOverseasHasBeenSet = true;
}

bool BandwidthAlert::LastTriggerTimeOverseasHasBeenSet() const
{
    return m_lastTriggerTimeOverseasHasBeenSet;
}

string BandwidthAlert::GetMetric() const
{
    return m_metric;
}

void BandwidthAlert::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool BandwidthAlert::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

vector<StatisticItem> BandwidthAlert::GetStatisticItems() const
{
    return m_statisticItems;
}

void BandwidthAlert::SetStatisticItems(const vector<StatisticItem>& _statisticItems)
{
    m_statisticItems = _statisticItems;
    m_statisticItemsHasBeenSet = true;
}

bool BandwidthAlert::StatisticItemsHasBeenSet() const
{
    return m_statisticItemsHasBeenSet;
}

