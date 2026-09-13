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

#include <tencentcloud/databuddy/v20260715/model/InnerWorkflowTaskRunIterationBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

InnerWorkflowTaskRunIterationBrief::InnerWorkflowTaskRunIterationBrief() :
    m_workflowTaskRunIdHasBeenSet(false),
    m_iterationIndexHasBeenSet(false),
    m_runStartTimeHasBeenSet(false),
    m_runEndTimeHasBeenSet(false),
    m_runStateHasBeenSet(false),
    m_runCostTimeHasBeenSet(false),
    m_taskParamsHasBeenSet(false),
    m_errorCodeStringHasBeenSet(false)
{
}

CoreInternalOutcome InnerWorkflowTaskRunIterationBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowTaskRunId") && !value["WorkflowTaskRunId"].IsNull())
    {
        if (!value["WorkflowTaskRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRunIterationBrief.WorkflowTaskRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowTaskRunId = string(value["WorkflowTaskRunId"].GetString());
        m_workflowTaskRunIdHasBeenSet = true;
    }

    if (value.HasMember("IterationIndex") && !value["IterationIndex"].IsNull())
    {
        if (!value["IterationIndex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRunIterationBrief.IterationIndex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iterationIndex = string(value["IterationIndex"].GetString());
        m_iterationIndexHasBeenSet = true;
    }

    if (value.HasMember("RunStartTime") && !value["RunStartTime"].IsNull())
    {
        if (!value["RunStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRunIterationBrief.RunStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runStartTime = string(value["RunStartTime"].GetString());
        m_runStartTimeHasBeenSet = true;
    }

    if (value.HasMember("RunEndTime") && !value["RunEndTime"].IsNull())
    {
        if (!value["RunEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRunIterationBrief.RunEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runEndTime = string(value["RunEndTime"].GetString());
        m_runEndTimeHasBeenSet = true;
    }

    if (value.HasMember("RunState") && !value["RunState"].IsNull())
    {
        if (!value["RunState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRunIterationBrief.RunState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runState = string(value["RunState"].GetString());
        m_runStateHasBeenSet = true;
    }

    if (value.HasMember("RunCostTime") && !value["RunCostTime"].IsNull())
    {
        if (!value["RunCostTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRunIterationBrief.RunCostTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runCostTime = string(value["RunCostTime"].GetString());
        m_runCostTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskParams") && !value["TaskParams"].IsNull())
    {
        if (!value["TaskParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRunIterationBrief.TaskParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskParams = string(value["TaskParams"].GetString());
        m_taskParamsHasBeenSet = true;
    }

    if (value.HasMember("ErrorCodeString") && !value["ErrorCodeString"].IsNull())
    {
        if (!value["ErrorCodeString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRunIterationBrief.ErrorCodeString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCodeString = string(value["ErrorCodeString"].GetString());
        m_errorCodeStringHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InnerWorkflowTaskRunIterationBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workflowTaskRunIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowTaskRunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowTaskRunId.c_str(), allocator).Move(), allocator);
    }

    if (m_iterationIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IterationIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iterationIndex.c_str(), allocator).Move(), allocator);
    }

    if (m_runStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_runEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_runStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runState.c_str(), allocator).Move(), allocator);
    }

    if (m_runCostTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunCostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runCostTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskParams.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCodeString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCodeString.c_str(), allocator).Move(), allocator);
    }

}


string InnerWorkflowTaskRunIterationBrief::GetWorkflowTaskRunId() const
{
    return m_workflowTaskRunId;
}

void InnerWorkflowTaskRunIterationBrief::SetWorkflowTaskRunId(const string& _workflowTaskRunId)
{
    m_workflowTaskRunId = _workflowTaskRunId;
    m_workflowTaskRunIdHasBeenSet = true;
}

bool InnerWorkflowTaskRunIterationBrief::WorkflowTaskRunIdHasBeenSet() const
{
    return m_workflowTaskRunIdHasBeenSet;
}

string InnerWorkflowTaskRunIterationBrief::GetIterationIndex() const
{
    return m_iterationIndex;
}

void InnerWorkflowTaskRunIterationBrief::SetIterationIndex(const string& _iterationIndex)
{
    m_iterationIndex = _iterationIndex;
    m_iterationIndexHasBeenSet = true;
}

bool InnerWorkflowTaskRunIterationBrief::IterationIndexHasBeenSet() const
{
    return m_iterationIndexHasBeenSet;
}

string InnerWorkflowTaskRunIterationBrief::GetRunStartTime() const
{
    return m_runStartTime;
}

void InnerWorkflowTaskRunIterationBrief::SetRunStartTime(const string& _runStartTime)
{
    m_runStartTime = _runStartTime;
    m_runStartTimeHasBeenSet = true;
}

bool InnerWorkflowTaskRunIterationBrief::RunStartTimeHasBeenSet() const
{
    return m_runStartTimeHasBeenSet;
}

string InnerWorkflowTaskRunIterationBrief::GetRunEndTime() const
{
    return m_runEndTime;
}

void InnerWorkflowTaskRunIterationBrief::SetRunEndTime(const string& _runEndTime)
{
    m_runEndTime = _runEndTime;
    m_runEndTimeHasBeenSet = true;
}

bool InnerWorkflowTaskRunIterationBrief::RunEndTimeHasBeenSet() const
{
    return m_runEndTimeHasBeenSet;
}

string InnerWorkflowTaskRunIterationBrief::GetRunState() const
{
    return m_runState;
}

void InnerWorkflowTaskRunIterationBrief::SetRunState(const string& _runState)
{
    m_runState = _runState;
    m_runStateHasBeenSet = true;
}

bool InnerWorkflowTaskRunIterationBrief::RunStateHasBeenSet() const
{
    return m_runStateHasBeenSet;
}

string InnerWorkflowTaskRunIterationBrief::GetRunCostTime() const
{
    return m_runCostTime;
}

void InnerWorkflowTaskRunIterationBrief::SetRunCostTime(const string& _runCostTime)
{
    m_runCostTime = _runCostTime;
    m_runCostTimeHasBeenSet = true;
}

bool InnerWorkflowTaskRunIterationBrief::RunCostTimeHasBeenSet() const
{
    return m_runCostTimeHasBeenSet;
}

string InnerWorkflowTaskRunIterationBrief::GetTaskParams() const
{
    return m_taskParams;
}

void InnerWorkflowTaskRunIterationBrief::SetTaskParams(const string& _taskParams)
{
    m_taskParams = _taskParams;
    m_taskParamsHasBeenSet = true;
}

bool InnerWorkflowTaskRunIterationBrief::TaskParamsHasBeenSet() const
{
    return m_taskParamsHasBeenSet;
}

string InnerWorkflowTaskRunIterationBrief::GetErrorCodeString() const
{
    return m_errorCodeString;
}

void InnerWorkflowTaskRunIterationBrief::SetErrorCodeString(const string& _errorCodeString)
{
    m_errorCodeString = _errorCodeString;
    m_errorCodeStringHasBeenSet = true;
}

bool InnerWorkflowTaskRunIterationBrief::ErrorCodeStringHasBeenSet() const
{
    return m_errorCodeStringHasBeenSet;
}

