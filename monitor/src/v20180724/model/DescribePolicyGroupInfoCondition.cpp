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

#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribePolicyGroupInfoCondition::DescribePolicyGroupInfoCondition() :
    m_metricShowNameHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_metricIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_alarmNotifyTypeHasBeenSet(false),
    m_alarmNotifyPeriodHasBeenSet(false),
    m_calcTypeHasBeenSet(false),
    m_calcValueHasBeenSet(false),
    m_continueTimeHasBeenSet(false),
    m_metricNameHasBeenSet(false)
{
}

CoreInternalOutcome DescribePolicyGroupInfoCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricShowName") && !value["MetricShowName"].IsNull())
    {
        if (!value["MetricShowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoCondition.MetricShowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricShowName = string(value["MetricShowName"].GetString());
        m_metricShowNameHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoCondition.Period` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetInt64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("MetricId") && !value["MetricId"].IsNull())
    {
        if (!value["MetricId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoCondition.MetricId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_metricId = value["MetricId"].GetInt64();
        m_metricIdHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoCondition.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoCondition.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("AlarmNotifyType") && !value["AlarmNotifyType"].IsNull())
    {
        if (!value["AlarmNotifyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoCondition.AlarmNotifyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmNotifyType = value["AlarmNotifyType"].GetInt64();
        m_alarmNotifyTypeHasBeenSet = true;
    }

    if (value.HasMember("AlarmNotifyPeriod") && !value["AlarmNotifyPeriod"].IsNull())
    {
        if (!value["AlarmNotifyPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoCondition.AlarmNotifyPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmNotifyPeriod = value["AlarmNotifyPeriod"].GetInt64();
        m_alarmNotifyPeriodHasBeenSet = true;
    }

    if (value.HasMember("CalcType") && !value["CalcType"].IsNull())
    {
        if (!value["CalcType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoCondition.CalcType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_calcType = value["CalcType"].GetInt64();
        m_calcTypeHasBeenSet = true;
    }

    if (value.HasMember("CalcValue") && !value["CalcValue"].IsNull())
    {
        if (!value["CalcValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoCondition.CalcValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calcValue = string(value["CalcValue"].GetString());
        m_calcValueHasBeenSet = true;
    }

    if (value.HasMember("ContinueTime") && !value["ContinueTime"].IsNull())
    {
        if (!value["ContinueTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoCondition.ContinueTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_continueTime = value["ContinueTime"].GetInt64();
        m_continueTimeHasBeenSet = true;
    }

    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoCondition.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribePolicyGroupInfoCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricShowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricShowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricShowName.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_metricIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metricId, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmNotifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmNotifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmNotifyType, allocator);
    }

    if (m_alarmNotifyPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmNotifyPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmNotifyPeriod, allocator);
    }

    if (m_calcTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalcType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_calcType, allocator);
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
        value.AddMember(iKey, m_continueTime, allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

}


string DescribePolicyGroupInfoCondition::GetMetricShowName() const
{
    return m_metricShowName;
}

void DescribePolicyGroupInfoCondition::SetMetricShowName(const string& _metricShowName)
{
    m_metricShowName = _metricShowName;
    m_metricShowNameHasBeenSet = true;
}

bool DescribePolicyGroupInfoCondition::MetricShowNameHasBeenSet() const
{
    return m_metricShowNameHasBeenSet;
}

int64_t DescribePolicyGroupInfoCondition::GetPeriod() const
{
    return m_period;
}

void DescribePolicyGroupInfoCondition::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool DescribePolicyGroupInfoCondition::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

int64_t DescribePolicyGroupInfoCondition::GetMetricId() const
{
    return m_metricId;
}

void DescribePolicyGroupInfoCondition::SetMetricId(const int64_t& _metricId)
{
    m_metricId = _metricId;
    m_metricIdHasBeenSet = true;
}

bool DescribePolicyGroupInfoCondition::MetricIdHasBeenSet() const
{
    return m_metricIdHasBeenSet;
}

int64_t DescribePolicyGroupInfoCondition::GetRuleId() const
{
    return m_ruleId;
}

void DescribePolicyGroupInfoCondition::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DescribePolicyGroupInfoCondition::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string DescribePolicyGroupInfoCondition::GetUnit() const
{
    return m_unit;
}

void DescribePolicyGroupInfoCondition::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool DescribePolicyGroupInfoCondition::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

int64_t DescribePolicyGroupInfoCondition::GetAlarmNotifyType() const
{
    return m_alarmNotifyType;
}

void DescribePolicyGroupInfoCondition::SetAlarmNotifyType(const int64_t& _alarmNotifyType)
{
    m_alarmNotifyType = _alarmNotifyType;
    m_alarmNotifyTypeHasBeenSet = true;
}

bool DescribePolicyGroupInfoCondition::AlarmNotifyTypeHasBeenSet() const
{
    return m_alarmNotifyTypeHasBeenSet;
}

int64_t DescribePolicyGroupInfoCondition::GetAlarmNotifyPeriod() const
{
    return m_alarmNotifyPeriod;
}

void DescribePolicyGroupInfoCondition::SetAlarmNotifyPeriod(const int64_t& _alarmNotifyPeriod)
{
    m_alarmNotifyPeriod = _alarmNotifyPeriod;
    m_alarmNotifyPeriodHasBeenSet = true;
}

bool DescribePolicyGroupInfoCondition::AlarmNotifyPeriodHasBeenSet() const
{
    return m_alarmNotifyPeriodHasBeenSet;
}

int64_t DescribePolicyGroupInfoCondition::GetCalcType() const
{
    return m_calcType;
}

void DescribePolicyGroupInfoCondition::SetCalcType(const int64_t& _calcType)
{
    m_calcType = _calcType;
    m_calcTypeHasBeenSet = true;
}

bool DescribePolicyGroupInfoCondition::CalcTypeHasBeenSet() const
{
    return m_calcTypeHasBeenSet;
}

string DescribePolicyGroupInfoCondition::GetCalcValue() const
{
    return m_calcValue;
}

void DescribePolicyGroupInfoCondition::SetCalcValue(const string& _calcValue)
{
    m_calcValue = _calcValue;
    m_calcValueHasBeenSet = true;
}

bool DescribePolicyGroupInfoCondition::CalcValueHasBeenSet() const
{
    return m_calcValueHasBeenSet;
}

int64_t DescribePolicyGroupInfoCondition::GetContinueTime() const
{
    return m_continueTime;
}

void DescribePolicyGroupInfoCondition::SetContinueTime(const int64_t& _continueTime)
{
    m_continueTime = _continueTime;
    m_continueTimeHasBeenSet = true;
}

bool DescribePolicyGroupInfoCondition::ContinueTimeHasBeenSet() const
{
    return m_continueTimeHasBeenSet;
}

string DescribePolicyGroupInfoCondition::GetMetricName() const
{
    return m_metricName;
}

void DescribePolicyGroupInfoCondition::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool DescribePolicyGroupInfoCondition::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

