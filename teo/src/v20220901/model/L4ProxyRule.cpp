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

#include <tencentcloud/teo/v20220901/model/L4ProxyRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

L4ProxyRule::L4ProxyRule() :
    m_ruleIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portRangeHasBeenSet(false),
    m_originTypeHasBeenSet(false),
    m_originValueHasBeenSet(false),
    m_originPortRangeHasBeenSet(false),
    m_clientIPPassThroughModeHasBeenSet(false),
    m_sessionPersistHasBeenSet(false),
    m_sessionPersistTimeHasBeenSet(false),
    m_ruleTagHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_buIdHasBeenSet(false),
    m_remoteAuthHasBeenSet(false)
{
}

CoreInternalOutcome L4ProxyRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4ProxyRule.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4ProxyRule.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("PortRange") && !value["PortRange"].IsNull())
    {
        if (!value["PortRange"].IsArray())
            return CoreInternalOutcome(Core::Error("response `L4ProxyRule.PortRange` is not array type"));

        const rapidjson::Value &tmpValue = value["PortRange"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_portRange.push_back((*itr).GetString());
        }
        m_portRangeHasBeenSet = true;
    }

    if (value.HasMember("OriginType") && !value["OriginType"].IsNull())
    {
        if (!value["OriginType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4ProxyRule.OriginType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originType = string(value["OriginType"].GetString());
        m_originTypeHasBeenSet = true;
    }

    if (value.HasMember("OriginValue") && !value["OriginValue"].IsNull())
    {
        if (!value["OriginValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `L4ProxyRule.OriginValue` is not array type"));

        const rapidjson::Value &tmpValue = value["OriginValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_originValue.push_back((*itr).GetString());
        }
        m_originValueHasBeenSet = true;
    }

    if (value.HasMember("OriginPortRange") && !value["OriginPortRange"].IsNull())
    {
        if (!value["OriginPortRange"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4ProxyRule.OriginPortRange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originPortRange = string(value["OriginPortRange"].GetString());
        m_originPortRangeHasBeenSet = true;
    }

    if (value.HasMember("ClientIPPassThroughMode") && !value["ClientIPPassThroughMode"].IsNull())
    {
        if (!value["ClientIPPassThroughMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4ProxyRule.ClientIPPassThroughMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIPPassThroughMode = string(value["ClientIPPassThroughMode"].GetString());
        m_clientIPPassThroughModeHasBeenSet = true;
    }

    if (value.HasMember("SessionPersist") && !value["SessionPersist"].IsNull())
    {
        if (!value["SessionPersist"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4ProxyRule.SessionPersist` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionPersist = string(value["SessionPersist"].GetString());
        m_sessionPersistHasBeenSet = true;
    }

    if (value.HasMember("SessionPersistTime") && !value["SessionPersistTime"].IsNull())
    {
        if (!value["SessionPersistTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L4ProxyRule.SessionPersistTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionPersistTime = value["SessionPersistTime"].GetUint64();
        m_sessionPersistTimeHasBeenSet = true;
    }

    if (value.HasMember("RuleTag") && !value["RuleTag"].IsNull())
    {
        if (!value["RuleTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4ProxyRule.RuleTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTag = string(value["RuleTag"].GetString());
        m_ruleTagHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4ProxyRule.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("BuId") && !value["BuId"].IsNull())
    {
        if (!value["BuId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4ProxyRule.BuId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buId = string(value["BuId"].GetString());
        m_buIdHasBeenSet = true;
    }

    if (value.HasMember("RemoteAuth") && !value["RemoteAuth"].IsNull())
    {
        if (!value["RemoteAuth"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `L4ProxyRule.RemoteAuth` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_remoteAuth.Deserialize(value["RemoteAuth"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_remoteAuthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L4ProxyRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_portRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_portRange.begin(); itr != m_portRange.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_originTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originType.c_str(), allocator).Move(), allocator);
    }

    if (m_originValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_originValue.begin(); itr != m_originValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_originPortRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginPortRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originPortRange.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIPPassThroughModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIPPassThroughMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIPPassThroughMode.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionPersistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionPersist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionPersist.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionPersistTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionPersistTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionPersistTime, allocator);
    }

    if (m_ruleTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleTag.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_buIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buId.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_remoteAuth.ToJsonObject(value[key.c_str()], allocator);
    }

}


string L4ProxyRule::GetRuleId() const
{
    return m_ruleId;
}

void L4ProxyRule::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool L4ProxyRule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string L4ProxyRule::GetProtocol() const
{
    return m_protocol;
}

void L4ProxyRule::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool L4ProxyRule::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

vector<string> L4ProxyRule::GetPortRange() const
{
    return m_portRange;
}

void L4ProxyRule::SetPortRange(const vector<string>& _portRange)
{
    m_portRange = _portRange;
    m_portRangeHasBeenSet = true;
}

bool L4ProxyRule::PortRangeHasBeenSet() const
{
    return m_portRangeHasBeenSet;
}

string L4ProxyRule::GetOriginType() const
{
    return m_originType;
}

void L4ProxyRule::SetOriginType(const string& _originType)
{
    m_originType = _originType;
    m_originTypeHasBeenSet = true;
}

bool L4ProxyRule::OriginTypeHasBeenSet() const
{
    return m_originTypeHasBeenSet;
}

vector<string> L4ProxyRule::GetOriginValue() const
{
    return m_originValue;
}

void L4ProxyRule::SetOriginValue(const vector<string>& _originValue)
{
    m_originValue = _originValue;
    m_originValueHasBeenSet = true;
}

bool L4ProxyRule::OriginValueHasBeenSet() const
{
    return m_originValueHasBeenSet;
}

string L4ProxyRule::GetOriginPortRange() const
{
    return m_originPortRange;
}

void L4ProxyRule::SetOriginPortRange(const string& _originPortRange)
{
    m_originPortRange = _originPortRange;
    m_originPortRangeHasBeenSet = true;
}

bool L4ProxyRule::OriginPortRangeHasBeenSet() const
{
    return m_originPortRangeHasBeenSet;
}

string L4ProxyRule::GetClientIPPassThroughMode() const
{
    return m_clientIPPassThroughMode;
}

void L4ProxyRule::SetClientIPPassThroughMode(const string& _clientIPPassThroughMode)
{
    m_clientIPPassThroughMode = _clientIPPassThroughMode;
    m_clientIPPassThroughModeHasBeenSet = true;
}

bool L4ProxyRule::ClientIPPassThroughModeHasBeenSet() const
{
    return m_clientIPPassThroughModeHasBeenSet;
}

string L4ProxyRule::GetSessionPersist() const
{
    return m_sessionPersist;
}

void L4ProxyRule::SetSessionPersist(const string& _sessionPersist)
{
    m_sessionPersist = _sessionPersist;
    m_sessionPersistHasBeenSet = true;
}

bool L4ProxyRule::SessionPersistHasBeenSet() const
{
    return m_sessionPersistHasBeenSet;
}

uint64_t L4ProxyRule::GetSessionPersistTime() const
{
    return m_sessionPersistTime;
}

void L4ProxyRule::SetSessionPersistTime(const uint64_t& _sessionPersistTime)
{
    m_sessionPersistTime = _sessionPersistTime;
    m_sessionPersistTimeHasBeenSet = true;
}

bool L4ProxyRule::SessionPersistTimeHasBeenSet() const
{
    return m_sessionPersistTimeHasBeenSet;
}

string L4ProxyRule::GetRuleTag() const
{
    return m_ruleTag;
}

void L4ProxyRule::SetRuleTag(const string& _ruleTag)
{
    m_ruleTag = _ruleTag;
    m_ruleTagHasBeenSet = true;
}

bool L4ProxyRule::RuleTagHasBeenSet() const
{
    return m_ruleTagHasBeenSet;
}

string L4ProxyRule::GetStatus() const
{
    return m_status;
}

void L4ProxyRule::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool L4ProxyRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string L4ProxyRule::GetBuId() const
{
    return m_buId;
}

void L4ProxyRule::SetBuId(const string& _buId)
{
    m_buId = _buId;
    m_buIdHasBeenSet = true;
}

bool L4ProxyRule::BuIdHasBeenSet() const
{
    return m_buIdHasBeenSet;
}

L4ProxyRemoteAuth L4ProxyRule::GetRemoteAuth() const
{
    return m_remoteAuth;
}

void L4ProxyRule::SetRemoteAuth(const L4ProxyRemoteAuth& _remoteAuth)
{
    m_remoteAuth = _remoteAuth;
    m_remoteAuthHasBeenSet = true;
}

bool L4ProxyRule::RemoteAuthHasBeenSet() const
{
    return m_remoteAuthHasBeenSet;
}

