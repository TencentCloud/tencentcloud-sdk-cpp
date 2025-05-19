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

#include <tencentcloud/lke/v20231130/model/AgentThought.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentThought::AgentThought() :
    m_sessionIdHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_elapsedHasBeenSet(false),
    m_isWorkflowHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_proceduresHasBeenSet(false),
    m_traceIdHasBeenSet(false),
    m_filesHasBeenSet(false)
{
}

CoreInternalOutcome AgentThought::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentThought.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentThought.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }

    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentThought.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("Elapsed") && !value["Elapsed"].IsNull())
    {
        if (!value["Elapsed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentThought.Elapsed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_elapsed = value["Elapsed"].GetUint64();
        m_elapsedHasBeenSet = true;
    }

    if (value.HasMember("IsWorkflow") && !value["IsWorkflow"].IsNull())
    {
        if (!value["IsWorkflow"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentThought.IsWorkflow` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isWorkflow = value["IsWorkflow"].GetBool();
        m_isWorkflowHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentThought.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("Procedures") && !value["Procedures"].IsNull())
    {
        if (!value["Procedures"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentThought.Procedures` is not array type"));

        const rapidjson::Value &tmpValue = value["Procedures"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentProcedure item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_procedures.push_back(item);
        }
        m_proceduresHasBeenSet = true;
    }

    if (value.HasMember("TraceId") && !value["TraceId"].IsNull())
    {
        if (!value["TraceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentThought.TraceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceId = string(value["TraceId"].GetString());
        m_traceIdHasBeenSet = true;
    }

    if (value.HasMember("Files") && !value["Files"].IsNull())
    {
        if (!value["Files"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentThought.Files` is not array type"));

        const rapidjson::Value &tmpValue = value["Files"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FileInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_files.push_back(item);
        }
        m_filesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentThought::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_requestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_elapsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Elapsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elapsed, allocator);
    }

    if (m_isWorkflowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWorkflow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isWorkflow, allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_proceduresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Procedures";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_procedures.begin(); itr != m_procedures.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_traceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceId.c_str(), allocator).Move(), allocator);
    }

    if (m_filesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Files";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_files.begin(); itr != m_files.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AgentThought::GetSessionId() const
{
    return m_sessionId;
}

void AgentThought::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool AgentThought::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string AgentThought::GetRequestId() const
{
    return m_requestId;
}

void AgentThought::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool AgentThought::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

string AgentThought::GetRecordId() const
{
    return m_recordId;
}

void AgentThought::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool AgentThought::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

uint64_t AgentThought::GetElapsed() const
{
    return m_elapsed;
}

void AgentThought::SetElapsed(const uint64_t& _elapsed)
{
    m_elapsed = _elapsed;
    m_elapsedHasBeenSet = true;
}

bool AgentThought::ElapsedHasBeenSet() const
{
    return m_elapsedHasBeenSet;
}

bool AgentThought::GetIsWorkflow() const
{
    return m_isWorkflow;
}

void AgentThought::SetIsWorkflow(const bool& _isWorkflow)
{
    m_isWorkflow = _isWorkflow;
    m_isWorkflowHasBeenSet = true;
}

bool AgentThought::IsWorkflowHasBeenSet() const
{
    return m_isWorkflowHasBeenSet;
}

string AgentThought::GetWorkflowName() const
{
    return m_workflowName;
}

void AgentThought::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool AgentThought::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

vector<AgentProcedure> AgentThought::GetProcedures() const
{
    return m_procedures;
}

void AgentThought::SetProcedures(const vector<AgentProcedure>& _procedures)
{
    m_procedures = _procedures;
    m_proceduresHasBeenSet = true;
}

bool AgentThought::ProceduresHasBeenSet() const
{
    return m_proceduresHasBeenSet;
}

string AgentThought::GetTraceId() const
{
    return m_traceId;
}

void AgentThought::SetTraceId(const string& _traceId)
{
    m_traceId = _traceId;
    m_traceIdHasBeenSet = true;
}

bool AgentThought::TraceIdHasBeenSet() const
{
    return m_traceIdHasBeenSet;
}

vector<FileInfo> AgentThought::GetFiles() const
{
    return m_files;
}

void AgentThought::SetFiles(const vector<FileInfo>& _files)
{
    m_files = _files;
    m_filesHasBeenSet = true;
}

bool AgentThought::FilesHasBeenSet() const
{
    return m_filesHasBeenSet;
}

