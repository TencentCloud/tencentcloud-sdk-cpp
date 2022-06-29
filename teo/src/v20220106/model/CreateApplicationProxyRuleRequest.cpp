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

#include <tencentcloud/teo/v20220106/model/CreateApplicationProxyRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

CreateApplicationProxyRuleRequest::CreateApplicationProxyRuleRequest() :
    m_zoneIdHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_protoHasBeenSet(false),
    m_portHasBeenSet(false),
    m_originTypeHasBeenSet(false),
    m_originValueHasBeenSet(false),
    m_forwardClientIpHasBeenSet(false),
    m_sessionPersistHasBeenSet(false)
{
}

string CreateApplicationProxyRuleRequest::ToJsonString() const
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

    if (m_protoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Proto";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proto.c_str(), allocator).Move(), allocator);
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

    if (m_originTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originType.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateApplicationProxyRuleRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateApplicationProxyRuleRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateApplicationProxyRuleRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateApplicationProxyRuleRequest::GetProxyId() const
{
    return m_proxyId;
}

void CreateApplicationProxyRuleRequest::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool CreateApplicationProxyRuleRequest::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string CreateApplicationProxyRuleRequest::GetProto() const
{
    return m_proto;
}

void CreateApplicationProxyRuleRequest::SetProto(const string& _proto)
{
    m_proto = _proto;
    m_protoHasBeenSet = true;
}

bool CreateApplicationProxyRuleRequest::ProtoHasBeenSet() const
{
    return m_protoHasBeenSet;
}

vector<string> CreateApplicationProxyRuleRequest::GetPort() const
{
    return m_port;
}

void CreateApplicationProxyRuleRequest::SetPort(const vector<string>& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool CreateApplicationProxyRuleRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string CreateApplicationProxyRuleRequest::GetOriginType() const
{
    return m_originType;
}

void CreateApplicationProxyRuleRequest::SetOriginType(const string& _originType)
{
    m_originType = _originType;
    m_originTypeHasBeenSet = true;
}

bool CreateApplicationProxyRuleRequest::OriginTypeHasBeenSet() const
{
    return m_originTypeHasBeenSet;
}

vector<string> CreateApplicationProxyRuleRequest::GetOriginValue() const
{
    return m_originValue;
}

void CreateApplicationProxyRuleRequest::SetOriginValue(const vector<string>& _originValue)
{
    m_originValue = _originValue;
    m_originValueHasBeenSet = true;
}

bool CreateApplicationProxyRuleRequest::OriginValueHasBeenSet() const
{
    return m_originValueHasBeenSet;
}

string CreateApplicationProxyRuleRequest::GetForwardClientIp() const
{
    return m_forwardClientIp;
}

void CreateApplicationProxyRuleRequest::SetForwardClientIp(const string& _forwardClientIp)
{
    m_forwardClientIp = _forwardClientIp;
    m_forwardClientIpHasBeenSet = true;
}

bool CreateApplicationProxyRuleRequest::ForwardClientIpHasBeenSet() const
{
    return m_forwardClientIpHasBeenSet;
}

bool CreateApplicationProxyRuleRequest::GetSessionPersist() const
{
    return m_sessionPersist;
}

void CreateApplicationProxyRuleRequest::SetSessionPersist(const bool& _sessionPersist)
{
    m_sessionPersist = _sessionPersist;
    m_sessionPersistHasBeenSet = true;
}

bool CreateApplicationProxyRuleRequest::SessionPersistHasBeenSet() const
{
    return m_sessionPersistHasBeenSet;
}


