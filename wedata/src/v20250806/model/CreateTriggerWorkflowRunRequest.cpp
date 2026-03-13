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

#include <tencentcloud/wedata/v20250806/model/CreateTriggerWorkflowRunRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateTriggerWorkflowRunRequest::CreateTriggerWorkflowRunRequest() :
    m_projectIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_advancedParamsHasBeenSet(false),
    m_taskIdsHasBeenSet(false),
    m_schedulingResourceGroupIdHasBeenSet(false),
    m_integrationResourceGroupIdHasBeenSet(false)
{
}

string CreateTriggerWorkflowRunRequest::ToJsonString() const
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

    if (m_schedulingResourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulingResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schedulingResourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_integrationResourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntegrationResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_integrationResourceGroupId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTriggerWorkflowRunRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateTriggerWorkflowRunRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateTriggerWorkflowRunRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateTriggerWorkflowRunRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void CreateTriggerWorkflowRunRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool CreateTriggerWorkflowRunRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

vector<SchedulingParameter> CreateTriggerWorkflowRunRequest::GetAdvancedParams() const
{
    return m_advancedParams;
}

void CreateTriggerWorkflowRunRequest::SetAdvancedParams(const vector<SchedulingParameter>& _advancedParams)
{
    m_advancedParams = _advancedParams;
    m_advancedParamsHasBeenSet = true;
}

bool CreateTriggerWorkflowRunRequest::AdvancedParamsHasBeenSet() const
{
    return m_advancedParamsHasBeenSet;
}

vector<string> CreateTriggerWorkflowRunRequest::GetTaskIds() const
{
    return m_taskIds;
}

void CreateTriggerWorkflowRunRequest::SetTaskIds(const vector<string>& _taskIds)
{
    m_taskIds = _taskIds;
    m_taskIdsHasBeenSet = true;
}

bool CreateTriggerWorkflowRunRequest::TaskIdsHasBeenSet() const
{
    return m_taskIdsHasBeenSet;
}

string CreateTriggerWorkflowRunRequest::GetSchedulingResourceGroupId() const
{
    return m_schedulingResourceGroupId;
}

void CreateTriggerWorkflowRunRequest::SetSchedulingResourceGroupId(const string& _schedulingResourceGroupId)
{
    m_schedulingResourceGroupId = _schedulingResourceGroupId;
    m_schedulingResourceGroupIdHasBeenSet = true;
}

bool CreateTriggerWorkflowRunRequest::SchedulingResourceGroupIdHasBeenSet() const
{
    return m_schedulingResourceGroupIdHasBeenSet;
}

string CreateTriggerWorkflowRunRequest::GetIntegrationResourceGroupId() const
{
    return m_integrationResourceGroupId;
}

void CreateTriggerWorkflowRunRequest::SetIntegrationResourceGroupId(const string& _integrationResourceGroupId)
{
    m_integrationResourceGroupId = _integrationResourceGroupId;
    m_integrationResourceGroupIdHasBeenSet = true;
}

bool CreateTriggerWorkflowRunRequest::IntegrationResourceGroupIdHasBeenSet() const
{
    return m_integrationResourceGroupIdHasBeenSet;
}


