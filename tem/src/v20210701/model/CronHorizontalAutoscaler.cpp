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

#include <tencentcloud/tem/v20210701/model/CronHorizontalAutoscaler.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

CronHorizontalAutoscaler::CronHorizontalAutoscaler() :
    m_nameHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_schedulesHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_priorityHasBeenSet(false)
{
}

CoreInternalOutcome CronHorizontalAutoscaler::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronHorizontalAutoscaler.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronHorizontalAutoscaler.Period` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_period = string(value["Period"].GetString());
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("Schedules") && !value["Schedules"].IsNull())
    {
        if (!value["Schedules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CronHorizontalAutoscaler.Schedules` is not array type"));

        const rapidjson::Value &tmpValue = value["Schedules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CronHorizontalAutoscalerSchedule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_schedules.push_back(item);
        }
        m_schedulesHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CronHorizontalAutoscaler.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CronHorizontalAutoscaler.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CronHorizontalAutoscaler::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_period.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schedules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_schedules.begin(); itr != m_schedules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

}


string CronHorizontalAutoscaler::GetName() const
{
    return m_name;
}

void CronHorizontalAutoscaler::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CronHorizontalAutoscaler::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CronHorizontalAutoscaler::GetPeriod() const
{
    return m_period;
}

void CronHorizontalAutoscaler::SetPeriod(const string& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CronHorizontalAutoscaler::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

vector<CronHorizontalAutoscalerSchedule> CronHorizontalAutoscaler::GetSchedules() const
{
    return m_schedules;
}

void CronHorizontalAutoscaler::SetSchedules(const vector<CronHorizontalAutoscalerSchedule>& _schedules)
{
    m_schedules = _schedules;
    m_schedulesHasBeenSet = true;
}

bool CronHorizontalAutoscaler::SchedulesHasBeenSet() const
{
    return m_schedulesHasBeenSet;
}

bool CronHorizontalAutoscaler::GetEnabled() const
{
    return m_enabled;
}

void CronHorizontalAutoscaler::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool CronHorizontalAutoscaler::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

int64_t CronHorizontalAutoscaler::GetPriority() const
{
    return m_priority;
}

void CronHorizontalAutoscaler::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CronHorizontalAutoscaler::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

