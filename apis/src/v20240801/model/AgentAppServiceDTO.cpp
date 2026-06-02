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

#include <tencentcloud/apis/v20240801/model/AgentAppServiceDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

AgentAppServiceDTO::AgentAppServiceDTO() :
    m_iDHasBeenSet(false),
    m_invokeLimitConfigStatusHasBeenSet(false),
    m_invokeLimitConfigHasBeenSet(false),
    m_needAuthHasBeenSet(false),
    m_agentCredentialIDHasBeenSet(false)
{
}

CoreInternalOutcome AgentAppServiceDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppServiceDTO.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("InvokeLimitConfigStatus") && !value["InvokeLimitConfigStatus"].IsNull())
    {
        if (!value["InvokeLimitConfigStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppServiceDTO.InvokeLimitConfigStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_invokeLimitConfigStatus = value["InvokeLimitConfigStatus"].GetBool();
        m_invokeLimitConfigStatusHasBeenSet = true;
    }

    if (value.HasMember("InvokeLimitConfig") && !value["InvokeLimitConfig"].IsNull())
    {
        if (!value["InvokeLimitConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppServiceDTO.InvokeLimitConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_invokeLimitConfig.Deserialize(value["InvokeLimitConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_invokeLimitConfigHasBeenSet = true;
    }

    if (value.HasMember("NeedAuth") && !value["NeedAuth"].IsNull())
    {
        if (!value["NeedAuth"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppServiceDTO.NeedAuth` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needAuth = value["NeedAuth"].GetBool();
        m_needAuthHasBeenSet = true;
    }

    if (value.HasMember("AgentCredentialID") && !value["AgentCredentialID"].IsNull())
    {
        if (!value["AgentCredentialID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppServiceDTO.AgentCredentialID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentCredentialID = string(value["AgentCredentialID"].GetString());
        m_agentCredentialIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentAppServiceDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_invokeLimitConfigStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeLimitConfigStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invokeLimitConfigStatus, allocator);
    }

    if (m_invokeLimitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeLimitConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_invokeLimitConfig.ToJsonObject(value[key.c_str()], allocator);
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

}


string AgentAppServiceDTO::GetID() const
{
    return m_iD;
}

void AgentAppServiceDTO::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool AgentAppServiceDTO::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

bool AgentAppServiceDTO::GetInvokeLimitConfigStatus() const
{
    return m_invokeLimitConfigStatus;
}

void AgentAppServiceDTO::SetInvokeLimitConfigStatus(const bool& _invokeLimitConfigStatus)
{
    m_invokeLimitConfigStatus = _invokeLimitConfigStatus;
    m_invokeLimitConfigStatusHasBeenSet = true;
}

bool AgentAppServiceDTO::InvokeLimitConfigStatusHasBeenSet() const
{
    return m_invokeLimitConfigStatusHasBeenSet;
}

InvokeLimitConfigDTO AgentAppServiceDTO::GetInvokeLimitConfig() const
{
    return m_invokeLimitConfig;
}

void AgentAppServiceDTO::SetInvokeLimitConfig(const InvokeLimitConfigDTO& _invokeLimitConfig)
{
    m_invokeLimitConfig = _invokeLimitConfig;
    m_invokeLimitConfigHasBeenSet = true;
}

bool AgentAppServiceDTO::InvokeLimitConfigHasBeenSet() const
{
    return m_invokeLimitConfigHasBeenSet;
}

bool AgentAppServiceDTO::GetNeedAuth() const
{
    return m_needAuth;
}

void AgentAppServiceDTO::SetNeedAuth(const bool& _needAuth)
{
    m_needAuth = _needAuth;
    m_needAuthHasBeenSet = true;
}

bool AgentAppServiceDTO::NeedAuthHasBeenSet() const
{
    return m_needAuthHasBeenSet;
}

string AgentAppServiceDTO::GetAgentCredentialID() const
{
    return m_agentCredentialID;
}

void AgentAppServiceDTO::SetAgentCredentialID(const string& _agentCredentialID)
{
    m_agentCredentialID = _agentCredentialID;
    m_agentCredentialIDHasBeenSet = true;
}

bool AgentAppServiceDTO::AgentCredentialIDHasBeenSet() const
{
    return m_agentCredentialIDHasBeenSet;
}

