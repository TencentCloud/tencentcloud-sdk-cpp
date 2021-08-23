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

#include <tencentcloud/partners/v20180321/model/ClientBaseElem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

ClientBaseElem::ClientBaseElem() :
    m_agentUinHasBeenSet(false),
    m_clientUinHasBeenSet(false),
    m_clientRelateTypeHasBeenSet(false),
    m_agentCooperationModeHasBeenSet(false),
    m_agentCountryHasBeenSet(false)
{
}

CoreInternalOutcome ClientBaseElem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AgentUin") && !value["AgentUin"].IsNull())
    {
        if (!value["AgentUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientBaseElem.AgentUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentUin = string(value["AgentUin"].GetString());
        m_agentUinHasBeenSet = true;
    }

    if (value.HasMember("ClientUin") && !value["ClientUin"].IsNull())
    {
        if (!value["ClientUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientBaseElem.ClientUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientUin = string(value["ClientUin"].GetString());
        m_clientUinHasBeenSet = true;
    }

    if (value.HasMember("ClientRelateType") && !value["ClientRelateType"].IsNull())
    {
        if (!value["ClientRelateType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClientBaseElem.ClientRelateType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clientRelateType = value["ClientRelateType"].GetUint64();
        m_clientRelateTypeHasBeenSet = true;
    }

    if (value.HasMember("AgentCooperationMode") && !value["AgentCooperationMode"].IsNull())
    {
        if (!value["AgentCooperationMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClientBaseElem.AgentCooperationMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_agentCooperationMode = value["AgentCooperationMode"].GetUint64();
        m_agentCooperationModeHasBeenSet = true;
    }

    if (value.HasMember("AgentCountry") && !value["AgentCountry"].IsNull())
    {
        if (!value["AgentCountry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientBaseElem.AgentCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentCountry = string(value["AgentCountry"].GetString());
        m_agentCountryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClientBaseElem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_agentUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentUin.c_str(), allocator).Move(), allocator);
    }

    if (m_clientUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientUin.c_str(), allocator).Move(), allocator);
    }

    if (m_clientRelateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientRelateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientRelateType, allocator);
    }

    if (m_agentCooperationModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentCooperationMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentCooperationMode, allocator);
    }

    if (m_agentCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentCountry.c_str(), allocator).Move(), allocator);
    }

}


string ClientBaseElem::GetAgentUin() const
{
    return m_agentUin;
}

void ClientBaseElem::SetAgentUin(const string& _agentUin)
{
    m_agentUin = _agentUin;
    m_agentUinHasBeenSet = true;
}

bool ClientBaseElem::AgentUinHasBeenSet() const
{
    return m_agentUinHasBeenSet;
}

string ClientBaseElem::GetClientUin() const
{
    return m_clientUin;
}

void ClientBaseElem::SetClientUin(const string& _clientUin)
{
    m_clientUin = _clientUin;
    m_clientUinHasBeenSet = true;
}

bool ClientBaseElem::ClientUinHasBeenSet() const
{
    return m_clientUinHasBeenSet;
}

uint64_t ClientBaseElem::GetClientRelateType() const
{
    return m_clientRelateType;
}

void ClientBaseElem::SetClientRelateType(const uint64_t& _clientRelateType)
{
    m_clientRelateType = _clientRelateType;
    m_clientRelateTypeHasBeenSet = true;
}

bool ClientBaseElem::ClientRelateTypeHasBeenSet() const
{
    return m_clientRelateTypeHasBeenSet;
}

uint64_t ClientBaseElem::GetAgentCooperationMode() const
{
    return m_agentCooperationMode;
}

void ClientBaseElem::SetAgentCooperationMode(const uint64_t& _agentCooperationMode)
{
    m_agentCooperationMode = _agentCooperationMode;
    m_agentCooperationModeHasBeenSet = true;
}

bool ClientBaseElem::AgentCooperationModeHasBeenSet() const
{
    return m_agentCooperationModeHasBeenSet;
}

string ClientBaseElem::GetAgentCountry() const
{
    return m_agentCountry;
}

void ClientBaseElem::SetAgentCountry(const string& _agentCountry)
{
    m_agentCountry = _agentCountry;
    m_agentCountryHasBeenSet = true;
}

bool ClientBaseElem::AgentCountryHasBeenSet() const
{
    return m_agentCountryHasBeenSet;
}

