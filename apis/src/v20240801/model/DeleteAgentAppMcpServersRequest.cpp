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

#include <tencentcloud/apis/v20240801/model/DeleteAgentAppMcpServersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

DeleteAgentAppMcpServersRequest::DeleteAgentAppMcpServersRequest() :
    m_instanceIDHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_mcpServerIDsHasBeenSet(false)
{
}

string DeleteAgentAppMcpServersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_mcpServerIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McpServerIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mcpServerIDs.begin(); itr != m_mcpServerIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteAgentAppMcpServersRequest::GetInstanceID() const
{
    return m_instanceID;
}

void DeleteAgentAppMcpServersRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool DeleteAgentAppMcpServersRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string DeleteAgentAppMcpServersRequest::GetID() const
{
    return m_iD;
}

void DeleteAgentAppMcpServersRequest::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DeleteAgentAppMcpServersRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

vector<string> DeleteAgentAppMcpServersRequest::GetMcpServerIDs() const
{
    return m_mcpServerIDs;
}

void DeleteAgentAppMcpServersRequest::SetMcpServerIDs(const vector<string>& _mcpServerIDs)
{
    m_mcpServerIDs = _mcpServerIDs;
    m_mcpServerIDsHasBeenSet = true;
}

bool DeleteAgentAppMcpServersRequest::McpServerIDsHasBeenSet() const
{
    return m_mcpServerIDsHasBeenSet;
}


