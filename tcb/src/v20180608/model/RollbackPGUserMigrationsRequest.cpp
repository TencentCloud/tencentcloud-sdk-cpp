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

#include <tencentcloud/tcb/v20180608/model/RollbackPGUserMigrationsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

RollbackPGUserMigrationsRequest::RollbackPGUserMigrationsRequest() :
    m_envIdHasBeenSet(false),
    m_lastNHasBeenSet(false),
    m_lockTimeoutMsHasBeenSet(false),
    m_statementTimeoutMsHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

string RollbackPGUserMigrationsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_lastNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastN";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lastN, allocator);
    }

    if (m_lockTimeoutMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockTimeoutMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lockTimeoutMs, allocator);
    }

    if (m_statementTimeoutMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatementTimeoutMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_statementTimeoutMs, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RollbackPGUserMigrationsRequest::GetEnvId() const
{
    return m_envId;
}

void RollbackPGUserMigrationsRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool RollbackPGUserMigrationsRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

int64_t RollbackPGUserMigrationsRequest::GetLastN() const
{
    return m_lastN;
}

void RollbackPGUserMigrationsRequest::SetLastN(const int64_t& _lastN)
{
    m_lastN = _lastN;
    m_lastNHasBeenSet = true;
}

bool RollbackPGUserMigrationsRequest::LastNHasBeenSet() const
{
    return m_lastNHasBeenSet;
}

int64_t RollbackPGUserMigrationsRequest::GetLockTimeoutMs() const
{
    return m_lockTimeoutMs;
}

void RollbackPGUserMigrationsRequest::SetLockTimeoutMs(const int64_t& _lockTimeoutMs)
{
    m_lockTimeoutMs = _lockTimeoutMs;
    m_lockTimeoutMsHasBeenSet = true;
}

bool RollbackPGUserMigrationsRequest::LockTimeoutMsHasBeenSet() const
{
    return m_lockTimeoutMsHasBeenSet;
}

int64_t RollbackPGUserMigrationsRequest::GetStatementTimeoutMs() const
{
    return m_statementTimeoutMs;
}

void RollbackPGUserMigrationsRequest::SetStatementTimeoutMs(const int64_t& _statementTimeoutMs)
{
    m_statementTimeoutMs = _statementTimeoutMs;
    m_statementTimeoutMsHasBeenSet = true;
}

bool RollbackPGUserMigrationsRequest::StatementTimeoutMsHasBeenSet() const
{
    return m_statementTimeoutMsHasBeenSet;
}

string RollbackPGUserMigrationsRequest::GetSource() const
{
    return m_source;
}

void RollbackPGUserMigrationsRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool RollbackPGUserMigrationsRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}


