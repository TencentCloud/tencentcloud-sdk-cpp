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

#include <tencentcloud/wedata/v20210820/model/AlarmIndicatorInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

AlarmIndicatorInfo::AlarmIndicatorInfo() :
    m_idHasBeenSet(false),
    m_alarmIndicatorHasBeenSet(false),
    m_alarmIndicatorDescHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_estimatedTimeHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_alarmIndicatorUnitHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_durationUnitHasBeenSet(false),
    m_maxTimesHasBeenSet(false),
    m_thresholdHasBeenSet(false),
    m_indicatorTimeRangeUnitHasBeenSet(false),
    m_indicatorTimeRangeValueHasBeenSet(false)
{
}

CoreInternalOutcome AlarmIndicatorInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmIndicatorInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AlarmIndicator") && !value["AlarmIndicator"].IsNull())
    {
        if (!value["AlarmIndicator"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmIndicatorInfo.AlarmIndicator` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmIndicator = value["AlarmIndicator"].GetUint64();
        m_alarmIndicatorHasBeenSet = true;
    }

    if (value.HasMember("AlarmIndicatorDesc") && !value["AlarmIndicatorDesc"].IsNull())
    {
        if (!value["AlarmIndicatorDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmIndicatorInfo.AlarmIndicatorDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmIndicatorDesc = string(value["AlarmIndicatorDesc"].GetString());
        m_alarmIndicatorDescHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmIndicatorInfo.TriggerType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = value["TriggerType"].GetUint64();
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("EstimatedTime") && !value["EstimatedTime"].IsNull())
    {
        if (!value["EstimatedTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmIndicatorInfo.EstimatedTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_estimatedTime = value["EstimatedTime"].GetUint64();
        m_estimatedTimeHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmIndicatorInfo.Operator` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operator = value["Operator"].GetUint64();
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("AlarmIndicatorUnit") && !value["AlarmIndicatorUnit"].IsNull())
    {
        if (!value["AlarmIndicatorUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmIndicatorInfo.AlarmIndicatorUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmIndicatorUnit = string(value["AlarmIndicatorUnit"].GetString());
        m_alarmIndicatorUnitHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmIndicatorInfo.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("DurationUnit") && !value["DurationUnit"].IsNull())
    {
        if (!value["DurationUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmIndicatorInfo.DurationUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_durationUnit = string(value["DurationUnit"].GetString());
        m_durationUnitHasBeenSet = true;
    }

    if (value.HasMember("MaxTimes") && !value["MaxTimes"].IsNull())
    {
        if (!value["MaxTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmIndicatorInfo.MaxTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTimes = value["MaxTimes"].GetInt64();
        m_maxTimesHasBeenSet = true;
    }

    if (value.HasMember("Threshold") && !value["Threshold"].IsNull())
    {
        if (!value["Threshold"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmIndicatorInfo.Threshold` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_threshold = value["Threshold"].GetDouble();
        m_thresholdHasBeenSet = true;
    }

    if (value.HasMember("IndicatorTimeRangeUnit") && !value["IndicatorTimeRangeUnit"].IsNull())
    {
        if (!value["IndicatorTimeRangeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmIndicatorInfo.IndicatorTimeRangeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indicatorTimeRangeUnit = string(value["IndicatorTimeRangeUnit"].GetString());
        m_indicatorTimeRangeUnitHasBeenSet = true;
    }

    if (value.HasMember("IndicatorTimeRangeValue") && !value["IndicatorTimeRangeValue"].IsNull())
    {
        if (!value["IndicatorTimeRangeValue"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmIndicatorInfo.IndicatorTimeRangeValue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_indicatorTimeRangeValue = value["IndicatorTimeRangeValue"].GetInt64();
        m_indicatorTimeRangeValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmIndicatorInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmIndicatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmIndicator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmIndicator, allocator);
    }

    if (m_alarmIndicatorDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmIndicatorDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmIndicatorDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerType, allocator);
    }

    if (m_estimatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EstimatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_estimatedTime, allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operator, allocator);
    }

    if (m_alarmIndicatorUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmIndicatorUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmIndicatorUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_durationUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_durationUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_maxTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTimes, allocator);
    }

    if (m_thresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Threshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_threshold, allocator);
    }

    if (m_indicatorTimeRangeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndicatorTimeRangeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indicatorTimeRangeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_indicatorTimeRangeValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndicatorTimeRangeValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indicatorTimeRangeValue, allocator);
    }

}


string AlarmIndicatorInfo::GetId() const
{
    return m_id;
}

void AlarmIndicatorInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AlarmIndicatorInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t AlarmIndicatorInfo::GetAlarmIndicator() const
{
    return m_alarmIndicator;
}

void AlarmIndicatorInfo::SetAlarmIndicator(const uint64_t& _alarmIndicator)
{
    m_alarmIndicator = _alarmIndicator;
    m_alarmIndicatorHasBeenSet = true;
}

bool AlarmIndicatorInfo::AlarmIndicatorHasBeenSet() const
{
    return m_alarmIndicatorHasBeenSet;
}

string AlarmIndicatorInfo::GetAlarmIndicatorDesc() const
{
    return m_alarmIndicatorDesc;
}

void AlarmIndicatorInfo::SetAlarmIndicatorDesc(const string& _alarmIndicatorDesc)
{
    m_alarmIndicatorDesc = _alarmIndicatorDesc;
    m_alarmIndicatorDescHasBeenSet = true;
}

bool AlarmIndicatorInfo::AlarmIndicatorDescHasBeenSet() const
{
    return m_alarmIndicatorDescHasBeenSet;
}

uint64_t AlarmIndicatorInfo::GetTriggerType() const
{
    return m_triggerType;
}

void AlarmIndicatorInfo::SetTriggerType(const uint64_t& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool AlarmIndicatorInfo::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

uint64_t AlarmIndicatorInfo::GetEstimatedTime() const
{
    return m_estimatedTime;
}

void AlarmIndicatorInfo::SetEstimatedTime(const uint64_t& _estimatedTime)
{
    m_estimatedTime = _estimatedTime;
    m_estimatedTimeHasBeenSet = true;
}

bool AlarmIndicatorInfo::EstimatedTimeHasBeenSet() const
{
    return m_estimatedTimeHasBeenSet;
}

uint64_t AlarmIndicatorInfo::GetOperator() const
{
    return m_operator;
}

void AlarmIndicatorInfo::SetOperator(const uint64_t& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool AlarmIndicatorInfo::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string AlarmIndicatorInfo::GetAlarmIndicatorUnit() const
{
    return m_alarmIndicatorUnit;
}

void AlarmIndicatorInfo::SetAlarmIndicatorUnit(const string& _alarmIndicatorUnit)
{
    m_alarmIndicatorUnit = _alarmIndicatorUnit;
    m_alarmIndicatorUnitHasBeenSet = true;
}

bool AlarmIndicatorInfo::AlarmIndicatorUnitHasBeenSet() const
{
    return m_alarmIndicatorUnitHasBeenSet;
}

int64_t AlarmIndicatorInfo::GetDuration() const
{
    return m_duration;
}

void AlarmIndicatorInfo::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool AlarmIndicatorInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string AlarmIndicatorInfo::GetDurationUnit() const
{
    return m_durationUnit;
}

void AlarmIndicatorInfo::SetDurationUnit(const string& _durationUnit)
{
    m_durationUnit = _durationUnit;
    m_durationUnitHasBeenSet = true;
}

bool AlarmIndicatorInfo::DurationUnitHasBeenSet() const
{
    return m_durationUnitHasBeenSet;
}

int64_t AlarmIndicatorInfo::GetMaxTimes() const
{
    return m_maxTimes;
}

void AlarmIndicatorInfo::SetMaxTimes(const int64_t& _maxTimes)
{
    m_maxTimes = _maxTimes;
    m_maxTimesHasBeenSet = true;
}

bool AlarmIndicatorInfo::MaxTimesHasBeenSet() const
{
    return m_maxTimesHasBeenSet;
}

double AlarmIndicatorInfo::GetThreshold() const
{
    return m_threshold;
}

void AlarmIndicatorInfo::SetThreshold(const double& _threshold)
{
    m_threshold = _threshold;
    m_thresholdHasBeenSet = true;
}

bool AlarmIndicatorInfo::ThresholdHasBeenSet() const
{
    return m_thresholdHasBeenSet;
}

string AlarmIndicatorInfo::GetIndicatorTimeRangeUnit() const
{
    return m_indicatorTimeRangeUnit;
}

void AlarmIndicatorInfo::SetIndicatorTimeRangeUnit(const string& _indicatorTimeRangeUnit)
{
    m_indicatorTimeRangeUnit = _indicatorTimeRangeUnit;
    m_indicatorTimeRangeUnitHasBeenSet = true;
}

bool AlarmIndicatorInfo::IndicatorTimeRangeUnitHasBeenSet() const
{
    return m_indicatorTimeRangeUnitHasBeenSet;
}

int64_t AlarmIndicatorInfo::GetIndicatorTimeRangeValue() const
{
    return m_indicatorTimeRangeValue;
}

void AlarmIndicatorInfo::SetIndicatorTimeRangeValue(const int64_t& _indicatorTimeRangeValue)
{
    m_indicatorTimeRangeValue = _indicatorTimeRangeValue;
    m_indicatorTimeRangeValueHasBeenSet = true;
}

bool AlarmIndicatorInfo::IndicatorTimeRangeValueHasBeenSet() const
{
    return m_indicatorTimeRangeValueHasBeenSet;
}

