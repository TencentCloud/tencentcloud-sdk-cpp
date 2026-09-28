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

#include <tencentcloud/dbbrain/v20210527/model/WaiterItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

WaiterItem::WaiterItem() :
    m_modeHasBeenSet(false),
    m_executionContextIdHasBeenSet(false),
    m_processIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_requestTypeHasBeenSet(false)
{
}

CoreInternalOutcome WaiterItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WaiterItem.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionContextId") && !value["ExecutionContextId"].IsNull())
    {
        if (!value["ExecutionContextId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WaiterItem.ExecutionContextId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executionContextId = value["ExecutionContextId"].GetInt64();
        m_executionContextIdHasBeenSet = true;
    }

    if (value.HasMember("ProcessId") && !value["ProcessId"].IsNull())
    {
        if (!value["ProcessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WaiterItem.ProcessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processId = string(value["ProcessId"].GetString());
        m_processIdHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WaiterItem.SessionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = value["SessionId"].GetInt64();
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("RequestType") && !value["RequestType"].IsNull())
    {
        if (!value["RequestType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WaiterItem.RequestType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestType = string(value["RequestType"].GetString());
        m_requestTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WaiterItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
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

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionId, allocator);
    }

    if (m_requestTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestType.c_str(), allocator).Move(), allocator);
    }

}


string WaiterItem::GetMode() const
{
    return m_mode;
}

void WaiterItem::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool WaiterItem::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

int64_t WaiterItem::GetExecutionContextId() const
{
    return m_executionContextId;
}

void WaiterItem::SetExecutionContextId(const int64_t& _executionContextId)
{
    m_executionContextId = _executionContextId;
    m_executionContextIdHasBeenSet = true;
}

bool WaiterItem::ExecutionContextIdHasBeenSet() const
{
    return m_executionContextIdHasBeenSet;
}

string WaiterItem::GetProcessId() const
{
    return m_processId;
}

void WaiterItem::SetProcessId(const string& _processId)
{
    m_processId = _processId;
    m_processIdHasBeenSet = true;
}

bool WaiterItem::ProcessIdHasBeenSet() const
{
    return m_processIdHasBeenSet;
}

int64_t WaiterItem::GetSessionId() const
{
    return m_sessionId;
}

void WaiterItem::SetSessionId(const int64_t& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool WaiterItem::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string WaiterItem::GetRequestType() const
{
    return m_requestType;
}

void WaiterItem::SetRequestType(const string& _requestType)
{
    m_requestType = _requestType;
    m_requestTypeHasBeenSet = true;
}

bool WaiterItem::RequestTypeHasBeenSet() const
{
    return m_requestTypeHasBeenSet;
}

