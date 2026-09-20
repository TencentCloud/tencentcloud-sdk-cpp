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

#include <tencentcloud/databuddy/v20260715/model/RunWorkflowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

RunWorkflowRequest::RunWorkflowRequest() :
    m_workspaceIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_runTypeHasBeenSet(false),
    m_advancedParamsHasBeenSet(false),
    m_taskIdsHasBeenSet(false),
    m_idempotencyTokenHasBeenSet(false),
    m_scheduledTimeConfigHasBeenSet(false)
{
}

string RunWorkflowRequest::ToJsonString() const
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

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_runTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_runType, allocator);
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

    if (m_idempotencyTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdempotencyToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idempotencyToken.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduledTimeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledTimeConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scheduledTimeConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RunWorkflowRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void RunWorkflowRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool RunWorkflowRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string RunWorkflowRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void RunWorkflowRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool RunWorkflowRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

int64_t RunWorkflowRequest::GetRunType() const
{
    return m_runType;
}

void RunWorkflowRequest::SetRunType(const int64_t& _runType)
{
    m_runType = _runType;
    m_runTypeHasBeenSet = true;
}

bool RunWorkflowRequest::RunTypeHasBeenSet() const
{
    return m_runTypeHasBeenSet;
}

vector<TaskSchedulingParameterBrief> RunWorkflowRequest::GetAdvancedParams() const
{
    return m_advancedParams;
}

void RunWorkflowRequest::SetAdvancedParams(const vector<TaskSchedulingParameterBrief>& _advancedParams)
{
    m_advancedParams = _advancedParams;
    m_advancedParamsHasBeenSet = true;
}

bool RunWorkflowRequest::AdvancedParamsHasBeenSet() const
{
    return m_advancedParamsHasBeenSet;
}

vector<string> RunWorkflowRequest::GetTaskIds() const
{
    return m_taskIds;
}

void RunWorkflowRequest::SetTaskIds(const vector<string>& _taskIds)
{
    m_taskIds = _taskIds;
    m_taskIdsHasBeenSet = true;
}

bool RunWorkflowRequest::TaskIdsHasBeenSet() const
{
    return m_taskIdsHasBeenSet;
}

string RunWorkflowRequest::GetIdempotencyToken() const
{
    return m_idempotencyToken;
}

void RunWorkflowRequest::SetIdempotencyToken(const string& _idempotencyToken)
{
    m_idempotencyToken = _idempotencyToken;
    m_idempotencyTokenHasBeenSet = true;
}

bool RunWorkflowRequest::IdempotencyTokenHasBeenSet() const
{
    return m_idempotencyTokenHasBeenSet;
}

ScheduledTimeConfig RunWorkflowRequest::GetScheduledTimeConfig() const
{
    return m_scheduledTimeConfig;
}

void RunWorkflowRequest::SetScheduledTimeConfig(const ScheduledTimeConfig& _scheduledTimeConfig)
{
    m_scheduledTimeConfig = _scheduledTimeConfig;
    m_scheduledTimeConfigHasBeenSet = true;
}

bool RunWorkflowRequest::ScheduledTimeConfigHasBeenSet() const
{
    return m_scheduledTimeConfigHasBeenSet;
}


