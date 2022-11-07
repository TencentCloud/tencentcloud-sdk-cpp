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

#include <tencentcloud/wedata/v20210820/model/TaskAlarmInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskAlarmInfo::TaskAlarmInfo() :
    m_taskIdHasBeenSet(false),
    m_regularNameHasBeenSet(false),
    m_regularStatusHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
    m_alarmIndicatorHasBeenSet(false),
    m_alarmWayHasBeenSet(false),
    m_alarmRecipientIdHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_alarmRecipientNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_regularIdHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_estimatedTimeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_createrHasBeenSet(false),
    m_alarmIndicatorDescHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_nodeNameHasBeenSet(false)
{
}

CoreInternalOutcome TaskAlarmInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("RegularName") && !value["RegularName"].IsNull())
    {
        if (!value["RegularName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.RegularName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regularName = string(value["RegularName"].GetString());
        m_regularNameHasBeenSet = true;
    }

    if (value.HasMember("RegularStatus") && !value["RegularStatus"].IsNull())
    {
        if (!value["RegularStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.RegularStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regularStatus = value["RegularStatus"].GetUint64();
        m_regularStatusHasBeenSet = true;
    }

    if (value.HasMember("AlarmLevel") && !value["AlarmLevel"].IsNull())
    {
        if (!value["AlarmLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.AlarmLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmLevel = value["AlarmLevel"].GetUint64();
        m_alarmLevelHasBeenSet = true;
    }

    if (value.HasMember("AlarmIndicator") && !value["AlarmIndicator"].IsNull())
    {
        if (!value["AlarmIndicator"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.AlarmIndicator` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmIndicator = value["AlarmIndicator"].GetUint64();
        m_alarmIndicatorHasBeenSet = true;
    }

    if (value.HasMember("AlarmWay") && !value["AlarmWay"].IsNull())
    {
        if (!value["AlarmWay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.AlarmWay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmWay = string(value["AlarmWay"].GetString());
        m_alarmWayHasBeenSet = true;
    }

    if (value.HasMember("AlarmRecipientId") && !value["AlarmRecipientId"].IsNull())
    {
        if (!value["AlarmRecipientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.AlarmRecipientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRecipientId = string(value["AlarmRecipientId"].GetString());
        m_alarmRecipientIdHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.TaskType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = value["TaskType"].GetUint64();
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("AlarmRecipientName") && !value["AlarmRecipientName"].IsNull())
    {
        if (!value["AlarmRecipientName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.AlarmRecipientName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRecipientName = string(value["AlarmRecipientName"].GetString());
        m_alarmRecipientNameHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("RegularId") && !value["RegularId"].IsNull())
    {
        if (!value["RegularId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.RegularId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regularId = string(value["RegularId"].GetString());
        m_regularIdHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.TriggerType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = value["TriggerType"].GetUint64();
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("EstimatedTime") && !value["EstimatedTime"].IsNull())
    {
        if (!value["EstimatedTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.EstimatedTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_estimatedTime = value["EstimatedTime"].GetUint64();
        m_estimatedTimeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Creater") && !value["Creater"].IsNull())
    {
        if (!value["Creater"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.Creater` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creater = string(value["Creater"].GetString());
        m_createrHasBeenSet = true;
    }

    if (value.HasMember("AlarmIndicatorDesc") && !value["AlarmIndicatorDesc"].IsNull())
    {
        if (!value["AlarmIndicatorDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.AlarmIndicatorDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmIndicatorDesc = string(value["AlarmIndicatorDesc"].GetString());
        m_alarmIndicatorDescHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.Operator` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operator = value["Operator"].GetUint64();
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskAlarmInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_regularStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegularStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regularStatus, allocator);
    }

    if (m_alarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmLevel, allocator);
    }

    if (m_alarmIndicatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmIndicator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmIndicator, allocator);
    }

    if (m_alarmWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmWay.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmRecipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmRecipientId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskType, allocator);
    }

    if (m_alarmRecipientNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipientName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmRecipientName.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_regularIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegularId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regularId.c_str(), allocator).Move(), allocator);
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_createrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creater";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creater.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmIndicatorDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmIndicatorDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmIndicatorDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operator, allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

}


string TaskAlarmInfo::GetTaskId() const
{
    return m_taskId;
}

void TaskAlarmInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskAlarmInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskAlarmInfo::GetRegularName() const
{
    return m_regularName;
}

void TaskAlarmInfo::SetRegularName(const string& _regularName)
{
    m_regularName = _regularName;
    m_regularNameHasBeenSet = true;
}

bool TaskAlarmInfo::RegularNameHasBeenSet() const
{
    return m_regularNameHasBeenSet;
}

uint64_t TaskAlarmInfo::GetRegularStatus() const
{
    return m_regularStatus;
}

void TaskAlarmInfo::SetRegularStatus(const uint64_t& _regularStatus)
{
    m_regularStatus = _regularStatus;
    m_regularStatusHasBeenSet = true;
}

bool TaskAlarmInfo::RegularStatusHasBeenSet() const
{
    return m_regularStatusHasBeenSet;
}

uint64_t TaskAlarmInfo::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void TaskAlarmInfo::SetAlarmLevel(const uint64_t& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool TaskAlarmInfo::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

uint64_t TaskAlarmInfo::GetAlarmIndicator() const
{
    return m_alarmIndicator;
}

void TaskAlarmInfo::SetAlarmIndicator(const uint64_t& _alarmIndicator)
{
    m_alarmIndicator = _alarmIndicator;
    m_alarmIndicatorHasBeenSet = true;
}

bool TaskAlarmInfo::AlarmIndicatorHasBeenSet() const
{
    return m_alarmIndicatorHasBeenSet;
}

string TaskAlarmInfo::GetAlarmWay() const
{
    return m_alarmWay;
}

void TaskAlarmInfo::SetAlarmWay(const string& _alarmWay)
{
    m_alarmWay = _alarmWay;
    m_alarmWayHasBeenSet = true;
}

bool TaskAlarmInfo::AlarmWayHasBeenSet() const
{
    return m_alarmWayHasBeenSet;
}

string TaskAlarmInfo::GetAlarmRecipientId() const
{
    return m_alarmRecipientId;
}

void TaskAlarmInfo::SetAlarmRecipientId(const string& _alarmRecipientId)
{
    m_alarmRecipientId = _alarmRecipientId;
    m_alarmRecipientIdHasBeenSet = true;
}

bool TaskAlarmInfo::AlarmRecipientIdHasBeenSet() const
{
    return m_alarmRecipientIdHasBeenSet;
}

uint64_t TaskAlarmInfo::GetTaskType() const
{
    return m_taskType;
}

void TaskAlarmInfo::SetTaskType(const uint64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool TaskAlarmInfo::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string TaskAlarmInfo::GetAlarmRecipientName() const
{
    return m_alarmRecipientName;
}

void TaskAlarmInfo::SetAlarmRecipientName(const string& _alarmRecipientName)
{
    m_alarmRecipientName = _alarmRecipientName;
    m_alarmRecipientNameHasBeenSet = true;
}

bool TaskAlarmInfo::AlarmRecipientNameHasBeenSet() const
{
    return m_alarmRecipientNameHasBeenSet;
}

string TaskAlarmInfo::GetId() const
{
    return m_id;
}

void TaskAlarmInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool TaskAlarmInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string TaskAlarmInfo::GetRegularId() const
{
    return m_regularId;
}

void TaskAlarmInfo::SetRegularId(const string& _regularId)
{
    m_regularId = _regularId;
    m_regularIdHasBeenSet = true;
}

bool TaskAlarmInfo::RegularIdHasBeenSet() const
{
    return m_regularIdHasBeenSet;
}

uint64_t TaskAlarmInfo::GetTriggerType() const
{
    return m_triggerType;
}

void TaskAlarmInfo::SetTriggerType(const uint64_t& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool TaskAlarmInfo::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

uint64_t TaskAlarmInfo::GetEstimatedTime() const
{
    return m_estimatedTime;
}

void TaskAlarmInfo::SetEstimatedTime(const uint64_t& _estimatedTime)
{
    m_estimatedTime = _estimatedTime;
    m_estimatedTimeHasBeenSet = true;
}

bool TaskAlarmInfo::EstimatedTimeHasBeenSet() const
{
    return m_estimatedTimeHasBeenSet;
}

string TaskAlarmInfo::GetProjectId() const
{
    return m_projectId;
}

void TaskAlarmInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TaskAlarmInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TaskAlarmInfo::GetCreater() const
{
    return m_creater;
}

void TaskAlarmInfo::SetCreater(const string& _creater)
{
    m_creater = _creater;
    m_createrHasBeenSet = true;
}

bool TaskAlarmInfo::CreaterHasBeenSet() const
{
    return m_createrHasBeenSet;
}

string TaskAlarmInfo::GetAlarmIndicatorDesc() const
{
    return m_alarmIndicatorDesc;
}

void TaskAlarmInfo::SetAlarmIndicatorDesc(const string& _alarmIndicatorDesc)
{
    m_alarmIndicatorDesc = _alarmIndicatorDesc;
    m_alarmIndicatorDescHasBeenSet = true;
}

bool TaskAlarmInfo::AlarmIndicatorDescHasBeenSet() const
{
    return m_alarmIndicatorDescHasBeenSet;
}

uint64_t TaskAlarmInfo::GetOperator() const
{
    return m_operator;
}

void TaskAlarmInfo::SetOperator(const uint64_t& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool TaskAlarmInfo::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string TaskAlarmInfo::GetNodeId() const
{
    return m_nodeId;
}

void TaskAlarmInfo::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool TaskAlarmInfo::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string TaskAlarmInfo::GetNodeName() const
{
    return m_nodeName;
}

void TaskAlarmInfo::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool TaskAlarmInfo::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

