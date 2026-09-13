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

#include <tencentcloud/databuddy/v20260715/model/GetWorkflowTaskRunRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

GetWorkflowTaskRunRequest::GetWorkflowTaskRunRequest() :
    m_workspaceIdHasBeenSet(false),
    m_workflowTaskRunIdHasBeenSet(false),
    m_innerWorkflowTaskRunListOptionHasBeenSet(false)
{
}

string GetWorkflowTaskRunRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowTaskRunIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowTaskRunId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowTaskRunId.c_str(), allocator).Move(), allocator);
    }

    if (m_innerWorkflowTaskRunListOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerWorkflowTaskRunListOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_innerWorkflowTaskRunListOption.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetWorkflowTaskRunRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void GetWorkflowTaskRunRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool GetWorkflowTaskRunRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string GetWorkflowTaskRunRequest::GetWorkflowTaskRunId() const
{
    return m_workflowTaskRunId;
}

void GetWorkflowTaskRunRequest::SetWorkflowTaskRunId(const string& _workflowTaskRunId)
{
    m_workflowTaskRunId = _workflowTaskRunId;
    m_workflowTaskRunIdHasBeenSet = true;
}

bool GetWorkflowTaskRunRequest::WorkflowTaskRunIdHasBeenSet() const
{
    return m_workflowTaskRunIdHasBeenSet;
}

InnerWorkflowTaskRunListOption GetWorkflowTaskRunRequest::GetInnerWorkflowTaskRunListOption() const
{
    return m_innerWorkflowTaskRunListOption;
}

void GetWorkflowTaskRunRequest::SetInnerWorkflowTaskRunListOption(const InnerWorkflowTaskRunListOption& _innerWorkflowTaskRunListOption)
{
    m_innerWorkflowTaskRunListOption = _innerWorkflowTaskRunListOption;
    m_innerWorkflowTaskRunListOptionHasBeenSet = true;
}

bool GetWorkflowTaskRunRequest::InnerWorkflowTaskRunListOptionHasBeenSet() const
{
    return m_innerWorkflowTaskRunListOptionHasBeenSet;
}


