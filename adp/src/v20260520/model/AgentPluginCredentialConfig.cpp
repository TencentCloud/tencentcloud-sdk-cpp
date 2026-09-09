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

#include <tencentcloud/adp/v20260520/model/AgentPluginCredentialConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentPluginCredentialConfig::AgentPluginCredentialConfig() :
    m_authValueSourceHasBeenSet(false),
    m_credentialIdHasBeenSet(false),
    m_paramListHasBeenSet(false)
{
}

CoreInternalOutcome AgentPluginCredentialConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuthValueSource") && !value["AuthValueSource"].IsNull())
    {
        if (!value["AuthValueSource"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginCredentialConfig.AuthValueSource` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authValueSource = value["AuthValueSource"].GetInt64();
        m_authValueSourceHasBeenSet = true;
    }

    if (value.HasMember("CredentialId") && !value["CredentialId"].IsNull())
    {
        if (!value["CredentialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginCredentialConfig.CredentialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_credentialId = string(value["CredentialId"].GetString());
        m_credentialIdHasBeenSet = true;
    }

    if (value.HasMember("ParamList") && !value["ParamList"].IsNull())
    {
        if (!value["ParamList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentPluginCredentialConfig.ParamList` is not array type"));

        const rapidjson::Value &tmpValue = value["ParamList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentPluginCredentialParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_paramList.push_back(item);
        }
        m_paramListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentPluginCredentialConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_authValueSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthValueSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authValueSource, allocator);
    }

    if (m_credentialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_credentialId.c_str(), allocator).Move(), allocator);
    }

    if (m_paramListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paramList.begin(); itr != m_paramList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t AgentPluginCredentialConfig::GetAuthValueSource() const
{
    return m_authValueSource;
}

void AgentPluginCredentialConfig::SetAuthValueSource(const int64_t& _authValueSource)
{
    m_authValueSource = _authValueSource;
    m_authValueSourceHasBeenSet = true;
}

bool AgentPluginCredentialConfig::AuthValueSourceHasBeenSet() const
{
    return m_authValueSourceHasBeenSet;
}

string AgentPluginCredentialConfig::GetCredentialId() const
{
    return m_credentialId;
}

void AgentPluginCredentialConfig::SetCredentialId(const string& _credentialId)
{
    m_credentialId = _credentialId;
    m_credentialIdHasBeenSet = true;
}

bool AgentPluginCredentialConfig::CredentialIdHasBeenSet() const
{
    return m_credentialIdHasBeenSet;
}

vector<AgentPluginCredentialParam> AgentPluginCredentialConfig::GetParamList() const
{
    return m_paramList;
}

void AgentPluginCredentialConfig::SetParamList(const vector<AgentPluginCredentialParam>& _paramList)
{
    m_paramList = _paramList;
    m_paramListHasBeenSet = true;
}

bool AgentPluginCredentialConfig::ParamListHasBeenSet() const
{
    return m_paramListHasBeenSet;
}

