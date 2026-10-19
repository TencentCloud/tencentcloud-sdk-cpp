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

#include <tencentcloud/adp/v20260520/model/CallMCPToolRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CallMCPToolRequest::CallMCPToolRequest() :
    m_pluginIdHasBeenSet(false),
    m_threadIdHasBeenSet(false),
    m_toolNameHasBeenSet(false),
    m_argumentsHasBeenSet(false)
{
}

string CallMCPToolRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pluginIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pluginId.c_str(), allocator).Move(), allocator);
    }

    if (m_threadIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreadId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_threadId.c_str(), allocator).Move(), allocator);
    }

    if (m_toolNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toolName.c_str(), allocator).Move(), allocator);
    }

    if (m_argumentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Arguments";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_arguments.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CallMCPToolRequest::GetPluginId() const
{
    return m_pluginId;
}

void CallMCPToolRequest::SetPluginId(const string& _pluginId)
{
    m_pluginId = _pluginId;
    m_pluginIdHasBeenSet = true;
}

bool CallMCPToolRequest::PluginIdHasBeenSet() const
{
    return m_pluginIdHasBeenSet;
}

string CallMCPToolRequest::GetThreadId() const
{
    return m_threadId;
}

void CallMCPToolRequest::SetThreadId(const string& _threadId)
{
    m_threadId = _threadId;
    m_threadIdHasBeenSet = true;
}

bool CallMCPToolRequest::ThreadIdHasBeenSet() const
{
    return m_threadIdHasBeenSet;
}

string CallMCPToolRequest::GetToolName() const
{
    return m_toolName;
}

void CallMCPToolRequest::SetToolName(const string& _toolName)
{
    m_toolName = _toolName;
    m_toolNameHasBeenSet = true;
}

bool CallMCPToolRequest::ToolNameHasBeenSet() const
{
    return m_toolNameHasBeenSet;
}

string CallMCPToolRequest::GetArguments() const
{
    return m_arguments;
}

void CallMCPToolRequest::SetArguments(const string& _arguments)
{
    m_arguments = _arguments;
    m_argumentsHasBeenSet = true;
}

bool CallMCPToolRequest::ArgumentsHasBeenSet() const
{
    return m_argumentsHasBeenSet;
}


