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
using namespace rapidjson;
using namespace std;

BandwidthAlert::BandwidthAlert() :
    m_switchHasBeenSet(false),
    m_bpsThresholdHasBeenSet(false),
    m_counterMeasureHasBeenSet(false),
    m_lastTriggerTimeHasBeenSet(false)
{
}

CoreInternalOutcome BandwidthAlert::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Error("response `BandwidthAlert.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("BpsThreshold") && !value["BpsThreshold"].IsNull())
    {
        if (!value["BpsThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BandwidthAlert.BpsThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bpsThreshold = value["BpsThreshold"].GetInt64();
        m_bpsThresholdHasBeenSet = true;
    }

    if (value.HasMember("CounterMeasure") && !value["CounterMeasure"].IsNull())
    {
        if (!value["CounterMeasure"].IsString())
        {
            return CoreInternalOutcome(Error("response `BandwidthAlert.CounterMeasure` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_counterMeasure = string(value["CounterMeasure"].GetString());
        m_counterMeasureHasBeenSet = true;
    }

    if (value.HasMember("LastTriggerTime") && !value["LastTriggerTime"].IsNull())
    {
        if (!value["LastTriggerTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `BandwidthAlert.LastTriggerTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTriggerTime = string(value["LastTriggerTime"].GetString());
        m_lastTriggerTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BandwidthAlert::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_bpsThresholdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BpsThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bpsThreshold, allocator);
    }

    if (m_counterMeasureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CounterMeasure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_counterMeasure.c_str(), allocator).Move(), allocator);
    }

    if (m_lastTriggerTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LastTriggerTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_lastTriggerTime.c_str(), allocator).Move(), allocator);
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

