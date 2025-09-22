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

#include <tencentcloud/billing/v20180709/model/WaveThresholdForm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

WaveThresholdForm::WaveThresholdForm() :
    m_warnTypeHasBeenSet(false),
    m_thresholdHasBeenSet(false),
    m_metaTypeHasBeenSet(false),
    m_periodTypeHasBeenSet(false)
{
}

CoreInternalOutcome WaveThresholdForm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WarnType") && !value["WarnType"].IsNull())
    {
        if (!value["WarnType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WaveThresholdForm.WarnType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_warnType = string(value["WarnType"].GetString());
        m_warnTypeHasBeenSet = true;
    }

    if (value.HasMember("Threshold") && !value["Threshold"].IsNull())
    {
        if (!value["Threshold"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WaveThresholdForm.Threshold` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_threshold = string(value["Threshold"].GetString());
        m_thresholdHasBeenSet = true;
    }

    if (value.HasMember("MetaType") && !value["MetaType"].IsNull())
    {
        if (!value["MetaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WaveThresholdForm.MetaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaType = string(value["MetaType"].GetString());
        m_metaTypeHasBeenSet = true;
    }

    if (value.HasMember("PeriodType") && !value["PeriodType"].IsNull())
    {
        if (!value["PeriodType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WaveThresholdForm.PeriodType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodType = string(value["PeriodType"].GetString());
        m_periodTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WaveThresholdForm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_warnTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarnType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_warnType.c_str(), allocator).Move(), allocator);
    }

    if (m_thresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Threshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_threshold.c_str(), allocator).Move(), allocator);
    }

    if (m_metaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metaType.c_str(), allocator).Move(), allocator);
    }

    if (m_periodTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodType.c_str(), allocator).Move(), allocator);
    }

}


string WaveThresholdForm::GetWarnType() const
{
    return m_warnType;
}

void WaveThresholdForm::SetWarnType(const string& _warnType)
{
    m_warnType = _warnType;
    m_warnTypeHasBeenSet = true;
}

bool WaveThresholdForm::WarnTypeHasBeenSet() const
{
    return m_warnTypeHasBeenSet;
}

string WaveThresholdForm::GetThreshold() const
{
    return m_threshold;
}

void WaveThresholdForm::SetThreshold(const string& _threshold)
{
    m_threshold = _threshold;
    m_thresholdHasBeenSet = true;
}

bool WaveThresholdForm::ThresholdHasBeenSet() const
{
    return m_thresholdHasBeenSet;
}

string WaveThresholdForm::GetMetaType() const
{
    return m_metaType;
}

void WaveThresholdForm::SetMetaType(const string& _metaType)
{
    m_metaType = _metaType;
    m_metaTypeHasBeenSet = true;
}

bool WaveThresholdForm::MetaTypeHasBeenSet() const
{
    return m_metaTypeHasBeenSet;
}

string WaveThresholdForm::GetPeriodType() const
{
    return m_periodType;
}

void WaveThresholdForm::SetPeriodType(const string& _periodType)
{
    m_periodType = _periodType;
    m_periodTypeHasBeenSet = true;
}

bool WaveThresholdForm::PeriodTypeHasBeenSet() const
{
    return m_periodTypeHasBeenSet;
}

