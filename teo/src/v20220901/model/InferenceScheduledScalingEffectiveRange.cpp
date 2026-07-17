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

#include <tencentcloud/teo/v20220901/model/InferenceScheduledScalingEffectiveRange.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

InferenceScheduledScalingEffectiveRange::InferenceScheduledScalingEffectiveRange() :
    m_effectiveTypeHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false)
{
}

CoreInternalOutcome InferenceScheduledScalingEffectiveRange::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EffectiveType") && !value["EffectiveType"].IsNull())
    {
        if (!value["EffectiveType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceScheduledScalingEffectiveRange.EffectiveType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveType = string(value["EffectiveType"].GetString());
        m_effectiveTypeHasBeenSet = true;
    }

    if (value.HasMember("StartDate") && !value["StartDate"].IsNull())
    {
        if (!value["StartDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceScheduledScalingEffectiveRange.StartDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startDate = string(value["StartDate"].GetString());
        m_startDateHasBeenSet = true;
    }

    if (value.HasMember("EndDate") && !value["EndDate"].IsNull())
    {
        if (!value["EndDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceScheduledScalingEffectiveRange.EndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endDate = string(value["EndDate"].GetString());
        m_endDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferenceScheduledScalingEffectiveRange::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_effectiveTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectiveType.c_str(), allocator).Move(), allocator);
    }

    if (m_startDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }

}


string InferenceScheduledScalingEffectiveRange::GetEffectiveType() const
{
    return m_effectiveType;
}

void InferenceScheduledScalingEffectiveRange::SetEffectiveType(const string& _effectiveType)
{
    m_effectiveType = _effectiveType;
    m_effectiveTypeHasBeenSet = true;
}

bool InferenceScheduledScalingEffectiveRange::EffectiveTypeHasBeenSet() const
{
    return m_effectiveTypeHasBeenSet;
}

string InferenceScheduledScalingEffectiveRange::GetStartDate() const
{
    return m_startDate;
}

void InferenceScheduledScalingEffectiveRange::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool InferenceScheduledScalingEffectiveRange::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string InferenceScheduledScalingEffectiveRange::GetEndDate() const
{
    return m_endDate;
}

void InferenceScheduledScalingEffectiveRange::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool InferenceScheduledScalingEffectiveRange::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

