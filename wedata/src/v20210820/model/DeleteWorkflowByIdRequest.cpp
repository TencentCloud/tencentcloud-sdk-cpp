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

#include <tencentcloud/wedata/v20210820/model/DeleteWorkflowByIdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DeleteWorkflowByIdRequest::DeleteWorkflowByIdRequest() :
    m_workflowIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_deleteModeHasBeenSet(false),
    m_enableNotifyHasBeenSet(false)
{
}

string DeleteWorkflowByIdRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteMode, allocator);
    }

    if (m_enableNotifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableNotify";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableNotify, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteWorkflowByIdRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void DeleteWorkflowByIdRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool DeleteWorkflowByIdRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string DeleteWorkflowByIdRequest::GetProjectId() const
{
    return m_projectId;
}

void DeleteWorkflowByIdRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DeleteWorkflowByIdRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

bool DeleteWorkflowByIdRequest::GetDeleteMode() const
{
    return m_deleteMode;
}

void DeleteWorkflowByIdRequest::SetDeleteMode(const bool& _deleteMode)
{
    m_deleteMode = _deleteMode;
    m_deleteModeHasBeenSet = true;
}

bool DeleteWorkflowByIdRequest::DeleteModeHasBeenSet() const
{
    return m_deleteModeHasBeenSet;
}

bool DeleteWorkflowByIdRequest::GetEnableNotify() const
{
    return m_enableNotify;
}

void DeleteWorkflowByIdRequest::SetEnableNotify(const bool& _enableNotify)
{
    m_enableNotify = _enableNotify;
    m_enableNotifyHasBeenSet = true;
}

bool DeleteWorkflowByIdRequest::EnableNotifyHasBeenSet() const
{
    return m_enableNotifyHasBeenSet;
}


