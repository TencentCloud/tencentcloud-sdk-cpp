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

#include <tencentcloud/wedata/v20210820/model/Workflow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

Workflow::Workflow() :
    m_workflowIdHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectIdentHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_workflowDescHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_userGroupIdHasBeenSet(false),
    m_userGroupNameHasBeenSet(false)
{
}

CoreInternalOutcome Workflow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Workflow.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Workflow.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("OwnerId") && !value["OwnerId"].IsNull())
    {
        if (!value["OwnerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Workflow.OwnerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerId = string(value["OwnerId"].GetString());
        m_ownerIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Workflow.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectIdent") && !value["ProjectIdent"].IsNull())
    {
        if (!value["ProjectIdent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Workflow.ProjectIdent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectIdent = string(value["ProjectIdent"].GetString());
        m_projectIdentHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Workflow.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowDesc") && !value["WorkflowDesc"].IsNull())
    {
        if (!value["WorkflowDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Workflow.WorkflowDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowDesc = string(value["WorkflowDesc"].GetString());
        m_workflowDescHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Workflow.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Workflow.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("UserGroupId") && !value["UserGroupId"].IsNull())
    {
        if (!value["UserGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Workflow.UserGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroupId = string(value["UserGroupId"].GetString());
        m_userGroupIdHasBeenSet = true;
    }

    if (value.HasMember("UserGroupName") && !value["UserGroupName"].IsNull())
    {
        if (!value["UserGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Workflow.UserGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroupName = string(value["UserGroupName"].GetString());
        m_userGroupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Workflow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
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

    if (m_workflowDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_userGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_userGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userGroupName.c_str(), allocator).Move(), allocator);
    }

}


string Workflow::GetWorkflowId() const
{
    return m_workflowId;
}

void Workflow::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool Workflow::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string Workflow::GetOwner() const
{
    return m_owner;
}

void Workflow::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool Workflow::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string Workflow::GetOwnerId() const
{
    return m_ownerId;
}

void Workflow::SetOwnerId(const string& _ownerId)
{
    m_ownerId = _ownerId;
    m_ownerIdHasBeenSet = true;
}

bool Workflow::OwnerIdHasBeenSet() const
{
    return m_ownerIdHasBeenSet;
}

string Workflow::GetProjectId() const
{
    return m_projectId;
}

void Workflow::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Workflow::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string Workflow::GetProjectIdent() const
{
    return m_projectIdent;
}

void Workflow::SetProjectIdent(const string& _projectIdent)
{
    m_projectIdent = _projectIdent;
    m_projectIdentHasBeenSet = true;
}

bool Workflow::ProjectIdentHasBeenSet() const
{
    return m_projectIdentHasBeenSet;
}

string Workflow::GetProjectName() const
{
    return m_projectName;
}

void Workflow::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool Workflow::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string Workflow::GetWorkflowDesc() const
{
    return m_workflowDesc;
}

void Workflow::SetWorkflowDesc(const string& _workflowDesc)
{
    m_workflowDesc = _workflowDesc;
    m_workflowDescHasBeenSet = true;
}

bool Workflow::WorkflowDescHasBeenSet() const
{
    return m_workflowDescHasBeenSet;
}

string Workflow::GetWorkflowName() const
{
    return m_workflowName;
}

void Workflow::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool Workflow::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string Workflow::GetFolderId() const
{
    return m_folderId;
}

void Workflow::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool Workflow::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string Workflow::GetUserGroupId() const
{
    return m_userGroupId;
}

void Workflow::SetUserGroupId(const string& _userGroupId)
{
    m_userGroupId = _userGroupId;
    m_userGroupIdHasBeenSet = true;
}

bool Workflow::UserGroupIdHasBeenSet() const
{
    return m_userGroupIdHasBeenSet;
}

string Workflow::GetUserGroupName() const
{
    return m_userGroupName;
}

void Workflow::SetUserGroupName(const string& _userGroupName)
{
    m_userGroupName = _userGroupName;
    m_userGroupNameHasBeenSet = true;
}

bool Workflow::UserGroupNameHasBeenSet() const
{
    return m_userGroupNameHasBeenSet;
}

