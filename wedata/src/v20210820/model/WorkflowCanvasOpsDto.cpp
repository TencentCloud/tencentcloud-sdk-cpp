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

#include <tencentcloud/wedata/v20210820/model/WorkflowCanvasOpsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

WorkflowCanvasOpsDto::WorkflowCanvasOpsDto() :
    m_workflowIdHasBeenSet(false),
    m_workflowDescHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_folderIdsHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_linksHasBeenSet(false),
    m_userGroupIdHasBeenSet(false),
    m_userGroupNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectIdentHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_workflowTypeHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowCanvasOpsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOpsDto.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowDesc") && !value["WorkflowDesc"].IsNull())
    {
        if (!value["WorkflowDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOpsDto.WorkflowDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowDesc = string(value["WorkflowDesc"].GetString());
        m_workflowDescHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOpsDto.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOpsDto.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("FolderIds") && !value["FolderIds"].IsNull())
    {
        if (!value["FolderIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOpsDto.FolderIds` is not array type"));

        const rapidjson::Value &tmpValue = value["FolderIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_folderIds.push_back((*itr).GetString());
        }
        m_folderIdsHasBeenSet = true;
    }

    if (value.HasMember("Tasks") && !value["Tasks"].IsNull())
    {
        if (!value["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOpsDto.Tasks` is not array type"));

        const rapidjson::Value &tmpValue = value["Tasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskOpsDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tasks.push_back(item);
        }
        m_tasksHasBeenSet = true;
    }

    if (value.HasMember("Links") && !value["Links"].IsNull())
    {
        if (!value["Links"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOpsDto.Links` is not array type"));

        const rapidjson::Value &tmpValue = value["Links"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LinkOpsDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_links.push_back(item);
        }
        m_linksHasBeenSet = true;
    }

    if (value.HasMember("UserGroupId") && !value["UserGroupId"].IsNull())
    {
        if (!value["UserGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOpsDto.UserGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroupId = string(value["UserGroupId"].GetString());
        m_userGroupIdHasBeenSet = true;
    }

    if (value.HasMember("UserGroupName") && !value["UserGroupName"].IsNull())
    {
        if (!value["UserGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOpsDto.UserGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroupName = string(value["UserGroupName"].GetString());
        m_userGroupNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOpsDto.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectIdent") && !value["ProjectIdent"].IsNull())
    {
        if (!value["ProjectIdent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOpsDto.ProjectIdent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectIdent = string(value["ProjectIdent"].GetString());
        m_projectIdentHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOpsDto.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOpsDto.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("OwnerId") && !value["OwnerId"].IsNull())
    {
        if (!value["OwnerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOpsDto.OwnerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerId = string(value["OwnerId"].GetString());
        m_ownerIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowType") && !value["WorkflowType"].IsNull())
    {
        if (!value["WorkflowType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowCanvasOpsDto.WorkflowType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowType = string(value["WorkflowType"].GetString());
        m_workflowTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowCanvasOpsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_folderIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_folderIds.begin(); itr != m_folderIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tasks.begin(); itr != m_tasks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_linksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Links";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_links.begin(); itr != m_links.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_workflowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowType.c_str(), allocator).Move(), allocator);
    }

}


string WorkflowCanvasOpsDto::GetWorkflowId() const
{
    return m_workflowId;
}

void WorkflowCanvasOpsDto::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool WorkflowCanvasOpsDto::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string WorkflowCanvasOpsDto::GetWorkflowDesc() const
{
    return m_workflowDesc;
}

void WorkflowCanvasOpsDto::SetWorkflowDesc(const string& _workflowDesc)
{
    m_workflowDesc = _workflowDesc;
    m_workflowDescHasBeenSet = true;
}

bool WorkflowCanvasOpsDto::WorkflowDescHasBeenSet() const
{
    return m_workflowDescHasBeenSet;
}

string WorkflowCanvasOpsDto::GetWorkflowName() const
{
    return m_workflowName;
}

void WorkflowCanvasOpsDto::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool WorkflowCanvasOpsDto::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string WorkflowCanvasOpsDto::GetFolderId() const
{
    return m_folderId;
}

void WorkflowCanvasOpsDto::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool WorkflowCanvasOpsDto::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

vector<string> WorkflowCanvasOpsDto::GetFolderIds() const
{
    return m_folderIds;
}

void WorkflowCanvasOpsDto::SetFolderIds(const vector<string>& _folderIds)
{
    m_folderIds = _folderIds;
    m_folderIdsHasBeenSet = true;
}

bool WorkflowCanvasOpsDto::FolderIdsHasBeenSet() const
{
    return m_folderIdsHasBeenSet;
}

vector<TaskOpsDto> WorkflowCanvasOpsDto::GetTasks() const
{
    return m_tasks;
}

void WorkflowCanvasOpsDto::SetTasks(const vector<TaskOpsDto>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool WorkflowCanvasOpsDto::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

vector<LinkOpsDto> WorkflowCanvasOpsDto::GetLinks() const
{
    return m_links;
}

void WorkflowCanvasOpsDto::SetLinks(const vector<LinkOpsDto>& _links)
{
    m_links = _links;
    m_linksHasBeenSet = true;
}

bool WorkflowCanvasOpsDto::LinksHasBeenSet() const
{
    return m_linksHasBeenSet;
}

string WorkflowCanvasOpsDto::GetUserGroupId() const
{
    return m_userGroupId;
}

void WorkflowCanvasOpsDto::SetUserGroupId(const string& _userGroupId)
{
    m_userGroupId = _userGroupId;
    m_userGroupIdHasBeenSet = true;
}

bool WorkflowCanvasOpsDto::UserGroupIdHasBeenSet() const
{
    return m_userGroupIdHasBeenSet;
}

string WorkflowCanvasOpsDto::GetUserGroupName() const
{
    return m_userGroupName;
}

void WorkflowCanvasOpsDto::SetUserGroupName(const string& _userGroupName)
{
    m_userGroupName = _userGroupName;
    m_userGroupNameHasBeenSet = true;
}

bool WorkflowCanvasOpsDto::UserGroupNameHasBeenSet() const
{
    return m_userGroupNameHasBeenSet;
}

string WorkflowCanvasOpsDto::GetProjectId() const
{
    return m_projectId;
}

void WorkflowCanvasOpsDto::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool WorkflowCanvasOpsDto::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string WorkflowCanvasOpsDto::GetProjectIdent() const
{
    return m_projectIdent;
}

void WorkflowCanvasOpsDto::SetProjectIdent(const string& _projectIdent)
{
    m_projectIdent = _projectIdent;
    m_projectIdentHasBeenSet = true;
}

bool WorkflowCanvasOpsDto::ProjectIdentHasBeenSet() const
{
    return m_projectIdentHasBeenSet;
}

string WorkflowCanvasOpsDto::GetProjectName() const
{
    return m_projectName;
}

void WorkflowCanvasOpsDto::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool WorkflowCanvasOpsDto::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string WorkflowCanvasOpsDto::GetOwner() const
{
    return m_owner;
}

void WorkflowCanvasOpsDto::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool WorkflowCanvasOpsDto::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string WorkflowCanvasOpsDto::GetOwnerId() const
{
    return m_ownerId;
}

void WorkflowCanvasOpsDto::SetOwnerId(const string& _ownerId)
{
    m_ownerId = _ownerId;
    m_ownerIdHasBeenSet = true;
}

bool WorkflowCanvasOpsDto::OwnerIdHasBeenSet() const
{
    return m_ownerIdHasBeenSet;
}

string WorkflowCanvasOpsDto::GetWorkflowType() const
{
    return m_workflowType;
}

void WorkflowCanvasOpsDto::SetWorkflowType(const string& _workflowType)
{
    m_workflowType = _workflowType;
    m_workflowTypeHasBeenSet = true;
}

bool WorkflowCanvasOpsDto::WorkflowTypeHasBeenSet() const
{
    return m_workflowTypeHasBeenSet;
}

