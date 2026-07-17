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

#include <tencentcloud/teo/v20220901/model/InferenceScheduledScalingPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

InferenceScheduledScalingPolicy::InferenceScheduledScalingPolicy() :
    m_scheduledActionsHasBeenSet(false),
    m_effectiveRangeHasBeenSet(false),
    m_timeZoneHasBeenSet(false)
{
}

CoreInternalOutcome InferenceScheduledScalingPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScheduledActions") && !value["ScheduledActions"].IsNull())
    {
        if (!value["ScheduledActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InferenceScheduledScalingPolicy.ScheduledActions` is not array type"));

        const rapidjson::Value &tmpValue = value["ScheduledActions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InferenceScheduledScalingAction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_scheduledActions.push_back(item);
        }
        m_scheduledActionsHasBeenSet = true;
    }

    if (value.HasMember("EffectiveRange") && !value["EffectiveRange"].IsNull())
    {
        if (!value["EffectiveRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceScheduledScalingPolicy.EffectiveRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_effectiveRange.Deserialize(value["EffectiveRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_effectiveRangeHasBeenSet = true;
    }

    if (value.HasMember("TimeZone") && !value["TimeZone"].IsNull())
    {
        if (!value["TimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceScheduledScalingPolicy.TimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeZone = string(value["TimeZone"].GetString());
        m_timeZoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferenceScheduledScalingPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scheduledActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledActions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_scheduledActions.begin(); itr != m_scheduledActions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_effectiveRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_effectiveRange.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeZone.c_str(), allocator).Move(), allocator);
    }

}


vector<InferenceScheduledScalingAction> InferenceScheduledScalingPolicy::GetScheduledActions() const
{
    return m_scheduledActions;
}

void InferenceScheduledScalingPolicy::SetScheduledActions(const vector<InferenceScheduledScalingAction>& _scheduledActions)
{
    m_scheduledActions = _scheduledActions;
    m_scheduledActionsHasBeenSet = true;
}

bool InferenceScheduledScalingPolicy::ScheduledActionsHasBeenSet() const
{
    return m_scheduledActionsHasBeenSet;
}

InferenceScheduledScalingEffectiveRange InferenceScheduledScalingPolicy::GetEffectiveRange() const
{
    return m_effectiveRange;
}

void InferenceScheduledScalingPolicy::SetEffectiveRange(const InferenceScheduledScalingEffectiveRange& _effectiveRange)
{
    m_effectiveRange = _effectiveRange;
    m_effectiveRangeHasBeenSet = true;
}

bool InferenceScheduledScalingPolicy::EffectiveRangeHasBeenSet() const
{
    return m_effectiveRangeHasBeenSet;
}

string InferenceScheduledScalingPolicy::GetTimeZone() const
{
    return m_timeZone;
}

void InferenceScheduledScalingPolicy::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool InferenceScheduledScalingPolicy::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

