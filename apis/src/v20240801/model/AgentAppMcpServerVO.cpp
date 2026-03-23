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

#include <tencentcloud/apis/v20240801/model/AgentAppMcpServerVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

AgentAppMcpServerVO::AgentAppMcpServerVO() :
    m_iDHasBeenSet(false),
    m_needAuthHasBeenSet(false),
    m_agentCredentialIDHasBeenSet(false),
    m_agentCredentialVOHasBeenSet(false),
    m_mcpServerVOHasBeenSet(false),
    m_relateTimeHasBeenSet(false),
    m_sSEResourceIdentifierHasBeenSet(false),
    m_streamableResourceIdentifierHasBeenSet(false),
    m_agentAppIDHasBeenSet(false),
    m_mcpServerIDHasBeenSet(false)
{
}

CoreInternalOutcome AgentAppMcpServerVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppMcpServerVO.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("NeedAuth") && !value["NeedAuth"].IsNull())
    {
        if (!value["NeedAuth"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppMcpServerVO.NeedAuth` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needAuth = value["NeedAuth"].GetBool();
        m_needAuthHasBeenSet = true;
    }

    if (value.HasMember("AgentCredentialID") && !value["AgentCredentialID"].IsNull())
    {
        if (!value["AgentCredentialID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppMcpServerVO.AgentCredentialID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentCredentialID = string(value["AgentCredentialID"].GetString());
        m_agentCredentialIDHasBeenSet = true;
    }

    if (value.HasMember("AgentCredentialVO") && !value["AgentCredentialVO"].IsNull())
    {
        if (!value["AgentCredentialVO"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppMcpServerVO.AgentCredentialVO` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_agentCredentialVO.Deserialize(value["AgentCredentialVO"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_agentCredentialVOHasBeenSet = true;
    }

    if (value.HasMember("McpServerVO") && !value["McpServerVO"].IsNull())
    {
        if (!value["McpServerVO"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppMcpServerVO.McpServerVO` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mcpServerVO.Deserialize(value["McpServerVO"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mcpServerVOHasBeenSet = true;
    }

    if (value.HasMember("RelateTime") && !value["RelateTime"].IsNull())
    {
        if (!value["RelateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppMcpServerVO.RelateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relateTime = string(value["RelateTime"].GetString());
        m_relateTimeHasBeenSet = true;
    }

    if (value.HasMember("SSEResourceIdentifier") && !value["SSEResourceIdentifier"].IsNull())
    {
        if (!value["SSEResourceIdentifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppMcpServerVO.SSEResourceIdentifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSEResourceIdentifier = string(value["SSEResourceIdentifier"].GetString());
        m_sSEResourceIdentifierHasBeenSet = true;
    }

    if (value.HasMember("StreamableResourceIdentifier") && !value["StreamableResourceIdentifier"].IsNull())
    {
        if (!value["StreamableResourceIdentifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppMcpServerVO.StreamableResourceIdentifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamableResourceIdentifier = string(value["StreamableResourceIdentifier"].GetString());
        m_streamableResourceIdentifierHasBeenSet = true;
    }

    if (value.HasMember("AgentAppID") && !value["AgentAppID"].IsNull())
    {
        if (!value["AgentAppID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppMcpServerVO.AgentAppID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentAppID = string(value["AgentAppID"].GetString());
        m_agentAppIDHasBeenSet = true;
    }

    if (value.HasMember("McpServerID") && !value["McpServerID"].IsNull())
    {
        if (!value["McpServerID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppMcpServerVO.McpServerID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mcpServerID = string(value["McpServerID"].GetString());
        m_mcpServerIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentAppMcpServerVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_agentCredentialVOHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentCredentialVO";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agentCredentialVO.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mcpServerVOHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McpServerVO";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mcpServerVO.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_relateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relateTime.c_str(), allocator).Move(), allocator);
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

    if (m_agentAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentAppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentAppID.c_str(), allocator).Move(), allocator);
    }

    if (m_mcpServerIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McpServerID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mcpServerID.c_str(), allocator).Move(), allocator);
    }

}


string AgentAppMcpServerVO::GetID() const
{
    return m_iD;
}

void AgentAppMcpServerVO::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool AgentAppMcpServerVO::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

bool AgentAppMcpServerVO::GetNeedAuth() const
{
    return m_needAuth;
}

void AgentAppMcpServerVO::SetNeedAuth(const bool& _needAuth)
{
    m_needAuth = _needAuth;
    m_needAuthHasBeenSet = true;
}

bool AgentAppMcpServerVO::NeedAuthHasBeenSet() const
{
    return m_needAuthHasBeenSet;
}

string AgentAppMcpServerVO::GetAgentCredentialID() const
{
    return m_agentCredentialID;
}

void AgentAppMcpServerVO::SetAgentCredentialID(const string& _agentCredentialID)
{
    m_agentCredentialID = _agentCredentialID;
    m_agentCredentialIDHasBeenSet = true;
}

bool AgentAppMcpServerVO::AgentCredentialIDHasBeenSet() const
{
    return m_agentCredentialIDHasBeenSet;
}

DescribeAgentCredentialResp AgentAppMcpServerVO::GetAgentCredentialVO() const
{
    return m_agentCredentialVO;
}

void AgentAppMcpServerVO::SetAgentCredentialVO(const DescribeAgentCredentialResp& _agentCredentialVO)
{
    m_agentCredentialVO = _agentCredentialVO;
    m_agentCredentialVOHasBeenSet = true;
}

bool AgentAppMcpServerVO::AgentCredentialVOHasBeenSet() const
{
    return m_agentCredentialVOHasBeenSet;
}

DescribeMcpServerResponseVO AgentAppMcpServerVO::GetMcpServerVO() const
{
    return m_mcpServerVO;
}

void AgentAppMcpServerVO::SetMcpServerVO(const DescribeMcpServerResponseVO& _mcpServerVO)
{
    m_mcpServerVO = _mcpServerVO;
    m_mcpServerVOHasBeenSet = true;
}

bool AgentAppMcpServerVO::McpServerVOHasBeenSet() const
{
    return m_mcpServerVOHasBeenSet;
}

string AgentAppMcpServerVO::GetRelateTime() const
{
    return m_relateTime;
}

void AgentAppMcpServerVO::SetRelateTime(const string& _relateTime)
{
    m_relateTime = _relateTime;
    m_relateTimeHasBeenSet = true;
}

bool AgentAppMcpServerVO::RelateTimeHasBeenSet() const
{
    return m_relateTimeHasBeenSet;
}

string AgentAppMcpServerVO::GetSSEResourceIdentifier() const
{
    return m_sSEResourceIdentifier;
}

void AgentAppMcpServerVO::SetSSEResourceIdentifier(const string& _sSEResourceIdentifier)
{
    m_sSEResourceIdentifier = _sSEResourceIdentifier;
    m_sSEResourceIdentifierHasBeenSet = true;
}

bool AgentAppMcpServerVO::SSEResourceIdentifierHasBeenSet() const
{
    return m_sSEResourceIdentifierHasBeenSet;
}

string AgentAppMcpServerVO::GetStreamableResourceIdentifier() const
{
    return m_streamableResourceIdentifier;
}

void AgentAppMcpServerVO::SetStreamableResourceIdentifier(const string& _streamableResourceIdentifier)
{
    m_streamableResourceIdentifier = _streamableResourceIdentifier;
    m_streamableResourceIdentifierHasBeenSet = true;
}

bool AgentAppMcpServerVO::StreamableResourceIdentifierHasBeenSet() const
{
    return m_streamableResourceIdentifierHasBeenSet;
}

string AgentAppMcpServerVO::GetAgentAppID() const
{
    return m_agentAppID;
}

void AgentAppMcpServerVO::SetAgentAppID(const string& _agentAppID)
{
    m_agentAppID = _agentAppID;
    m_agentAppIDHasBeenSet = true;
}

bool AgentAppMcpServerVO::AgentAppIDHasBeenSet() const
{
    return m_agentAppIDHasBeenSet;
}

string AgentAppMcpServerVO::GetMcpServerID() const
{
    return m_mcpServerID;
}

void AgentAppMcpServerVO::SetMcpServerID(const string& _mcpServerID)
{
    m_mcpServerID = _mcpServerID;
    m_mcpServerIDHasBeenSet = true;
}

bool AgentAppMcpServerVO::McpServerIDHasBeenSet() const
{
    return m_mcpServerIDHasBeenSet;
}

