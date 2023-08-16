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

#include <tencentcloud/teo/v20220901/model/ApplicationProxyRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ApplicationProxyRule::ApplicationProxyRule() :
    m_protoHasBeenSet(false),
    m_portHasBeenSet(false),
    m_originTypeHasBeenSet(false),
    m_originValueHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_forwardClientIpHasBeenSet(false),
    m_sessionPersistHasBeenSet(false),
    m_sessionPersistTimeHasBeenSet(false),
    m_originPortHasBeenSet(false),
    m_ruleTagHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationProxyRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Proto") && !value["Proto"].IsNull())
    {
        if (!value["Proto"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxyRule.Proto` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proto = string(value["Proto"].GetString());
        m_protoHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApplicationProxyRule.Port` is not array type"));

        const rapidjson::Value &tmpValue = value["Port"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_port.push_back((*itr).GetString());
        }
        m_portHasBeenSet = true;
    }

    if (value.HasMember("OriginType") && !value["OriginType"].IsNull())
    {
        if (!value["OriginType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxyRule.OriginType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originType = string(value["OriginType"].GetString());
        m_originTypeHasBeenSet = true;
    }

    if (value.HasMember("OriginValue") && !value["OriginValue"].IsNull())
    {
        if (!value["OriginValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApplicationProxyRule.OriginValue` is not array type"));

        const rapidjson::Value &tmpValue = value["OriginValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_originValue.push_back((*itr).GetString());
        }
        m_originValueHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxyRule.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxyRule.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ForwardClientIp") && !value["ForwardClientIp"].IsNull())
    {
        if (!value["ForwardClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxyRule.ForwardClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardClientIp = string(value["ForwardClientIp"].GetString());
        m_forwardClientIpHasBeenSet = true;
    }

    if (value.HasMember("SessionPersist") && !value["SessionPersist"].IsNull())
    {
        if (!value["SessionPersist"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxyRule.SessionPersist` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sessionPersist = value["SessionPersist"].GetBool();
        m_sessionPersistHasBeenSet = true;
    }

    if (value.HasMember("SessionPersistTime") && !value["SessionPersistTime"].IsNull())
    {
        if (!value["SessionPersistTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxyRule.SessionPersistTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionPersistTime = value["SessionPersistTime"].GetUint64();
        m_sessionPersistTimeHasBeenSet = true;
    }

    if (value.HasMember("OriginPort") && !value["OriginPort"].IsNull())
    {
        if (!value["OriginPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxyRule.OriginPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originPort = string(value["OriginPort"].GetString());
        m_originPortHasBeenSet = true;
    }

    if (value.HasMember("RuleTag") && !value["RuleTag"].IsNull())
    {
        if (!value["RuleTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxyRule.RuleTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTag = string(value["RuleTag"].GetString());
        m_ruleTagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationProxyRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Proto";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proto.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_port.begin(); itr != m_port.end(); ++itr)
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

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardClientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardClientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionPersistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionPersist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionPersist, allocator);
    }

    if (m_sessionPersistTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionPersistTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionPersistTime, allocator);
    }

    if (m_originPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originPort.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleTag.c_str(), allocator).Move(), allocator);
    }

}


string ApplicationProxyRule::GetProto() const
{
    return m_proto;
}

void ApplicationProxyRule::SetProto(const string& _proto)
{
    m_proto = _proto;
    m_protoHasBeenSet = true;
}

bool ApplicationProxyRule::ProtoHasBeenSet() const
{
    return m_protoHasBeenSet;
}

vector<string> ApplicationProxyRule::GetPort() const
{
    return m_port;
}

void ApplicationProxyRule::SetPort(const vector<string>& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool ApplicationProxyRule::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string ApplicationProxyRule::GetOriginType() const
{
    return m_originType;
}

void ApplicationProxyRule::SetOriginType(const string& _originType)
{
    m_originType = _originType;
    m_originTypeHasBeenSet = true;
}

bool ApplicationProxyRule::OriginTypeHasBeenSet() const
{
    return m_originTypeHasBeenSet;
}

vector<string> ApplicationProxyRule::GetOriginValue() const
{
    return m_originValue;
}

void ApplicationProxyRule::SetOriginValue(const vector<string>& _originValue)
{
    m_originValue = _originValue;
    m_originValueHasBeenSet = true;
}

bool ApplicationProxyRule::OriginValueHasBeenSet() const
{
    return m_originValueHasBeenSet;
}

string ApplicationProxyRule::GetRuleId() const
{
    return m_ruleId;
}

void ApplicationProxyRule::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ApplicationProxyRule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string ApplicationProxyRule::GetStatus() const
{
    return m_status;
}

void ApplicationProxyRule::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ApplicationProxyRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ApplicationProxyRule::GetForwardClientIp() const
{
    return m_forwardClientIp;
}

void ApplicationProxyRule::SetForwardClientIp(const string& _forwardClientIp)
{
    m_forwardClientIp = _forwardClientIp;
    m_forwardClientIpHasBeenSet = true;
}

bool ApplicationProxyRule::ForwardClientIpHasBeenSet() const
{
    return m_forwardClientIpHasBeenSet;
}

bool ApplicationProxyRule::GetSessionPersist() const
{
    return m_sessionPersist;
}

void ApplicationProxyRule::SetSessionPersist(const bool& _sessionPersist)
{
    m_sessionPersist = _sessionPersist;
    m_sessionPersistHasBeenSet = true;
}

bool ApplicationProxyRule::SessionPersistHasBeenSet() const
{
    return m_sessionPersistHasBeenSet;
}

uint64_t ApplicationProxyRule::GetSessionPersistTime() const
{
    return m_sessionPersistTime;
}

void ApplicationProxyRule::SetSessionPersistTime(const uint64_t& _sessionPersistTime)
{
    m_sessionPersistTime = _sessionPersistTime;
    m_sessionPersistTimeHasBeenSet = true;
}

bool ApplicationProxyRule::SessionPersistTimeHasBeenSet() const
{
    return m_sessionPersistTimeHasBeenSet;
}

string ApplicationProxyRule::GetOriginPort() const
{
    return m_originPort;
}

void ApplicationProxyRule::SetOriginPort(const string& _originPort)
{
    m_originPort = _originPort;
    m_originPortHasBeenSet = true;
}

bool ApplicationProxyRule::OriginPortHasBeenSet() const
{
    return m_originPortHasBeenSet;
}

string ApplicationProxyRule::GetRuleTag() const
{
    return m_ruleTag;
}

void ApplicationProxyRule::SetRuleTag(const string& _ruleTag)
{
    m_ruleTag = _ruleTag;
    m_ruleTagHasBeenSet = true;
}

bool ApplicationProxyRule::RuleTagHasBeenSet() const
{
    return m_ruleTagHasBeenSet;
}

