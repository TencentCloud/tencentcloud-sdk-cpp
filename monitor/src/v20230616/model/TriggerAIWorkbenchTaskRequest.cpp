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

#include <tencentcloud/monitor/v20230616/model/TriggerAIWorkbenchTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

TriggerAIWorkbenchTaskRequest::TriggerAIWorkbenchTaskRequest() :
    m_taskIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_idempotencyKeyHasBeenSet(false)
{
}

string TriggerAIWorkbenchTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_idempotencyKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdempotencyKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idempotencyKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TriggerAIWorkbenchTaskRequest::GetTaskId() const
{
    return m_taskId;
}

void TriggerAIWorkbenchTaskRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TriggerAIWorkbenchTaskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TriggerAIWorkbenchTaskRequest::GetSessionId() const
{
    return m_sessionId;
}

void TriggerAIWorkbenchTaskRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool TriggerAIWorkbenchTaskRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string TriggerAIWorkbenchTaskRequest::GetContent() const
{
    return m_content;
}

void TriggerAIWorkbenchTaskRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool TriggerAIWorkbenchTaskRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string TriggerAIWorkbenchTaskRequest::GetIdempotencyKey() const
{
    return m_idempotencyKey;
}

void TriggerAIWorkbenchTaskRequest::SetIdempotencyKey(const string& _idempotencyKey)
{
    m_idempotencyKey = _idempotencyKey;
    m_idempotencyKeyHasBeenSet = true;
}

bool TriggerAIWorkbenchTaskRequest::IdempotencyKeyHasBeenSet() const
{
    return m_idempotencyKeyHasBeenSet;
}


