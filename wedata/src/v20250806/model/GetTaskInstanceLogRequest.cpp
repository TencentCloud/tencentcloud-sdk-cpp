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

#include <tencentcloud/wedata/v20250806/model/GetTaskInstanceLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

GetTaskInstanceLogRequest::GetTaskInstanceLogRequest() :
    m_projectIdHasBeenSet(false),
    m_instanceKeyHasBeenSet(false),
    m_lifeRoundNumHasBeenSet(false),
    m_logLevelHasBeenSet(false),
    m_nextCursorHasBeenSet(false)
{
}

string GetTaskInstanceLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceKey.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeRoundNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeRoundNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lifeRoundNum, allocator);
    }

    if (m_logLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_nextCursorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextCursor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nextCursor.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetTaskInstanceLogRequest::GetProjectId() const
{
    return m_projectId;
}

void GetTaskInstanceLogRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool GetTaskInstanceLogRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string GetTaskInstanceLogRequest::GetInstanceKey() const
{
    return m_instanceKey;
}

void GetTaskInstanceLogRequest::SetInstanceKey(const string& _instanceKey)
{
    m_instanceKey = _instanceKey;
    m_instanceKeyHasBeenSet = true;
}

bool GetTaskInstanceLogRequest::InstanceKeyHasBeenSet() const
{
    return m_instanceKeyHasBeenSet;
}

uint64_t GetTaskInstanceLogRequest::GetLifeRoundNum() const
{
    return m_lifeRoundNum;
}

void GetTaskInstanceLogRequest::SetLifeRoundNum(const uint64_t& _lifeRoundNum)
{
    m_lifeRoundNum = _lifeRoundNum;
    m_lifeRoundNumHasBeenSet = true;
}

bool GetTaskInstanceLogRequest::LifeRoundNumHasBeenSet() const
{
    return m_lifeRoundNumHasBeenSet;
}

string GetTaskInstanceLogRequest::GetLogLevel() const
{
    return m_logLevel;
}

void GetTaskInstanceLogRequest::SetLogLevel(const string& _logLevel)
{
    m_logLevel = _logLevel;
    m_logLevelHasBeenSet = true;
}

bool GetTaskInstanceLogRequest::LogLevelHasBeenSet() const
{
    return m_logLevelHasBeenSet;
}

string GetTaskInstanceLogRequest::GetNextCursor() const
{
    return m_nextCursor;
}

void GetTaskInstanceLogRequest::SetNextCursor(const string& _nextCursor)
{
    m_nextCursor = _nextCursor;
    m_nextCursorHasBeenSet = true;
}

bool GetTaskInstanceLogRequest::NextCursorHasBeenSet() const
{
    return m_nextCursorHasBeenSet;
}


