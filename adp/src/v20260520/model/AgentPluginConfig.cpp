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

#include <tencentcloud/adp/v20260520/model/AgentPluginConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentPluginConfig::AgentPluginConfig() :
    m_pluginIdHasBeenSet(false),
    m_headerParameterListHasBeenSet(false),
    m_queryParameterListHasBeenSet(false),
    m_enableCamRoleAuthHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_oAuthConsentHasBeenSet(false)
{
}

CoreInternalOutcome AgentPluginConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PluginId") && !value["PluginId"].IsNull())
    {
        if (!value["PluginId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginConfig.PluginId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginId = string(value["PluginId"].GetString());
        m_pluginIdHasBeenSet = true;
    }

    if (value.HasMember("HeaderParameterList") && !value["HeaderParameterList"].IsNull())
    {
        if (!value["HeaderParameterList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentPluginConfig.HeaderParameterList` is not array type"));

        const rapidjson::Value &tmpValue = value["HeaderParameterList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentPluginParameter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headerParameterList.push_back(item);
        }
        m_headerParameterListHasBeenSet = true;
    }

    if (value.HasMember("QueryParameterList") && !value["QueryParameterList"].IsNull())
    {
        if (!value["QueryParameterList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentPluginConfig.QueryParameterList` is not array type"));

        const rapidjson::Value &tmpValue = value["QueryParameterList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentPluginParameter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_queryParameterList.push_back(item);
        }
        m_queryParameterListHasBeenSet = true;
    }

    if (value.HasMember("EnableCamRoleAuth") && !value["EnableCamRoleAuth"].IsNull())
    {
        if (!value["EnableCamRoleAuth"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginConfig.EnableCamRoleAuth` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableCamRoleAuth = value["EnableCamRoleAuth"].GetBool();
        m_enableCamRoleAuthHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginConfig.AuthType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authType = value["AuthType"].GetInt64();
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("OAuthConsent") && !value["OAuthConsent"].IsNull())
    {
        if (!value["OAuthConsent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginConfig.OAuthConsent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_oAuthConsent = value["OAuthConsent"].GetInt64();
        m_oAuthConsentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentPluginConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pluginIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginId.c_str(), allocator).Move(), allocator);
    }

    if (m_headerParameterListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderParameterList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headerParameterList.begin(); itr != m_headerParameterList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_queryParameterListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryParameterList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_queryParameterList.begin(); itr != m_queryParameterList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_enableCamRoleAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCamRoleAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableCamRoleAuth, allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authType, allocator);
    }

    if (m_oAuthConsentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OAuthConsent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oAuthConsent, allocator);
    }

}


string AgentPluginConfig::GetPluginId() const
{
    return m_pluginId;
}

void AgentPluginConfig::SetPluginId(const string& _pluginId)
{
    m_pluginId = _pluginId;
    m_pluginIdHasBeenSet = true;
}

bool AgentPluginConfig::PluginIdHasBeenSet() const
{
    return m_pluginIdHasBeenSet;
}

vector<AgentPluginParameter> AgentPluginConfig::GetHeaderParameterList() const
{
    return m_headerParameterList;
}

void AgentPluginConfig::SetHeaderParameterList(const vector<AgentPluginParameter>& _headerParameterList)
{
    m_headerParameterList = _headerParameterList;
    m_headerParameterListHasBeenSet = true;
}

bool AgentPluginConfig::HeaderParameterListHasBeenSet() const
{
    return m_headerParameterListHasBeenSet;
}

vector<AgentPluginParameter> AgentPluginConfig::GetQueryParameterList() const
{
    return m_queryParameterList;
}

void AgentPluginConfig::SetQueryParameterList(const vector<AgentPluginParameter>& _queryParameterList)
{
    m_queryParameterList = _queryParameterList;
    m_queryParameterListHasBeenSet = true;
}

bool AgentPluginConfig::QueryParameterListHasBeenSet() const
{
    return m_queryParameterListHasBeenSet;
}

bool AgentPluginConfig::GetEnableCamRoleAuth() const
{
    return m_enableCamRoleAuth;
}

void AgentPluginConfig::SetEnableCamRoleAuth(const bool& _enableCamRoleAuth)
{
    m_enableCamRoleAuth = _enableCamRoleAuth;
    m_enableCamRoleAuthHasBeenSet = true;
}

bool AgentPluginConfig::EnableCamRoleAuthHasBeenSet() const
{
    return m_enableCamRoleAuthHasBeenSet;
}

int64_t AgentPluginConfig::GetAuthType() const
{
    return m_authType;
}

void AgentPluginConfig::SetAuthType(const int64_t& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool AgentPluginConfig::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

int64_t AgentPluginConfig::GetOAuthConsent() const
{
    return m_oAuthConsent;
}

void AgentPluginConfig::SetOAuthConsent(const int64_t& _oAuthConsent)
{
    m_oAuthConsent = _oAuthConsent;
    m_oAuthConsentHasBeenSet = true;
}

bool AgentPluginConfig::OAuthConsentHasBeenSet() const
{
    return m_oAuthConsentHasBeenSet;
}

