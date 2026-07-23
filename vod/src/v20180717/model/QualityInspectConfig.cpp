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

#include <tencentcloud/vod/v20180717/model/QualityInspectConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

QualityInspectConfig::QualityInspectConfig() :
    m_typeHasBeenSet(false),
    m_switchHasBeenSet(false),
    m_samplingHasBeenSet(false),
    m_intervalTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_thresholdHasBeenSet(false)
{
}

CoreInternalOutcome QualityInspectConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectConfig.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Sampling") && !value["Sampling"].IsNull())
    {
        if (!value["Sampling"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectConfig.Sampling` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sampling = string(value["Sampling"].GetString());
        m_samplingHasBeenSet = true;
    }

    if (value.HasMember("IntervalTime") && !value["IntervalTime"].IsNull())
    {
        if (!value["IntervalTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectConfig.IntervalTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalTime = value["IntervalTime"].GetInt64();
        m_intervalTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectConfig.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Threshold") && !value["Threshold"].IsNull())
    {
        if (!value["Threshold"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectConfig.Threshold` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_threshold = string(value["Threshold"].GetString());
        m_thresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityInspectConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_samplingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sampling";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sampling.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intervalTime, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_thresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Threshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_threshold.c_str(), allocator).Move(), allocator);
    }

}


string QualityInspectConfig::GetType() const
{
    return m_type;
}

void QualityInspectConfig::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool QualityInspectConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string QualityInspectConfig::GetSwitch() const
{
    return m_switch;
}

void QualityInspectConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool QualityInspectConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string QualityInspectConfig::GetSampling() const
{
    return m_sampling;
}

void QualityInspectConfig::SetSampling(const string& _sampling)
{
    m_sampling = _sampling;
    m_samplingHasBeenSet = true;
}

bool QualityInspectConfig::SamplingHasBeenSet() const
{
    return m_samplingHasBeenSet;
}

int64_t QualityInspectConfig::GetIntervalTime() const
{
    return m_intervalTime;
}

void QualityInspectConfig::SetIntervalTime(const int64_t& _intervalTime)
{
    m_intervalTime = _intervalTime;
    m_intervalTimeHasBeenSet = true;
}

bool QualityInspectConfig::IntervalTimeHasBeenSet() const
{
    return m_intervalTimeHasBeenSet;
}

int64_t QualityInspectConfig::GetDuration() const
{
    return m_duration;
}

void QualityInspectConfig::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool QualityInspectConfig::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string QualityInspectConfig::GetThreshold() const
{
    return m_threshold;
}

void QualityInspectConfig::SetThreshold(const string& _threshold)
{
    m_threshold = _threshold;
    m_thresholdHasBeenSet = true;
}

bool QualityInspectConfig::ThresholdHasBeenSet() const
{
    return m_thresholdHasBeenSet;
}

