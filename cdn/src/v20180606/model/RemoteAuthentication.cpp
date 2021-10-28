/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/cdn/v20180606/model/RemoteAuthentication.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

RemoteAuthentication::RemoteAuthentication() :
    m_switchHasBeenSet(false),
    m_remoteAuthenticationRulesHasBeenSet(false),
    m_serverHasBeenSet(false)
{
}

CoreInternalOutcome RemoteAuthentication::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteAuthentication.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("RemoteAuthenticationRules") && !value["RemoteAuthenticationRules"].IsNull())
    {
        if (!value["RemoteAuthenticationRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RemoteAuthentication.RemoteAuthenticationRules` is not array type"));

        const rapidjson::Value &tmpValue = value["RemoteAuthenticationRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RemoteAuthenticationRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_remoteAuthenticationRules.push_back(item);
        }
        m_remoteAuthenticationRulesHasBeenSet = true;
    }

    if (value.HasMember("Server") && !value["Server"].IsNull())
    {
        if (!value["Server"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteAuthentication.Server` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_server = string(value["Server"].GetString());
        m_serverHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RemoteAuthentication::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteAuthenticationRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteAuthenticationRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_remoteAuthenticationRules.begin(); itr != m_remoteAuthenticationRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_serverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Server";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_server.c_str(), allocator).Move(), allocator);
    }

}


string RemoteAuthentication::GetSwitch() const
{
    return m_switch;
}

void RemoteAuthentication::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool RemoteAuthentication::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<RemoteAuthenticationRule> RemoteAuthentication::GetRemoteAuthenticationRules() const
{
    return m_remoteAuthenticationRules;
}

void RemoteAuthentication::SetRemoteAuthenticationRules(const vector<RemoteAuthenticationRule>& _remoteAuthenticationRules)
{
    m_remoteAuthenticationRules = _remoteAuthenticationRules;
    m_remoteAuthenticationRulesHasBeenSet = true;
}

bool RemoteAuthentication::RemoteAuthenticationRulesHasBeenSet() const
{
    return m_remoteAuthenticationRulesHasBeenSet;
}

string RemoteAuthentication::GetServer() const
{
    return m_server;
}

void RemoteAuthentication::SetServer(const string& _server)
{
    m_server = _server;
    m_serverHasBeenSet = true;
}

bool RemoteAuthentication::ServerHasBeenSet() const
{
    return m_serverHasBeenSet;
}

