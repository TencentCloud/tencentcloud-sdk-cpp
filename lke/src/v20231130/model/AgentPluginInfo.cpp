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

#include <tencentcloud/lke/v20231130/model/AgentPluginInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentPluginInfo::AgentPluginInfo() :
    m_pluginIdHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_pluginInfoTypeHasBeenSet(false),
    m_knowledgeQaHasBeenSet(false),
    m_enableRoleAuthHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_mcpTypeHasBeenSet(false)
{
}

CoreInternalOutcome AgentPluginInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PluginId") && !value["PluginId"].IsNull())
    {
        if (!value["PluginId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginInfo.PluginId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginId = string(value["PluginId"].GetString());
        m_pluginIdHasBeenSet = true;
    }

    if (value.HasMember("Headers") && !value["Headers"].IsNull())
    {
        if (!value["Headers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentPluginInfo.Headers` is not array type"));

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

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginInfo.Model` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_model.Deserialize(value["Model"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelHasBeenSet = true;
    }

    if (value.HasMember("PluginInfoType") && !value["PluginInfoType"].IsNull())
    {
        if (!value["PluginInfoType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginInfo.PluginInfoType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pluginInfoType = value["PluginInfoType"].GetUint64();
        m_pluginInfoTypeHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeQa") && !value["KnowledgeQa"].IsNull())
    {
        if (!value["KnowledgeQa"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginInfo.KnowledgeQa` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_knowledgeQa.Deserialize(value["KnowledgeQa"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_knowledgeQaHasBeenSet = true;
    }

    if (value.HasMember("EnableRoleAuth") && !value["EnableRoleAuth"].IsNull())
    {
        if (!value["EnableRoleAuth"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginInfo.EnableRoleAuth` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableRoleAuth = value["EnableRoleAuth"].GetBool();
        m_enableRoleAuthHasBeenSet = true;
    }

    if (value.HasMember("Query") && !value["Query"].IsNull())
    {
        if (!value["Query"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentPluginInfo.Query` is not array type"));

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

    if (value.HasMember("McpType") && !value["McpType"].IsNull())
    {
        if (!value["McpType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginInfo.McpType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mcpType = value["McpType"].GetUint64();
        m_mcpTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentPluginInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pluginIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginId.c_str(), allocator).Move(), allocator);
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

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_model.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pluginInfoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginInfoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pluginInfoType, allocator);
    }

    if (m_knowledgeQaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeQa";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_knowledgeQa.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enableRoleAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRoleAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableRoleAuth, allocator);
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

    if (m_mcpTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McpType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mcpType, allocator);
    }

}


string AgentPluginInfo::GetPluginId() const
{
    return m_pluginId;
}

void AgentPluginInfo::SetPluginId(const string& _pluginId)
{
    m_pluginId = _pluginId;
    m_pluginIdHasBeenSet = true;
}

bool AgentPluginInfo::PluginIdHasBeenSet() const
{
    return m_pluginIdHasBeenSet;
}

vector<AgentPluginHeader> AgentPluginInfo::GetHeaders() const
{
    return m_headers;
}

void AgentPluginInfo::SetHeaders(const vector<AgentPluginHeader>& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool AgentPluginInfo::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

AgentModelInfo AgentPluginInfo::GetModel() const
{
    return m_model;
}

void AgentPluginInfo::SetModel(const AgentModelInfo& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool AgentPluginInfo::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

uint64_t AgentPluginInfo::GetPluginInfoType() const
{
    return m_pluginInfoType;
}

void AgentPluginInfo::SetPluginInfoType(const uint64_t& _pluginInfoType)
{
    m_pluginInfoType = _pluginInfoType;
    m_pluginInfoTypeHasBeenSet = true;
}

bool AgentPluginInfo::PluginInfoTypeHasBeenSet() const
{
    return m_pluginInfoTypeHasBeenSet;
}

AgentKnowledgeQAPlugin AgentPluginInfo::GetKnowledgeQa() const
{
    return m_knowledgeQa;
}

void AgentPluginInfo::SetKnowledgeQa(const AgentKnowledgeQAPlugin& _knowledgeQa)
{
    m_knowledgeQa = _knowledgeQa;
    m_knowledgeQaHasBeenSet = true;
}

bool AgentPluginInfo::KnowledgeQaHasBeenSet() const
{
    return m_knowledgeQaHasBeenSet;
}

bool AgentPluginInfo::GetEnableRoleAuth() const
{
    return m_enableRoleAuth;
}

void AgentPluginInfo::SetEnableRoleAuth(const bool& _enableRoleAuth)
{
    m_enableRoleAuth = _enableRoleAuth;
    m_enableRoleAuthHasBeenSet = true;
}

bool AgentPluginInfo::EnableRoleAuthHasBeenSet() const
{
    return m_enableRoleAuthHasBeenSet;
}

vector<AgentPluginQuery> AgentPluginInfo::GetQuery() const
{
    return m_query;
}

void AgentPluginInfo::SetQuery(const vector<AgentPluginQuery>& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool AgentPluginInfo::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

uint64_t AgentPluginInfo::GetMcpType() const
{
    return m_mcpType;
}

void AgentPluginInfo::SetMcpType(const uint64_t& _mcpType)
{
    m_mcpType = _mcpType;
    m_mcpTypeHasBeenSet = true;
}

bool AgentPluginInfo::McpTypeHasBeenSet() const
{
    return m_mcpTypeHasBeenSet;
}

