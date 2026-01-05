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

#include <tencentcloud/wedata/v20250806/model/RerunTriggerWorkflowRunAsyncRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

RerunTriggerWorkflowRunAsyncRequest::RerunTriggerWorkflowRunAsyncRequest() :
    m_projectIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowExecutionIdHasBeenSet(false),
    m_executeTypeHasBeenSet(false),
    m_advancedParamsHasBeenSet(false),
    m_taskIdsHasBeenSet(false),
    m_schedulingResourceGroupHasBeenSet(false),
    m_integrationResourceGroupHasBeenSet(false)
{
}

string RerunTriggerWorkflowRunAsyncRequest::ToJsonString() const
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

    if (m_workflowExecutionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowExecutionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowExecutionId.c_str(), allocator).Move(), allocator);
    }

    if (m_executeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executeType.c_str(), allocator).Move(), allocator);
    }

    if (m_advancedParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_advancedParams.begin(); itr != m_advancedParams.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_taskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskIds.begin(); itr != m_taskIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_schedulingResourceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulingResourceGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schedulingResourceGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_integrationResourceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntegrationResourceGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_integrationResourceGroup.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RerunTriggerWorkflowRunAsyncRequest::GetProjectId() const
{
    return m_projectId;
}

void RerunTriggerWorkflowRunAsyncRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RerunTriggerWorkflowRunAsyncRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string RerunTriggerWorkflowRunAsyncRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void RerunTriggerWorkflowRunAsyncRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool RerunTriggerWorkflowRunAsyncRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string RerunTriggerWorkflowRunAsyncRequest::GetWorkflowExecutionId() const
{
    return m_workflowExecutionId;
}

void RerunTriggerWorkflowRunAsyncRequest::SetWorkflowExecutionId(const string& _workflowExecutionId)
{
    m_workflowExecutionId = _workflowExecutionId;
    m_workflowExecutionIdHasBeenSet = true;
}

bool RerunTriggerWorkflowRunAsyncRequest::WorkflowExecutionIdHasBeenSet() const
{
    return m_workflowExecutionIdHasBeenSet;
}

string RerunTriggerWorkflowRunAsyncRequest::GetExecuteType() const
{
    return m_executeType;
}

void RerunTriggerWorkflowRunAsyncRequest::SetExecuteType(const string& _executeType)
{
    m_executeType = _executeType;
    m_executeTypeHasBeenSet = true;
}

bool RerunTriggerWorkflowRunAsyncRequest::ExecuteTypeHasBeenSet() const
{
    return m_executeTypeHasBeenSet;
}

vector<SchedulingParameter> RerunTriggerWorkflowRunAsyncRequest::GetAdvancedParams() const
{
    return m_advancedParams;
}

void RerunTriggerWorkflowRunAsyncRequest::SetAdvancedParams(const vector<SchedulingParameter>& _advancedParams)
{
    m_advancedParams = _advancedParams;
    m_advancedParamsHasBeenSet = true;
}

bool RerunTriggerWorkflowRunAsyncRequest::AdvancedParamsHasBeenSet() const
{
    return m_advancedParamsHasBeenSet;
}

vector<string> RerunTriggerWorkflowRunAsyncRequest::GetTaskIds() const
{
    return m_taskIds;
}

void RerunTriggerWorkflowRunAsyncRequest::SetTaskIds(const vector<string>& _taskIds)
{
    m_taskIds = _taskIds;
    m_taskIdsHasBeenSet = true;
}

bool RerunTriggerWorkflowRunAsyncRequest::TaskIdsHasBeenSet() const
{
    return m_taskIdsHasBeenSet;
}

string RerunTriggerWorkflowRunAsyncRequest::GetSchedulingResourceGroup() const
{
    return m_schedulingResourceGroup;
}

void RerunTriggerWorkflowRunAsyncRequest::SetSchedulingResourceGroup(const string& _schedulingResourceGroup)
{
    m_schedulingResourceGroup = _schedulingResourceGroup;
    m_schedulingResourceGroupHasBeenSet = true;
}

bool RerunTriggerWorkflowRunAsyncRequest::SchedulingResourceGroupHasBeenSet() const
{
    return m_schedulingResourceGroupHasBeenSet;
}

string RerunTriggerWorkflowRunAsyncRequest::GetIntegrationResourceGroup() const
{
    return m_integrationResourceGroup;
}

void RerunTriggerWorkflowRunAsyncRequest::SetIntegrationResourceGroup(const string& _integrationResourceGroup)
{
    m_integrationResourceGroup = _integrationResourceGroup;
    m_integrationResourceGroupHasBeenSet = true;
}

bool RerunTriggerWorkflowRunAsyncRequest::IntegrationResourceGroupHasBeenSet() const
{
    return m_integrationResourceGroupHasBeenSet;
}


