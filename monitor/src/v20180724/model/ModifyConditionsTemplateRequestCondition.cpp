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

#include <tencentcloud/monitor/v20180724/model/ModifyConditionsTemplateRequestCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

ModifyConditionsTemplateRequestCondition::ModifyConditionsTemplateRequestCondition() :
    m_calcPeriodHasBeenSet(false),
    m_calcTypeHasBeenSet(false),
    m_continuePeriodHasBeenSet(false),
    m_metricIDHasBeenSet(false),
    m_calcValueHasBeenSet(false),
    m_alarmNotifyPeriodHasBeenSet(false),
    m_alarmNotifyTypeHasBeenSet(false),
    m_ruleIDHasBeenSet(false)
{
}

CoreInternalOutcome ModifyConditionsTemplateRequestCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CalcPeriod") && !value["CalcPeriod"].IsNull())
    {
        if (!value["CalcPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyConditionsTemplateRequestCondition.CalcPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calcPeriod = string(value["CalcPeriod"].GetString());
        m_calcPeriodHasBeenSet = true;
    }

    if (value.HasMember("CalcType") && !value["CalcType"].IsNull())
    {
        if (!value["CalcType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyConditionsTemplateRequestCondition.CalcType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calcType = string(value["CalcType"].GetString());
        m_calcTypeHasBeenSet = true;
    }

    if (value.HasMember("ContinuePeriod") && !value["ContinuePeriod"].IsNull())
    {
        if (!value["ContinuePeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyConditionsTemplateRequestCondition.ContinuePeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_continuePeriod = string(value["ContinuePeriod"].GetString());
        m_continuePeriodHasBeenSet = true;
    }

    if (value.HasMember("MetricID") && !value["MetricID"].IsNull())
    {
        if (!value["MetricID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyConditionsTemplateRequestCondition.MetricID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_metricID = value["MetricID"].GetInt64();
        m_metricIDHasBeenSet = true;
    }

    if (value.HasMember("CalcValue") && !value["CalcValue"].IsNull())
    {
        if (!value["CalcValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyConditionsTemplateRequestCondition.CalcValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calcValue = string(value["CalcValue"].GetString());
        m_calcValueHasBeenSet = true;
    }

    if (value.HasMember("AlarmNotifyPeriod") && !value["AlarmNotifyPeriod"].IsNull())
    {
        if (!value["AlarmNotifyPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyConditionsTemplateRequestCondition.AlarmNotifyPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmNotifyPeriod = string(value["AlarmNotifyPeriod"].GetString());
        m_alarmNotifyPeriodHasBeenSet = true;
    }

    if (value.HasMember("AlarmNotifyType") && !value["AlarmNotifyType"].IsNull())
    {
        if (!value["AlarmNotifyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyConditionsTemplateRequestCondition.AlarmNotifyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmNotifyType = value["AlarmNotifyType"].GetInt64();
        m_alarmNotifyTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyConditionsTemplateRequestCondition.RuleID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = value["RuleID"].GetInt64();
        m_ruleIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyConditionsTemplateRequestCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_calcPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalcPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_calcPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_calcTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalcType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_calcType.c_str(), allocator).Move(), allocator);
    }

    if (m_continuePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContinuePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_continuePeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_metricIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metricID, allocator);
    }

    if (m_calcValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalcValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_calcValue.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmNotifyPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmNotifyPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmNotifyPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmNotifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmNotifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmNotifyType, allocator);
    }

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleID, allocator);
    }

}


string ModifyConditionsTemplateRequestCondition::GetCalcPeriod() const
{
    return m_calcPeriod;
}

void ModifyConditionsTemplateRequestCondition::SetCalcPeriod(const string& _calcPeriod)
{
    m_calcPeriod = _calcPeriod;
    m_calcPeriodHasBeenSet = true;
}

bool ModifyConditionsTemplateRequestCondition::CalcPeriodHasBeenSet() const
{
    return m_calcPeriodHasBeenSet;
}

string ModifyConditionsTemplateRequestCondition::GetCalcType() const
{
    return m_calcType;
}

void ModifyConditionsTemplateRequestCondition::SetCalcType(const string& _calcType)
{
    m_calcType = _calcType;
    m_calcTypeHasBeenSet = true;
}

bool ModifyConditionsTemplateRequestCondition::CalcTypeHasBeenSet() const
{
    return m_calcTypeHasBeenSet;
}

string ModifyConditionsTemplateRequestCondition::GetContinuePeriod() const
{
    return m_continuePeriod;
}

void ModifyConditionsTemplateRequestCondition::SetContinuePeriod(const string& _continuePeriod)
{
    m_continuePeriod = _continuePeriod;
    m_continuePeriodHasBeenSet = true;
}

bool ModifyConditionsTemplateRequestCondition::ContinuePeriodHasBeenSet() const
{
    return m_continuePeriodHasBeenSet;
}

int64_t ModifyConditionsTemplateRequestCondition::GetMetricID() const
{
    return m_metricID;
}

void ModifyConditionsTemplateRequestCondition::SetMetricID(const int64_t& _metricID)
{
    m_metricID = _metricID;
    m_metricIDHasBeenSet = true;
}

bool ModifyConditionsTemplateRequestCondition::MetricIDHasBeenSet() const
{
    return m_metricIDHasBeenSet;
}

string ModifyConditionsTemplateRequestCondition::GetCalcValue() const
{
    return m_calcValue;
}

void ModifyConditionsTemplateRequestCondition::SetCalcValue(const string& _calcValue)
{
    m_calcValue = _calcValue;
    m_calcValueHasBeenSet = true;
}

bool ModifyConditionsTemplateRequestCondition::CalcValueHasBeenSet() const
{
    return m_calcValueHasBeenSet;
}

string ModifyConditionsTemplateRequestCondition::GetAlarmNotifyPeriod() const
{
    return m_alarmNotifyPeriod;
}

void ModifyConditionsTemplateRequestCondition::SetAlarmNotifyPeriod(const string& _alarmNotifyPeriod)
{
    m_alarmNotifyPeriod = _alarmNotifyPeriod;
    m_alarmNotifyPeriodHasBeenSet = true;
}

bool ModifyConditionsTemplateRequestCondition::AlarmNotifyPeriodHasBeenSet() const
{
    return m_alarmNotifyPeriodHasBeenSet;
}

int64_t ModifyConditionsTemplateRequestCondition::GetAlarmNotifyType() const
{
    return m_alarmNotifyType;
}

void ModifyConditionsTemplateRequestCondition::SetAlarmNotifyType(const int64_t& _alarmNotifyType)
{
    m_alarmNotifyType = _alarmNotifyType;
    m_alarmNotifyTypeHasBeenSet = true;
}

bool ModifyConditionsTemplateRequestCondition::AlarmNotifyTypeHasBeenSet() const
{
    return m_alarmNotifyTypeHasBeenSet;
}

int64_t ModifyConditionsTemplateRequestCondition::GetRuleID() const
{
    return m_ruleID;
}

void ModifyConditionsTemplateRequestCondition::SetRuleID(const int64_t& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool ModifyConditionsTemplateRequestCondition::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

