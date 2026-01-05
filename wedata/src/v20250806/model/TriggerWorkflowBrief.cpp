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

#include <tencentcloud/wedata/v20250806/model/TriggerWorkflowBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

TriggerWorkflowBrief::TriggerWorkflowBrief() :
    m_projectIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_taskCountHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_folderNameHasBeenSet(false),
    m_workflowTriggerConfigHasBeenSet(false),
    m_userNameInChargeHasBeenSet(false),
    m_userUinInChargeHasBeenSet(false),
    m_workflowParamsHasBeenSet(false)
{
}

CoreInternalOutcome TriggerWorkflowBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowBrief.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowBrief.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowBrief.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("TaskCount") && !value["TaskCount"].IsNull())
    {
        if (!value["TaskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowBrief.TaskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskCount = value["TaskCount"].GetUint64();
        m_taskCountHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowBrief.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("FolderName") && !value["FolderName"].IsNull())
    {
        if (!value["FolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowBrief.FolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderName = string(value["FolderName"].GetString());
        m_folderNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowTriggerConfig") && !value["WorkflowTriggerConfig"].IsNull())
    {
        if (!value["WorkflowTriggerConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowBrief.WorkflowTriggerConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workflowTriggerConfig.Deserialize(value["WorkflowTriggerConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workflowTriggerConfigHasBeenSet = true;
    }

    if (value.HasMember("UserNameInCharge") && !value["UserNameInCharge"].IsNull())
    {
        if (!value["UserNameInCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowBrief.UserNameInCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userNameInCharge = string(value["UserNameInCharge"].GetString());
        m_userNameInChargeHasBeenSet = true;
    }

    if (value.HasMember("UserUinInCharge") && !value["UserUinInCharge"].IsNull())
    {
        if (!value["UserUinInCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowBrief.UserUinInCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userUinInCharge = string(value["UserUinInCharge"].GetString());
        m_userUinInChargeHasBeenSet = true;
    }

    if (value.HasMember("WorkflowParams") && !value["WorkflowParams"].IsNull())
    {
        if (!value["WorkflowParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowBrief.WorkflowParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowParams = string(value["WorkflowParams"].GetString());
        m_workflowParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerWorkflowBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
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

    if (m_taskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskCount, allocator);
    }

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_folderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowTriggerConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowTriggerConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workflowTriggerConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_userNameInChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserNameInCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userNameInCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_userUinInChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUinInCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userUinInCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowParams.c_str(), allocator).Move(), allocator);
    }

}


string TriggerWorkflowBrief::GetProjectId() const
{
    return m_projectId;
}

void TriggerWorkflowBrief::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TriggerWorkflowBrief::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TriggerWorkflowBrief::GetWorkflowId() const
{
    return m_workflowId;
}

void TriggerWorkflowBrief::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool TriggerWorkflowBrief::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string TriggerWorkflowBrief::GetWorkflowName() const
{
    return m_workflowName;
}

void TriggerWorkflowBrief::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool TriggerWorkflowBrief::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

uint64_t TriggerWorkflowBrief::GetTaskCount() const
{
    return m_taskCount;
}

void TriggerWorkflowBrief::SetTaskCount(const uint64_t& _taskCount)
{
    m_taskCount = _taskCount;
    m_taskCountHasBeenSet = true;
}

bool TriggerWorkflowBrief::TaskCountHasBeenSet() const
{
    return m_taskCountHasBeenSet;
}

string TriggerWorkflowBrief::GetFolderId() const
{
    return m_folderId;
}

void TriggerWorkflowBrief::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool TriggerWorkflowBrief::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string TriggerWorkflowBrief::GetFolderName() const
{
    return m_folderName;
}

void TriggerWorkflowBrief::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool TriggerWorkflowBrief::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

WorkflowTriggerConfig TriggerWorkflowBrief::GetWorkflowTriggerConfig() const
{
    return m_workflowTriggerConfig;
}

void TriggerWorkflowBrief::SetWorkflowTriggerConfig(const WorkflowTriggerConfig& _workflowTriggerConfig)
{
    m_workflowTriggerConfig = _workflowTriggerConfig;
    m_workflowTriggerConfigHasBeenSet = true;
}

bool TriggerWorkflowBrief::WorkflowTriggerConfigHasBeenSet() const
{
    return m_workflowTriggerConfigHasBeenSet;
}

string TriggerWorkflowBrief::GetUserNameInCharge() const
{
    return m_userNameInCharge;
}

void TriggerWorkflowBrief::SetUserNameInCharge(const string& _userNameInCharge)
{
    m_userNameInCharge = _userNameInCharge;
    m_userNameInChargeHasBeenSet = true;
}

bool TriggerWorkflowBrief::UserNameInChargeHasBeenSet() const
{
    return m_userNameInChargeHasBeenSet;
}

string TriggerWorkflowBrief::GetUserUinInCharge() const
{
    return m_userUinInCharge;
}

void TriggerWorkflowBrief::SetUserUinInCharge(const string& _userUinInCharge)
{
    m_userUinInCharge = _userUinInCharge;
    m_userUinInChargeHasBeenSet = true;
}

bool TriggerWorkflowBrief::UserUinInChargeHasBeenSet() const
{
    return m_userUinInChargeHasBeenSet;
}

string TriggerWorkflowBrief::GetWorkflowParams() const
{
    return m_workflowParams;
}

void TriggerWorkflowBrief::SetWorkflowParams(const string& _workflowParams)
{
    m_workflowParams = _workflowParams;
    m_workflowParamsHasBeenSet = true;
}

bool TriggerWorkflowBrief::WorkflowParamsHasBeenSet() const
{
    return m_workflowParamsHasBeenSet;
}

