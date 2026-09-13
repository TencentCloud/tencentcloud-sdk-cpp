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

#include <tencentcloud/databuddy/v20260715/model/WorkflowRunBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

WorkflowRunBrief::WorkflowRunBrief() :
    m_workflowRunIdHasBeenSet(false),
    m_runStartTimeHasBeenSet(false),
    m_runStateHasBeenSet(false),
    m_errorCodeStringHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowRunBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowRunId") && !value["WorkflowRunId"].IsNull())
    {
        if (!value["WorkflowRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunBrief.WorkflowRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowRunId = string(value["WorkflowRunId"].GetString());
        m_workflowRunIdHasBeenSet = true;
    }

    if (value.HasMember("RunStartTime") && !value["RunStartTime"].IsNull())
    {
        if (!value["RunStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunBrief.RunStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runStartTime = string(value["RunStartTime"].GetString());
        m_runStartTimeHasBeenSet = true;
    }

    if (value.HasMember("RunState") && !value["RunState"].IsNull())
    {
        if (!value["RunState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunBrief.RunState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runState = string(value["RunState"].GetString());
        m_runStateHasBeenSet = true;
    }

    if (value.HasMember("ErrorCodeString") && !value["ErrorCodeString"].IsNull())
    {
        if (!value["ErrorCodeString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunBrief.ErrorCodeString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCodeString = string(value["ErrorCodeString"].GetString());
        m_errorCodeStringHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowRunBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workflowRunIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowRunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowRunId.c_str(), allocator).Move(), allocator);
    }

    if (m_runStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_runStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runState.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCodeString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCodeString.c_str(), allocator).Move(), allocator);
    }

}


string WorkflowRunBrief::GetWorkflowRunId() const
{
    return m_workflowRunId;
}

void WorkflowRunBrief::SetWorkflowRunId(const string& _workflowRunId)
{
    m_workflowRunId = _workflowRunId;
    m_workflowRunIdHasBeenSet = true;
}

bool WorkflowRunBrief::WorkflowRunIdHasBeenSet() const
{
    return m_workflowRunIdHasBeenSet;
}

string WorkflowRunBrief::GetRunStartTime() const
{
    return m_runStartTime;
}

void WorkflowRunBrief::SetRunStartTime(const string& _runStartTime)
{
    m_runStartTime = _runStartTime;
    m_runStartTimeHasBeenSet = true;
}

bool WorkflowRunBrief::RunStartTimeHasBeenSet() const
{
    return m_runStartTimeHasBeenSet;
}

string WorkflowRunBrief::GetRunState() const
{
    return m_runState;
}

void WorkflowRunBrief::SetRunState(const string& _runState)
{
    m_runState = _runState;
    m_runStateHasBeenSet = true;
}

bool WorkflowRunBrief::RunStateHasBeenSet() const
{
    return m_runStateHasBeenSet;
}

string WorkflowRunBrief::GetErrorCodeString() const
{
    return m_errorCodeString;
}

void WorkflowRunBrief::SetErrorCodeString(const string& _errorCodeString)
{
    m_errorCodeString = _errorCodeString;
    m_errorCodeStringHasBeenSet = true;
}

bool WorkflowRunBrief::ErrorCodeStringHasBeenSet() const
{
    return m_errorCodeStringHasBeenSet;
}

