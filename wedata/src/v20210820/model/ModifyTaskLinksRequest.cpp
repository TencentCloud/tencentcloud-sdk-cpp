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

#include <tencentcloud/wedata/v20210820/model/ModifyTaskLinksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ModifyTaskLinksRequest::ModifyTaskLinksRequest() :
    m_projectIdHasBeenSet(false),
    m_taskFromHasBeenSet(false),
    m_taskToHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_realFromWorkflowIdHasBeenSet(false),
    m_linkDependencyTypeHasBeenSet(false)
{
}

string ModifyTaskLinksRequest::ToJsonString() const
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

    if (m_taskFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_taskToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskTo.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_realFromWorkflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealFromWorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_realFromWorkflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_linkDependencyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkDependencyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_linkDependencyType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTaskLinksRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyTaskLinksRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyTaskLinksRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ModifyTaskLinksRequest::GetTaskFrom() const
{
    return m_taskFrom;
}

void ModifyTaskLinksRequest::SetTaskFrom(const string& _taskFrom)
{
    m_taskFrom = _taskFrom;
    m_taskFromHasBeenSet = true;
}

bool ModifyTaskLinksRequest::TaskFromHasBeenSet() const
{
    return m_taskFromHasBeenSet;
}

string ModifyTaskLinksRequest::GetTaskTo() const
{
    return m_taskTo;
}

void ModifyTaskLinksRequest::SetTaskTo(const string& _taskTo)
{
    m_taskTo = _taskTo;
    m_taskToHasBeenSet = true;
}

bool ModifyTaskLinksRequest::TaskToHasBeenSet() const
{
    return m_taskToHasBeenSet;
}

string ModifyTaskLinksRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void ModifyTaskLinksRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool ModifyTaskLinksRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string ModifyTaskLinksRequest::GetRealFromWorkflowId() const
{
    return m_realFromWorkflowId;
}

void ModifyTaskLinksRequest::SetRealFromWorkflowId(const string& _realFromWorkflowId)
{
    m_realFromWorkflowId = _realFromWorkflowId;
    m_realFromWorkflowIdHasBeenSet = true;
}

bool ModifyTaskLinksRequest::RealFromWorkflowIdHasBeenSet() const
{
    return m_realFromWorkflowIdHasBeenSet;
}

string ModifyTaskLinksRequest::GetLinkDependencyType() const
{
    return m_linkDependencyType;
}

void ModifyTaskLinksRequest::SetLinkDependencyType(const string& _linkDependencyType)
{
    m_linkDependencyType = _linkDependencyType;
    m_linkDependencyTypeHasBeenSet = true;
}

bool ModifyTaskLinksRequest::LinkDependencyTypeHasBeenSet() const
{
    return m_linkDependencyTypeHasBeenSet;
}


