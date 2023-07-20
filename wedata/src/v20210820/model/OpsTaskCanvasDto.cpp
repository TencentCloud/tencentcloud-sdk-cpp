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

#include <tencentcloud/wedata/v20210820/model/OpsTaskCanvasDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

OpsTaskCanvasDto::OpsTaskCanvasDto() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_projectIdentHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_taskTypeIdHasBeenSet(false),
    m_taskTypeDescHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_folderNameHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_firstSubmitTimeHasBeenSet(false),
    m_firstRunTimeHasBeenSet(false),
    m_scheduleDescHasBeenSet(false),
    m_inChargeHasBeenSet(false),
    m_cycleUnitHasBeenSet(false),
    m_leftCoordinateHasBeenSet(false),
    m_topCoordinateHasBeenSet(false),
    m_virtualFlagHasBeenSet(false),
    m_taskActionHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false),
    m_layerHasBeenSet(false),
    m_sourceServiceIdHasBeenSet(false),
    m_sourceServiceTypeHasBeenSet(false),
    m_targetServiceIdHasBeenSet(false),
    m_targetServiceTypeHasBeenSet(false),
    m_alarmTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome OpsTaskCanvasDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectIdent") && !value["ProjectIdent"].IsNull())
    {
        if (!value["ProjectIdent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.ProjectIdent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectIdent = string(value["ProjectIdent"].GetString());
        m_projectIdentHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeId") && !value["TaskTypeId"].IsNull())
    {
        if (!value["TaskTypeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.TaskTypeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeId = value["TaskTypeId"].GetUint64();
        m_taskTypeIdHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeDesc") && !value["TaskTypeDesc"].IsNull())
    {
        if (!value["TaskTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.TaskTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeDesc = string(value["TaskTypeDesc"].GetString());
        m_taskTypeDescHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("FolderName") && !value["FolderName"].IsNull())
    {
        if (!value["FolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.FolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderName = string(value["FolderName"].GetString());
        m_folderNameHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("FirstSubmitTime") && !value["FirstSubmitTime"].IsNull())
    {
        if (!value["FirstSubmitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.FirstSubmitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstSubmitTime = string(value["FirstSubmitTime"].GetString());
        m_firstSubmitTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstRunTime") && !value["FirstRunTime"].IsNull())
    {
        if (!value["FirstRunTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.FirstRunTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstRunTime = string(value["FirstRunTime"].GetString());
        m_firstRunTimeHasBeenSet = true;
    }

    if (value.HasMember("ScheduleDesc") && !value["ScheduleDesc"].IsNull())
    {
        if (!value["ScheduleDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.ScheduleDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleDesc = string(value["ScheduleDesc"].GetString());
        m_scheduleDescHasBeenSet = true;
    }

    if (value.HasMember("InCharge") && !value["InCharge"].IsNull())
    {
        if (!value["InCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.InCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inCharge = string(value["InCharge"].GetString());
        m_inChargeHasBeenSet = true;
    }

    if (value.HasMember("CycleUnit") && !value["CycleUnit"].IsNull())
    {
        if (!value["CycleUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.CycleUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleUnit = string(value["CycleUnit"].GetString());
        m_cycleUnitHasBeenSet = true;
    }

    if (value.HasMember("LeftCoordinate") && !value["LeftCoordinate"].IsNull())
    {
        if (!value["LeftCoordinate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.LeftCoordinate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_leftCoordinate = value["LeftCoordinate"].GetDouble();
        m_leftCoordinateHasBeenSet = true;
    }

    if (value.HasMember("TopCoordinate") && !value["TopCoordinate"].IsNull())
    {
        if (!value["TopCoordinate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.TopCoordinate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_topCoordinate = value["TopCoordinate"].GetDouble();
        m_topCoordinateHasBeenSet = true;
    }

    if (value.HasMember("VirtualFlag") && !value["VirtualFlag"].IsNull())
    {
        if (!value["VirtualFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.VirtualFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_virtualFlag = value["VirtualFlag"].GetBool();
        m_virtualFlagHasBeenSet = true;
    }

    if (value.HasMember("TaskAction") && !value["TaskAction"].IsNull())
    {
        if (!value["TaskAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.TaskAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskAction = string(value["TaskAction"].GetString());
        m_taskActionHasBeenSet = true;
    }

    if (value.HasMember("DelayTime") && !value["DelayTime"].IsNull())
    {
        if (!value["DelayTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.DelayTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_delayTime = value["DelayTime"].GetUint64();
        m_delayTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionStartTime") && !value["ExecutionStartTime"].IsNull())
    {
        if (!value["ExecutionStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.ExecutionStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionStartTime = string(value["ExecutionStartTime"].GetString());
        m_executionStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionEndTime") && !value["ExecutionEndTime"].IsNull())
    {
        if (!value["ExecutionEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.ExecutionEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionEndTime = string(value["ExecutionEndTime"].GetString());
        m_executionEndTimeHasBeenSet = true;
    }

    if (value.HasMember("Layer") && !value["Layer"].IsNull())
    {
        if (!value["Layer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.Layer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_layer = string(value["Layer"].GetString());
        m_layerHasBeenSet = true;
    }

    if (value.HasMember("SourceServiceId") && !value["SourceServiceId"].IsNull())
    {
        if (!value["SourceServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.SourceServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceServiceId = string(value["SourceServiceId"].GetString());
        m_sourceServiceIdHasBeenSet = true;
    }

    if (value.HasMember("SourceServiceType") && !value["SourceServiceType"].IsNull())
    {
        if (!value["SourceServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.SourceServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceServiceType = string(value["SourceServiceType"].GetString());
        m_sourceServiceTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetServiceId") && !value["TargetServiceId"].IsNull())
    {
        if (!value["TargetServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.TargetServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetServiceId = string(value["TargetServiceId"].GetString());
        m_targetServiceIdHasBeenSet = true;
    }

    if (value.HasMember("TargetServiceType") && !value["TargetServiceType"].IsNull())
    {
        if (!value["TargetServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.TargetServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetServiceType = string(value["TargetServiceType"].GetString());
        m_targetServiceTypeHasBeenSet = true;
    }

    if (value.HasMember("AlarmType") && !value["AlarmType"].IsNull())
    {
        if (!value["AlarmType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.AlarmType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmType = string(value["AlarmType"].GetString());
        m_alarmTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsTaskCanvasDto.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpsTaskCanvasDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIdent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectIdent.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskTypeId, allocator);
    }

    if (m_taskTypeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTypeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_folderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderName.c_str(), allocator).Move(), allocator);
    }

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_firstSubmitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstSubmitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstSubmitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_firstRunTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstRunTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstRunTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_leftCoordinateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftCoordinate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leftCoordinate, allocator);
    }

    if (m_topCoordinateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopCoordinate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topCoordinate, allocator);
    }

    if (m_virtualFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_virtualFlag, allocator);
    }

    if (m_taskActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskAction.c_str(), allocator).Move(), allocator);
    }

    if (m_delayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delayTime, allocator);
    }

    if (m_executionStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_executionEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_layerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Layer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_layer.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceServiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceServiceType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetServiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetServiceType.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string OpsTaskCanvasDto::GetTaskId() const
{
    return m_taskId;
}

void OpsTaskCanvasDto::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool OpsTaskCanvasDto::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string OpsTaskCanvasDto::GetTaskName() const
{
    return m_taskName;
}

void OpsTaskCanvasDto::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool OpsTaskCanvasDto::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string OpsTaskCanvasDto::GetWorkflowId() const
{
    return m_workflowId;
}

void OpsTaskCanvasDto::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool OpsTaskCanvasDto::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string OpsTaskCanvasDto::GetWorkflowName() const
{
    return m_workflowName;
}

void OpsTaskCanvasDto::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool OpsTaskCanvasDto::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string OpsTaskCanvasDto::GetProjectName() const
{
    return m_projectName;
}

void OpsTaskCanvasDto::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool OpsTaskCanvasDto::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string OpsTaskCanvasDto::GetProjectIdent() const
{
    return m_projectIdent;
}

void OpsTaskCanvasDto::SetProjectIdent(const string& _projectIdent)
{
    m_projectIdent = _projectIdent;
    m_projectIdentHasBeenSet = true;
}

bool OpsTaskCanvasDto::ProjectIdentHasBeenSet() const
{
    return m_projectIdentHasBeenSet;
}

string OpsTaskCanvasDto::GetStatus() const
{
    return m_status;
}

void OpsTaskCanvasDto::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OpsTaskCanvasDto::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t OpsTaskCanvasDto::GetTaskTypeId() const
{
    return m_taskTypeId;
}

void OpsTaskCanvasDto::SetTaskTypeId(const uint64_t& _taskTypeId)
{
    m_taskTypeId = _taskTypeId;
    m_taskTypeIdHasBeenSet = true;
}

bool OpsTaskCanvasDto::TaskTypeIdHasBeenSet() const
{
    return m_taskTypeIdHasBeenSet;
}

string OpsTaskCanvasDto::GetTaskTypeDesc() const
{
    return m_taskTypeDesc;
}

void OpsTaskCanvasDto::SetTaskTypeDesc(const string& _taskTypeDesc)
{
    m_taskTypeDesc = _taskTypeDesc;
    m_taskTypeDescHasBeenSet = true;
}

bool OpsTaskCanvasDto::TaskTypeDescHasBeenSet() const
{
    return m_taskTypeDescHasBeenSet;
}

string OpsTaskCanvasDto::GetProjectId() const
{
    return m_projectId;
}

void OpsTaskCanvasDto::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool OpsTaskCanvasDto::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string OpsTaskCanvasDto::GetFolderName() const
{
    return m_folderName;
}

void OpsTaskCanvasDto::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool OpsTaskCanvasDto::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

string OpsTaskCanvasDto::GetFolderId() const
{
    return m_folderId;
}

void OpsTaskCanvasDto::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool OpsTaskCanvasDto::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string OpsTaskCanvasDto::GetFirstSubmitTime() const
{
    return m_firstSubmitTime;
}

void OpsTaskCanvasDto::SetFirstSubmitTime(const string& _firstSubmitTime)
{
    m_firstSubmitTime = _firstSubmitTime;
    m_firstSubmitTimeHasBeenSet = true;
}

bool OpsTaskCanvasDto::FirstSubmitTimeHasBeenSet() const
{
    return m_firstSubmitTimeHasBeenSet;
}

string OpsTaskCanvasDto::GetFirstRunTime() const
{
    return m_firstRunTime;
}

void OpsTaskCanvasDto::SetFirstRunTime(const string& _firstRunTime)
{
    m_firstRunTime = _firstRunTime;
    m_firstRunTimeHasBeenSet = true;
}

bool OpsTaskCanvasDto::FirstRunTimeHasBeenSet() const
{
    return m_firstRunTimeHasBeenSet;
}

string OpsTaskCanvasDto::GetScheduleDesc() const
{
    return m_scheduleDesc;
}

void OpsTaskCanvasDto::SetScheduleDesc(const string& _scheduleDesc)
{
    m_scheduleDesc = _scheduleDesc;
    m_scheduleDescHasBeenSet = true;
}

bool OpsTaskCanvasDto::ScheduleDescHasBeenSet() const
{
    return m_scheduleDescHasBeenSet;
}

string OpsTaskCanvasDto::GetInCharge() const
{
    return m_inCharge;
}

void OpsTaskCanvasDto::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool OpsTaskCanvasDto::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

string OpsTaskCanvasDto::GetCycleUnit() const
{
    return m_cycleUnit;
}

void OpsTaskCanvasDto::SetCycleUnit(const string& _cycleUnit)
{
    m_cycleUnit = _cycleUnit;
    m_cycleUnitHasBeenSet = true;
}

bool OpsTaskCanvasDto::CycleUnitHasBeenSet() const
{
    return m_cycleUnitHasBeenSet;
}

double OpsTaskCanvasDto::GetLeftCoordinate() const
{
    return m_leftCoordinate;
}

void OpsTaskCanvasDto::SetLeftCoordinate(const double& _leftCoordinate)
{
    m_leftCoordinate = _leftCoordinate;
    m_leftCoordinateHasBeenSet = true;
}

bool OpsTaskCanvasDto::LeftCoordinateHasBeenSet() const
{
    return m_leftCoordinateHasBeenSet;
}

double OpsTaskCanvasDto::GetTopCoordinate() const
{
    return m_topCoordinate;
}

void OpsTaskCanvasDto::SetTopCoordinate(const double& _topCoordinate)
{
    m_topCoordinate = _topCoordinate;
    m_topCoordinateHasBeenSet = true;
}

bool OpsTaskCanvasDto::TopCoordinateHasBeenSet() const
{
    return m_topCoordinateHasBeenSet;
}

bool OpsTaskCanvasDto::GetVirtualFlag() const
{
    return m_virtualFlag;
}

void OpsTaskCanvasDto::SetVirtualFlag(const bool& _virtualFlag)
{
    m_virtualFlag = _virtualFlag;
    m_virtualFlagHasBeenSet = true;
}

bool OpsTaskCanvasDto::VirtualFlagHasBeenSet() const
{
    return m_virtualFlagHasBeenSet;
}

string OpsTaskCanvasDto::GetTaskAction() const
{
    return m_taskAction;
}

void OpsTaskCanvasDto::SetTaskAction(const string& _taskAction)
{
    m_taskAction = _taskAction;
    m_taskActionHasBeenSet = true;
}

bool OpsTaskCanvasDto::TaskActionHasBeenSet() const
{
    return m_taskActionHasBeenSet;
}

uint64_t OpsTaskCanvasDto::GetDelayTime() const
{
    return m_delayTime;
}

void OpsTaskCanvasDto::SetDelayTime(const uint64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool OpsTaskCanvasDto::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

string OpsTaskCanvasDto::GetExecutionStartTime() const
{
    return m_executionStartTime;
}

void OpsTaskCanvasDto::SetExecutionStartTime(const string& _executionStartTime)
{
    m_executionStartTime = _executionStartTime;
    m_executionStartTimeHasBeenSet = true;
}

bool OpsTaskCanvasDto::ExecutionStartTimeHasBeenSet() const
{
    return m_executionStartTimeHasBeenSet;
}

string OpsTaskCanvasDto::GetExecutionEndTime() const
{
    return m_executionEndTime;
}

void OpsTaskCanvasDto::SetExecutionEndTime(const string& _executionEndTime)
{
    m_executionEndTime = _executionEndTime;
    m_executionEndTimeHasBeenSet = true;
}

bool OpsTaskCanvasDto::ExecutionEndTimeHasBeenSet() const
{
    return m_executionEndTimeHasBeenSet;
}

string OpsTaskCanvasDto::GetLayer() const
{
    return m_layer;
}

void OpsTaskCanvasDto::SetLayer(const string& _layer)
{
    m_layer = _layer;
    m_layerHasBeenSet = true;
}

bool OpsTaskCanvasDto::LayerHasBeenSet() const
{
    return m_layerHasBeenSet;
}

string OpsTaskCanvasDto::GetSourceServiceId() const
{
    return m_sourceServiceId;
}

void OpsTaskCanvasDto::SetSourceServiceId(const string& _sourceServiceId)
{
    m_sourceServiceId = _sourceServiceId;
    m_sourceServiceIdHasBeenSet = true;
}

bool OpsTaskCanvasDto::SourceServiceIdHasBeenSet() const
{
    return m_sourceServiceIdHasBeenSet;
}

string OpsTaskCanvasDto::GetSourceServiceType() const
{
    return m_sourceServiceType;
}

void OpsTaskCanvasDto::SetSourceServiceType(const string& _sourceServiceType)
{
    m_sourceServiceType = _sourceServiceType;
    m_sourceServiceTypeHasBeenSet = true;
}

bool OpsTaskCanvasDto::SourceServiceTypeHasBeenSet() const
{
    return m_sourceServiceTypeHasBeenSet;
}

string OpsTaskCanvasDto::GetTargetServiceId() const
{
    return m_targetServiceId;
}

void OpsTaskCanvasDto::SetTargetServiceId(const string& _targetServiceId)
{
    m_targetServiceId = _targetServiceId;
    m_targetServiceIdHasBeenSet = true;
}

bool OpsTaskCanvasDto::TargetServiceIdHasBeenSet() const
{
    return m_targetServiceIdHasBeenSet;
}

string OpsTaskCanvasDto::GetTargetServiceType() const
{
    return m_targetServiceType;
}

void OpsTaskCanvasDto::SetTargetServiceType(const string& _targetServiceType)
{
    m_targetServiceType = _targetServiceType;
    m_targetServiceTypeHasBeenSet = true;
}

bool OpsTaskCanvasDto::TargetServiceTypeHasBeenSet() const
{
    return m_targetServiceTypeHasBeenSet;
}

string OpsTaskCanvasDto::GetAlarmType() const
{
    return m_alarmType;
}

void OpsTaskCanvasDto::SetAlarmType(const string& _alarmType)
{
    m_alarmType = _alarmType;
    m_alarmTypeHasBeenSet = true;
}

bool OpsTaskCanvasDto::AlarmTypeHasBeenSet() const
{
    return m_alarmTypeHasBeenSet;
}

string OpsTaskCanvasDto::GetCreateTime() const
{
    return m_createTime;
}

void OpsTaskCanvasDto::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool OpsTaskCanvasDto::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

