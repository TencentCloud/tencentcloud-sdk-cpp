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

#include <tencentcloud/wedata/v20210820/model/TaskCanvasInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskCanvasInfo::TaskCanvasInfo() :
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
    m_delayTimeHasBeenSet(false)
{
}

CoreInternalOutcome TaskCanvasInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCanvasInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCanvasInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCanvasInfo.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCanvasInfo.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCanvasInfo.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectIdent") && !value["ProjectIdent"].IsNull())
    {
        if (!value["ProjectIdent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCanvasInfo.ProjectIdent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectIdent = string(value["ProjectIdent"].GetString());
        m_projectIdentHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCanvasInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeId") && !value["TaskTypeId"].IsNull())
    {
        if (!value["TaskTypeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCanvasInfo.TaskTypeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeId = value["TaskTypeId"].GetUint64();
        m_taskTypeIdHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeDesc") && !value["TaskTypeDesc"].IsNull())
    {
        if (!value["TaskTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCanvasInfo.TaskTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeDesc = string(value["TaskTypeDesc"].GetString());
        m_taskTypeDescHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCanvasInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("FolderName") && !value["FolderName"].IsNull())
    {
        if (!value["FolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCanvasInfo.FolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderName = string(value["FolderName"].GetString());
        m_folderNameHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCanvasInfo.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("FirstSubmitTime") && !value["FirstSubmitTime"].IsNull())
    {
        if (!value["FirstSubmitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCanvasInfo.FirstSubmitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstSubmitTime = string(value["FirstSubmitTime"].GetString());
        m_firstSubmitTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstRunTime") && !value["FirstRunTime"].IsNull())
    {
        if (!value["FirstRunTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCanvasInfo.FirstRunTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstRunTime = string(value["FirstRunTime"].GetString());
        m_firstRunTimeHasBeenSet = true;
    }

    if (value.HasMember("ScheduleDesc") && !value["ScheduleDesc"].IsNull())
    {
        if (!value["ScheduleDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCanvasInfo.ScheduleDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleDesc = string(value["ScheduleDesc"].GetString());
        m_scheduleDescHasBeenSet = true;
    }

    if (value.HasMember("InCharge") && !value["InCharge"].IsNull())
    {
        if (!value["InCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCanvasInfo.InCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inCharge = string(value["InCharge"].GetString());
        m_inChargeHasBeenSet = true;
    }

    if (value.HasMember("CycleUnit") && !value["CycleUnit"].IsNull())
    {
        if (!value["CycleUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCanvasInfo.CycleUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleUnit = string(value["CycleUnit"].GetString());
        m_cycleUnitHasBeenSet = true;
    }

    if (value.HasMember("LeftCoordinate") && !value["LeftCoordinate"].IsNull())
    {
        if (!value["LeftCoordinate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCanvasInfo.LeftCoordinate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_leftCoordinate = value["LeftCoordinate"].GetDouble();
        m_leftCoordinateHasBeenSet = true;
    }

    if (value.HasMember("TopCoordinate") && !value["TopCoordinate"].IsNull())
    {
        if (!value["TopCoordinate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCanvasInfo.TopCoordinate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_topCoordinate = value["TopCoordinate"].GetDouble();
        m_topCoordinateHasBeenSet = true;
    }

    if (value.HasMember("VirtualFlag") && !value["VirtualFlag"].IsNull())
    {
        if (!value["VirtualFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCanvasInfo.VirtualFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_virtualFlag = value["VirtualFlag"].GetBool();
        m_virtualFlagHasBeenSet = true;
    }

    if (value.HasMember("TaskAction") && !value["TaskAction"].IsNull())
    {
        if (!value["TaskAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCanvasInfo.TaskAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskAction = string(value["TaskAction"].GetString());
        m_taskActionHasBeenSet = true;
    }

    if (value.HasMember("DelayTime") && !value["DelayTime"].IsNull())
    {
        if (!value["DelayTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCanvasInfo.DelayTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_delayTime = value["DelayTime"].GetUint64();
        m_delayTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskCanvasInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string TaskCanvasInfo::GetTaskId() const
{
    return m_taskId;
}

void TaskCanvasInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskCanvasInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskCanvasInfo::GetTaskName() const
{
    return m_taskName;
}

void TaskCanvasInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TaskCanvasInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string TaskCanvasInfo::GetWorkflowId() const
{
    return m_workflowId;
}

void TaskCanvasInfo::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool TaskCanvasInfo::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string TaskCanvasInfo::GetWorkflowName() const
{
    return m_workflowName;
}

void TaskCanvasInfo::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool TaskCanvasInfo::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string TaskCanvasInfo::GetProjectName() const
{
    return m_projectName;
}

void TaskCanvasInfo::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool TaskCanvasInfo::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string TaskCanvasInfo::GetProjectIdent() const
{
    return m_projectIdent;
}

void TaskCanvasInfo::SetProjectIdent(const string& _projectIdent)
{
    m_projectIdent = _projectIdent;
    m_projectIdentHasBeenSet = true;
}

bool TaskCanvasInfo::ProjectIdentHasBeenSet() const
{
    return m_projectIdentHasBeenSet;
}

string TaskCanvasInfo::GetStatus() const
{
    return m_status;
}

void TaskCanvasInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TaskCanvasInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t TaskCanvasInfo::GetTaskTypeId() const
{
    return m_taskTypeId;
}

void TaskCanvasInfo::SetTaskTypeId(const uint64_t& _taskTypeId)
{
    m_taskTypeId = _taskTypeId;
    m_taskTypeIdHasBeenSet = true;
}

bool TaskCanvasInfo::TaskTypeIdHasBeenSet() const
{
    return m_taskTypeIdHasBeenSet;
}

string TaskCanvasInfo::GetTaskTypeDesc() const
{
    return m_taskTypeDesc;
}

void TaskCanvasInfo::SetTaskTypeDesc(const string& _taskTypeDesc)
{
    m_taskTypeDesc = _taskTypeDesc;
    m_taskTypeDescHasBeenSet = true;
}

bool TaskCanvasInfo::TaskTypeDescHasBeenSet() const
{
    return m_taskTypeDescHasBeenSet;
}

string TaskCanvasInfo::GetProjectId() const
{
    return m_projectId;
}

void TaskCanvasInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TaskCanvasInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TaskCanvasInfo::GetFolderName() const
{
    return m_folderName;
}

void TaskCanvasInfo::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool TaskCanvasInfo::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

string TaskCanvasInfo::GetFolderId() const
{
    return m_folderId;
}

void TaskCanvasInfo::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool TaskCanvasInfo::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string TaskCanvasInfo::GetFirstSubmitTime() const
{
    return m_firstSubmitTime;
}

void TaskCanvasInfo::SetFirstSubmitTime(const string& _firstSubmitTime)
{
    m_firstSubmitTime = _firstSubmitTime;
    m_firstSubmitTimeHasBeenSet = true;
}

bool TaskCanvasInfo::FirstSubmitTimeHasBeenSet() const
{
    return m_firstSubmitTimeHasBeenSet;
}

string TaskCanvasInfo::GetFirstRunTime() const
{
    return m_firstRunTime;
}

void TaskCanvasInfo::SetFirstRunTime(const string& _firstRunTime)
{
    m_firstRunTime = _firstRunTime;
    m_firstRunTimeHasBeenSet = true;
}

bool TaskCanvasInfo::FirstRunTimeHasBeenSet() const
{
    return m_firstRunTimeHasBeenSet;
}

string TaskCanvasInfo::GetScheduleDesc() const
{
    return m_scheduleDesc;
}

void TaskCanvasInfo::SetScheduleDesc(const string& _scheduleDesc)
{
    m_scheduleDesc = _scheduleDesc;
    m_scheduleDescHasBeenSet = true;
}

bool TaskCanvasInfo::ScheduleDescHasBeenSet() const
{
    return m_scheduleDescHasBeenSet;
}

string TaskCanvasInfo::GetInCharge() const
{
    return m_inCharge;
}

void TaskCanvasInfo::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool TaskCanvasInfo::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

string TaskCanvasInfo::GetCycleUnit() const
{
    return m_cycleUnit;
}

void TaskCanvasInfo::SetCycleUnit(const string& _cycleUnit)
{
    m_cycleUnit = _cycleUnit;
    m_cycleUnitHasBeenSet = true;
}

bool TaskCanvasInfo::CycleUnitHasBeenSet() const
{
    return m_cycleUnitHasBeenSet;
}

double TaskCanvasInfo::GetLeftCoordinate() const
{
    return m_leftCoordinate;
}

void TaskCanvasInfo::SetLeftCoordinate(const double& _leftCoordinate)
{
    m_leftCoordinate = _leftCoordinate;
    m_leftCoordinateHasBeenSet = true;
}

bool TaskCanvasInfo::LeftCoordinateHasBeenSet() const
{
    return m_leftCoordinateHasBeenSet;
}

double TaskCanvasInfo::GetTopCoordinate() const
{
    return m_topCoordinate;
}

void TaskCanvasInfo::SetTopCoordinate(const double& _topCoordinate)
{
    m_topCoordinate = _topCoordinate;
    m_topCoordinateHasBeenSet = true;
}

bool TaskCanvasInfo::TopCoordinateHasBeenSet() const
{
    return m_topCoordinateHasBeenSet;
}

bool TaskCanvasInfo::GetVirtualFlag() const
{
    return m_virtualFlag;
}

void TaskCanvasInfo::SetVirtualFlag(const bool& _virtualFlag)
{
    m_virtualFlag = _virtualFlag;
    m_virtualFlagHasBeenSet = true;
}

bool TaskCanvasInfo::VirtualFlagHasBeenSet() const
{
    return m_virtualFlagHasBeenSet;
}

string TaskCanvasInfo::GetTaskAction() const
{
    return m_taskAction;
}

void TaskCanvasInfo::SetTaskAction(const string& _taskAction)
{
    m_taskAction = _taskAction;
    m_taskActionHasBeenSet = true;
}

bool TaskCanvasInfo::TaskActionHasBeenSet() const
{
    return m_taskActionHasBeenSet;
}

uint64_t TaskCanvasInfo::GetDelayTime() const
{
    return m_delayTime;
}

void TaskCanvasInfo::SetDelayTime(const uint64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool TaskCanvasInfo::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

