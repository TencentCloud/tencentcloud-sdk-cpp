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

#include <tencentcloud/databuddy/v20260715/model/KillWorkflowRunRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

KillWorkflowRunRequest::KillWorkflowRunRequest() :
    m_workspaceIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowRunIdsHasBeenSet(false),
    m_killAllRunsHasBeenSet(false),
    m_onlyKillPendingRunsHasBeenSet(false)
{
}

string KillWorkflowRunRequest::ToJsonString() const
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

    if (m_workflowRunIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowRunIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_workflowRunIds.begin(); itr != m_workflowRunIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_killAllRunsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KillAllRuns";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_killAllRuns, allocator);
    }

    if (m_onlyKillPendingRunsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlyKillPendingRuns";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onlyKillPendingRuns, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string KillWorkflowRunRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void KillWorkflowRunRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool KillWorkflowRunRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string KillWorkflowRunRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void KillWorkflowRunRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool KillWorkflowRunRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

vector<string> KillWorkflowRunRequest::GetWorkflowRunIds() const
{
    return m_workflowRunIds;
}

void KillWorkflowRunRequest::SetWorkflowRunIds(const vector<string>& _workflowRunIds)
{
    m_workflowRunIds = _workflowRunIds;
    m_workflowRunIdsHasBeenSet = true;
}

bool KillWorkflowRunRequest::WorkflowRunIdsHasBeenSet() const
{
    return m_workflowRunIdsHasBeenSet;
}

bool KillWorkflowRunRequest::GetKillAllRuns() const
{
    return m_killAllRuns;
}

void KillWorkflowRunRequest::SetKillAllRuns(const bool& _killAllRuns)
{
    m_killAllRuns = _killAllRuns;
    m_killAllRunsHasBeenSet = true;
}

bool KillWorkflowRunRequest::KillAllRunsHasBeenSet() const
{
    return m_killAllRunsHasBeenSet;
}

bool KillWorkflowRunRequest::GetOnlyKillPendingRuns() const
{
    return m_onlyKillPendingRuns;
}

void KillWorkflowRunRequest::SetOnlyKillPendingRuns(const bool& _onlyKillPendingRuns)
{
    m_onlyKillPendingRuns = _onlyKillPendingRuns;
    m_onlyKillPendingRunsHasBeenSet = true;
}

bool KillWorkflowRunRequest::OnlyKillPendingRunsHasBeenSet() const
{
    return m_onlyKillPendingRunsHasBeenSet;
}


