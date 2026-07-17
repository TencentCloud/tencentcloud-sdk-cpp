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

#include <tencentcloud/teo/v20220901/model/InferenceScheduledScalingAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

InferenceScheduledScalingAction::InferenceScheduledScalingAction() :
    m_cronExpressionHasBeenSet(false),
    m_minInstanceCountHasBeenSet(false)
{
}

CoreInternalOutcome InferenceScheduledScalingAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CronExpression") && !value["CronExpression"].IsNull())
    {
        if (!value["CronExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceScheduledScalingAction.CronExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cronExpression = string(value["CronExpression"].GetString());
        m_cronExpressionHasBeenSet = true;
    }

    if (value.HasMember("MinInstanceCount") && !value["MinInstanceCount"].IsNull())
    {
        if (!value["MinInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceScheduledScalingAction.MinInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minInstanceCount = value["MinInstanceCount"].GetInt64();
        m_minInstanceCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferenceScheduledScalingAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cronExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cronExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_minInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minInstanceCount, allocator);
    }

}


string InferenceScheduledScalingAction::GetCronExpression() const
{
    return m_cronExpression;
}

void InferenceScheduledScalingAction::SetCronExpression(const string& _cronExpression)
{
    m_cronExpression = _cronExpression;
    m_cronExpressionHasBeenSet = true;
}

bool InferenceScheduledScalingAction::CronExpressionHasBeenSet() const
{
    return m_cronExpressionHasBeenSet;
}

int64_t InferenceScheduledScalingAction::GetMinInstanceCount() const
{
    return m_minInstanceCount;
}

void InferenceScheduledScalingAction::SetMinInstanceCount(const int64_t& _minInstanceCount)
{
    m_minInstanceCount = _minInstanceCount;
    m_minInstanceCountHasBeenSet = true;
}

bool InferenceScheduledScalingAction::MinInstanceCountHasBeenSet() const
{
    return m_minInstanceCountHasBeenSet;
}

