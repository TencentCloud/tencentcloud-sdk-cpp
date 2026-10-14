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

#include <tencentcloud/adp/v20260520/model/ClawAgentConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ClawAgentConfig::ClawAgentConfig() :
    m_agentTeamConfigHasBeenSet(false),
    m_longMemoryConfigHasBeenSet(false),
    m_channelContextTimeoutConfigHasBeenSet(false)
{
}

CoreInternalOutcome ClawAgentConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AgentTeamConfig") && !value["AgentTeamConfig"].IsNull())
    {
        if (!value["AgentTeamConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClawAgentConfig.AgentTeamConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_agentTeamConfig.Deserialize(value["AgentTeamConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_agentTeamConfigHasBeenSet = true;
    }

    if (value.HasMember("LongMemoryConfig") && !value["LongMemoryConfig"].IsNull())
    {
        if (!value["LongMemoryConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClawAgentConfig.LongMemoryConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_longMemoryConfig.Deserialize(value["LongMemoryConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_longMemoryConfigHasBeenSet = true;
    }

    if (value.HasMember("ChannelContextTimeoutConfig") && !value["ChannelContextTimeoutConfig"].IsNull())
    {
        if (!value["ChannelContextTimeoutConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClawAgentConfig.ChannelContextTimeoutConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_channelContextTimeoutConfig.Deserialize(value["ChannelContextTimeoutConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_channelContextTimeoutConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClawAgentConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_agentTeamConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentTeamConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agentTeamConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_longMemoryConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongMemoryConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_longMemoryConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_channelContextTimeoutConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelContextTimeoutConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_channelContextTimeoutConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


ClawAgentAgentTeamConfig ClawAgentConfig::GetAgentTeamConfig() const
{
    return m_agentTeamConfig;
}

void ClawAgentConfig::SetAgentTeamConfig(const ClawAgentAgentTeamConfig& _agentTeamConfig)
{
    m_agentTeamConfig = _agentTeamConfig;
    m_agentTeamConfigHasBeenSet = true;
}

bool ClawAgentConfig::AgentTeamConfigHasBeenSet() const
{
    return m_agentTeamConfigHasBeenSet;
}

ClawAgentLongMemoryConfig ClawAgentConfig::GetLongMemoryConfig() const
{
    return m_longMemoryConfig;
}

void ClawAgentConfig::SetLongMemoryConfig(const ClawAgentLongMemoryConfig& _longMemoryConfig)
{
    m_longMemoryConfig = _longMemoryConfig;
    m_longMemoryConfigHasBeenSet = true;
}

bool ClawAgentConfig::LongMemoryConfigHasBeenSet() const
{
    return m_longMemoryConfigHasBeenSet;
}

ClawAgentChannelContextTimeoutConfig ClawAgentConfig::GetChannelContextTimeoutConfig() const
{
    return m_channelContextTimeoutConfig;
}

void ClawAgentConfig::SetChannelContextTimeoutConfig(const ClawAgentChannelContextTimeoutConfig& _channelContextTimeoutConfig)
{
    m_channelContextTimeoutConfig = _channelContextTimeoutConfig;
    m_channelContextTimeoutConfigHasBeenSet = true;
}

bool ClawAgentConfig::ChannelContextTimeoutConfigHasBeenSet() const
{
    return m_channelContextTimeoutConfigHasBeenSet;
}

