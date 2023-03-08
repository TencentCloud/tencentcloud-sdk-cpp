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

#include <tencentcloud/wedata/v20210820/model/AlarmEventInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

AlarmEventInfo::AlarmEventInfo() :
    m_alarmIdHasBeenSet(false),
    m_alarmTimeHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_regularNameHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
    m_alarmWayHasBeenSet(false),
    m_alarmRecipientIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_alarmIndicatorHasBeenSet(false),
    m_alarmIndicatorDescHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_estimatedTimeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_isSendSuccessHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

CoreInternalOutcome AlarmEventInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmId") && !value["AlarmId"].IsNull())
    {
        if (!value["AlarmId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmEventInfo.AlarmId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmId = string(value["AlarmId"].GetString());
        m_alarmIdHasBeenSet = true;
    }

    if (value.HasMember("AlarmTime") && !value["AlarmTime"].IsNull())
    {
        if (!value["AlarmTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmEventInfo.AlarmTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmTime = string(value["AlarmTime"].GetString());
        m_alarmTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmEventInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("RegularName") && !value["RegularName"].IsNull())
    {
        if (!value["RegularName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmEventInfo.RegularName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regularName = string(value["RegularName"].GetString());
        m_regularNameHasBeenSet = true;
    }

    if (value.HasMember("AlarmLevel") && !value["AlarmLevel"].IsNull())
    {
        if (!value["AlarmLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmEventInfo.AlarmLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmLevel = value["AlarmLevel"].GetUint64();
        m_alarmLevelHasBeenSet = true;
    }

    if (value.HasMember("AlarmWay") && !value["AlarmWay"].IsNull())
    {
        if (!value["AlarmWay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmEventInfo.AlarmWay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmWay = value["AlarmWay"].GetUint64();
        m_alarmWayHasBeenSet = true;
    }

    if (value.HasMember("AlarmRecipientId") && !value["AlarmRecipientId"].IsNull())
    {
        if (!value["AlarmRecipientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmEventInfo.AlarmRecipientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRecipientId = string(value["AlarmRecipientId"].GetString());
        m_alarmRecipientIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmEventInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("AlarmIndicator") && !value["AlarmIndicator"].IsNull())
    {
        if (!value["AlarmIndicator"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmEventInfo.AlarmIndicator` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmIndicator = value["AlarmIndicator"].GetUint64();
        m_alarmIndicatorHasBeenSet = true;
    }

    if (value.HasMember("AlarmIndicatorDesc") && !value["AlarmIndicatorDesc"].IsNull())
    {
        if (!value["AlarmIndicatorDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmEventInfo.AlarmIndicatorDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmIndicatorDesc = string(value["AlarmIndicatorDesc"].GetString());
        m_alarmIndicatorDescHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmEventInfo.TriggerType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = value["TriggerType"].GetUint64();
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("EstimatedTime") && !value["EstimatedTime"].IsNull())
    {
        if (!value["EstimatedTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmEventInfo.EstimatedTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_estimatedTime = value["EstimatedTime"].GetUint64();
        m_estimatedTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmEventInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmEventInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("IsSendSuccess") && !value["IsSendSuccess"].IsNull())
    {
        if (!value["IsSendSuccess"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmEventInfo.IsSendSuccess` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isSendSuccess = value["IsSendSuccess"].GetUint64();
        m_isSendSuccessHasBeenSet = true;
    }

    if (value.HasMember("MessageId") && !value["MessageId"].IsNull())
    {
        if (!value["MessageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmEventInfo.MessageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_messageId = string(value["MessageId"].GetString());
        m_messageIdHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmEventInfo.Operator` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_operator = value["Operator"].GetInt64();
        m_operatorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmEventInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_regularNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegularName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regularName.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmLevel, allocator);
    }

    if (m_alarmWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmWay, allocator);
    }

    if (m_alarmRecipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmRecipientId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmIndicatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmIndicator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmIndicator, allocator);
    }

    if (m_alarmIndicatorDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmIndicatorDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmIndicatorDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerType, allocator);
    }

    if (m_estimatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EstimatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_estimatedTime, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_isSendSuccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSendSuccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSendSuccess, allocator);
    }

    if (m_messageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_messageId.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operator, allocator);
    }

}


string AlarmEventInfo::GetAlarmId() const
{
    return m_alarmId;
}

void AlarmEventInfo::SetAlarmId(const string& _alarmId)
{
    m_alarmId = _alarmId;
    m_alarmIdHasBeenSet = true;
}

bool AlarmEventInfo::AlarmIdHasBeenSet() const
{
    return m_alarmIdHasBeenSet;
}

string AlarmEventInfo::GetAlarmTime() const
{
    return m_alarmTime;
}

void AlarmEventInfo::SetAlarmTime(const string& _alarmTime)
{
    m_alarmTime = _alarmTime;
    m_alarmTimeHasBeenSet = true;
}

bool AlarmEventInfo::AlarmTimeHasBeenSet() const
{
    return m_alarmTimeHasBeenSet;
}

string AlarmEventInfo::GetTaskId() const
{
    return m_taskId;
}

void AlarmEventInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool AlarmEventInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string AlarmEventInfo::GetRegularName() const
{
    return m_regularName;
}

void AlarmEventInfo::SetRegularName(const string& _regularName)
{
    m_regularName = _regularName;
    m_regularNameHasBeenSet = true;
}

bool AlarmEventInfo::RegularNameHasBeenSet() const
{
    return m_regularNameHasBeenSet;
}

uint64_t AlarmEventInfo::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void AlarmEventInfo::SetAlarmLevel(const uint64_t& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool AlarmEventInfo::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

uint64_t AlarmEventInfo::GetAlarmWay() const
{
    return m_alarmWay;
}

void AlarmEventInfo::SetAlarmWay(const uint64_t& _alarmWay)
{
    m_alarmWay = _alarmWay;
    m_alarmWayHasBeenSet = true;
}

bool AlarmEventInfo::AlarmWayHasBeenSet() const
{
    return m_alarmWayHasBeenSet;
}

string AlarmEventInfo::GetAlarmRecipientId() const
{
    return m_alarmRecipientId;
}

void AlarmEventInfo::SetAlarmRecipientId(const string& _alarmRecipientId)
{
    m_alarmRecipientId = _alarmRecipientId;
    m_alarmRecipientIdHasBeenSet = true;
}

bool AlarmEventInfo::AlarmRecipientIdHasBeenSet() const
{
    return m_alarmRecipientIdHasBeenSet;
}

string AlarmEventInfo::GetProjectId() const
{
    return m_projectId;
}

void AlarmEventInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AlarmEventInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t AlarmEventInfo::GetAlarmIndicator() const
{
    return m_alarmIndicator;
}

void AlarmEventInfo::SetAlarmIndicator(const uint64_t& _alarmIndicator)
{
    m_alarmIndicator = _alarmIndicator;
    m_alarmIndicatorHasBeenSet = true;
}

bool AlarmEventInfo::AlarmIndicatorHasBeenSet() const
{
    return m_alarmIndicatorHasBeenSet;
}

string AlarmEventInfo::GetAlarmIndicatorDesc() const
{
    return m_alarmIndicatorDesc;
}

void AlarmEventInfo::SetAlarmIndicatorDesc(const string& _alarmIndicatorDesc)
{
    m_alarmIndicatorDesc = _alarmIndicatorDesc;
    m_alarmIndicatorDescHasBeenSet = true;
}

bool AlarmEventInfo::AlarmIndicatorDescHasBeenSet() const
{
    return m_alarmIndicatorDescHasBeenSet;
}

uint64_t AlarmEventInfo::GetTriggerType() const
{
    return m_triggerType;
}

void AlarmEventInfo::SetTriggerType(const uint64_t& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool AlarmEventInfo::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

uint64_t AlarmEventInfo::GetEstimatedTime() const
{
    return m_estimatedTime;
}

void AlarmEventInfo::SetEstimatedTime(const uint64_t& _estimatedTime)
{
    m_estimatedTime = _estimatedTime;
    m_estimatedTimeHasBeenSet = true;
}

bool AlarmEventInfo::EstimatedTimeHasBeenSet() const
{
    return m_estimatedTimeHasBeenSet;
}

string AlarmEventInfo::GetInstanceId() const
{
    return m_instanceId;
}

void AlarmEventInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AlarmEventInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AlarmEventInfo::GetTaskName() const
{
    return m_taskName;
}

void AlarmEventInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool AlarmEventInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

uint64_t AlarmEventInfo::GetIsSendSuccess() const
{
    return m_isSendSuccess;
}

void AlarmEventInfo::SetIsSendSuccess(const uint64_t& _isSendSuccess)
{
    m_isSendSuccess = _isSendSuccess;
    m_isSendSuccessHasBeenSet = true;
}

bool AlarmEventInfo::IsSendSuccessHasBeenSet() const
{
    return m_isSendSuccessHasBeenSet;
}

string AlarmEventInfo::GetMessageId() const
{
    return m_messageId;
}

void AlarmEventInfo::SetMessageId(const string& _messageId)
{
    m_messageId = _messageId;
    m_messageIdHasBeenSet = true;
}

bool AlarmEventInfo::MessageIdHasBeenSet() const
{
    return m_messageIdHasBeenSet;
}

int64_t AlarmEventInfo::GetOperator() const
{
    return m_operator;
}

void AlarmEventInfo::SetOperator(const int64_t& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool AlarmEventInfo::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

