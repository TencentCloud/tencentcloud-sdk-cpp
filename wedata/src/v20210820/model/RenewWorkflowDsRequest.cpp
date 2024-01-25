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

#include <tencentcloud/wedata/v20210820/model/RenewWorkflowDsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RenewWorkflowDsRequest::RenewWorkflowDsRequest() :
    m_projectIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_workflowDescHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_sparkSqlParamsHasBeenSet(false)
{
}

string RenewWorkflowDsRequest::ToJsonString() const
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

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_sparkSqlParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkSqlParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sparkSqlParams.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RenewWorkflowDsRequest::GetProjectId() const
{
    return m_projectId;
}

void RenewWorkflowDsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RenewWorkflowDsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string RenewWorkflowDsRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void RenewWorkflowDsRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool RenewWorkflowDsRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string RenewWorkflowDsRequest::GetWorkflowName() const
{
    return m_workflowName;
}

void RenewWorkflowDsRequest::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool RenewWorkflowDsRequest::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string RenewWorkflowDsRequest::GetWorkflowDesc() const
{
    return m_workflowDesc;
}

void RenewWorkflowDsRequest::SetWorkflowDesc(const string& _workflowDesc)
{
    m_workflowDesc = _workflowDesc;
    m_workflowDescHasBeenSet = true;
}

bool RenewWorkflowDsRequest::WorkflowDescHasBeenSet() const
{
    return m_workflowDescHasBeenSet;
}

string RenewWorkflowDsRequest::GetFolderId() const
{
    return m_folderId;
}

void RenewWorkflowDsRequest::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool RenewWorkflowDsRequest::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string RenewWorkflowDsRequest::GetOwnerId() const
{
    return m_ownerId;
}

void RenewWorkflowDsRequest::SetOwnerId(const string& _ownerId)
{
    m_ownerId = _ownerId;
    m_ownerIdHasBeenSet = true;
}

bool RenewWorkflowDsRequest::OwnerIdHasBeenSet() const
{
    return m_ownerIdHasBeenSet;
}

string RenewWorkflowDsRequest::GetOwner() const
{
    return m_owner;
}

void RenewWorkflowDsRequest::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool RenewWorkflowDsRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string RenewWorkflowDsRequest::GetSparkSqlParams() const
{
    return m_sparkSqlParams;
}

void RenewWorkflowDsRequest::SetSparkSqlParams(const string& _sparkSqlParams)
{
    m_sparkSqlParams = _sparkSqlParams;
    m_sparkSqlParamsHasBeenSet = true;
}

bool RenewWorkflowDsRequest::SparkSqlParamsHasBeenSet() const
{
    return m_sparkSqlParamsHasBeenSet;
}


