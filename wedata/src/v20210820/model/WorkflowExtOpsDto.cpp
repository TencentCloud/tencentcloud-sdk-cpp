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

#include <tencentcloud/wedata/v20210820/model/WorkflowExtOpsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

WorkflowExtOpsDto::WorkflowExtOpsDto() :
    m_taskCountHasBeenSet(false),
    m_folderNameHasBeenSet(false),
    m_workFlowIdHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectIdentHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_workFlowDescHasBeenSet(false),
    m_workFlowNameHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_workflowTypeHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowExtOpsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskCount") && !value["TaskCount"].IsNull())
    {
        if (!value["TaskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowExtOpsDto.TaskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskCount = value["TaskCount"].GetUint64();
        m_taskCountHasBeenSet = true;
    }

    if (value.HasMember("FolderName") && !value["FolderName"].IsNull())
    {
        if (!value["FolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowExtOpsDto.FolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderName = string(value["FolderName"].GetString());
        m_folderNameHasBeenSet = true;
    }

    if (value.HasMember("WorkFlowId") && !value["WorkFlowId"].IsNull())
    {
        if (!value["WorkFlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowExtOpsDto.WorkFlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workFlowId = string(value["WorkFlowId"].GetString());
        m_workFlowIdHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowExtOpsDto.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("OwnerId") && !value["OwnerId"].IsNull())
    {
        if (!value["OwnerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowExtOpsDto.OwnerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerId = string(value["OwnerId"].GetString());
        m_ownerIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowExtOpsDto.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectIdent") && !value["ProjectIdent"].IsNull())
    {
        if (!value["ProjectIdent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowExtOpsDto.ProjectIdent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectIdent = string(value["ProjectIdent"].GetString());
        m_projectIdentHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowExtOpsDto.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("WorkFlowDesc") && !value["WorkFlowDesc"].IsNull())
    {
        if (!value["WorkFlowDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowExtOpsDto.WorkFlowDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workFlowDesc = string(value["WorkFlowDesc"].GetString());
        m_workFlowDescHasBeenSet = true;
    }

    if (value.HasMember("WorkFlowName") && !value["WorkFlowName"].IsNull())
    {
        if (!value["WorkFlowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowExtOpsDto.WorkFlowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workFlowName = string(value["WorkFlowName"].GetString());
        m_workFlowNameHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowExtOpsDto.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowExtOpsDto.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowExtOpsDto.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowExtOpsDto.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("WorkflowType") && !value["WorkflowType"].IsNull())
    {
        if (!value["WorkflowType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowExtOpsDto.WorkflowType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowType = string(value["WorkflowType"].GetString());
        m_workflowTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowExtOpsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskCount, allocator);
    }

    if (m_folderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderName.c_str(), allocator).Move(), allocator);
    }

    if (m_workFlowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkFlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workFlowId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIdent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectIdent.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_workFlowDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkFlowDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workFlowDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_workFlowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkFlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workFlowName.c_str(), allocator).Move(), allocator);
    }

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowType.c_str(), allocator).Move(), allocator);
    }

}


uint64_t WorkflowExtOpsDto::GetTaskCount() const
{
    return m_taskCount;
}

void WorkflowExtOpsDto::SetTaskCount(const uint64_t& _taskCount)
{
    m_taskCount = _taskCount;
    m_taskCountHasBeenSet = true;
}

bool WorkflowExtOpsDto::TaskCountHasBeenSet() const
{
    return m_taskCountHasBeenSet;
}

string WorkflowExtOpsDto::GetFolderName() const
{
    return m_folderName;
}

void WorkflowExtOpsDto::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool WorkflowExtOpsDto::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

string WorkflowExtOpsDto::GetWorkFlowId() const
{
    return m_workFlowId;
}

void WorkflowExtOpsDto::SetWorkFlowId(const string& _workFlowId)
{
    m_workFlowId = _workFlowId;
    m_workFlowIdHasBeenSet = true;
}

bool WorkflowExtOpsDto::WorkFlowIdHasBeenSet() const
{
    return m_workFlowIdHasBeenSet;
}

string WorkflowExtOpsDto::GetOwner() const
{
    return m_owner;
}

void WorkflowExtOpsDto::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool WorkflowExtOpsDto::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string WorkflowExtOpsDto::GetOwnerId() const
{
    return m_ownerId;
}

void WorkflowExtOpsDto::SetOwnerId(const string& _ownerId)
{
    m_ownerId = _ownerId;
    m_ownerIdHasBeenSet = true;
}

bool WorkflowExtOpsDto::OwnerIdHasBeenSet() const
{
    return m_ownerIdHasBeenSet;
}

string WorkflowExtOpsDto::GetProjectId() const
{
    return m_projectId;
}

void WorkflowExtOpsDto::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool WorkflowExtOpsDto::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string WorkflowExtOpsDto::GetProjectIdent() const
{
    return m_projectIdent;
}

void WorkflowExtOpsDto::SetProjectIdent(const string& _projectIdent)
{
    m_projectIdent = _projectIdent;
    m_projectIdentHasBeenSet = true;
}

bool WorkflowExtOpsDto::ProjectIdentHasBeenSet() const
{
    return m_projectIdentHasBeenSet;
}

string WorkflowExtOpsDto::GetProjectName() const
{
    return m_projectName;
}

void WorkflowExtOpsDto::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool WorkflowExtOpsDto::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string WorkflowExtOpsDto::GetWorkFlowDesc() const
{
    return m_workFlowDesc;
}

void WorkflowExtOpsDto::SetWorkFlowDesc(const string& _workFlowDesc)
{
    m_workFlowDesc = _workFlowDesc;
    m_workFlowDescHasBeenSet = true;
}

bool WorkflowExtOpsDto::WorkFlowDescHasBeenSet() const
{
    return m_workFlowDescHasBeenSet;
}

string WorkflowExtOpsDto::GetWorkFlowName() const
{
    return m_workFlowName;
}

void WorkflowExtOpsDto::SetWorkFlowName(const string& _workFlowName)
{
    m_workFlowName = _workFlowName;
    m_workFlowNameHasBeenSet = true;
}

bool WorkflowExtOpsDto::WorkFlowNameHasBeenSet() const
{
    return m_workFlowNameHasBeenSet;
}

string WorkflowExtOpsDto::GetFolderId() const
{
    return m_folderId;
}

void WorkflowExtOpsDto::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool WorkflowExtOpsDto::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string WorkflowExtOpsDto::GetStatus() const
{
    return m_status;
}

void WorkflowExtOpsDto::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool WorkflowExtOpsDto::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string WorkflowExtOpsDto::GetCreateTime() const
{
    return m_createTime;
}

void WorkflowExtOpsDto::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WorkflowExtOpsDto::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string WorkflowExtOpsDto::GetModifyTime() const
{
    return m_modifyTime;
}

void WorkflowExtOpsDto::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool WorkflowExtOpsDto::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string WorkflowExtOpsDto::GetWorkflowType() const
{
    return m_workflowType;
}

void WorkflowExtOpsDto::SetWorkflowType(const string& _workflowType)
{
    m_workflowType = _workflowType;
    m_workflowTypeHasBeenSet = true;
}

bool WorkflowExtOpsDto::WorkflowTypeHasBeenSet() const
{
    return m_workflowTypeHasBeenSet;
}

