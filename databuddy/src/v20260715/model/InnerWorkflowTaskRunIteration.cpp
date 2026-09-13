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

#include <tencentcloud/databuddy/v20260715/model/InnerWorkflowTaskRunIteration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

InnerWorkflowTaskRunIteration::InnerWorkflowTaskRunIteration() :
    m_workflowRunIdHasBeenSet(false),
    m_iterationIndexHasBeenSet(false),
    m_runStartTimeHasBeenSet(false),
    m_runEndTimeHasBeenSet(false),
    m_runStateHasBeenSet(false),
    m_runCostTimeHasBeenSet(false),
    m_workflowParamsHasBeenSet(false),
    m_errorCodeStringHasBeenSet(false),
    m_innerTaskRunHasBeenSet(false)
{
}

CoreInternalOutcome InnerWorkflowTaskRunIteration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowRunId") && !value["WorkflowRunId"].IsNull())
    {
        if (!value["WorkflowRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRunIteration.WorkflowRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowRunId = string(value["WorkflowRunId"].GetString());
        m_workflowRunIdHasBeenSet = true;
    }

    if (value.HasMember("IterationIndex") && !value["IterationIndex"].IsNull())
    {
        if (!value["IterationIndex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRunIteration.IterationIndex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iterationIndex = string(value["IterationIndex"].GetString());
        m_iterationIndexHasBeenSet = true;
    }

    if (value.HasMember("RunStartTime") && !value["RunStartTime"].IsNull())
    {
        if (!value["RunStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRunIteration.RunStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runStartTime = string(value["RunStartTime"].GetString());
        m_runStartTimeHasBeenSet = true;
    }

    if (value.HasMember("RunEndTime") && !value["RunEndTime"].IsNull())
    {
        if (!value["RunEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRunIteration.RunEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runEndTime = string(value["RunEndTime"].GetString());
        m_runEndTimeHasBeenSet = true;
    }

    if (value.HasMember("RunState") && !value["RunState"].IsNull())
    {
        if (!value["RunState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRunIteration.RunState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runState = string(value["RunState"].GetString());
        m_runStateHasBeenSet = true;
    }

    if (value.HasMember("RunCostTime") && !value["RunCostTime"].IsNull())
    {
        if (!value["RunCostTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRunIteration.RunCostTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runCostTime = string(value["RunCostTime"].GetString());
        m_runCostTimeHasBeenSet = true;
    }

    if (value.HasMember("WorkflowParams") && !value["WorkflowParams"].IsNull())
    {
        if (!value["WorkflowParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRunIteration.WorkflowParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowParams = string(value["WorkflowParams"].GetString());
        m_workflowParamsHasBeenSet = true;
    }

    if (value.HasMember("ErrorCodeString") && !value["ErrorCodeString"].IsNull())
    {
        if (!value["ErrorCodeString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRunIteration.ErrorCodeString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCodeString = string(value["ErrorCodeString"].GetString());
        m_errorCodeStringHasBeenSet = true;
    }

    if (value.HasMember("InnerTaskRun") && !value["InnerTaskRun"].IsNull())
    {
        if (!value["InnerTaskRun"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskRunIteration.InnerTaskRun` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_innerTaskRun.Deserialize(value["InnerTaskRun"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_innerTaskRunHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InnerWorkflowTaskRunIteration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workflowRunIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowRunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowRunId.c_str(), allocator).Move(), allocator);
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

    if (m_workflowParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowParams.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCodeString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCodeString.c_str(), allocator).Move(), allocator);
    }

    if (m_innerTaskRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerTaskRun";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_innerTaskRun.ToJsonObject(value[key.c_str()], allocator);
    }

}


string InnerWorkflowTaskRunIteration::GetWorkflowRunId() const
{
    return m_workflowRunId;
}

void InnerWorkflowTaskRunIteration::SetWorkflowRunId(const string& _workflowRunId)
{
    m_workflowRunId = _workflowRunId;
    m_workflowRunIdHasBeenSet = true;
}

bool InnerWorkflowTaskRunIteration::WorkflowRunIdHasBeenSet() const
{
    return m_workflowRunIdHasBeenSet;
}

string InnerWorkflowTaskRunIteration::GetIterationIndex() const
{
    return m_iterationIndex;
}

void InnerWorkflowTaskRunIteration::SetIterationIndex(const string& _iterationIndex)
{
    m_iterationIndex = _iterationIndex;
    m_iterationIndexHasBeenSet = true;
}

bool InnerWorkflowTaskRunIteration::IterationIndexHasBeenSet() const
{
    return m_iterationIndexHasBeenSet;
}

string InnerWorkflowTaskRunIteration::GetRunStartTime() const
{
    return m_runStartTime;
}

void InnerWorkflowTaskRunIteration::SetRunStartTime(const string& _runStartTime)
{
    m_runStartTime = _runStartTime;
    m_runStartTimeHasBeenSet = true;
}

bool InnerWorkflowTaskRunIteration::RunStartTimeHasBeenSet() const
{
    return m_runStartTimeHasBeenSet;
}

string InnerWorkflowTaskRunIteration::GetRunEndTime() const
{
    return m_runEndTime;
}

void InnerWorkflowTaskRunIteration::SetRunEndTime(const string& _runEndTime)
{
    m_runEndTime = _runEndTime;
    m_runEndTimeHasBeenSet = true;
}

bool InnerWorkflowTaskRunIteration::RunEndTimeHasBeenSet() const
{
    return m_runEndTimeHasBeenSet;
}

string InnerWorkflowTaskRunIteration::GetRunState() const
{
    return m_runState;
}

void InnerWorkflowTaskRunIteration::SetRunState(const string& _runState)
{
    m_runState = _runState;
    m_runStateHasBeenSet = true;
}

bool InnerWorkflowTaskRunIteration::RunStateHasBeenSet() const
{
    return m_runStateHasBeenSet;
}

string InnerWorkflowTaskRunIteration::GetRunCostTime() const
{
    return m_runCostTime;
}

void InnerWorkflowTaskRunIteration::SetRunCostTime(const string& _runCostTime)
{
    m_runCostTime = _runCostTime;
    m_runCostTimeHasBeenSet = true;
}

bool InnerWorkflowTaskRunIteration::RunCostTimeHasBeenSet() const
{
    return m_runCostTimeHasBeenSet;
}

string InnerWorkflowTaskRunIteration::GetWorkflowParams() const
{
    return m_workflowParams;
}

void InnerWorkflowTaskRunIteration::SetWorkflowParams(const string& _workflowParams)
{
    m_workflowParams = _workflowParams;
    m_workflowParamsHasBeenSet = true;
}

bool InnerWorkflowTaskRunIteration::WorkflowParamsHasBeenSet() const
{
    return m_workflowParamsHasBeenSet;
}

string InnerWorkflowTaskRunIteration::GetErrorCodeString() const
{
    return m_errorCodeString;
}

void InnerWorkflowTaskRunIteration::SetErrorCodeString(const string& _errorCodeString)
{
    m_errorCodeString = _errorCodeString;
    m_errorCodeStringHasBeenSet = true;
}

bool InnerWorkflowTaskRunIteration::ErrorCodeStringHasBeenSet() const
{
    return m_errorCodeStringHasBeenSet;
}

InnerWorkflowTaskRunIterationBrief InnerWorkflowTaskRunIteration::GetInnerTaskRun() const
{
    return m_innerTaskRun;
}

void InnerWorkflowTaskRunIteration::SetInnerTaskRun(const InnerWorkflowTaskRunIterationBrief& _innerTaskRun)
{
    m_innerTaskRun = _innerTaskRun;
    m_innerTaskRunHasBeenSet = true;
}

bool InnerWorkflowTaskRunIteration::InnerTaskRunHasBeenSet() const
{
    return m_innerTaskRunHasBeenSet;
}

