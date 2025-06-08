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

#include <tencentcloud/teo/v20220901/model/MinimalRequestBodyTransferRate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

MinimalRequestBodyTransferRate::MinimalRequestBodyTransferRate() :
    m_minimalAvgTransferRateThresholdHasBeenSet(false),
    m_countingPeriodHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

CoreInternalOutcome MinimalRequestBodyTransferRate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MinimalAvgTransferRateThreshold") && !value["MinimalAvgTransferRateThreshold"].IsNull())
    {
        if (!value["MinimalAvgTransferRateThreshold"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MinimalRequestBodyTransferRate.MinimalAvgTransferRateThreshold` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_minimalAvgTransferRateThreshold = string(value["MinimalAvgTransferRateThreshold"].GetString());
        m_minimalAvgTransferRateThresholdHasBeenSet = true;
    }

    if (value.HasMember("CountingPeriod") && !value["CountingPeriod"].IsNull())
    {
        if (!value["CountingPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MinimalRequestBodyTransferRate.CountingPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countingPeriod = string(value["CountingPeriod"].GetString());
        m_countingPeriodHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MinimalRequestBodyTransferRate.Enabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = string(value["Enabled"].GetString());
        m_enabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MinimalRequestBodyTransferRate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_minimalAvgTransferRateThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinimalAvgTransferRateThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_minimalAvgTransferRateThreshold.c_str(), allocator).Move(), allocator);
    }

    if (m_countingPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountingPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countingPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enabled.c_str(), allocator).Move(), allocator);
    }

}


string MinimalRequestBodyTransferRate::GetMinimalAvgTransferRateThreshold() const
{
    return m_minimalAvgTransferRateThreshold;
}

void MinimalRequestBodyTransferRate::SetMinimalAvgTransferRateThreshold(const string& _minimalAvgTransferRateThreshold)
{
    m_minimalAvgTransferRateThreshold = _minimalAvgTransferRateThreshold;
    m_minimalAvgTransferRateThresholdHasBeenSet = true;
}

bool MinimalRequestBodyTransferRate::MinimalAvgTransferRateThresholdHasBeenSet() const
{
    return m_minimalAvgTransferRateThresholdHasBeenSet;
}

string MinimalRequestBodyTransferRate::GetCountingPeriod() const
{
    return m_countingPeriod;
}

void MinimalRequestBodyTransferRate::SetCountingPeriod(const string& _countingPeriod)
{
    m_countingPeriod = _countingPeriod;
    m_countingPeriodHasBeenSet = true;
}

bool MinimalRequestBodyTransferRate::CountingPeriodHasBeenSet() const
{
    return m_countingPeriodHasBeenSet;
}

string MinimalRequestBodyTransferRate::GetEnabled() const
{
    return m_enabled;
}

void MinimalRequestBodyTransferRate::SetEnabled(const string& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool MinimalRequestBodyTransferRate::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

