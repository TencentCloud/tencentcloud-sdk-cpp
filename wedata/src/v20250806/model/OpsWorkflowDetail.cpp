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

#include <tencentcloud/wedata/v20250806/model/OpsWorkflowDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

OpsWorkflowDetail::OpsWorkflowDetail() :
    m_workflowIdHasBeenSet(false),
    m_workflowDescHasBeenSet(false),
    m_workflowTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_createUserUinHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_startupTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_instanceInitStrategyHasBeenSet(false),
    m_schedulerDescHasBeenSet(false),
    m_firstSubmitTimeHasBeenSet(false),
    m_latestSubmitTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_workflowNameHasBeenSet(false)
{
}

CoreInternalOutcome OpsWorkflowDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsWorkflowDetail.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowDesc") && !value["WorkflowDesc"].IsNull())
    {
        if (!value["WorkflowDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsWorkflowDetail.WorkflowDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowDesc = string(value["WorkflowDesc"].GetString());
        m_workflowDescHasBeenSet = true;
    }

    if (value.HasMember("WorkflowType") && !value["WorkflowType"].IsNull())
    {
        if (!value["WorkflowType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsWorkflowDetail.WorkflowType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowType = string(value["WorkflowType"].GetString());
        m_workflowTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsWorkflowDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateUserUin") && !value["CreateUserUin"].IsNull())
    {
        if (!value["CreateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsWorkflowDetail.CreateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserUin = string(value["CreateUserUin"].GetString());
        m_createUserUinHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsWorkflowDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("StartupTime") && !value["StartupTime"].IsNull())
    {
        if (!value["StartupTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OpsWorkflowDetail.StartupTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startupTime = value["StartupTime"].GetUint64();
        m_startupTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsWorkflowDetail.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsWorkflowDetail.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsWorkflowDetail.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsWorkflowDetail.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceInitStrategy") && !value["InstanceInitStrategy"].IsNull())
    {
        if (!value["InstanceInitStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsWorkflowDetail.InstanceInitStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceInitStrategy = string(value["InstanceInitStrategy"].GetString());
        m_instanceInitStrategyHasBeenSet = true;
    }

    if (value.HasMember("SchedulerDesc") && !value["SchedulerDesc"].IsNull())
    {
        if (!value["SchedulerDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsWorkflowDetail.SchedulerDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerDesc = string(value["SchedulerDesc"].GetString());
        m_schedulerDescHasBeenSet = true;
    }

    if (value.HasMember("FirstSubmitTime") && !value["FirstSubmitTime"].IsNull())
    {
        if (!value["FirstSubmitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsWorkflowDetail.FirstSubmitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstSubmitTime = string(value["FirstSubmitTime"].GetString());
        m_firstSubmitTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestSubmitTime") && !value["LatestSubmitTime"].IsNull())
    {
        if (!value["LatestSubmitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsWorkflowDetail.LatestSubmitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestSubmitTime = string(value["LatestSubmitTime"].GetString());
        m_latestSubmitTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsWorkflowDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsWorkflowDetail.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsWorkflowDetail.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpsWorkflowDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startupTime, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceInitStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceInitStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceInitStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_firstSubmitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstSubmitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstSubmitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestSubmitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestSubmitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestSubmitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

}


string OpsWorkflowDetail::GetWorkflowId() const
{
    return m_workflowId;
}

void OpsWorkflowDetail::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool OpsWorkflowDetail::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string OpsWorkflowDetail::GetWorkflowDesc() const
{
    return m_workflowDesc;
}

void OpsWorkflowDetail::SetWorkflowDesc(const string& _workflowDesc)
{
    m_workflowDesc = _workflowDesc;
    m_workflowDescHasBeenSet = true;
}

bool OpsWorkflowDetail::WorkflowDescHasBeenSet() const
{
    return m_workflowDescHasBeenSet;
}

string OpsWorkflowDetail::GetWorkflowType() const
{
    return m_workflowType;
}

void OpsWorkflowDetail::SetWorkflowType(const string& _workflowType)
{
    m_workflowType = _workflowType;
    m_workflowTypeHasBeenSet = true;
}

bool OpsWorkflowDetail::WorkflowTypeHasBeenSet() const
{
    return m_workflowTypeHasBeenSet;
}

string OpsWorkflowDetail::GetCreateTime() const
{
    return m_createTime;
}

void OpsWorkflowDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool OpsWorkflowDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string OpsWorkflowDetail::GetCreateUserUin() const
{
    return m_createUserUin;
}

void OpsWorkflowDetail::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool OpsWorkflowDetail::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

string OpsWorkflowDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void OpsWorkflowDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool OpsWorkflowDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t OpsWorkflowDetail::GetStartupTime() const
{
    return m_startupTime;
}

void OpsWorkflowDetail::SetStartupTime(const uint64_t& _startupTime)
{
    m_startupTime = _startupTime;
    m_startupTimeHasBeenSet = true;
}

bool OpsWorkflowDetail::StartupTimeHasBeenSet() const
{
    return m_startupTimeHasBeenSet;
}

string OpsWorkflowDetail::GetStartTime() const
{
    return m_startTime;
}

void OpsWorkflowDetail::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool OpsWorkflowDetail::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string OpsWorkflowDetail::GetEndTime() const
{
    return m_endTime;
}

void OpsWorkflowDetail::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool OpsWorkflowDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string OpsWorkflowDetail::GetCycleType() const
{
    return m_cycleType;
}

void OpsWorkflowDetail::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool OpsWorkflowDetail::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

string OpsWorkflowDetail::GetFolderId() const
{
    return m_folderId;
}

void OpsWorkflowDetail::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool OpsWorkflowDetail::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string OpsWorkflowDetail::GetInstanceInitStrategy() const
{
    return m_instanceInitStrategy;
}

void OpsWorkflowDetail::SetInstanceInitStrategy(const string& _instanceInitStrategy)
{
    m_instanceInitStrategy = _instanceInitStrategy;
    m_instanceInitStrategyHasBeenSet = true;
}

bool OpsWorkflowDetail::InstanceInitStrategyHasBeenSet() const
{
    return m_instanceInitStrategyHasBeenSet;
}

string OpsWorkflowDetail::GetSchedulerDesc() const
{
    return m_schedulerDesc;
}

void OpsWorkflowDetail::SetSchedulerDesc(const string& _schedulerDesc)
{
    m_schedulerDesc = _schedulerDesc;
    m_schedulerDescHasBeenSet = true;
}

bool OpsWorkflowDetail::SchedulerDescHasBeenSet() const
{
    return m_schedulerDescHasBeenSet;
}

string OpsWorkflowDetail::GetFirstSubmitTime() const
{
    return m_firstSubmitTime;
}

void OpsWorkflowDetail::SetFirstSubmitTime(const string& _firstSubmitTime)
{
    m_firstSubmitTime = _firstSubmitTime;
    m_firstSubmitTimeHasBeenSet = true;
}

bool OpsWorkflowDetail::FirstSubmitTimeHasBeenSet() const
{
    return m_firstSubmitTimeHasBeenSet;
}

string OpsWorkflowDetail::GetLatestSubmitTime() const
{
    return m_latestSubmitTime;
}

void OpsWorkflowDetail::SetLatestSubmitTime(const string& _latestSubmitTime)
{
    m_latestSubmitTime = _latestSubmitTime;
    m_latestSubmitTimeHasBeenSet = true;
}

bool OpsWorkflowDetail::LatestSubmitTimeHasBeenSet() const
{
    return m_latestSubmitTimeHasBeenSet;
}

string OpsWorkflowDetail::GetStatus() const
{
    return m_status;
}

void OpsWorkflowDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OpsWorkflowDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string OpsWorkflowDetail::GetOwnerUin() const
{
    return m_ownerUin;
}

void OpsWorkflowDetail::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool OpsWorkflowDetail::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string OpsWorkflowDetail::GetWorkflowName() const
{
    return m_workflowName;
}

void OpsWorkflowDetail::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool OpsWorkflowDetail::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

