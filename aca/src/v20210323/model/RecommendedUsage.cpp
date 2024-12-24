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

#include <tencentcloud/aca/v20210323/model/RecommendedUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

RecommendedUsage::RecommendedUsage() :
    m_usageRouteHasBeenSet(false),
    m_frequencyHasBeenSet(false),
    m_singleDoseHasBeenSet(false)
{
}

CoreInternalOutcome RecommendedUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UsageRoute") && !value["UsageRoute"].IsNull())
    {
        if (!value["UsageRoute"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecommendedUsage.UsageRoute` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usageRoute = string(value["UsageRoute"].GetString());
        m_usageRouteHasBeenSet = true;
    }

    if (value.HasMember("Frequency") && !value["Frequency"].IsNull())
    {
        if (!value["Frequency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecommendedUsage.Frequency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frequency = string(value["Frequency"].GetString());
        m_frequencyHasBeenSet = true;
    }

    if (value.HasMember("SingleDose") && !value["SingleDose"].IsNull())
    {
        if (!value["SingleDose"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecommendedUsage.SingleDose` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_singleDose = string(value["SingleDose"].GetString());
        m_singleDoseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecommendedUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_usageRouteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageRoute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usageRoute.c_str(), allocator).Move(), allocator);
    }

    if (m_frequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Frequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frequency.c_str(), allocator).Move(), allocator);
    }

    if (m_singleDoseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SingleDose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_singleDose.c_str(), allocator).Move(), allocator);
    }

}


string RecommendedUsage::GetUsageRoute() const
{
    return m_usageRoute;
}

void RecommendedUsage::SetUsageRoute(const string& _usageRoute)
{
    m_usageRoute = _usageRoute;
    m_usageRouteHasBeenSet = true;
}

bool RecommendedUsage::UsageRouteHasBeenSet() const
{
    return m_usageRouteHasBeenSet;
}

string RecommendedUsage::GetFrequency() const
{
    return m_frequency;
}

void RecommendedUsage::SetFrequency(const string& _frequency)
{
    m_frequency = _frequency;
    m_frequencyHasBeenSet = true;
}

bool RecommendedUsage::FrequencyHasBeenSet() const
{
    return m_frequencyHasBeenSet;
}

string RecommendedUsage::GetSingleDose() const
{
    return m_singleDose;
}

void RecommendedUsage::SetSingleDose(const string& _singleDose)
{
    m_singleDose = _singleDose;
    m_singleDoseHasBeenSet = true;
}

bool RecommendedUsage::SingleDoseHasBeenSet() const
{
    return m_singleDoseHasBeenSet;
}

