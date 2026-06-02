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

#include <tencentcloud/apis/v20240801/model/AgentAppServiceVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

AgentAppServiceVO::AgentAppServiceVO() :
    m_iDHasBeenSet(false),
    m_agentAppIDHasBeenSet(false),
    m_serviceIDHasBeenSet(false),
    m_invokeLimitConfigStatusHasBeenSet(false),
    m_invokeLimitConfigHasBeenSet(false),
    m_serviceVOHasBeenSet(false),
    m_relateTimeHasBeenSet(false),
    m_needAuthHasBeenSet(false),
    m_agentCredentialIDHasBeenSet(false),
    m_agentCredentialVOHasBeenSet(false)
{
}

CoreInternalOutcome AgentAppServiceVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppServiceVO.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("AgentAppID") && !value["AgentAppID"].IsNull())
    {
        if (!value["AgentAppID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppServiceVO.AgentAppID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentAppID = string(value["AgentAppID"].GetString());
        m_agentAppIDHasBeenSet = true;
    }

    if (value.HasMember("ServiceID") && !value["ServiceID"].IsNull())
    {
        if (!value["ServiceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppServiceVO.ServiceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceID = string(value["ServiceID"].GetString());
        m_serviceIDHasBeenSet = true;
    }

    if (value.HasMember("InvokeLimitConfigStatus") && !value["InvokeLimitConfigStatus"].IsNull())
    {
        if (!value["InvokeLimitConfigStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppServiceVO.InvokeLimitConfigStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_invokeLimitConfigStatus = value["InvokeLimitConfigStatus"].GetBool();
        m_invokeLimitConfigStatusHasBeenSet = true;
    }

    if (value.HasMember("InvokeLimitConfig") && !value["InvokeLimitConfig"].IsNull())
    {
        if (!value["InvokeLimitConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppServiceVO.InvokeLimitConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_invokeLimitConfig.Deserialize(value["InvokeLimitConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_invokeLimitConfigHasBeenSet = true;
    }

    if (value.HasMember("ServiceVO") && !value["ServiceVO"].IsNull())
    {
        if (!value["ServiceVO"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppServiceVO.ServiceVO` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_serviceVO.Deserialize(value["ServiceVO"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceVOHasBeenSet = true;
    }

    if (value.HasMember("RelateTime") && !value["RelateTime"].IsNull())
    {
        if (!value["RelateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppServiceVO.RelateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relateTime = string(value["RelateTime"].GetString());
        m_relateTimeHasBeenSet = true;
    }

    if (value.HasMember("NeedAuth") && !value["NeedAuth"].IsNull())
    {
        if (!value["NeedAuth"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppServiceVO.NeedAuth` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needAuth = value["NeedAuth"].GetBool();
        m_needAuthHasBeenSet = true;
    }

    if (value.HasMember("AgentCredentialID") && !value["AgentCredentialID"].IsNull())
    {
        if (!value["AgentCredentialID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppServiceVO.AgentCredentialID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentCredentialID = string(value["AgentCredentialID"].GetString());
        m_agentCredentialIDHasBeenSet = true;
    }

    if (value.HasMember("AgentCredentialVO") && !value["AgentCredentialVO"].IsNull())
    {
        if (!value["AgentCredentialVO"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppServiceVO.AgentCredentialVO` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_agentCredentialVO.Deserialize(value["AgentCredentialVO"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_agentCredentialVOHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentAppServiceVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_agentAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentAppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentAppID.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceID.c_str(), allocator).Move(), allocator);
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

    if (m_serviceVOHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceVO";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceVO.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_relateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relateTime.c_str(), allocator).Move(), allocator);
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

}


string AgentAppServiceVO::GetID() const
{
    return m_iD;
}

void AgentAppServiceVO::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool AgentAppServiceVO::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string AgentAppServiceVO::GetAgentAppID() const
{
    return m_agentAppID;
}

void AgentAppServiceVO::SetAgentAppID(const string& _agentAppID)
{
    m_agentAppID = _agentAppID;
    m_agentAppIDHasBeenSet = true;
}

bool AgentAppServiceVO::AgentAppIDHasBeenSet() const
{
    return m_agentAppIDHasBeenSet;
}

string AgentAppServiceVO::GetServiceID() const
{
    return m_serviceID;
}

void AgentAppServiceVO::SetServiceID(const string& _serviceID)
{
    m_serviceID = _serviceID;
    m_serviceIDHasBeenSet = true;
}

bool AgentAppServiceVO::ServiceIDHasBeenSet() const
{
    return m_serviceIDHasBeenSet;
}

bool AgentAppServiceVO::GetInvokeLimitConfigStatus() const
{
    return m_invokeLimitConfigStatus;
}

void AgentAppServiceVO::SetInvokeLimitConfigStatus(const bool& _invokeLimitConfigStatus)
{
    m_invokeLimitConfigStatus = _invokeLimitConfigStatus;
    m_invokeLimitConfigStatusHasBeenSet = true;
}

bool AgentAppServiceVO::InvokeLimitConfigStatusHasBeenSet() const
{
    return m_invokeLimitConfigStatusHasBeenSet;
}

InvokeLimitConfigDTO AgentAppServiceVO::GetInvokeLimitConfig() const
{
    return m_invokeLimitConfig;
}

void AgentAppServiceVO::SetInvokeLimitConfig(const InvokeLimitConfigDTO& _invokeLimitConfig)
{
    m_invokeLimitConfig = _invokeLimitConfig;
    m_invokeLimitConfigHasBeenSet = true;
}

bool AgentAppServiceVO::InvokeLimitConfigHasBeenSet() const
{
    return m_invokeLimitConfigHasBeenSet;
}

ServiceVO AgentAppServiceVO::GetServiceVO() const
{
    return m_serviceVO;
}

void AgentAppServiceVO::SetServiceVO(const ServiceVO& _serviceVO)
{
    m_serviceVO = _serviceVO;
    m_serviceVOHasBeenSet = true;
}

bool AgentAppServiceVO::ServiceVOHasBeenSet() const
{
    return m_serviceVOHasBeenSet;
}

string AgentAppServiceVO::GetRelateTime() const
{
    return m_relateTime;
}

void AgentAppServiceVO::SetRelateTime(const string& _relateTime)
{
    m_relateTime = _relateTime;
    m_relateTimeHasBeenSet = true;
}

bool AgentAppServiceVO::RelateTimeHasBeenSet() const
{
    return m_relateTimeHasBeenSet;
}

bool AgentAppServiceVO::GetNeedAuth() const
{
    return m_needAuth;
}

void AgentAppServiceVO::SetNeedAuth(const bool& _needAuth)
{
    m_needAuth = _needAuth;
    m_needAuthHasBeenSet = true;
}

bool AgentAppServiceVO::NeedAuthHasBeenSet() const
{
    return m_needAuthHasBeenSet;
}

string AgentAppServiceVO::GetAgentCredentialID() const
{
    return m_agentCredentialID;
}

void AgentAppServiceVO::SetAgentCredentialID(const string& _agentCredentialID)
{
    m_agentCredentialID = _agentCredentialID;
    m_agentCredentialIDHasBeenSet = true;
}

bool AgentAppServiceVO::AgentCredentialIDHasBeenSet() const
{
    return m_agentCredentialIDHasBeenSet;
}

DescribeAgentCredentialResp AgentAppServiceVO::GetAgentCredentialVO() const
{
    return m_agentCredentialVO;
}

void AgentAppServiceVO::SetAgentCredentialVO(const DescribeAgentCredentialResp& _agentCredentialVO)
{
    m_agentCredentialVO = _agentCredentialVO;
    m_agentCredentialVOHasBeenSet = true;
}

bool AgentAppServiceVO::AgentCredentialVOHasBeenSet() const
{
    return m_agentCredentialVOHasBeenSet;
}

