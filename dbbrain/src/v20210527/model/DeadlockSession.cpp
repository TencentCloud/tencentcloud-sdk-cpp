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

#include <tencentcloud/dbbrain/v20210527/model/DeadlockSession.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DeadlockSession::DeadlockSession() :
    m_sqlFingerprintHasBeenSet(false),
    m_loginNameHasBeenSet(false),
    m_framesHasBeenSet(false),
    m_isolationLevelHasBeenSet(false),
    m_processStatusHasBeenSet(false),
    m_clientAppHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_lockHoldHasBeenSet(false),
    m_sqlTextHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_isVictimHasBeenSet(false),
    m_waitTimeMsHasBeenSet(false),
    m_lastTransStartedHasBeenSet(false),
    m_executionContextIdHasBeenSet(false),
    m_processIdHasBeenSet(false),
    m_clientAppNormalizedHasBeenSet(false),
    m_lockRequestHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

CoreInternalOutcome DeadlockSession::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SqlFingerprint") && !value["SqlFingerprint"].IsNull())
    {
        if (!value["SqlFingerprint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockSession.SqlFingerprint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlFingerprint = string(value["SqlFingerprint"].GetString());
        m_sqlFingerprintHasBeenSet = true;
    }

    if (value.HasMember("LoginName") && !value["LoginName"].IsNull())
    {
        if (!value["LoginName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockSession.LoginName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loginName = string(value["LoginName"].GetString());
        m_loginNameHasBeenSet = true;
    }

    if (value.HasMember("Frames") && !value["Frames"].IsNull())
    {
        if (!value["Frames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeadlockSession.Frames` is not array type"));

        const rapidjson::Value &tmpValue = value["Frames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeadlockFrame item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_frames.push_back(item);
        }
        m_framesHasBeenSet = true;
    }

    if (value.HasMember("IsolationLevel") && !value["IsolationLevel"].IsNull())
    {
        if (!value["IsolationLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockSession.IsolationLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolationLevel = string(value["IsolationLevel"].GetString());
        m_isolationLevelHasBeenSet = true;
    }

    if (value.HasMember("ProcessStatus") && !value["ProcessStatus"].IsNull())
    {
        if (!value["ProcessStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockSession.ProcessStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processStatus = string(value["ProcessStatus"].GetString());
        m_processStatusHasBeenSet = true;
    }

    if (value.HasMember("ClientApp") && !value["ClientApp"].IsNull())
    {
        if (!value["ClientApp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockSession.ClientApp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientApp = string(value["ClientApp"].GetString());
        m_clientAppHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockSession.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockSession.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("LockHold") && !value["LockHold"].IsNull())
    {
        if (!value["LockHold"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeadlockSession.LockHold` is not array type"));

        const rapidjson::Value &tmpValue = value["LockHold"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_lockHold.push_back((*itr).GetString());
        }
        m_lockHoldHasBeenSet = true;
    }

    if (value.HasMember("SqlText") && !value["SqlText"].IsNull())
    {
        if (!value["SqlText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockSession.SqlText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlText = string(value["SqlText"].GetString());
        m_sqlTextHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockSession.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("DatabaseId") && !value["DatabaseId"].IsNull())
    {
        if (!value["DatabaseId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockSession.DatabaseId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_databaseId = value["DatabaseId"].GetInt64();
        m_databaseIdHasBeenSet = true;
    }

    if (value.HasMember("IsVictim") && !value["IsVictim"].IsNull())
    {
        if (!value["IsVictim"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockSession.IsVictim` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isVictim = value["IsVictim"].GetBool();
        m_isVictimHasBeenSet = true;
    }

    if (value.HasMember("WaitTimeMs") && !value["WaitTimeMs"].IsNull())
    {
        if (!value["WaitTimeMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockSession.WaitTimeMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_waitTimeMs = value["WaitTimeMs"].GetInt64();
        m_waitTimeMsHasBeenSet = true;
    }

    if (value.HasMember("LastTransStarted") && !value["LastTransStarted"].IsNull())
    {
        if (!value["LastTransStarted"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockSession.LastTransStarted` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTransStarted = string(value["LastTransStarted"].GetString());
        m_lastTransStartedHasBeenSet = true;
    }

    if (value.HasMember("ExecutionContextId") && !value["ExecutionContextId"].IsNull())
    {
        if (!value["ExecutionContextId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockSession.ExecutionContextId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executionContextId = value["ExecutionContextId"].GetInt64();
        m_executionContextIdHasBeenSet = true;
    }

    if (value.HasMember("ProcessId") && !value["ProcessId"].IsNull())
    {
        if (!value["ProcessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockSession.ProcessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processId = string(value["ProcessId"].GetString());
        m_processIdHasBeenSet = true;
    }

    if (value.HasMember("ClientAppNormalized") && !value["ClientAppNormalized"].IsNull())
    {
        if (!value["ClientAppNormalized"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockSession.ClientAppNormalized` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientAppNormalized = string(value["ClientAppNormalized"].GetString());
        m_clientAppNormalizedHasBeenSet = true;
    }

    if (value.HasMember("LockRequest") && !value["LockRequest"].IsNull())
    {
        if (!value["LockRequest"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeadlockSession.LockRequest` is not array type"));

        const rapidjson::Value &tmpValue = value["LockRequest"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_lockRequest.push_back((*itr).GetString());
        }
        m_lockRequestHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlockSession.SessionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = value["SessionId"].GetInt64();
        m_sessionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeadlockSession::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sqlFingerprintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlFingerprint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlFingerprint.c_str(), allocator).Move(), allocator);
    }

    if (m_loginNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loginName.c_str(), allocator).Move(), allocator);
    }

    if (m_framesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Frames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_frames.begin(); itr != m_frames.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isolationLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolationLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolationLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_processStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_clientAppHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientApp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientApp.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_lockHoldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockHold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_lockHold.begin(); itr != m_lockHold.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sqlTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlText.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_databaseId, allocator);
    }

    if (m_isVictimHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsVictim";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isVictim, allocator);
    }

    if (m_waitTimeMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitTimeMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_waitTimeMs, allocator);
    }

    if (m_lastTransStartedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTransStarted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTransStarted.c_str(), allocator).Move(), allocator);
    }

    if (m_executionContextIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionContextId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executionContextId, allocator);
    }

    if (m_processIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientAppNormalizedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientAppNormalized";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientAppNormalized.c_str(), allocator).Move(), allocator);
    }

    if (m_lockRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_lockRequest.begin(); itr != m_lockRequest.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionId, allocator);
    }

}


string DeadlockSession::GetSqlFingerprint() const
{
    return m_sqlFingerprint;
}

void DeadlockSession::SetSqlFingerprint(const string& _sqlFingerprint)
{
    m_sqlFingerprint = _sqlFingerprint;
    m_sqlFingerprintHasBeenSet = true;
}

bool DeadlockSession::SqlFingerprintHasBeenSet() const
{
    return m_sqlFingerprintHasBeenSet;
}

string DeadlockSession::GetLoginName() const
{
    return m_loginName;
}

void DeadlockSession::SetLoginName(const string& _loginName)
{
    m_loginName = _loginName;
    m_loginNameHasBeenSet = true;
}

bool DeadlockSession::LoginNameHasBeenSet() const
{
    return m_loginNameHasBeenSet;
}

vector<DeadlockFrame> DeadlockSession::GetFrames() const
{
    return m_frames;
}

void DeadlockSession::SetFrames(const vector<DeadlockFrame>& _frames)
{
    m_frames = _frames;
    m_framesHasBeenSet = true;
}

bool DeadlockSession::FramesHasBeenSet() const
{
    return m_framesHasBeenSet;
}

string DeadlockSession::GetIsolationLevel() const
{
    return m_isolationLevel;
}

void DeadlockSession::SetIsolationLevel(const string& _isolationLevel)
{
    m_isolationLevel = _isolationLevel;
    m_isolationLevelHasBeenSet = true;
}

bool DeadlockSession::IsolationLevelHasBeenSet() const
{
    return m_isolationLevelHasBeenSet;
}

string DeadlockSession::GetProcessStatus() const
{
    return m_processStatus;
}

void DeadlockSession::SetProcessStatus(const string& _processStatus)
{
    m_processStatus = _processStatus;
    m_processStatusHasBeenSet = true;
}

bool DeadlockSession::ProcessStatusHasBeenSet() const
{
    return m_processStatusHasBeenSet;
}

string DeadlockSession::GetClientApp() const
{
    return m_clientApp;
}

void DeadlockSession::SetClientApp(const string& _clientApp)
{
    m_clientApp = _clientApp;
    m_clientAppHasBeenSet = true;
}

bool DeadlockSession::ClientAppHasBeenSet() const
{
    return m_clientAppHasBeenSet;
}

int64_t DeadlockSession::GetPriority() const
{
    return m_priority;
}

void DeadlockSession::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool DeadlockSession::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string DeadlockSession::GetDatabaseName() const
{
    return m_databaseName;
}

void DeadlockSession::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool DeadlockSession::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

vector<string> DeadlockSession::GetLockHold() const
{
    return m_lockHold;
}

void DeadlockSession::SetLockHold(const vector<string>& _lockHold)
{
    m_lockHold = _lockHold;
    m_lockHoldHasBeenSet = true;
}

bool DeadlockSession::LockHoldHasBeenSet() const
{
    return m_lockHoldHasBeenSet;
}

string DeadlockSession::GetSqlText() const
{
    return m_sqlText;
}

void DeadlockSession::SetSqlText(const string& _sqlText)
{
    m_sqlText = _sqlText;
    m_sqlTextHasBeenSet = true;
}

bool DeadlockSession::SqlTextHasBeenSet() const
{
    return m_sqlTextHasBeenSet;
}

string DeadlockSession::GetHost() const
{
    return m_host;
}

void DeadlockSession::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DeadlockSession::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

int64_t DeadlockSession::GetDatabaseId() const
{
    return m_databaseId;
}

void DeadlockSession::SetDatabaseId(const int64_t& _databaseId)
{
    m_databaseId = _databaseId;
    m_databaseIdHasBeenSet = true;
}

bool DeadlockSession::DatabaseIdHasBeenSet() const
{
    return m_databaseIdHasBeenSet;
}

bool DeadlockSession::GetIsVictim() const
{
    return m_isVictim;
}

void DeadlockSession::SetIsVictim(const bool& _isVictim)
{
    m_isVictim = _isVictim;
    m_isVictimHasBeenSet = true;
}

bool DeadlockSession::IsVictimHasBeenSet() const
{
    return m_isVictimHasBeenSet;
}

int64_t DeadlockSession::GetWaitTimeMs() const
{
    return m_waitTimeMs;
}

void DeadlockSession::SetWaitTimeMs(const int64_t& _waitTimeMs)
{
    m_waitTimeMs = _waitTimeMs;
    m_waitTimeMsHasBeenSet = true;
}

bool DeadlockSession::WaitTimeMsHasBeenSet() const
{
    return m_waitTimeMsHasBeenSet;
}

string DeadlockSession::GetLastTransStarted() const
{
    return m_lastTransStarted;
}

void DeadlockSession::SetLastTransStarted(const string& _lastTransStarted)
{
    m_lastTransStarted = _lastTransStarted;
    m_lastTransStartedHasBeenSet = true;
}

bool DeadlockSession::LastTransStartedHasBeenSet() const
{
    return m_lastTransStartedHasBeenSet;
}

int64_t DeadlockSession::GetExecutionContextId() const
{
    return m_executionContextId;
}

void DeadlockSession::SetExecutionContextId(const int64_t& _executionContextId)
{
    m_executionContextId = _executionContextId;
    m_executionContextIdHasBeenSet = true;
}

bool DeadlockSession::ExecutionContextIdHasBeenSet() const
{
    return m_executionContextIdHasBeenSet;
}

string DeadlockSession::GetProcessId() const
{
    return m_processId;
}

void DeadlockSession::SetProcessId(const string& _processId)
{
    m_processId = _processId;
    m_processIdHasBeenSet = true;
}

bool DeadlockSession::ProcessIdHasBeenSet() const
{
    return m_processIdHasBeenSet;
}

string DeadlockSession::GetClientAppNormalized() const
{
    return m_clientAppNormalized;
}

void DeadlockSession::SetClientAppNormalized(const string& _clientAppNormalized)
{
    m_clientAppNormalized = _clientAppNormalized;
    m_clientAppNormalizedHasBeenSet = true;
}

bool DeadlockSession::ClientAppNormalizedHasBeenSet() const
{
    return m_clientAppNormalizedHasBeenSet;
}

vector<string> DeadlockSession::GetLockRequest() const
{
    return m_lockRequest;
}

void DeadlockSession::SetLockRequest(const vector<string>& _lockRequest)
{
    m_lockRequest = _lockRequest;
    m_lockRequestHasBeenSet = true;
}

bool DeadlockSession::LockRequestHasBeenSet() const
{
    return m_lockRequestHasBeenSet;
}

int64_t DeadlockSession::GetSessionId() const
{
    return m_sessionId;
}

void DeadlockSession::SetSessionId(const int64_t& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool DeadlockSession::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

