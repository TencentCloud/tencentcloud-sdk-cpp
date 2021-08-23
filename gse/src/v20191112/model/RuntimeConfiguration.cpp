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

#include <tencentcloud/gse/v20191112/model/RuntimeConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

RuntimeConfiguration::RuntimeConfiguration() :
    m_gameServerSessionActivationTimeoutSecondsHasBeenSet(false),
    m_maxConcurrentGameServerSessionActivationsHasBeenSet(false),
    m_serverProcessesHasBeenSet(false)
{
}

CoreInternalOutcome RuntimeConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GameServerSessionActivationTimeoutSeconds") && !value["GameServerSessionActivationTimeoutSeconds"].IsNull())
    {
        if (!value["GameServerSessionActivationTimeoutSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeConfiguration.GameServerSessionActivationTimeoutSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gameServerSessionActivationTimeoutSeconds = value["GameServerSessionActivationTimeoutSeconds"].GetUint64();
        m_gameServerSessionActivationTimeoutSecondsHasBeenSet = true;
    }

    if (value.HasMember("MaxConcurrentGameServerSessionActivations") && !value["MaxConcurrentGameServerSessionActivations"].IsNull())
    {
        if (!value["MaxConcurrentGameServerSessionActivations"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeConfiguration.MaxConcurrentGameServerSessionActivations` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConcurrentGameServerSessionActivations = value["MaxConcurrentGameServerSessionActivations"].GetUint64();
        m_maxConcurrentGameServerSessionActivationsHasBeenSet = true;
    }

    if (value.HasMember("ServerProcesses") && !value["ServerProcesses"].IsNull())
    {
        if (!value["ServerProcesses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuntimeConfiguration.ServerProcesses` is not array type"));

        const rapidjson::Value &tmpValue = value["ServerProcesses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServerProcesse item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serverProcesses.push_back(item);
        }
        m_serverProcessesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuntimeConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gameServerSessionActivationTimeoutSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameServerSessionActivationTimeoutSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gameServerSessionActivationTimeoutSeconds, allocator);
    }

    if (m_maxConcurrentGameServerSessionActivationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrentGameServerSessionActivations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConcurrentGameServerSessionActivations, allocator);
    }

    if (m_serverProcessesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerProcesses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serverProcesses.begin(); itr != m_serverProcesses.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t RuntimeConfiguration::GetGameServerSessionActivationTimeoutSeconds() const
{
    return m_gameServerSessionActivationTimeoutSeconds;
}

void RuntimeConfiguration::SetGameServerSessionActivationTimeoutSeconds(const uint64_t& _gameServerSessionActivationTimeoutSeconds)
{
    m_gameServerSessionActivationTimeoutSeconds = _gameServerSessionActivationTimeoutSeconds;
    m_gameServerSessionActivationTimeoutSecondsHasBeenSet = true;
}

bool RuntimeConfiguration::GameServerSessionActivationTimeoutSecondsHasBeenSet() const
{
    return m_gameServerSessionActivationTimeoutSecondsHasBeenSet;
}

uint64_t RuntimeConfiguration::GetMaxConcurrentGameServerSessionActivations() const
{
    return m_maxConcurrentGameServerSessionActivations;
}

void RuntimeConfiguration::SetMaxConcurrentGameServerSessionActivations(const uint64_t& _maxConcurrentGameServerSessionActivations)
{
    m_maxConcurrentGameServerSessionActivations = _maxConcurrentGameServerSessionActivations;
    m_maxConcurrentGameServerSessionActivationsHasBeenSet = true;
}

bool RuntimeConfiguration::MaxConcurrentGameServerSessionActivationsHasBeenSet() const
{
    return m_maxConcurrentGameServerSessionActivationsHasBeenSet;
}

vector<ServerProcesse> RuntimeConfiguration::GetServerProcesses() const
{
    return m_serverProcesses;
}

void RuntimeConfiguration::SetServerProcesses(const vector<ServerProcesse>& _serverProcesses)
{
    m_serverProcesses = _serverProcesses;
    m_serverProcessesHasBeenSet = true;
}

bool RuntimeConfiguration::ServerProcessesHasBeenSet() const
{
    return m_serverProcessesHasBeenSet;
}

