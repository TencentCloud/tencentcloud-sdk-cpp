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

#include <tencentcloud/apis/v20240801/model/AgentAppModelServiceDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

AgentAppModelServiceDTO::AgentAppModelServiceDTO() :
    m_iDHasBeenSet(false),
    m_invokeLimitConfigStatusHasBeenSet(false),
    m_invokeLimitConfigHasBeenSet(false),
    m_tokenLimitStatusHasBeenSet(false),
    m_tokenLimitConfigHasBeenSet(false)
{
}

CoreInternalOutcome AgentAppModelServiceDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppModelServiceDTO.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("InvokeLimitConfigStatus") && !value["InvokeLimitConfigStatus"].IsNull())
    {
        if (!value["InvokeLimitConfigStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppModelServiceDTO.InvokeLimitConfigStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_invokeLimitConfigStatus = value["InvokeLimitConfigStatus"].GetBool();
        m_invokeLimitConfigStatusHasBeenSet = true;
    }

    if (value.HasMember("InvokeLimitConfig") && !value["InvokeLimitConfig"].IsNull())
    {
        if (!value["InvokeLimitConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppModelServiceDTO.InvokeLimitConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_invokeLimitConfig.Deserialize(value["InvokeLimitConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_invokeLimitConfigHasBeenSet = true;
    }

    if (value.HasMember("TokenLimitStatus") && !value["TokenLimitStatus"].IsNull())
    {
        if (!value["TokenLimitStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppModelServiceDTO.TokenLimitStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_tokenLimitStatus = value["TokenLimitStatus"].GetBool();
        m_tokenLimitStatusHasBeenSet = true;
    }

    if (value.HasMember("TokenLimitConfig") && !value["TokenLimitConfig"].IsNull())
    {
        if (!value["TokenLimitConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppModelServiceDTO.TokenLimitConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tokenLimitConfig.Deserialize(value["TokenLimitConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tokenLimitConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentAppModelServiceDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_tokenLimitStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenLimitStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tokenLimitStatus, allocator);
    }

    if (m_tokenLimitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenLimitConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tokenLimitConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AgentAppModelServiceDTO::GetID() const
{
    return m_iD;
}

void AgentAppModelServiceDTO::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool AgentAppModelServiceDTO::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

bool AgentAppModelServiceDTO::GetInvokeLimitConfigStatus() const
{
    return m_invokeLimitConfigStatus;
}

void AgentAppModelServiceDTO::SetInvokeLimitConfigStatus(const bool& _invokeLimitConfigStatus)
{
    m_invokeLimitConfigStatus = _invokeLimitConfigStatus;
    m_invokeLimitConfigStatusHasBeenSet = true;
}

bool AgentAppModelServiceDTO::InvokeLimitConfigStatusHasBeenSet() const
{
    return m_invokeLimitConfigStatusHasBeenSet;
}

InvokeLimitConfigDTO AgentAppModelServiceDTO::GetInvokeLimitConfig() const
{
    return m_invokeLimitConfig;
}

void AgentAppModelServiceDTO::SetInvokeLimitConfig(const InvokeLimitConfigDTO& _invokeLimitConfig)
{
    m_invokeLimitConfig = _invokeLimitConfig;
    m_invokeLimitConfigHasBeenSet = true;
}

bool AgentAppModelServiceDTO::InvokeLimitConfigHasBeenSet() const
{
    return m_invokeLimitConfigHasBeenSet;
}

bool AgentAppModelServiceDTO::GetTokenLimitStatus() const
{
    return m_tokenLimitStatus;
}

void AgentAppModelServiceDTO::SetTokenLimitStatus(const bool& _tokenLimitStatus)
{
    m_tokenLimitStatus = _tokenLimitStatus;
    m_tokenLimitStatusHasBeenSet = true;
}

bool AgentAppModelServiceDTO::TokenLimitStatusHasBeenSet() const
{
    return m_tokenLimitStatusHasBeenSet;
}

TokenLimitConfigDTO AgentAppModelServiceDTO::GetTokenLimitConfig() const
{
    return m_tokenLimitConfig;
}

void AgentAppModelServiceDTO::SetTokenLimitConfig(const TokenLimitConfigDTO& _tokenLimitConfig)
{
    m_tokenLimitConfig = _tokenLimitConfig;
    m_tokenLimitConfigHasBeenSet = true;
}

bool AgentAppModelServiceDTO::TokenLimitConfigHasBeenSet() const
{
    return m_tokenLimitConfigHasBeenSet;
}

