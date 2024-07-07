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

#include <tencentcloud/mps/v20190612/model/QualityControlItemConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

QualityControlItemConfig::QualityControlItemConfig() :
    m_typeHasBeenSet(false),
    m_switchHasBeenSet(false),
    m_samplingHasBeenSet(false),
    m_intervalTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_thresholdHasBeenSet(false)
{
}

CoreInternalOutcome QualityControlItemConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlItemConfig.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlItemConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Sampling") && !value["Sampling"].IsNull())
    {
        if (!value["Sampling"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlItemConfig.Sampling` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sampling = string(value["Sampling"].GetString());
        m_samplingHasBeenSet = true;
    }

    if (value.HasMember("IntervalTime") && !value["IntervalTime"].IsNull())
    {
        if (!value["IntervalTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlItemConfig.IntervalTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalTime = value["IntervalTime"].GetUint64();
        m_intervalTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlItemConfig.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Threshold") && !value["Threshold"].IsNull())
    {
        if (!value["Threshold"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlItemConfig.Threshold` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_threshold = string(value["Threshold"].GetString());
        m_thresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityControlItemConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string QualityControlItemConfig::GetType() const
{
    return m_type;
}

void QualityControlItemConfig::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool QualityControlItemConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string QualityControlItemConfig::GetSwitch() const
{
    return m_switch;
}

void QualityControlItemConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool QualityControlItemConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string QualityControlItemConfig::GetSampling() const
{
    return m_sampling;
}

void QualityControlItemConfig::SetSampling(const string& _sampling)
{
    m_sampling = _sampling;
    m_samplingHasBeenSet = true;
}

bool QualityControlItemConfig::SamplingHasBeenSet() const
{
    return m_samplingHasBeenSet;
}

uint64_t QualityControlItemConfig::GetIntervalTime() const
{
    return m_intervalTime;
}

void QualityControlItemConfig::SetIntervalTime(const uint64_t& _intervalTime)
{
    m_intervalTime = _intervalTime;
    m_intervalTimeHasBeenSet = true;
}

bool QualityControlItemConfig::IntervalTimeHasBeenSet() const
{
    return m_intervalTimeHasBeenSet;
}

uint64_t QualityControlItemConfig::GetDuration() const
{
    return m_duration;
}

void QualityControlItemConfig::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool QualityControlItemConfig::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string QualityControlItemConfig::GetThreshold() const
{
    return m_threshold;
}

void QualityControlItemConfig::SetThreshold(const string& _threshold)
{
    m_threshold = _threshold;
    m_thresholdHasBeenSet = true;
}

bool QualityControlItemConfig::ThresholdHasBeenSet() const
{
    return m_thresholdHasBeenSet;
}

