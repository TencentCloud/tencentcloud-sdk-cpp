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

#include <tencentcloud/apis/v20240801/model/DescribeAgentAppMcpServersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

DescribeAgentAppMcpServersRequest::DescribeAgentAppMcpServersRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_agentAppIDsHasBeenSet(false),
    m_mcpServerIDsHasBeenSet(false),
    m_agentCredentialIDsHasBeenSet(false),
    m_keywordHasBeenSet(false)
{
}

string DescribeAgentAppMcpServersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_agentAppIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentAppIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_agentAppIDs.begin(); itr != m_agentAppIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_agentCredentialIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentCredentialIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_agentCredentialIDs.begin(); itr != m_agentCredentialIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAgentAppMcpServersRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAgentAppMcpServersRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAgentAppMcpServersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeAgentAppMcpServersRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAgentAppMcpServersRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAgentAppMcpServersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeAgentAppMcpServersRequest::GetInstanceID() const
{
    return m_instanceID;
}

void DescribeAgentAppMcpServersRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool DescribeAgentAppMcpServersRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

vector<string> DescribeAgentAppMcpServersRequest::GetAgentAppIDs() const
{
    return m_agentAppIDs;
}

void DescribeAgentAppMcpServersRequest::SetAgentAppIDs(const vector<string>& _agentAppIDs)
{
    m_agentAppIDs = _agentAppIDs;
    m_agentAppIDsHasBeenSet = true;
}

bool DescribeAgentAppMcpServersRequest::AgentAppIDsHasBeenSet() const
{
    return m_agentAppIDsHasBeenSet;
}

vector<string> DescribeAgentAppMcpServersRequest::GetMcpServerIDs() const
{
    return m_mcpServerIDs;
}

void DescribeAgentAppMcpServersRequest::SetMcpServerIDs(const vector<string>& _mcpServerIDs)
{
    m_mcpServerIDs = _mcpServerIDs;
    m_mcpServerIDsHasBeenSet = true;
}

bool DescribeAgentAppMcpServersRequest::McpServerIDsHasBeenSet() const
{
    return m_mcpServerIDsHasBeenSet;
}

vector<string> DescribeAgentAppMcpServersRequest::GetAgentCredentialIDs() const
{
    return m_agentCredentialIDs;
}

void DescribeAgentAppMcpServersRequest::SetAgentCredentialIDs(const vector<string>& _agentCredentialIDs)
{
    m_agentCredentialIDs = _agentCredentialIDs;
    m_agentCredentialIDsHasBeenSet = true;
}

bool DescribeAgentAppMcpServersRequest::AgentCredentialIDsHasBeenSet() const
{
    return m_agentCredentialIDsHasBeenSet;
}

string DescribeAgentAppMcpServersRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeAgentAppMcpServersRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeAgentAppMcpServersRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}


