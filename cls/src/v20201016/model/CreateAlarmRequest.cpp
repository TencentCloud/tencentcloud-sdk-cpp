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

#include <tencentcloud/cls/v20201016/model/CreateAlarmRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace rapidjson;
using namespace std;

CreateAlarmRequest::CreateAlarmRequest() :
    m_nameHasBeenSet(false),
    m_alarmTargetsHasBeenSet(false),
    m_monitorTimeHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_triggerCountHasBeenSet(false),
    m_alarmPeriodHasBeenSet(false),
    m_alarmNoticeIdsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string CreateAlarmRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmTargetsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AlarmTargets";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alarmTargets.begin(); itr != m_alarmTargets.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_monitorTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MonitorTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_monitorTime.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_conditionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_condition.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TriggerCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_triggerCount, allocator);
    }

    if (m_alarmPeriodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AlarmPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alarmPeriod, allocator);
    }

    if (m_alarmNoticeIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AlarmNoticeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_alarmNoticeIds.begin(); itr != m_alarmNoticeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAlarmRequest::GetName() const
{
    return m_name;
}

void CreateAlarmRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAlarmRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<AlarmTarget> CreateAlarmRequest::GetAlarmTargets() const
{
    return m_alarmTargets;
}

void CreateAlarmRequest::SetAlarmTargets(const vector<AlarmTarget>& _alarmTargets)
{
    m_alarmTargets = _alarmTargets;
    m_alarmTargetsHasBeenSet = true;
}

bool CreateAlarmRequest::AlarmTargetsHasBeenSet() const
{
    return m_alarmTargetsHasBeenSet;
}

MonitorTime CreateAlarmRequest::GetMonitorTime() const
{
    return m_monitorTime;
}

void CreateAlarmRequest::SetMonitorTime(const MonitorTime& _monitorTime)
{
    m_monitorTime = _monitorTime;
    m_monitorTimeHasBeenSet = true;
}

bool CreateAlarmRequest::MonitorTimeHasBeenSet() const
{
    return m_monitorTimeHasBeenSet;
}

string CreateAlarmRequest::GetCondition() const
{
    return m_condition;
}

void CreateAlarmRequest::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool CreateAlarmRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

int64_t CreateAlarmRequest::GetTriggerCount() const
{
    return m_triggerCount;
}

void CreateAlarmRequest::SetTriggerCount(const int64_t& _triggerCount)
{
    m_triggerCount = _triggerCount;
    m_triggerCountHasBeenSet = true;
}

bool CreateAlarmRequest::TriggerCountHasBeenSet() const
{
    return m_triggerCountHasBeenSet;
}

int64_t CreateAlarmRequest::GetAlarmPeriod() const
{
    return m_alarmPeriod;
}

void CreateAlarmRequest::SetAlarmPeriod(const int64_t& _alarmPeriod)
{
    m_alarmPeriod = _alarmPeriod;
    m_alarmPeriodHasBeenSet = true;
}

bool CreateAlarmRequest::AlarmPeriodHasBeenSet() const
{
    return m_alarmPeriodHasBeenSet;
}

vector<string> CreateAlarmRequest::GetAlarmNoticeIds() const
{
    return m_alarmNoticeIds;
}

void CreateAlarmRequest::SetAlarmNoticeIds(const vector<string>& _alarmNoticeIds)
{
    m_alarmNoticeIds = _alarmNoticeIds;
    m_alarmNoticeIdsHasBeenSet = true;
}

bool CreateAlarmRequest::AlarmNoticeIdsHasBeenSet() const
{
    return m_alarmNoticeIdsHasBeenSet;
}

bool CreateAlarmRequest::GetStatus() const
{
    return m_status;
}

void CreateAlarmRequest::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateAlarmRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


