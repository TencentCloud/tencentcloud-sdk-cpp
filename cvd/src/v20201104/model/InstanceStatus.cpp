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

#include <tencentcloud/cvd/v20201104/model/InstanceStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

InstanceStatus::InstanceStatus() :
    m_instanceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sessionStateHasBeenSet(false),
    m_idleSecondsHasBeenSet(false),
    m_statusChangeTimeHasBeenSet(false),
    m_latestOperationHasBeenSet(false),
    m_latestOperationStateHasBeenSet(false)
{
}

CoreInternalOutcome InstanceStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStatus.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SessionState") && !value["SessionState"].IsNull())
    {
        if (!value["SessionState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStatus.SessionState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionState = value["SessionState"].GetInt64();
        m_sessionStateHasBeenSet = true;
    }

    if (value.HasMember("IdleSeconds") && !value["IdleSeconds"].IsNull())
    {
        if (!value["IdleSeconds"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStatus.IdleSeconds` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_idleSeconds = value["IdleSeconds"].GetDouble();
        m_idleSecondsHasBeenSet = true;
    }

    if (value.HasMember("StatusChangeTime") && !value["StatusChangeTime"].IsNull())
    {
        if (!value["StatusChangeTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStatus.StatusChangeTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusChangeTime = value["StatusChangeTime"].GetInt64();
        m_statusChangeTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestOperation") && !value["LatestOperation"].IsNull())
    {
        if (!value["LatestOperation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStatus.LatestOperation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperation = string(value["LatestOperation"].GetString());
        m_latestOperationHasBeenSet = true;
    }

    if (value.HasMember("LatestOperationState") && !value["LatestOperationState"].IsNull())
    {
        if (!value["LatestOperationState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStatus.LatestOperationState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperationState = string(value["LatestOperationState"].GetString());
        m_latestOperationStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionState, allocator);
    }

    if (m_idleSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idleSeconds, allocator);
    }

    if (m_statusChangeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusChangeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusChangeTime, allocator);
    }

    if (m_latestOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestOperation.c_str(), allocator).Move(), allocator);
    }

    if (m_latestOperationStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestOperationState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestOperationState.c_str(), allocator).Move(), allocator);
    }

}


string InstanceStatus::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceStatus::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceStatus::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceStatus::GetStatus() const
{
    return m_status;
}

void InstanceStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t InstanceStatus::GetSessionState() const
{
    return m_sessionState;
}

void InstanceStatus::SetSessionState(const int64_t& _sessionState)
{
    m_sessionState = _sessionState;
    m_sessionStateHasBeenSet = true;
}

bool InstanceStatus::SessionStateHasBeenSet() const
{
    return m_sessionStateHasBeenSet;
}

double InstanceStatus::GetIdleSeconds() const
{
    return m_idleSeconds;
}

void InstanceStatus::SetIdleSeconds(const double& _idleSeconds)
{
    m_idleSeconds = _idleSeconds;
    m_idleSecondsHasBeenSet = true;
}

bool InstanceStatus::IdleSecondsHasBeenSet() const
{
    return m_idleSecondsHasBeenSet;
}

int64_t InstanceStatus::GetStatusChangeTime() const
{
    return m_statusChangeTime;
}

void InstanceStatus::SetStatusChangeTime(const int64_t& _statusChangeTime)
{
    m_statusChangeTime = _statusChangeTime;
    m_statusChangeTimeHasBeenSet = true;
}

bool InstanceStatus::StatusChangeTimeHasBeenSet() const
{
    return m_statusChangeTimeHasBeenSet;
}

string InstanceStatus::GetLatestOperation() const
{
    return m_latestOperation;
}

void InstanceStatus::SetLatestOperation(const string& _latestOperation)
{
    m_latestOperation = _latestOperation;
    m_latestOperationHasBeenSet = true;
}

bool InstanceStatus::LatestOperationHasBeenSet() const
{
    return m_latestOperationHasBeenSet;
}

string InstanceStatus::GetLatestOperationState() const
{
    return m_latestOperationState;
}

void InstanceStatus::SetLatestOperationState(const string& _latestOperationState)
{
    m_latestOperationState = _latestOperationState;
    m_latestOperationStateHasBeenSet = true;
}

bool InstanceStatus::LatestOperationStateHasBeenSet() const
{
    return m_latestOperationStateHasBeenSet;
}

