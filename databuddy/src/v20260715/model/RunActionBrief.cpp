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

#include <tencentcloud/databuddy/v20260715/model/RunActionBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

RunActionBrief::RunActionBrief() :
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_runActionIdHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_opStatusHasBeenSet(false),
    m_workflowRunIdHasBeenSet(false)
{
}

CoreInternalOutcome RunActionBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunActionBrief.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunActionBrief.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("RunActionId") && !value["RunActionId"].IsNull())
    {
        if (!value["RunActionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunActionBrief.RunActionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runActionId = string(value["RunActionId"].GetString());
        m_runActionIdHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunActionBrief.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("OpStatus") && !value["OpStatus"].IsNull())
    {
        if (!value["OpStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RunActionBrief.OpStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_opStatus = value["OpStatus"].GetBool();
        m_opStatusHasBeenSet = true;
    }

    if (value.HasMember("WorkflowRunId") && !value["WorkflowRunId"].IsNull())
    {
        if (!value["WorkflowRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunActionBrief.WorkflowRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowRunId = string(value["WorkflowRunId"].GetString());
        m_workflowRunIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RunActionBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_runActionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunActionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runActionId.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_opStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_opStatus, allocator);
    }

    if (m_workflowRunIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowRunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowRunId.c_str(), allocator).Move(), allocator);
    }

}


string RunActionBrief::GetWorkflowId() const
{
    return m_workflowId;
}

void RunActionBrief::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool RunActionBrief::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string RunActionBrief::GetWorkflowName() const
{
    return m_workflowName;
}

void RunActionBrief::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool RunActionBrief::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string RunActionBrief::GetRunActionId() const
{
    return m_runActionId;
}

void RunActionBrief::SetRunActionId(const string& _runActionId)
{
    m_runActionId = _runActionId;
    m_runActionIdHasBeenSet = true;
}

bool RunActionBrief::RunActionIdHasBeenSet() const
{
    return m_runActionIdHasBeenSet;
}

string RunActionBrief::GetErrorMessage() const
{
    return m_errorMessage;
}

void RunActionBrief::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool RunActionBrief::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

bool RunActionBrief::GetOpStatus() const
{
    return m_opStatus;
}

void RunActionBrief::SetOpStatus(const bool& _opStatus)
{
    m_opStatus = _opStatus;
    m_opStatusHasBeenSet = true;
}

bool RunActionBrief::OpStatusHasBeenSet() const
{
    return m_opStatusHasBeenSet;
}

string RunActionBrief::GetWorkflowRunId() const
{
    return m_workflowRunId;
}

void RunActionBrief::SetWorkflowRunId(const string& _workflowRunId)
{
    m_workflowRunId = _workflowRunId;
    m_workflowRunIdHasBeenSet = true;
}

bool RunActionBrief::WorkflowRunIdHasBeenSet() const
{
    return m_workflowRunIdHasBeenSet;
}

