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

#include <tencentcloud/teo/v20220901/model/ModifyApplicationProxyRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyApplicationProxyRuleRequest::ModifyApplicationProxyRuleRequest() :
    m_zoneIdHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_originTypeHasBeenSet(false),
    m_portHasBeenSet(false),
    m_protoHasBeenSet(false),
    m_originValueHasBeenSet(false),
    m_forwardClientIpHasBeenSet(false),
    m_sessionPersistHasBeenSet(false),
    m_sessionPersistTimeHasBeenSet(false),
    m_originPortHasBeenSet(false),
    m_ruleTagHasBeenSet(false)
{
}

string ModifyApplicationProxyRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_originTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originType.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_port.begin(); itr != m_port.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_protoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Proto";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proto.c_str(), allocator).Move(), allocator);
    }

    if (m_originValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_originValue.begin(); itr != m_originValue.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_forwardClientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardClientIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_forwardClientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionPersistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionPersist";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sessionPersist, allocator);
    }

    if (m_sessionPersistTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionPersistTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sessionPersistTime, allocator);
    }

    if (m_originPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originPort.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleTag.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyApplicationProxyRuleRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyApplicationProxyRuleRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyApplicationProxyRuleRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyApplicationProxyRuleRequest::GetProxyId() const
{
    return m_proxyId;
}

void ModifyApplicationProxyRuleRequest::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool ModifyApplicationProxyRuleRequest::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string ModifyApplicationProxyRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifyApplicationProxyRuleRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifyApplicationProxyRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string ModifyApplicationProxyRuleRequest::GetOriginType() const
{
    return m_originType;
}

void ModifyApplicationProxyRuleRequest::SetOriginType(const string& _originType)
{
    m_originType = _originType;
    m_originTypeHasBeenSet = true;
}

bool ModifyApplicationProxyRuleRequest::OriginTypeHasBeenSet() const
{
    return m_originTypeHasBeenSet;
}

vector<string> ModifyApplicationProxyRuleRequest::GetPort() const
{
    return m_port;
}

void ModifyApplicationProxyRuleRequest::SetPort(const vector<string>& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool ModifyApplicationProxyRuleRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string ModifyApplicationProxyRuleRequest::GetProto() const
{
    return m_proto;
}

void ModifyApplicationProxyRuleRequest::SetProto(const string& _proto)
{
    m_proto = _proto;
    m_protoHasBeenSet = true;
}

bool ModifyApplicationProxyRuleRequest::ProtoHasBeenSet() const
{
    return m_protoHasBeenSet;
}

vector<string> ModifyApplicationProxyRuleRequest::GetOriginValue() const
{
    return m_originValue;
}

void ModifyApplicationProxyRuleRequest::SetOriginValue(const vector<string>& _originValue)
{
    m_originValue = _originValue;
    m_originValueHasBeenSet = true;
}

bool ModifyApplicationProxyRuleRequest::OriginValueHasBeenSet() const
{
    return m_originValueHasBeenSet;
}

string ModifyApplicationProxyRuleRequest::GetForwardClientIp() const
{
    return m_forwardClientIp;
}

void ModifyApplicationProxyRuleRequest::SetForwardClientIp(const string& _forwardClientIp)
{
    m_forwardClientIp = _forwardClientIp;
    m_forwardClientIpHasBeenSet = true;
}

bool ModifyApplicationProxyRuleRequest::ForwardClientIpHasBeenSet() const
{
    return m_forwardClientIpHasBeenSet;
}

bool ModifyApplicationProxyRuleRequest::GetSessionPersist() const
{
    return m_sessionPersist;
}

void ModifyApplicationProxyRuleRequest::SetSessionPersist(const bool& _sessionPersist)
{
    m_sessionPersist = _sessionPersist;
    m_sessionPersistHasBeenSet = true;
}

bool ModifyApplicationProxyRuleRequest::SessionPersistHasBeenSet() const
{
    return m_sessionPersistHasBeenSet;
}

uint64_t ModifyApplicationProxyRuleRequest::GetSessionPersistTime() const
{
    return m_sessionPersistTime;
}

void ModifyApplicationProxyRuleRequest::SetSessionPersistTime(const uint64_t& _sessionPersistTime)
{
    m_sessionPersistTime = _sessionPersistTime;
    m_sessionPersistTimeHasBeenSet = true;
}

bool ModifyApplicationProxyRuleRequest::SessionPersistTimeHasBeenSet() const
{
    return m_sessionPersistTimeHasBeenSet;
}

string ModifyApplicationProxyRuleRequest::GetOriginPort() const
{
    return m_originPort;
}

void ModifyApplicationProxyRuleRequest::SetOriginPort(const string& _originPort)
{
    m_originPort = _originPort;
    m_originPortHasBeenSet = true;
}

bool ModifyApplicationProxyRuleRequest::OriginPortHasBeenSet() const
{
    return m_originPortHasBeenSet;
}

string ModifyApplicationProxyRuleRequest::GetRuleTag() const
{
    return m_ruleTag;
}

void ModifyApplicationProxyRuleRequest::SetRuleTag(const string& _ruleTag)
{
    m_ruleTag = _ruleTag;
    m_ruleTagHasBeenSet = true;
}

bool ModifyApplicationProxyRuleRequest::RuleTagHasBeenSet() const
{
    return m_ruleTagHasBeenSet;
}


