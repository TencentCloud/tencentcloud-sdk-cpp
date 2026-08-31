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

#include <tencentcloud/iotexplorer/v20190423/model/SeeSummarizeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

SeeSummarizeConfig::SeeSummarizeConfig() :
    m_enableDailySummaryHasBeenSet(false),
    m_enableWeeklySummaryHasBeenSet(false),
    m_summaryVerbosityHasBeenSet(false)
{
}

CoreInternalOutcome SeeSummarizeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableDailySummary") && !value["EnableDailySummary"].IsNull())
    {
        if (!value["EnableDailySummary"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SeeSummarizeConfig.EnableDailySummary` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableDailySummary = value["EnableDailySummary"].GetBool();
        m_enableDailySummaryHasBeenSet = true;
    }

    if (value.HasMember("EnableWeeklySummary") && !value["EnableWeeklySummary"].IsNull())
    {
        if (!value["EnableWeeklySummary"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SeeSummarizeConfig.EnableWeeklySummary` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableWeeklySummary = value["EnableWeeklySummary"].GetBool();
        m_enableWeeklySummaryHasBeenSet = true;
    }

    if (value.HasMember("SummaryVerbosity") && !value["SummaryVerbosity"].IsNull())
    {
        if (!value["SummaryVerbosity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeSummarizeConfig.SummaryVerbosity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_summaryVerbosity = string(value["SummaryVerbosity"].GetString());
        m_summaryVerbosityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeeSummarizeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableDailySummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDailySummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableDailySummary, allocator);
    }

    if (m_enableWeeklySummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableWeeklySummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableWeeklySummary, allocator);
    }

    if (m_summaryVerbosityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SummaryVerbosity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_summaryVerbosity.c_str(), allocator).Move(), allocator);
    }

}


bool SeeSummarizeConfig::GetEnableDailySummary() const
{
    return m_enableDailySummary;
}

void SeeSummarizeConfig::SetEnableDailySummary(const bool& _enableDailySummary)
{
    m_enableDailySummary = _enableDailySummary;
    m_enableDailySummaryHasBeenSet = true;
}

bool SeeSummarizeConfig::EnableDailySummaryHasBeenSet() const
{
    return m_enableDailySummaryHasBeenSet;
}

bool SeeSummarizeConfig::GetEnableWeeklySummary() const
{
    return m_enableWeeklySummary;
}

void SeeSummarizeConfig::SetEnableWeeklySummary(const bool& _enableWeeklySummary)
{
    m_enableWeeklySummary = _enableWeeklySummary;
    m_enableWeeklySummaryHasBeenSet = true;
}

bool SeeSummarizeConfig::EnableWeeklySummaryHasBeenSet() const
{
    return m_enableWeeklySummaryHasBeenSet;
}

string SeeSummarizeConfig::GetSummaryVerbosity() const
{
    return m_summaryVerbosity;
}

void SeeSummarizeConfig::SetSummaryVerbosity(const string& _summaryVerbosity)
{
    m_summaryVerbosity = _summaryVerbosity;
    m_summaryVerbosityHasBeenSet = true;
}

bool SeeSummarizeConfig::SummaryVerbosityHasBeenSet() const
{
    return m_summaryVerbosityHasBeenSet;
}

