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

#include <tencentcloud/wedata/v20210820/model/ModifyWorkflowInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ModifyWorkflowInfoRequest::ModifyWorkflowInfoRequest() :
    m_projectIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_workflowDescHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_userGroupIdHasBeenSet(false),
    m_userGroupNameHasBeenSet(false),
    m_workflowParamsHasBeenSet(false),
    m_generalTaskParamsHasBeenSet(false)
{
}

string ModifyWorkflowInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_userGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_userGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_workflowParams.begin(); itr != m_workflowParams.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_generalTaskParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeneralTaskParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_generalTaskParams.begin(); itr != m_generalTaskParams.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyWorkflowInfoRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyWorkflowInfoRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyWorkflowInfoRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ModifyWorkflowInfoRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void ModifyWorkflowInfoRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool ModifyWorkflowInfoRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string ModifyWorkflowInfoRequest::GetOwner() const
{
    return m_owner;
}

void ModifyWorkflowInfoRequest::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool ModifyWorkflowInfoRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string ModifyWorkflowInfoRequest::GetOwnerId() const
{
    return m_ownerId;
}

void ModifyWorkflowInfoRequest::SetOwnerId(const string& _ownerId)
{
    m_ownerId = _ownerId;
    m_ownerIdHasBeenSet = true;
}

bool ModifyWorkflowInfoRequest::OwnerIdHasBeenSet() const
{
    return m_ownerIdHasBeenSet;
}

string ModifyWorkflowInfoRequest::GetWorkflowDesc() const
{
    return m_workflowDesc;
}

void ModifyWorkflowInfoRequest::SetWorkflowDesc(const string& _workflowDesc)
{
    m_workflowDesc = _workflowDesc;
    m_workflowDescHasBeenSet = true;
}

bool ModifyWorkflowInfoRequest::WorkflowDescHasBeenSet() const
{
    return m_workflowDescHasBeenSet;
}

string ModifyWorkflowInfoRequest::GetWorkflowName() const
{
    return m_workflowName;
}

void ModifyWorkflowInfoRequest::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool ModifyWorkflowInfoRequest::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string ModifyWorkflowInfoRequest::GetFolderId() const
{
    return m_folderId;
}

void ModifyWorkflowInfoRequest::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool ModifyWorkflowInfoRequest::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string ModifyWorkflowInfoRequest::GetUserGroupId() const
{
    return m_userGroupId;
}

void ModifyWorkflowInfoRequest::SetUserGroupId(const string& _userGroupId)
{
    m_userGroupId = _userGroupId;
    m_userGroupIdHasBeenSet = true;
}

bool ModifyWorkflowInfoRequest::UserGroupIdHasBeenSet() const
{
    return m_userGroupIdHasBeenSet;
}

string ModifyWorkflowInfoRequest::GetUserGroupName() const
{
    return m_userGroupName;
}

void ModifyWorkflowInfoRequest::SetUserGroupName(const string& _userGroupName)
{
    m_userGroupName = _userGroupName;
    m_userGroupNameHasBeenSet = true;
}

bool ModifyWorkflowInfoRequest::UserGroupNameHasBeenSet() const
{
    return m_userGroupNameHasBeenSet;
}

vector<ParamInfo> ModifyWorkflowInfoRequest::GetWorkflowParams() const
{
    return m_workflowParams;
}

void ModifyWorkflowInfoRequest::SetWorkflowParams(const vector<ParamInfo>& _workflowParams)
{
    m_workflowParams = _workflowParams;
    m_workflowParamsHasBeenSet = true;
}

bool ModifyWorkflowInfoRequest::WorkflowParamsHasBeenSet() const
{
    return m_workflowParamsHasBeenSet;
}

vector<GeneralTaskParam> ModifyWorkflowInfoRequest::GetGeneralTaskParams() const
{
    return m_generalTaskParams;
}

void ModifyWorkflowInfoRequest::SetGeneralTaskParams(const vector<GeneralTaskParam>& _generalTaskParams)
{
    m_generalTaskParams = _generalTaskParams;
    m_generalTaskParamsHasBeenSet = true;
}

bool ModifyWorkflowInfoRequest::GeneralTaskParamsHasBeenSet() const
{
    return m_generalTaskParamsHasBeenSet;
}


