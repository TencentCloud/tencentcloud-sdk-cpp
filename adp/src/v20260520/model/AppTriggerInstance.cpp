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

#include <tencentcloud/adp/v20260520/model/AppTriggerInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppTriggerInstance::AppTriggerInstance() :
    m_appIdHasBeenSet(false),
    m_conversationIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_finishedAtHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_resultCodeHasBeenSet(false),
    m_resultSummaryHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_traceIdHasBeenSet(false),
    m_triggerIdHasBeenSet(false),
    m_workflowRunIdHasBeenSet(false)
{
}

CoreInternalOutcome AppTriggerInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerInstance.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ConversationId") && !value["ConversationId"].IsNull())
    {
        if (!value["ConversationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerInstance.ConversationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conversationId = string(value["ConversationId"].GetString());
        m_conversationIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerInstance.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("FinishedAt") && !value["FinishedAt"].IsNull())
    {
        if (!value["FinishedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerInstance.FinishedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishedAt = string(value["FinishedAt"].GetString());
        m_finishedAtHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerInstance.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }

    if (value.HasMember("ResultCode") && !value["ResultCode"].IsNull())
    {
        if (!value["ResultCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerInstance.ResultCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultCode = string(value["ResultCode"].GetString());
        m_resultCodeHasBeenSet = true;
    }

    if (value.HasMember("ResultSummary") && !value["ResultSummary"].IsNull())
    {
        if (!value["ResultSummary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerInstance.ResultSummary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultSummary = string(value["ResultSummary"].GetString());
        m_resultSummaryHasBeenSet = true;
    }

    if (value.HasMember("RunId") && !value["RunId"].IsNull())
    {
        if (!value["RunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerInstance.RunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runId = string(value["RunId"].GetString());
        m_runIdHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerInstance.Source` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetInt64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("StartedAt") && !value["StartedAt"].IsNull())
    {
        if (!value["StartedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerInstance.StartedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startedAt = string(value["StartedAt"].GetString());
        m_startedAtHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerInstance.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TraceId") && !value["TraceId"].IsNull())
    {
        if (!value["TraceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerInstance.TraceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceId = string(value["TraceId"].GetString());
        m_traceIdHasBeenSet = true;
    }

    if (value.HasMember("TriggerId") && !value["TriggerId"].IsNull())
    {
        if (!value["TriggerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerInstance.TriggerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerId = string(value["TriggerId"].GetString());
        m_triggerIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowRunId") && !value["WorkflowRunId"].IsNull())
    {
        if (!value["WorkflowRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerInstance.WorkflowRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowRunId = string(value["WorkflowRunId"].GetString());
        m_workflowRunIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppTriggerInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_conversationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConversationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conversationId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_finishedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_requestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestId.c_str(), allocator).Move(), allocator);
    }

    if (m_resultCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultCode.c_str(), allocator).Move(), allocator);
    }

    if (m_resultSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultSummary.c_str(), allocator).Move(), allocator);
    }

    if (m_runIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_startedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_traceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceId.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowRunIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowRunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowRunId.c_str(), allocator).Move(), allocator);
    }

}


string AppTriggerInstance::GetAppId() const
{
    return m_appId;
}

void AppTriggerInstance::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AppTriggerInstance::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string AppTriggerInstance::GetConversationId() const
{
    return m_conversationId;
}

void AppTriggerInstance::SetConversationId(const string& _conversationId)
{
    m_conversationId = _conversationId;
    m_conversationIdHasBeenSet = true;
}

bool AppTriggerInstance::ConversationIdHasBeenSet() const
{
    return m_conversationIdHasBeenSet;
}

string AppTriggerInstance::GetCreatedAt() const
{
    return m_createdAt;
}

void AppTriggerInstance::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool AppTriggerInstance::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string AppTriggerInstance::GetFinishedAt() const
{
    return m_finishedAt;
}

void AppTriggerInstance::SetFinishedAt(const string& _finishedAt)
{
    m_finishedAt = _finishedAt;
    m_finishedAtHasBeenSet = true;
}

bool AppTriggerInstance::FinishedAtHasBeenSet() const
{
    return m_finishedAtHasBeenSet;
}

string AppTriggerInstance::GetInstanceId() const
{
    return m_instanceId;
}

void AppTriggerInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AppTriggerInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AppTriggerInstance::GetRequestId() const
{
    return m_requestId;
}

void AppTriggerInstance::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool AppTriggerInstance::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

string AppTriggerInstance::GetResultCode() const
{
    return m_resultCode;
}

void AppTriggerInstance::SetResultCode(const string& _resultCode)
{
    m_resultCode = _resultCode;
    m_resultCodeHasBeenSet = true;
}

bool AppTriggerInstance::ResultCodeHasBeenSet() const
{
    return m_resultCodeHasBeenSet;
}

string AppTriggerInstance::GetResultSummary() const
{
    return m_resultSummary;
}

void AppTriggerInstance::SetResultSummary(const string& _resultSummary)
{
    m_resultSummary = _resultSummary;
    m_resultSummaryHasBeenSet = true;
}

bool AppTriggerInstance::ResultSummaryHasBeenSet() const
{
    return m_resultSummaryHasBeenSet;
}

string AppTriggerInstance::GetRunId() const
{
    return m_runId;
}

void AppTriggerInstance::SetRunId(const string& _runId)
{
    m_runId = _runId;
    m_runIdHasBeenSet = true;
}

bool AppTriggerInstance::RunIdHasBeenSet() const
{
    return m_runIdHasBeenSet;
}

int64_t AppTriggerInstance::GetSource() const
{
    return m_source;
}

void AppTriggerInstance::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool AppTriggerInstance::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string AppTriggerInstance::GetStartedAt() const
{
    return m_startedAt;
}

void AppTriggerInstance::SetStartedAt(const string& _startedAt)
{
    m_startedAt = _startedAt;
    m_startedAtHasBeenSet = true;
}

bool AppTriggerInstance::StartedAtHasBeenSet() const
{
    return m_startedAtHasBeenSet;
}

int64_t AppTriggerInstance::GetStatus() const
{
    return m_status;
}

void AppTriggerInstance::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AppTriggerInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AppTriggerInstance::GetTraceId() const
{
    return m_traceId;
}

void AppTriggerInstance::SetTraceId(const string& _traceId)
{
    m_traceId = _traceId;
    m_traceIdHasBeenSet = true;
}

bool AppTriggerInstance::TraceIdHasBeenSet() const
{
    return m_traceIdHasBeenSet;
}

string AppTriggerInstance::GetTriggerId() const
{
    return m_triggerId;
}

void AppTriggerInstance::SetTriggerId(const string& _triggerId)
{
    m_triggerId = _triggerId;
    m_triggerIdHasBeenSet = true;
}

bool AppTriggerInstance::TriggerIdHasBeenSet() const
{
    return m_triggerIdHasBeenSet;
}

string AppTriggerInstance::GetWorkflowRunId() const
{
    return m_workflowRunId;
}

void AppTriggerInstance::SetWorkflowRunId(const string& _workflowRunId)
{
    m_workflowRunId = _workflowRunId;
    m_workflowRunIdHasBeenSet = true;
}

bool AppTriggerInstance::WorkflowRunIdHasBeenSet() const
{
    return m_workflowRunIdHasBeenSet;
}

