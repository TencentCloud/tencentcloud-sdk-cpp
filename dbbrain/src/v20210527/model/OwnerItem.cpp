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

#include <tencentcloud/dbbrain/v20210527/model/OwnerItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

OwnerItem::OwnerItem() :
    m_modeHasBeenSet(false),
    m_executionContextIdHasBeenSet(false),
    m_processIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

CoreInternalOutcome OwnerItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwnerItem.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionContextId") && !value["ExecutionContextId"].IsNull())
    {
        if (!value["ExecutionContextId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OwnerItem.ExecutionContextId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executionContextId = value["ExecutionContextId"].GetInt64();
        m_executionContextIdHasBeenSet = true;
    }

    if (value.HasMember("ProcessId") && !value["ProcessId"].IsNull())
    {
        if (!value["ProcessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwnerItem.ProcessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processId = string(value["ProcessId"].GetString());
        m_processIdHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OwnerItem.SessionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = value["SessionId"].GetInt64();
        m_sessionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OwnerItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string OwnerItem::GetMode() const
{
    return m_mode;
}

void OwnerItem::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool OwnerItem::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

int64_t OwnerItem::GetExecutionContextId() const
{
    return m_executionContextId;
}

void OwnerItem::SetExecutionContextId(const int64_t& _executionContextId)
{
    m_executionContextId = _executionContextId;
    m_executionContextIdHasBeenSet = true;
}

bool OwnerItem::ExecutionContextIdHasBeenSet() const
{
    return m_executionContextIdHasBeenSet;
}

string OwnerItem::GetProcessId() const
{
    return m_processId;
}

void OwnerItem::SetProcessId(const string& _processId)
{
    m_processId = _processId;
    m_processIdHasBeenSet = true;
}

bool OwnerItem::ProcessIdHasBeenSet() const
{
    return m_processIdHasBeenSet;
}

int64_t OwnerItem::GetSessionId() const
{
    return m_sessionId;
}

void OwnerItem::SetSessionId(const int64_t& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool OwnerItem::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

