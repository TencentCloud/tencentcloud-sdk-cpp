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

#include <tencentcloud/cls/v20201016/model/AlarmShieldInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

AlarmShieldInfo::AlarmShieldInfo() :
    m_alarmNoticeIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome AlarmShieldInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmNoticeId") && !value["AlarmNoticeId"].IsNull())
    {
        if (!value["AlarmNoticeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmShieldInfo.AlarmNoticeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmNoticeId = string(value["AlarmNoticeId"].GetString());
        m_alarmNoticeIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmShieldInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmShieldInfo.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmShieldInfo.EndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetUint64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmShieldInfo.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Rule") && !value["Rule"].IsNull())
    {
        if (!value["Rule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmShieldInfo.Rule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rule = string(value["Rule"].GetString());
        m_ruleHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmShieldInfo.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmShieldInfo.Source` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetUint64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmShieldInfo.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmShieldInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmShieldInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmShieldInfo.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmShieldInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmNoticeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmNoticeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmNoticeId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rule.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string AlarmShieldInfo::GetAlarmNoticeId() const
{
    return m_alarmNoticeId;
}

void AlarmShieldInfo::SetAlarmNoticeId(const string& _alarmNoticeId)
{
    m_alarmNoticeId = _alarmNoticeId;
    m_alarmNoticeIdHasBeenSet = true;
}

bool AlarmShieldInfo::AlarmNoticeIdHasBeenSet() const
{
    return m_alarmNoticeIdHasBeenSet;
}

string AlarmShieldInfo::GetTaskId() const
{
    return m_taskId;
}

void AlarmShieldInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool AlarmShieldInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t AlarmShieldInfo::GetStartTime() const
{
    return m_startTime;
}

void AlarmShieldInfo::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool AlarmShieldInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t AlarmShieldInfo::GetEndTime() const
{
    return m_endTime;
}

void AlarmShieldInfo::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool AlarmShieldInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t AlarmShieldInfo::GetType() const
{
    return m_type;
}

void AlarmShieldInfo::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AlarmShieldInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AlarmShieldInfo::GetRule() const
{
    return m_rule;
}

void AlarmShieldInfo::SetRule(const string& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool AlarmShieldInfo::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

string AlarmShieldInfo::GetReason() const
{
    return m_reason;
}

void AlarmShieldInfo::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool AlarmShieldInfo::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

uint64_t AlarmShieldInfo::GetSource() const
{
    return m_source;
}

void AlarmShieldInfo::SetSource(const uint64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool AlarmShieldInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string AlarmShieldInfo::GetOperator() const
{
    return m_operator;
}

void AlarmShieldInfo::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool AlarmShieldInfo::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

uint64_t AlarmShieldInfo::GetStatus() const
{
    return m_status;
}

void AlarmShieldInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AlarmShieldInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t AlarmShieldInfo::GetCreateTime() const
{
    return m_createTime;
}

void AlarmShieldInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AlarmShieldInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t AlarmShieldInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void AlarmShieldInfo::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AlarmShieldInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

