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

#include <tencentcloud/wedata/v20210820/model/AlarmInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

AlarmInfo::AlarmInfo() :
    m_taskIdsHasBeenSet(false),
    m_alarmTypeHasBeenSet(false),
    m_alarmWayHasBeenSet(false),
    m_alarmRecipientHasBeenSet(false),
    m_alarmRecipientIdHasBeenSet(false),
    m_hoursHasBeenSet(false),
    m_minutesHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_alarmIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome AlarmInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskIds") && !value["TaskIds"].IsNull())
    {
        if (!value["TaskIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.TaskIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskIds = string(value["TaskIds"].GetString());
        m_taskIdsHasBeenSet = true;
    }

    if (value.HasMember("AlarmType") && !value["AlarmType"].IsNull())
    {
        if (!value["AlarmType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.AlarmType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmType = string(value["AlarmType"].GetString());
        m_alarmTypeHasBeenSet = true;
    }

    if (value.HasMember("AlarmWay") && !value["AlarmWay"].IsNull())
    {
        if (!value["AlarmWay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.AlarmWay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmWay = string(value["AlarmWay"].GetString());
        m_alarmWayHasBeenSet = true;
    }

    if (value.HasMember("AlarmRecipient") && !value["AlarmRecipient"].IsNull())
    {
        if (!value["AlarmRecipient"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.AlarmRecipient` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRecipient = string(value["AlarmRecipient"].GetString());
        m_alarmRecipientHasBeenSet = true;
    }

    if (value.HasMember("AlarmRecipientId") && !value["AlarmRecipientId"].IsNull())
    {
        if (!value["AlarmRecipientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.AlarmRecipientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRecipientId = string(value["AlarmRecipientId"].GetString());
        m_alarmRecipientIdHasBeenSet = true;
    }

    if (value.HasMember("Hours") && !value["Hours"].IsNull())
    {
        if (!value["Hours"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.Hours` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hours = value["Hours"].GetUint64();
        m_hoursHasBeenSet = true;
    }

    if (value.HasMember("Minutes") && !value["Minutes"].IsNull())
    {
        if (!value["Minutes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.Minutes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minutes = value["Minutes"].GetUint64();
        m_minutesHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.TriggerType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = value["TriggerType"].GetUint64();
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("AlarmId") && !value["AlarmId"].IsNull())
    {
        if (!value["AlarmId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.AlarmId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmId = string(value["AlarmId"].GetString());
        m_alarmIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskIds.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmType.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmWay.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmRecipientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmRecipient.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmRecipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmRecipientId.c_str(), allocator).Move(), allocator);
    }

    if (m_hoursHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hours";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hours, allocator);
    }

    if (m_minutesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Minutes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minutes, allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerType, allocator);
    }

    if (m_alarmIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string AlarmInfo::GetTaskIds() const
{
    return m_taskIds;
}

void AlarmInfo::SetTaskIds(const string& _taskIds)
{
    m_taskIds = _taskIds;
    m_taskIdsHasBeenSet = true;
}

bool AlarmInfo::TaskIdsHasBeenSet() const
{
    return m_taskIdsHasBeenSet;
}

string AlarmInfo::GetAlarmType() const
{
    return m_alarmType;
}

void AlarmInfo::SetAlarmType(const string& _alarmType)
{
    m_alarmType = _alarmType;
    m_alarmTypeHasBeenSet = true;
}

bool AlarmInfo::AlarmTypeHasBeenSet() const
{
    return m_alarmTypeHasBeenSet;
}

string AlarmInfo::GetAlarmWay() const
{
    return m_alarmWay;
}

void AlarmInfo::SetAlarmWay(const string& _alarmWay)
{
    m_alarmWay = _alarmWay;
    m_alarmWayHasBeenSet = true;
}

bool AlarmInfo::AlarmWayHasBeenSet() const
{
    return m_alarmWayHasBeenSet;
}

string AlarmInfo::GetAlarmRecipient() const
{
    return m_alarmRecipient;
}

void AlarmInfo::SetAlarmRecipient(const string& _alarmRecipient)
{
    m_alarmRecipient = _alarmRecipient;
    m_alarmRecipientHasBeenSet = true;
}

bool AlarmInfo::AlarmRecipientHasBeenSet() const
{
    return m_alarmRecipientHasBeenSet;
}

string AlarmInfo::GetAlarmRecipientId() const
{
    return m_alarmRecipientId;
}

void AlarmInfo::SetAlarmRecipientId(const string& _alarmRecipientId)
{
    m_alarmRecipientId = _alarmRecipientId;
    m_alarmRecipientIdHasBeenSet = true;
}

bool AlarmInfo::AlarmRecipientIdHasBeenSet() const
{
    return m_alarmRecipientIdHasBeenSet;
}

uint64_t AlarmInfo::GetHours() const
{
    return m_hours;
}

void AlarmInfo::SetHours(const uint64_t& _hours)
{
    m_hours = _hours;
    m_hoursHasBeenSet = true;
}

bool AlarmInfo::HoursHasBeenSet() const
{
    return m_hoursHasBeenSet;
}

uint64_t AlarmInfo::GetMinutes() const
{
    return m_minutes;
}

void AlarmInfo::SetMinutes(const uint64_t& _minutes)
{
    m_minutes = _minutes;
    m_minutesHasBeenSet = true;
}

bool AlarmInfo::MinutesHasBeenSet() const
{
    return m_minutesHasBeenSet;
}

uint64_t AlarmInfo::GetTriggerType() const
{
    return m_triggerType;
}

void AlarmInfo::SetTriggerType(const uint64_t& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool AlarmInfo::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string AlarmInfo::GetAlarmId() const
{
    return m_alarmId;
}

void AlarmInfo::SetAlarmId(const string& _alarmId)
{
    m_alarmId = _alarmId;
    m_alarmIdHasBeenSet = true;
}

bool AlarmInfo::AlarmIdHasBeenSet() const
{
    return m_alarmIdHasBeenSet;
}

uint64_t AlarmInfo::GetStatus() const
{
    return m_status;
}

void AlarmInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AlarmInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

