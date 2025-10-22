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

#include <tencentcloud/lke/v20231130/model/AgentMCPServerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentMCPServerInfo::AgentMCPServerInfo() :
    m_mcpServerUrlHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_sseReadTimeoutHasBeenSet(false),
    m_queryHasBeenSet(false)
{
}

CoreInternalOutcome AgentMCPServerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("McpServerUrl") && !value["McpServerUrl"].IsNull())
    {
        if (!value["McpServerUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentMCPServerInfo.McpServerUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mcpServerUrl = string(value["McpServerUrl"].GetString());
        m_mcpServerUrlHasBeenSet = true;
    }

    if (value.HasMember("Headers") && !value["Headers"].IsNull())
    {
        if (!value["Headers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentMCPServerInfo.Headers` is not array type"));

        const rapidjson::Value &tmpValue = value["Headers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentPluginHeader item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headers.push_back(item);
        }
        m_headersHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentMCPServerInfo.Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("SseReadTimeout") && !value["SseReadTimeout"].IsNull())
    {
        if (!value["SseReadTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentMCPServerInfo.SseReadTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sseReadTimeout = value["SseReadTimeout"].GetInt64();
        m_sseReadTimeoutHasBeenSet = true;
    }

    if (value.HasMember("Query") && !value["Query"].IsNull())
    {
        if (!value["Query"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentMCPServerInfo.Query` is not array type"));

        const rapidjson::Value &tmpValue = value["Query"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentPluginQuery item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_query.push_back(item);
        }
        m_queryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentMCPServerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mcpServerUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McpServerUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mcpServerUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_headersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headers.begin(); itr != m_headers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_sseReadTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SseReadTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sseReadTimeout, allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_query.begin(); itr != m_query.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AgentMCPServerInfo::GetMcpServerUrl() const
{
    return m_mcpServerUrl;
}

void AgentMCPServerInfo::SetMcpServerUrl(const string& _mcpServerUrl)
{
    m_mcpServerUrl = _mcpServerUrl;
    m_mcpServerUrlHasBeenSet = true;
}

bool AgentMCPServerInfo::McpServerUrlHasBeenSet() const
{
    return m_mcpServerUrlHasBeenSet;
}

vector<AgentPluginHeader> AgentMCPServerInfo::GetHeaders() const
{
    return m_headers;
}

void AgentMCPServerInfo::SetHeaders(const vector<AgentPluginHeader>& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool AgentMCPServerInfo::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

int64_t AgentMCPServerInfo::GetTimeout() const
{
    return m_timeout;
}

void AgentMCPServerInfo::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool AgentMCPServerInfo::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

int64_t AgentMCPServerInfo::GetSseReadTimeout() const
{
    return m_sseReadTimeout;
}

void AgentMCPServerInfo::SetSseReadTimeout(const int64_t& _sseReadTimeout)
{
    m_sseReadTimeout = _sseReadTimeout;
    m_sseReadTimeoutHasBeenSet = true;
}

bool AgentMCPServerInfo::SseReadTimeoutHasBeenSet() const
{
    return m_sseReadTimeoutHasBeenSet;
}

vector<AgentPluginQuery> AgentMCPServerInfo::GetQuery() const
{
    return m_query;
}

void AgentMCPServerInfo::SetQuery(const vector<AgentPluginQuery>& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool AgentMCPServerInfo::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

