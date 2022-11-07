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

#include <tencentcloud/wedata/v20210820/model/OfflineInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

OfflineInstance::OfflineInstance() :
    m_createUinHasBeenSet(false),
    m_operatorUinHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_curRunDateHasBeenSet(false),
    m_issueIdHasBeenSet(false),
    m_inlongTaskIdHasBeenSet(false),
    m_resourceGroupHasBeenSet(false),
    m_taskRunTypeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_instanceKeyHasBeenSet(false)
{
}

CoreInternalOutcome OfflineInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateUin") && !value["CreateUin"].IsNull())
    {
        if (!value["CreateUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineInstance.CreateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUin = string(value["CreateUin"].GetString());
        m_createUinHasBeenSet = true;
    }

    if (value.HasMember("OperatorUin") && !value["OperatorUin"].IsNull())
    {
        if (!value["OperatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineInstance.OperatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorUin = string(value["OperatorUin"].GetString());
        m_operatorUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineInstance.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineInstance.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceId") && !value["WorkspaceId"].IsNull())
    {
        if (!value["WorkspaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineInstance.WorkspaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceId = string(value["WorkspaceId"].GetString());
        m_workspaceIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineInstance.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("CurRunDate") && !value["CurRunDate"].IsNull())
    {
        if (!value["CurRunDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineInstance.CurRunDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curRunDate = string(value["CurRunDate"].GetString());
        m_curRunDateHasBeenSet = true;
    }

    if (value.HasMember("IssueId") && !value["IssueId"].IsNull())
    {
        if (!value["IssueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineInstance.IssueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueId = string(value["IssueId"].GetString());
        m_issueIdHasBeenSet = true;
    }

    if (value.HasMember("InlongTaskId") && !value["InlongTaskId"].IsNull())
    {
        if (!value["InlongTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineInstance.InlongTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inlongTaskId = string(value["InlongTaskId"].GetString());
        m_inlongTaskIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroup") && !value["ResourceGroup"].IsNull())
    {
        if (!value["ResourceGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineInstance.ResourceGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroup = string(value["ResourceGroup"].GetString());
        m_resourceGroupHasBeenSet = true;
    }

    if (value.HasMember("TaskRunType") && !value["TaskRunType"].IsNull())
    {
        if (!value["TaskRunType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineInstance.TaskRunType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskRunType = value["TaskRunType"].GetUint64();
        m_taskRunTypeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineInstance.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineInstance.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineInstance.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineInstance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineInstance.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceKey") && !value["InstanceKey"].IsNull())
    {
        if (!value["InstanceKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineInstance.InstanceKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceKey = string(value["InstanceKey"].GetString());
        m_instanceKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OfflineInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUin.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorUin.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
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

    if (m_issueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueId.c_str(), allocator).Move(), allocator);
    }

    if (m_inlongTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InlongTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inlongTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_taskRunTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskRunType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskRunType, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceKey.c_str(), allocator).Move(), allocator);
    }

}


string OfflineInstance::GetCreateUin() const
{
    return m_createUin;
}

void OfflineInstance::SetCreateUin(const string& _createUin)
{
    m_createUin = _createUin;
    m_createUinHasBeenSet = true;
}

bool OfflineInstance::CreateUinHasBeenSet() const
{
    return m_createUinHasBeenSet;
}

string OfflineInstance::GetOperatorUin() const
{
    return m_operatorUin;
}

void OfflineInstance::SetOperatorUin(const string& _operatorUin)
{
    m_operatorUin = _operatorUin;
    m_operatorUinHasBeenSet = true;
}

bool OfflineInstance::OperatorUinHasBeenSet() const
{
    return m_operatorUinHasBeenSet;
}

string OfflineInstance::GetOwnerUin() const
{
    return m_ownerUin;
}

void OfflineInstance::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool OfflineInstance::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string OfflineInstance::GetAppId() const
{
    return m_appId;
}

void OfflineInstance::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool OfflineInstance::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string OfflineInstance::GetWorkspaceId() const
{
    return m_workspaceId;
}

void OfflineInstance::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool OfflineInstance::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string OfflineInstance::GetTaskId() const
{
    return m_taskId;
}

void OfflineInstance::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool OfflineInstance::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string OfflineInstance::GetCurRunDate() const
{
    return m_curRunDate;
}

void OfflineInstance::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool OfflineInstance::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

string OfflineInstance::GetIssueId() const
{
    return m_issueId;
}

void OfflineInstance::SetIssueId(const string& _issueId)
{
    m_issueId = _issueId;
    m_issueIdHasBeenSet = true;
}

bool OfflineInstance::IssueIdHasBeenSet() const
{
    return m_issueIdHasBeenSet;
}

string OfflineInstance::GetInlongTaskId() const
{
    return m_inlongTaskId;
}

void OfflineInstance::SetInlongTaskId(const string& _inlongTaskId)
{
    m_inlongTaskId = _inlongTaskId;
    m_inlongTaskIdHasBeenSet = true;
}

bool OfflineInstance::InlongTaskIdHasBeenSet() const
{
    return m_inlongTaskIdHasBeenSet;
}

string OfflineInstance::GetResourceGroup() const
{
    return m_resourceGroup;
}

void OfflineInstance::SetResourceGroup(const string& _resourceGroup)
{
    m_resourceGroup = _resourceGroup;
    m_resourceGroupHasBeenSet = true;
}

bool OfflineInstance::ResourceGroupHasBeenSet() const
{
    return m_resourceGroupHasBeenSet;
}

uint64_t OfflineInstance::GetTaskRunType() const
{
    return m_taskRunType;
}

void OfflineInstance::SetTaskRunType(const uint64_t& _taskRunType)
{
    m_taskRunType = _taskRunType;
    m_taskRunTypeHasBeenSet = true;
}

bool OfflineInstance::TaskRunTypeHasBeenSet() const
{
    return m_taskRunTypeHasBeenSet;
}

string OfflineInstance::GetState() const
{
    return m_state;
}

void OfflineInstance::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool OfflineInstance::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string OfflineInstance::GetStartTime() const
{
    return m_startTime;
}

void OfflineInstance::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool OfflineInstance::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string OfflineInstance::GetEndTime() const
{
    return m_endTime;
}

void OfflineInstance::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool OfflineInstance::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string OfflineInstance::GetCreateTime() const
{
    return m_createTime;
}

void OfflineInstance::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool OfflineInstance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string OfflineInstance::GetUpdateTime() const
{
    return m_updateTime;
}

void OfflineInstance::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool OfflineInstance::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string OfflineInstance::GetInstanceKey() const
{
    return m_instanceKey;
}

void OfflineInstance::SetInstanceKey(const string& _instanceKey)
{
    m_instanceKey = _instanceKey;
    m_instanceKeyHasBeenSet = true;
}

bool OfflineInstance::InstanceKeyHasBeenSet() const
{
    return m_instanceKeyHasBeenSet;
}

