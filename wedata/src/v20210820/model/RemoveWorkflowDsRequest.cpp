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

#include <tencentcloud/wedata/v20210820/model/RemoveWorkflowDsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RemoveWorkflowDsRequest::RemoveWorkflowDsRequest() :
    m_projectIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_deleteScriptHasBeenSet(false),
    m_operateIsInformHasBeenSet(false),
    m_deleteModeHasBeenSet(false)
{
}

string RemoveWorkflowDsRequest::ToJsonString() const
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

    if (m_deleteScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteScript";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deleteScript.c_str(), allocator).Move(), allocator);
    }

    if (m_operateIsInformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateIsInform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operateIsInform.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deleteMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RemoveWorkflowDsRequest::GetProjectId() const
{
    return m_projectId;
}

void RemoveWorkflowDsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RemoveWorkflowDsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string RemoveWorkflowDsRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void RemoveWorkflowDsRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool RemoveWorkflowDsRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string RemoveWorkflowDsRequest::GetDeleteScript() const
{
    return m_deleteScript;
}

void RemoveWorkflowDsRequest::SetDeleteScript(const string& _deleteScript)
{
    m_deleteScript = _deleteScript;
    m_deleteScriptHasBeenSet = true;
}

bool RemoveWorkflowDsRequest::DeleteScriptHasBeenSet() const
{
    return m_deleteScriptHasBeenSet;
}

string RemoveWorkflowDsRequest::GetOperateIsInform() const
{
    return m_operateIsInform;
}

void RemoveWorkflowDsRequest::SetOperateIsInform(const string& _operateIsInform)
{
    m_operateIsInform = _operateIsInform;
    m_operateIsInformHasBeenSet = true;
}

bool RemoveWorkflowDsRequest::OperateIsInformHasBeenSet() const
{
    return m_operateIsInformHasBeenSet;
}

string RemoveWorkflowDsRequest::GetDeleteMode() const
{
    return m_deleteMode;
}

void RemoveWorkflowDsRequest::SetDeleteMode(const string& _deleteMode)
{
    m_deleteMode = _deleteMode;
    m_deleteModeHasBeenSet = true;
}

bool RemoveWorkflowDsRequest::DeleteModeHasBeenSet() const
{
    return m_deleteModeHasBeenSet;
}


