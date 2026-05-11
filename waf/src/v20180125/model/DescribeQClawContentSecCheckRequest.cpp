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

#include <tencentcloud/waf/v20180125/model/DescribeQClawContentSecCheckRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeQClawContentSecCheckRequest::DescribeQClawContentSecCheckRequest() :
    m_serviceIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_toolNameHasBeenSet(false),
    m_toolArgsHasBeenSet(false)
{
}

string DescribeQClawContentSecCheckRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_content.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_toolNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toolName.c_str(), allocator).Move(), allocator);
    }

    if (m_toolArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolArgs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toolArgs.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeQClawContentSecCheckRequest::GetServiceId() const
{
    return m_serviceId;
}

void DescribeQClawContentSecCheckRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool DescribeQClawContentSecCheckRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

ApiGuardContent DescribeQClawContentSecCheckRequest::GetContent() const
{
    return m_content;
}

void DescribeQClawContentSecCheckRequest::SetContent(const ApiGuardContent& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool DescribeQClawContentSecCheckRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string DescribeQClawContentSecCheckRequest::GetUserId() const
{
    return m_userId;
}

void DescribeQClawContentSecCheckRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeQClawContentSecCheckRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DescribeQClawContentSecCheckRequest::GetSessionId() const
{
    return m_sessionId;
}

void DescribeQClawContentSecCheckRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool DescribeQClawContentSecCheckRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string DescribeQClawContentSecCheckRequest::GetToolName() const
{
    return m_toolName;
}

void DescribeQClawContentSecCheckRequest::SetToolName(const string& _toolName)
{
    m_toolName = _toolName;
    m_toolNameHasBeenSet = true;
}

bool DescribeQClawContentSecCheckRequest::ToolNameHasBeenSet() const
{
    return m_toolNameHasBeenSet;
}

string DescribeQClawContentSecCheckRequest::GetToolArgs() const
{
    return m_toolArgs;
}

void DescribeQClawContentSecCheckRequest::SetToolArgs(const string& _toolArgs)
{
    m_toolArgs = _toolArgs;
    m_toolArgsHasBeenSet = true;
}

bool DescribeQClawContentSecCheckRequest::ToolArgsHasBeenSet() const
{
    return m_toolArgsHasBeenSet;
}


