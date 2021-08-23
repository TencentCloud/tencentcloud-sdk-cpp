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

#include <tencentcloud/monitor/v20180724/model/CreatePolicyGroupCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

CreatePolicyGroupCondition::CreatePolicyGroupCondition() :
    m_metricIdHasBeenSet(false),
    m_alarmNotifyTypeHasBeenSet(false),
    m_alarmNotifyPeriodHasBeenSet(false),
    m_calcTypeHasBeenSet(false),
    m_calcValueHasBeenSet(false),
    m_calcPeriodHasBeenSet(false),
    m_continuePeriodHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

CoreInternalOutcome CreatePolicyGroupCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricId") && !value["MetricId"].IsNull())
    {
        if (!value["MetricId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreatePolicyGroupCondition.MetricId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_metricId = value["MetricId"].GetInt64();
        m_metricIdHasBeenSet = true;
    }

    if (value.HasMember("AlarmNotifyType") && !value["AlarmNotifyType"].IsNull())
    {
        if (!value["AlarmNotifyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreatePolicyGroupCondition.AlarmNotifyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmNotifyType = value["AlarmNotifyType"].GetInt64();
        m_alarmNotifyTypeHasBeenSet = true;
    }

    if (value.HasMember("AlarmNotifyPeriod") && !value["AlarmNotifyPeriod"].IsNull())
    {
        if (!value["AlarmNotifyPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreatePolicyGroupCondition.AlarmNotifyPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmNotifyPeriod = value["AlarmNotifyPeriod"].GetInt64();
        m_alarmNotifyPeriodHasBeenSet = true;
    }

    if (value.HasMember("CalcType") && !value["CalcType"].IsNull())
    {
        if (!value["CalcType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreatePolicyGroupCondition.CalcType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_calcType = value["CalcType"].GetInt64();
        m_calcTypeHasBeenSet = true;
    }

    if (value.HasMember("CalcValue") && !value["CalcValue"].IsNull())
    {
        if (!value["CalcValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CreatePolicyGroupCondition.CalcValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_calcValue = value["CalcValue"].GetDouble();
        m_calcValueHasBeenSet = true;
    }

    if (value.HasMember("CalcPeriod") && !value["CalcPeriod"].IsNull())
    {
        if (!value["CalcPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreatePolicyGroupCondition.CalcPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_calcPeriod = value["CalcPeriod"].GetInt64();
        m_calcPeriodHasBeenSet = true;
    }

    if (value.HasMember("ContinuePeriod") && !value["ContinuePeriod"].IsNull())
    {
        if (!value["ContinuePeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreatePolicyGroupCondition.ContinuePeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_continuePeriod = value["ContinuePeriod"].GetInt64();
        m_continuePeriodHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreatePolicyGroupCondition.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreatePolicyGroupCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metricId, allocator);
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
        value.AddMember(iKey, m_calcValue, allocator);
    }

    if (m_calcPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalcPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_calcPeriod, allocator);
    }

    if (m_continuePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContinuePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_continuePeriod, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

}


int64_t CreatePolicyGroupCondition::GetMetricId() const
{
    return m_metricId;
}

void CreatePolicyGroupCondition::SetMetricId(const int64_t& _metricId)
{
    m_metricId = _metricId;
    m_metricIdHasBeenSet = true;
}

bool CreatePolicyGroupCondition::MetricIdHasBeenSet() const
{
    return m_metricIdHasBeenSet;
}

int64_t CreatePolicyGroupCondition::GetAlarmNotifyType() const
{
    return m_alarmNotifyType;
}

void CreatePolicyGroupCondition::SetAlarmNotifyType(const int64_t& _alarmNotifyType)
{
    m_alarmNotifyType = _alarmNotifyType;
    m_alarmNotifyTypeHasBeenSet = true;
}

bool CreatePolicyGroupCondition::AlarmNotifyTypeHasBeenSet() const
{
    return m_alarmNotifyTypeHasBeenSet;
}

int64_t CreatePolicyGroupCondition::GetAlarmNotifyPeriod() const
{
    return m_alarmNotifyPeriod;
}

void CreatePolicyGroupCondition::SetAlarmNotifyPeriod(const int64_t& _alarmNotifyPeriod)
{
    m_alarmNotifyPeriod = _alarmNotifyPeriod;
    m_alarmNotifyPeriodHasBeenSet = true;
}

bool CreatePolicyGroupCondition::AlarmNotifyPeriodHasBeenSet() const
{
    return m_alarmNotifyPeriodHasBeenSet;
}

int64_t CreatePolicyGroupCondition::GetCalcType() const
{
    return m_calcType;
}

void CreatePolicyGroupCondition::SetCalcType(const int64_t& _calcType)
{
    m_calcType = _calcType;
    m_calcTypeHasBeenSet = true;
}

bool CreatePolicyGroupCondition::CalcTypeHasBeenSet() const
{
    return m_calcTypeHasBeenSet;
}

double CreatePolicyGroupCondition::GetCalcValue() const
{
    return m_calcValue;
}

void CreatePolicyGroupCondition::SetCalcValue(const double& _calcValue)
{
    m_calcValue = _calcValue;
    m_calcValueHasBeenSet = true;
}

bool CreatePolicyGroupCondition::CalcValueHasBeenSet() const
{
    return m_calcValueHasBeenSet;
}

int64_t CreatePolicyGroupCondition::GetCalcPeriod() const
{
    return m_calcPeriod;
}

void CreatePolicyGroupCondition::SetCalcPeriod(const int64_t& _calcPeriod)
{
    m_calcPeriod = _calcPeriod;
    m_calcPeriodHasBeenSet = true;
}

bool CreatePolicyGroupCondition::CalcPeriodHasBeenSet() const
{
    return m_calcPeriodHasBeenSet;
}

int64_t CreatePolicyGroupCondition::GetContinuePeriod() const
{
    return m_continuePeriod;
}

void CreatePolicyGroupCondition::SetContinuePeriod(const int64_t& _continuePeriod)
{
    m_continuePeriod = _continuePeriod;
    m_continuePeriodHasBeenSet = true;
}

bool CreatePolicyGroupCondition::ContinuePeriodHasBeenSet() const
{
    return m_continuePeriodHasBeenSet;
}

int64_t CreatePolicyGroupCondition::GetRuleId() const
{
    return m_ruleId;
}

void CreatePolicyGroupCondition::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool CreatePolicyGroupCondition::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

