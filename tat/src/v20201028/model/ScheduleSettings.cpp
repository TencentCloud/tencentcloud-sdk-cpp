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

#include <tencentcloud/tat/v20201028/model/ScheduleSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tat::V20201028::Model;
using namespace std;

ScheduleSettings::ScheduleSettings() :
    m_policyHasBeenSet(false),
    m_recurrenceHasBeenSet(false),
    m_invokeTimeHasBeenSet(false)
{
}

CoreInternalOutcome ScheduleSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Policy") && !value["Policy"].IsNull())
    {
        if (!value["Policy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleSettings.Policy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policy = string(value["Policy"].GetString());
        m_policyHasBeenSet = true;
    }

    if (value.HasMember("Recurrence") && !value["Recurrence"].IsNull())
    {
        if (!value["Recurrence"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleSettings.Recurrence` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recurrence = string(value["Recurrence"].GetString());
        m_recurrenceHasBeenSet = true;
    }

    if (value.HasMember("InvokeTime") && !value["InvokeTime"].IsNull())
    {
        if (!value["InvokeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleSettings.InvokeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invokeTime = string(value["InvokeTime"].GetString());
        m_invokeTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScheduleSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policy.c_str(), allocator).Move(), allocator);
    }

    if (m_recurrenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Recurrence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recurrence.c_str(), allocator).Move(), allocator);
    }

    if (m_invokeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invokeTime.c_str(), allocator).Move(), allocator);
    }

}


string ScheduleSettings::GetPolicy() const
{
    return m_policy;
}

void ScheduleSettings::SetPolicy(const string& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool ScheduleSettings::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

string ScheduleSettings::GetRecurrence() const
{
    return m_recurrence;
}

void ScheduleSettings::SetRecurrence(const string& _recurrence)
{
    m_recurrence = _recurrence;
    m_recurrenceHasBeenSet = true;
}

bool ScheduleSettings::RecurrenceHasBeenSet() const
{
    return m_recurrenceHasBeenSet;
}

string ScheduleSettings::GetInvokeTime() const
{
    return m_invokeTime;
}

void ScheduleSettings::SetInvokeTime(const string& _invokeTime)
{
    m_invokeTime = _invokeTime;
    m_invokeTimeHasBeenSet = true;
}

bool ScheduleSettings::InvokeTimeHasBeenSet() const
{
    return m_invokeTimeHasBeenSet;
}

