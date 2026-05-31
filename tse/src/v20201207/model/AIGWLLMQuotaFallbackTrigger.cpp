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

#include <tencentcloud/tse/v20201207/model/AIGWLLMQuotaFallbackTrigger.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AIGWLLMQuotaFallbackTrigger::AIGWLLMQuotaFallbackTrigger() :
    m_thresholdPercentHasBeenSet(false),
    m_checkDimensionHasBeenSet(false)
{
}

CoreInternalOutcome AIGWLLMQuotaFallbackTrigger::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ThresholdPercent") && !value["ThresholdPercent"].IsNull())
    {
        if (!value["ThresholdPercent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMQuotaFallbackTrigger.ThresholdPercent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_thresholdPercent = value["ThresholdPercent"].GetInt64();
        m_thresholdPercentHasBeenSet = true;
    }

    if (value.HasMember("CheckDimension") && !value["CheckDimension"].IsNull())
    {
        if (!value["CheckDimension"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMQuotaFallbackTrigger.CheckDimension` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkDimension = string(value["CheckDimension"].GetString());
        m_checkDimensionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWLLMQuotaFallbackTrigger::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_thresholdPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThresholdPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_thresholdPercent, allocator);
    }

    if (m_checkDimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckDimension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkDimension.c_str(), allocator).Move(), allocator);
    }

}


int64_t AIGWLLMQuotaFallbackTrigger::GetThresholdPercent() const
{
    return m_thresholdPercent;
}

void AIGWLLMQuotaFallbackTrigger::SetThresholdPercent(const int64_t& _thresholdPercent)
{
    m_thresholdPercent = _thresholdPercent;
    m_thresholdPercentHasBeenSet = true;
}

bool AIGWLLMQuotaFallbackTrigger::ThresholdPercentHasBeenSet() const
{
    return m_thresholdPercentHasBeenSet;
}

string AIGWLLMQuotaFallbackTrigger::GetCheckDimension() const
{
    return m_checkDimension;
}

void AIGWLLMQuotaFallbackTrigger::SetCheckDimension(const string& _checkDimension)
{
    m_checkDimension = _checkDimension;
    m_checkDimensionHasBeenSet = true;
}

bool AIGWLLMQuotaFallbackTrigger::CheckDimensionHasBeenSet() const
{
    return m_checkDimensionHasBeenSet;
}

