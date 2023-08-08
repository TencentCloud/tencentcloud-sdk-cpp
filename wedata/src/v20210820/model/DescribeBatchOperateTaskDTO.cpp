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

#include <tencentcloud/wedata/v20210820/model/DescribeBatchOperateTaskDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeBatchOperateTaskDTO::DescribeBatchOperateTaskDTO() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_taskTypeIdHasBeenSet(false),
    m_taskTypeDescHasBeenSet(false),
    m_folderNameHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_inChargeHasBeenSet(false),
    m_submitHasBeenSet(false),
    m_dataEngineHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_cycleUnitHasBeenSet(false),
    m_scheduleDescHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_datasourceTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBatchOperateTaskDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBatchOperateTaskDTO.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBatchOperateTaskDTO.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBatchOperateTaskDTO.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBatchOperateTaskDTO.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBatchOperateTaskDTO.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeId") && !value["TaskTypeId"].IsNull())
    {
        if (!value["TaskTypeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBatchOperateTaskDTO.TaskTypeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeId = value["TaskTypeId"].GetUint64();
        m_taskTypeIdHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeDesc") && !value["TaskTypeDesc"].IsNull())
    {
        if (!value["TaskTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBatchOperateTaskDTO.TaskTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeDesc = string(value["TaskTypeDesc"].GetString());
        m_taskTypeDescHasBeenSet = true;
    }

    if (value.HasMember("FolderName") && !value["FolderName"].IsNull())
    {
        if (!value["FolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBatchOperateTaskDTO.FolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderName = string(value["FolderName"].GetString());
        m_folderNameHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBatchOperateTaskDTO.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("InCharge") && !value["InCharge"].IsNull())
    {
        if (!value["InCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBatchOperateTaskDTO.InCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inCharge = string(value["InCharge"].GetString());
        m_inChargeHasBeenSet = true;
    }

    if (value.HasMember("Submit") && !value["Submit"].IsNull())
    {
        if (!value["Submit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBatchOperateTaskDTO.Submit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_submit = value["Submit"].GetUint64();
        m_submitHasBeenSet = true;
    }

    if (value.HasMember("DataEngine") && !value["DataEngine"].IsNull())
    {
        if (!value["DataEngine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBatchOperateTaskDTO.DataEngine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngine = string(value["DataEngine"].GetString());
        m_dataEngineHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBatchOperateTaskDTO.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBatchOperateTaskDTO.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("CycleUnit") && !value["CycleUnit"].IsNull())
    {
        if (!value["CycleUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBatchOperateTaskDTO.CycleUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleUnit = string(value["CycleUnit"].GetString());
        m_cycleUnitHasBeenSet = true;
    }

    if (value.HasMember("ScheduleDesc") && !value["ScheduleDesc"].IsNull())
    {
        if (!value["ScheduleDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBatchOperateTaskDTO.ScheduleDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleDesc = string(value["ScheduleDesc"].GetString());
        m_scheduleDescHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBatchOperateTaskDTO.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceType") && !value["DatasourceType"].IsNull())
    {
        if (!value["DatasourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBatchOperateTaskDTO.DatasourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceType = string(value["DatasourceType"].GetString());
        m_datasourceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeBatchOperateTaskDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_inChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_submitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Submit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_submit, allocator);
    }

    if (m_dataEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngine.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceType.c_str(), allocator).Move(), allocator);
    }

}


string DescribeBatchOperateTaskDTO::GetTaskId() const
{
    return m_taskId;
}

void DescribeBatchOperateTaskDTO::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeBatchOperateTaskDTO::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeBatchOperateTaskDTO::GetTaskName() const
{
    return m_taskName;
}

void DescribeBatchOperateTaskDTO::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool DescribeBatchOperateTaskDTO::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string DescribeBatchOperateTaskDTO::GetWorkflowId() const
{
    return m_workflowId;
}

void DescribeBatchOperateTaskDTO::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool DescribeBatchOperateTaskDTO::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string DescribeBatchOperateTaskDTO::GetWorkflowName() const
{
    return m_workflowName;
}

void DescribeBatchOperateTaskDTO::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool DescribeBatchOperateTaskDTO::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string DescribeBatchOperateTaskDTO::GetStatus() const
{
    return m_status;
}

void DescribeBatchOperateTaskDTO::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeBatchOperateTaskDTO::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DescribeBatchOperateTaskDTO::GetTaskTypeId() const
{
    return m_taskTypeId;
}

void DescribeBatchOperateTaskDTO::SetTaskTypeId(const uint64_t& _taskTypeId)
{
    m_taskTypeId = _taskTypeId;
    m_taskTypeIdHasBeenSet = true;
}

bool DescribeBatchOperateTaskDTO::TaskTypeIdHasBeenSet() const
{
    return m_taskTypeIdHasBeenSet;
}

string DescribeBatchOperateTaskDTO::GetTaskTypeDesc() const
{
    return m_taskTypeDesc;
}

void DescribeBatchOperateTaskDTO::SetTaskTypeDesc(const string& _taskTypeDesc)
{
    m_taskTypeDesc = _taskTypeDesc;
    m_taskTypeDescHasBeenSet = true;
}

bool DescribeBatchOperateTaskDTO::TaskTypeDescHasBeenSet() const
{
    return m_taskTypeDescHasBeenSet;
}

string DescribeBatchOperateTaskDTO::GetFolderName() const
{
    return m_folderName;
}

void DescribeBatchOperateTaskDTO::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool DescribeBatchOperateTaskDTO::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

string DescribeBatchOperateTaskDTO::GetFolderId() const
{
    return m_folderId;
}

void DescribeBatchOperateTaskDTO::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool DescribeBatchOperateTaskDTO::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string DescribeBatchOperateTaskDTO::GetInCharge() const
{
    return m_inCharge;
}

void DescribeBatchOperateTaskDTO::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool DescribeBatchOperateTaskDTO::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

uint64_t DescribeBatchOperateTaskDTO::GetSubmit() const
{
    return m_submit;
}

void DescribeBatchOperateTaskDTO::SetSubmit(const uint64_t& _submit)
{
    m_submit = _submit;
    m_submitHasBeenSet = true;
}

bool DescribeBatchOperateTaskDTO::SubmitHasBeenSet() const
{
    return m_submitHasBeenSet;
}

string DescribeBatchOperateTaskDTO::GetDataEngine() const
{
    return m_dataEngine;
}

void DescribeBatchOperateTaskDTO::SetDataEngine(const string& _dataEngine)
{
    m_dataEngine = _dataEngine;
    m_dataEngineHasBeenSet = true;
}

bool DescribeBatchOperateTaskDTO::DataEngineHasBeenSet() const
{
    return m_dataEngineHasBeenSet;
}

string DescribeBatchOperateTaskDTO::GetUpdateTime() const
{
    return m_updateTime;
}

void DescribeBatchOperateTaskDTO::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DescribeBatchOperateTaskDTO::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DescribeBatchOperateTaskDTO::GetCreateTime() const
{
    return m_createTime;
}

void DescribeBatchOperateTaskDTO::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeBatchOperateTaskDTO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeBatchOperateTaskDTO::GetCycleUnit() const
{
    return m_cycleUnit;
}

void DescribeBatchOperateTaskDTO::SetCycleUnit(const string& _cycleUnit)
{
    m_cycleUnit = _cycleUnit;
    m_cycleUnitHasBeenSet = true;
}

bool DescribeBatchOperateTaskDTO::CycleUnitHasBeenSet() const
{
    return m_cycleUnitHasBeenSet;
}

string DescribeBatchOperateTaskDTO::GetScheduleDesc() const
{
    return m_scheduleDesc;
}

void DescribeBatchOperateTaskDTO::SetScheduleDesc(const string& _scheduleDesc)
{
    m_scheduleDesc = _scheduleDesc;
    m_scheduleDescHasBeenSet = true;
}

bool DescribeBatchOperateTaskDTO::ScheduleDescHasBeenSet() const
{
    return m_scheduleDescHasBeenSet;
}

string DescribeBatchOperateTaskDTO::GetDatasourceId() const
{
    return m_datasourceId;
}

void DescribeBatchOperateTaskDTO::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool DescribeBatchOperateTaskDTO::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string DescribeBatchOperateTaskDTO::GetDatasourceType() const
{
    return m_datasourceType;
}

void DescribeBatchOperateTaskDTO::SetDatasourceType(const string& _datasourceType)
{
    m_datasourceType = _datasourceType;
    m_datasourceTypeHasBeenSet = true;
}

bool DescribeBatchOperateTaskDTO::DatasourceTypeHasBeenSet() const
{
    return m_datasourceTypeHasBeenSet;
}

