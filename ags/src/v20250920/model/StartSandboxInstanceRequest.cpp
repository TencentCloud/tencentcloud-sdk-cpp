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

#include <tencentcloud/ags/v20250920/model/StartSandboxInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

StartSandboxInstanceRequest::StartSandboxInstanceRequest() :
    m_toolIdHasBeenSet(false),
    m_toolNameHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_mountOptionsHasBeenSet(false)
{
}

string StartSandboxInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_toolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toolId.c_str(), allocator).Move(), allocator);
    }

    if (m_toolNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toolName.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeout.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_mountOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mountOptions.begin(); itr != m_mountOptions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string StartSandboxInstanceRequest::GetToolId() const
{
    return m_toolId;
}

void StartSandboxInstanceRequest::SetToolId(const string& _toolId)
{
    m_toolId = _toolId;
    m_toolIdHasBeenSet = true;
}

bool StartSandboxInstanceRequest::ToolIdHasBeenSet() const
{
    return m_toolIdHasBeenSet;
}

string StartSandboxInstanceRequest::GetToolName() const
{
    return m_toolName;
}

void StartSandboxInstanceRequest::SetToolName(const string& _toolName)
{
    m_toolName = _toolName;
    m_toolNameHasBeenSet = true;
}

bool StartSandboxInstanceRequest::ToolNameHasBeenSet() const
{
    return m_toolNameHasBeenSet;
}

string StartSandboxInstanceRequest::GetTimeout() const
{
    return m_timeout;
}

void StartSandboxInstanceRequest::SetTimeout(const string& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool StartSandboxInstanceRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string StartSandboxInstanceRequest::GetClientToken() const
{
    return m_clientToken;
}

void StartSandboxInstanceRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool StartSandboxInstanceRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

vector<MountOption> StartSandboxInstanceRequest::GetMountOptions() const
{
    return m_mountOptions;
}

void StartSandboxInstanceRequest::SetMountOptions(const vector<MountOption>& _mountOptions)
{
    m_mountOptions = _mountOptions;
    m_mountOptionsHasBeenSet = true;
}

bool StartSandboxInstanceRequest::MountOptionsHasBeenSet() const
{
    return m_mountOptionsHasBeenSet;
}


