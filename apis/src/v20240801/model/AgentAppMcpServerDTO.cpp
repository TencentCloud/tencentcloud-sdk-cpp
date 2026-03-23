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

#include <tencentcloud/apis/v20240801/model/AgentAppMcpServerDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

AgentAppMcpServerDTO::AgentAppMcpServerDTO() :
    m_iDHasBeenSet(false),
    m_needAuthHasBeenSet(false),
    m_agentCredentialIDHasBeenSet(false),
    m_sSEResourceIdentifierHasBeenSet(false),
    m_streamableResourceIdentifierHasBeenSet(false)
{
}

CoreInternalOutcome AgentAppMcpServerDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppMcpServerDTO.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("NeedAuth") && !value["NeedAuth"].IsNull())
    {
        if (!value["NeedAuth"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppMcpServerDTO.NeedAuth` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needAuth = value["NeedAuth"].GetBool();
        m_needAuthHasBeenSet = true;
    }

    if (value.HasMember("AgentCredentialID") && !value["AgentCredentialID"].IsNull())
    {
        if (!value["AgentCredentialID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppMcpServerDTO.AgentCredentialID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentCredentialID = string(value["AgentCredentialID"].GetString());
        m_agentCredentialIDHasBeenSet = true;
    }

    if (value.HasMember("SSEResourceIdentifier") && !value["SSEResourceIdentifier"].IsNull())
    {
        if (!value["SSEResourceIdentifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppMcpServerDTO.SSEResourceIdentifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSEResourceIdentifier = string(value["SSEResourceIdentifier"].GetString());
        m_sSEResourceIdentifierHasBeenSet = true;
    }

    if (value.HasMember("StreamableResourceIdentifier") && !value["StreamableResourceIdentifier"].IsNull())
    {
        if (!value["StreamableResourceIdentifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppMcpServerDTO.StreamableResourceIdentifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamableResourceIdentifier = string(value["StreamableResourceIdentifier"].GetString());
        m_streamableResourceIdentifierHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentAppMcpServerDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_needAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needAuth, allocator);
    }

    if (m_agentCredentialIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentCredentialID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentCredentialID.c_str(), allocator).Move(), allocator);
    }

    if (m_sSEResourceIdentifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSEResourceIdentifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSEResourceIdentifier.c_str(), allocator).Move(), allocator);
    }

    if (m_streamableResourceIdentifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamableResourceIdentifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamableResourceIdentifier.c_str(), allocator).Move(), allocator);
    }

}


string AgentAppMcpServerDTO::GetID() const
{
    return m_iD;
}

void AgentAppMcpServerDTO::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool AgentAppMcpServerDTO::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

bool AgentAppMcpServerDTO::GetNeedAuth() const
{
    return m_needAuth;
}

void AgentAppMcpServerDTO::SetNeedAuth(const bool& _needAuth)
{
    m_needAuth = _needAuth;
    m_needAuthHasBeenSet = true;
}

bool AgentAppMcpServerDTO::NeedAuthHasBeenSet() const
{
    return m_needAuthHasBeenSet;
}

string AgentAppMcpServerDTO::GetAgentCredentialID() const
{
    return m_agentCredentialID;
}

void AgentAppMcpServerDTO::SetAgentCredentialID(const string& _agentCredentialID)
{
    m_agentCredentialID = _agentCredentialID;
    m_agentCredentialIDHasBeenSet = true;
}

bool AgentAppMcpServerDTO::AgentCredentialIDHasBeenSet() const
{
    return m_agentCredentialIDHasBeenSet;
}

string AgentAppMcpServerDTO::GetSSEResourceIdentifier() const
{
    return m_sSEResourceIdentifier;
}

void AgentAppMcpServerDTO::SetSSEResourceIdentifier(const string& _sSEResourceIdentifier)
{
    m_sSEResourceIdentifier = _sSEResourceIdentifier;
    m_sSEResourceIdentifierHasBeenSet = true;
}

bool AgentAppMcpServerDTO::SSEResourceIdentifierHasBeenSet() const
{
    return m_sSEResourceIdentifierHasBeenSet;
}

string AgentAppMcpServerDTO::GetStreamableResourceIdentifier() const
{
    return m_streamableResourceIdentifier;
}

void AgentAppMcpServerDTO::SetStreamableResourceIdentifier(const string& _streamableResourceIdentifier)
{
    m_streamableResourceIdentifier = _streamableResourceIdentifier;
    m_streamableResourceIdentifierHasBeenSet = true;
}

bool AgentAppMcpServerDTO::StreamableResourceIdentifierHasBeenSet() const
{
    return m_streamableResourceIdentifierHasBeenSet;
}

