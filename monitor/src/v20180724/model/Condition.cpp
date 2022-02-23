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

#include <tencentcloud/monitor/v20180724/model/Condition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

Condition::Condition() :
    m_alarmNotifyPeriodHasBeenSet(false),
    m_alarmNotifyTypeHasBeenSet(false),
    m_calcTypeHasBeenSet(false),
    m_calcValueHasBeenSet(false),
    m_continueTimeHasBeenSet(false),
    m_metricIDHasBeenSet(false),
    m_metricDisplayNameHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_ruleIDHasBeenSet(false),
    m_unitHasBeenSet(false)
{
}

CoreInternalOutcome Condition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmNotifyPeriod") && !value["AlarmNotifyPeriod"].IsNull())
    {
        if (!value["AlarmNotifyPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Condition.AlarmNotifyPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmNotifyPeriod = value["AlarmNotifyPeriod"].GetInt64();
        m_alarmNotifyPeriodHasBeenSet = true;
    }

    if (value.HasMember("AlarmNotifyType") && !value["AlarmNotifyType"].IsNull())
    {
        if (!value["AlarmNotifyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Condition.AlarmNotifyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmNotifyType = value["AlarmNotifyType"].GetInt64();
        m_alarmNotifyTypeHasBeenSet = true;
    }

    if (value.HasMember("CalcType") && !value["CalcType"].IsNull())
    {
        if (!value["CalcType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Condition.CalcType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calcType = string(value["CalcType"].GetString());
        m_calcTypeHasBeenSet = true;
    }

    if (value.HasMember("CalcValue") && !value["CalcValue"].IsNull())
    {
        if (!value["CalcValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Condition.CalcValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calcValue = string(value["CalcValue"].GetString());
        m_calcValueHasBeenSet = true;
    }

    if (value.HasMember("ContinueTime") && !value["ContinueTime"].IsNull())
    {
        if (!value["ContinueTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Condition.ContinueTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_continueTime = string(value["ContinueTime"].GetString());
        m_continueTimeHasBeenSet = true;
    }

    if (value.HasMember("MetricID") && !value["MetricID"].IsNull())
    {
        if (!value["MetricID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Condition.MetricID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_metricID = value["MetricID"].GetInt64();
        m_metricIDHasBeenSet = true;
    }

    if (value.HasMember("MetricDisplayName") && !value["MetricDisplayName"].IsNull())
    {
        if (!value["MetricDisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Condition.MetricDisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricDisplayName = string(value["MetricDisplayName"].GetString());
        m_metricDisplayNameHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Condition.Period` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetInt64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Condition.RuleID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = value["RuleID"].GetInt64();
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Condition.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Condition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmNotifyPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmNotifyPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmNotifyPeriod, allocator);
    }

    if (m_alarmNotifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmNotifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmNotifyType, allocator);
    }

    if (m_calcTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalcType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_calcType.c_str(), allocator).Move(), allocator);
    }

    if (m_calcValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalcValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_calcValue.c_str(), allocator).Move(), allocator);
    }

    if (m_continueTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContinueTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_continueTime.c_str(), allocator).Move(), allocator);
    }

    if (m_metricIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metricID, allocator);
    }

    if (m_metricDisplayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricDisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricDisplayName.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleID, allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

}


int64_t Condition::GetAlarmNotifyPeriod() const
{
    return m_alarmNotifyPeriod;
}

void Condition::SetAlarmNotifyPeriod(const int64_t& _alarmNotifyPeriod)
{
    m_alarmNotifyPeriod = _alarmNotifyPeriod;
    m_alarmNotifyPeriodHasBeenSet = true;
}

bool Condition::AlarmNotifyPeriodHasBeenSet() const
{
    return m_alarmNotifyPeriodHasBeenSet;
}

int64_t Condition::GetAlarmNotifyType() const
{
    return m_alarmNotifyType;
}

void Condition::SetAlarmNotifyType(const int64_t& _alarmNotifyType)
{
    m_alarmNotifyType = _alarmNotifyType;
    m_alarmNotifyTypeHasBeenSet = true;
}

bool Condition::AlarmNotifyTypeHasBeenSet() const
{
    return m_alarmNotifyTypeHasBeenSet;
}

string Condition::GetCalcType() const
{
    return m_calcType;
}

void Condition::SetCalcType(const string& _calcType)
{
    m_calcType = _calcType;
    m_calcTypeHasBeenSet = true;
}

bool Condition::CalcTypeHasBeenSet() const
{
    return m_calcTypeHasBeenSet;
}

string Condition::GetCalcValue() const
{
    return m_calcValue;
}

void Condition::SetCalcValue(const string& _calcValue)
{
    m_calcValue = _calcValue;
    m_calcValueHasBeenSet = true;
}

bool Condition::CalcValueHasBeenSet() const
{
    return m_calcValueHasBeenSet;
}

string Condition::GetContinueTime() const
{
    return m_continueTime;
}

void Condition::SetContinueTime(const string& _continueTime)
{
    m_continueTime = _continueTime;
    m_continueTimeHasBeenSet = true;
}

bool Condition::ContinueTimeHasBeenSet() const
{
    return m_continueTimeHasBeenSet;
}

int64_t Condition::GetMetricID() const
{
    return m_metricID;
}

void Condition::SetMetricID(const int64_t& _metricID)
{
    m_metricID = _metricID;
    m_metricIDHasBeenSet = true;
}

bool Condition::MetricIDHasBeenSet() const
{
    return m_metricIDHasBeenSet;
}

string Condition::GetMetricDisplayName() const
{
    return m_metricDisplayName;
}

void Condition::SetMetricDisplayName(const string& _metricDisplayName)
{
    m_metricDisplayName = _metricDisplayName;
    m_metricDisplayNameHasBeenSet = true;
}

bool Condition::MetricDisplayNameHasBeenSet() const
{
    return m_metricDisplayNameHasBeenSet;
}

int64_t Condition::GetPeriod() const
{
    return m_period;
}

void Condition::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool Condition::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

int64_t Condition::GetRuleID() const
{
    return m_ruleID;
}

void Condition::SetRuleID(const int64_t& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool Condition::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string Condition::GetUnit() const
{
    return m_unit;
}

void Condition::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool Condition::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

