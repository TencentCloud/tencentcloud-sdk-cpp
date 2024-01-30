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

#include <tencentcloud/cls/v20201016/model/ModifyAlarmShieldRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyAlarmShieldRequest::ModifyAlarmShieldRequest() :
    m_taskIdHasBeenSet(false),
    m_alarmNoticeIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string ModifyAlarmShieldRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmNoticeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmNoticeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alarmNoticeId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rule.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAlarmShieldRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifyAlarmShieldRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifyAlarmShieldRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ModifyAlarmShieldRequest::GetAlarmNoticeId() const
{
    return m_alarmNoticeId;
}

void ModifyAlarmShieldRequest::SetAlarmNoticeId(const string& _alarmNoticeId)
{
    m_alarmNoticeId = _alarmNoticeId;
    m_alarmNoticeIdHasBeenSet = true;
}

bool ModifyAlarmShieldRequest::AlarmNoticeIdHasBeenSet() const
{
    return m_alarmNoticeIdHasBeenSet;
}

uint64_t ModifyAlarmShieldRequest::GetStartTime() const
{
    return m_startTime;
}

void ModifyAlarmShieldRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModifyAlarmShieldRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t ModifyAlarmShieldRequest::GetEndTime() const
{
    return m_endTime;
}

void ModifyAlarmShieldRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ModifyAlarmShieldRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t ModifyAlarmShieldRequest::GetType() const
{
    return m_type;
}

void ModifyAlarmShieldRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyAlarmShieldRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModifyAlarmShieldRequest::GetRule() const
{
    return m_rule;
}

void ModifyAlarmShieldRequest::SetRule(const string& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool ModifyAlarmShieldRequest::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

string ModifyAlarmShieldRequest::GetReason() const
{
    return m_reason;
}

void ModifyAlarmShieldRequest::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool ModifyAlarmShieldRequest::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

uint64_t ModifyAlarmShieldRequest::GetStatus() const
{
    return m_status;
}

void ModifyAlarmShieldRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyAlarmShieldRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


