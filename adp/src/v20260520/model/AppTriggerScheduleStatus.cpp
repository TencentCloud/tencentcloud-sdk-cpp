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

#include <tencentcloud/adp/v20260520/model/AppTriggerScheduleStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppTriggerScheduleStatus::AppTriggerScheduleStatus() :
    m_lastFireTimeHasBeenSet(false),
    m_nextFireTimeHasBeenSet(false),
    m_policySummaryHasBeenSet(false)
{
}

CoreInternalOutcome AppTriggerScheduleStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LastFireTime") && !value["LastFireTime"].IsNull())
    {
        if (!value["LastFireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerScheduleStatus.LastFireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastFireTime = string(value["LastFireTime"].GetString());
        m_lastFireTimeHasBeenSet = true;
    }

    if (value.HasMember("NextFireTime") && !value["NextFireTime"].IsNull())
    {
        if (!value["NextFireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerScheduleStatus.NextFireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextFireTime = string(value["NextFireTime"].GetString());
        m_nextFireTimeHasBeenSet = true;
    }

    if (value.HasMember("PolicySummary") && !value["PolicySummary"].IsNull())
    {
        if (!value["PolicySummary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerScheduleStatus.PolicySummary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policySummary = string(value["PolicySummary"].GetString());
        m_policySummaryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppTriggerScheduleStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lastFireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastFireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastFireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nextFireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextFireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextFireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_policySummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicySummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policySummary.c_str(), allocator).Move(), allocator);
    }

}


string AppTriggerScheduleStatus::GetLastFireTime() const
{
    return m_lastFireTime;
}

void AppTriggerScheduleStatus::SetLastFireTime(const string& _lastFireTime)
{
    m_lastFireTime = _lastFireTime;
    m_lastFireTimeHasBeenSet = true;
}

bool AppTriggerScheduleStatus::LastFireTimeHasBeenSet() const
{
    return m_lastFireTimeHasBeenSet;
}

string AppTriggerScheduleStatus::GetNextFireTime() const
{
    return m_nextFireTime;
}

void AppTriggerScheduleStatus::SetNextFireTime(const string& _nextFireTime)
{
    m_nextFireTime = _nextFireTime;
    m_nextFireTimeHasBeenSet = true;
}

bool AppTriggerScheduleStatus::NextFireTimeHasBeenSet() const
{
    return m_nextFireTimeHasBeenSet;
}

string AppTriggerScheduleStatus::GetPolicySummary() const
{
    return m_policySummary;
}

void AppTriggerScheduleStatus::SetPolicySummary(const string& _policySummary)
{
    m_policySummary = _policySummary;
    m_policySummaryHasBeenSet = true;
}

bool AppTriggerScheduleStatus::PolicySummaryHasBeenSet() const
{
    return m_policySummaryHasBeenSet;
}

