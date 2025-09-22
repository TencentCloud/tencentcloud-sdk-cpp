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

#include <tencentcloud/wedata/v20250806/model/AlarmMessage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

AlarmMessage::AlarmMessage() :
    m_alarmMessageIdHasBeenSet(false),
    m_alarmTimeHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_curRunDateHasBeenSet(false),
    m_alarmReasonHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
    m_alarmRuleIdHasBeenSet(false),
    m_alarmWaysHasBeenSet(false),
    m_alarmRecipientsHasBeenSet(false)
{
}

CoreInternalOutcome AlarmMessage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmMessageId") && !value["AlarmMessageId"].IsNull())
    {
        if (!value["AlarmMessageId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmMessage.AlarmMessageId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmMessageId = value["AlarmMessageId"].GetUint64();
        m_alarmMessageIdHasBeenSet = true;
    }

    if (value.HasMember("AlarmTime") && !value["AlarmTime"].IsNull())
    {
        if (!value["AlarmTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmMessage.AlarmTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmTime = string(value["AlarmTime"].GetString());
        m_alarmTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmMessage.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmMessage.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("CurRunDate") && !value["CurRunDate"].IsNull())
    {
        if (!value["CurRunDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmMessage.CurRunDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curRunDate = string(value["CurRunDate"].GetString());
        m_curRunDateHasBeenSet = true;
    }

    if (value.HasMember("AlarmReason") && !value["AlarmReason"].IsNull())
    {
        if (!value["AlarmReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmMessage.AlarmReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmReason = string(value["AlarmReason"].GetString());
        m_alarmReasonHasBeenSet = true;
    }

    if (value.HasMember("AlarmLevel") && !value["AlarmLevel"].IsNull())
    {
        if (!value["AlarmLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmMessage.AlarmLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmLevel = value["AlarmLevel"].GetUint64();
        m_alarmLevelHasBeenSet = true;
    }

    if (value.HasMember("AlarmRuleId") && !value["AlarmRuleId"].IsNull())
    {
        if (!value["AlarmRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmMessage.AlarmRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRuleId = string(value["AlarmRuleId"].GetString());
        m_alarmRuleIdHasBeenSet = true;
    }

    if (value.HasMember("AlarmWays") && !value["AlarmWays"].IsNull())
    {
        if (!value["AlarmWays"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmMessage.AlarmWays` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmWays"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_alarmWays.push_back((*itr).GetString());
        }
        m_alarmWaysHasBeenSet = true;
    }

    if (value.HasMember("AlarmRecipients") && !value["AlarmRecipients"].IsNull())
    {
        if (!value["AlarmRecipients"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmMessage.AlarmRecipients` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmRecipients"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_alarmRecipients.push_back((*itr).GetString());
        }
        m_alarmRecipientsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmMessage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmMessageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmMessageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmMessageId, allocator);
    }

    if (m_alarmTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_curRunDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurRunDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curRunDate.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmReason.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmLevel, allocator);
    }

    if (m_alarmRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmWaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmWays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmWays.begin(); itr != m_alarmWays.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_alarmRecipientsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipients";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmRecipients.begin(); itr != m_alarmRecipients.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t AlarmMessage::GetAlarmMessageId() const
{
    return m_alarmMessageId;
}

void AlarmMessage::SetAlarmMessageId(const uint64_t& _alarmMessageId)
{
    m_alarmMessageId = _alarmMessageId;
    m_alarmMessageIdHasBeenSet = true;
}

bool AlarmMessage::AlarmMessageIdHasBeenSet() const
{
    return m_alarmMessageIdHasBeenSet;
}

string AlarmMessage::GetAlarmTime() const
{
    return m_alarmTime;
}

void AlarmMessage::SetAlarmTime(const string& _alarmTime)
{
    m_alarmTime = _alarmTime;
    m_alarmTimeHasBeenSet = true;
}

bool AlarmMessage::AlarmTimeHasBeenSet() const
{
    return m_alarmTimeHasBeenSet;
}

string AlarmMessage::GetTaskName() const
{
    return m_taskName;
}

void AlarmMessage::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool AlarmMessage::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string AlarmMessage::GetTaskId() const
{
    return m_taskId;
}

void AlarmMessage::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool AlarmMessage::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string AlarmMessage::GetCurRunDate() const
{
    return m_curRunDate;
}

void AlarmMessage::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool AlarmMessage::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

string AlarmMessage::GetAlarmReason() const
{
    return m_alarmReason;
}

void AlarmMessage::SetAlarmReason(const string& _alarmReason)
{
    m_alarmReason = _alarmReason;
    m_alarmReasonHasBeenSet = true;
}

bool AlarmMessage::AlarmReasonHasBeenSet() const
{
    return m_alarmReasonHasBeenSet;
}

uint64_t AlarmMessage::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void AlarmMessage::SetAlarmLevel(const uint64_t& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool AlarmMessage::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

string AlarmMessage::GetAlarmRuleId() const
{
    return m_alarmRuleId;
}

void AlarmMessage::SetAlarmRuleId(const string& _alarmRuleId)
{
    m_alarmRuleId = _alarmRuleId;
    m_alarmRuleIdHasBeenSet = true;
}

bool AlarmMessage::AlarmRuleIdHasBeenSet() const
{
    return m_alarmRuleIdHasBeenSet;
}

vector<string> AlarmMessage::GetAlarmWays() const
{
    return m_alarmWays;
}

void AlarmMessage::SetAlarmWays(const vector<string>& _alarmWays)
{
    m_alarmWays = _alarmWays;
    m_alarmWaysHasBeenSet = true;
}

bool AlarmMessage::AlarmWaysHasBeenSet() const
{
    return m_alarmWaysHasBeenSet;
}

vector<string> AlarmMessage::GetAlarmRecipients() const
{
    return m_alarmRecipients;
}

void AlarmMessage::SetAlarmRecipients(const vector<string>& _alarmRecipients)
{
    m_alarmRecipients = _alarmRecipients;
    m_alarmRecipientsHasBeenSet = true;
}

bool AlarmMessage::AlarmRecipientsHasBeenSet() const
{
    return m_alarmRecipientsHasBeenSet;
}

