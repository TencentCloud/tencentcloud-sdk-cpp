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

#include <tencentcloud/adp/v20260520/model/ConversationMcpApp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConversationMcpApp::ConversationMcpApp() :
    m_pluginIdHasBeenSet(false),
    m_resourceUriHasBeenSet(false),
    m_threadIdHasBeenSet(false),
    m_toolResultHasBeenSet(false)
{
}

CoreInternalOutcome ConversationMcpApp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PluginId") && !value["PluginId"].IsNull())
    {
        if (!value["PluginId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMcpApp.PluginId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginId = string(value["PluginId"].GetString());
        m_pluginIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceUri") && !value["ResourceUri"].IsNull())
    {
        if (!value["ResourceUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMcpApp.ResourceUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceUri = string(value["ResourceUri"].GetString());
        m_resourceUriHasBeenSet = true;
    }

    if (value.HasMember("ThreadId") && !value["ThreadId"].IsNull())
    {
        if (!value["ThreadId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMcpApp.ThreadId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_threadId = string(value["ThreadId"].GetString());
        m_threadIdHasBeenSet = true;
    }

    if (value.HasMember("ToolResult") && !value["ToolResult"].IsNull())
    {
        if (!value["ToolResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMcpApp.ToolResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolResult = string(value["ToolResult"].GetString());
        m_toolResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConversationMcpApp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pluginIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceUri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceUri.c_str(), allocator).Move(), allocator);
    }

    if (m_threadIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreadId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_threadId.c_str(), allocator).Move(), allocator);
    }

    if (m_toolResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolResult.c_str(), allocator).Move(), allocator);
    }

}


string ConversationMcpApp::GetPluginId() const
{
    return m_pluginId;
}

void ConversationMcpApp::SetPluginId(const string& _pluginId)
{
    m_pluginId = _pluginId;
    m_pluginIdHasBeenSet = true;
}

bool ConversationMcpApp::PluginIdHasBeenSet() const
{
    return m_pluginIdHasBeenSet;
}

string ConversationMcpApp::GetResourceUri() const
{
    return m_resourceUri;
}

void ConversationMcpApp::SetResourceUri(const string& _resourceUri)
{
    m_resourceUri = _resourceUri;
    m_resourceUriHasBeenSet = true;
}

bool ConversationMcpApp::ResourceUriHasBeenSet() const
{
    return m_resourceUriHasBeenSet;
}

string ConversationMcpApp::GetThreadId() const
{
    return m_threadId;
}

void ConversationMcpApp::SetThreadId(const string& _threadId)
{
    m_threadId = _threadId;
    m_threadIdHasBeenSet = true;
}

bool ConversationMcpApp::ThreadIdHasBeenSet() const
{
    return m_threadIdHasBeenSet;
}

string ConversationMcpApp::GetToolResult() const
{
    return m_toolResult;
}

void ConversationMcpApp::SetToolResult(const string& _toolResult)
{
    m_toolResult = _toolResult;
    m_toolResultHasBeenSet = true;
}

bool ConversationMcpApp::ToolResultHasBeenSet() const
{
    return m_toolResultHasBeenSet;
}

