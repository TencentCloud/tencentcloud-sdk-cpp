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

#include <tencentcloud/teo/v20220106/model/CreateApplicationProxyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

CreateApplicationProxyRequest::CreateApplicationProxyRequest() :
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_proxyNameHasBeenSet(false),
    m_platTypeHasBeenSet(false),
    m_securityTypeHasBeenSet(false),
    m_accelerateTypeHasBeenSet(false),
    m_forwardClientIpHasBeenSet(false),
    m_sessionPersistHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_sessionPersistTimeHasBeenSet(false),
    m_proxyTypeHasBeenSet(false)
{
}

string CreateApplicationProxyRequest::ToJsonString() const
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

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyName.c_str(), allocator).Move(), allocator);
    }

    if (m_platTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platType.c_str(), allocator).Move(), allocator);
    }

    if (m_securityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_securityType, allocator);
    }

    if (m_accelerateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccelerateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_accelerateType, allocator);
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

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rule.begin(); itr != m_rule.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_sessionPersistTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionPersistTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sessionPersistTime, allocator);
    }

    if (m_proxyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateApplicationProxyRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateApplicationProxyRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateApplicationProxyRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateApplicationProxyRequest::GetZoneName() const
{
    return m_zoneName;
}

void CreateApplicationProxyRequest::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool CreateApplicationProxyRequest::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string CreateApplicationProxyRequest::GetProxyName() const
{
    return m_proxyName;
}

void CreateApplicationProxyRequest::SetProxyName(const string& _proxyName)
{
    m_proxyName = _proxyName;
    m_proxyNameHasBeenSet = true;
}

bool CreateApplicationProxyRequest::ProxyNameHasBeenSet() const
{
    return m_proxyNameHasBeenSet;
}

string CreateApplicationProxyRequest::GetPlatType() const
{
    return m_platType;
}

void CreateApplicationProxyRequest::SetPlatType(const string& _platType)
{
    m_platType = _platType;
    m_platTypeHasBeenSet = true;
}

bool CreateApplicationProxyRequest::PlatTypeHasBeenSet() const
{
    return m_platTypeHasBeenSet;
}

int64_t CreateApplicationProxyRequest::GetSecurityType() const
{
    return m_securityType;
}

void CreateApplicationProxyRequest::SetSecurityType(const int64_t& _securityType)
{
    m_securityType = _securityType;
    m_securityTypeHasBeenSet = true;
}

bool CreateApplicationProxyRequest::SecurityTypeHasBeenSet() const
{
    return m_securityTypeHasBeenSet;
}

int64_t CreateApplicationProxyRequest::GetAccelerateType() const
{
    return m_accelerateType;
}

void CreateApplicationProxyRequest::SetAccelerateType(const int64_t& _accelerateType)
{
    m_accelerateType = _accelerateType;
    m_accelerateTypeHasBeenSet = true;
}

bool CreateApplicationProxyRequest::AccelerateTypeHasBeenSet() const
{
    return m_accelerateTypeHasBeenSet;
}

string CreateApplicationProxyRequest::GetForwardClientIp() const
{
    return m_forwardClientIp;
}

void CreateApplicationProxyRequest::SetForwardClientIp(const string& _forwardClientIp)
{
    m_forwardClientIp = _forwardClientIp;
    m_forwardClientIpHasBeenSet = true;
}

bool CreateApplicationProxyRequest::ForwardClientIpHasBeenSet() const
{
    return m_forwardClientIpHasBeenSet;
}

bool CreateApplicationProxyRequest::GetSessionPersist() const
{
    return m_sessionPersist;
}

void CreateApplicationProxyRequest::SetSessionPersist(const bool& _sessionPersist)
{
    m_sessionPersist = _sessionPersist;
    m_sessionPersistHasBeenSet = true;
}

bool CreateApplicationProxyRequest::SessionPersistHasBeenSet() const
{
    return m_sessionPersistHasBeenSet;
}

vector<ApplicationProxyRule> CreateApplicationProxyRequest::GetRule() const
{
    return m_rule;
}

void CreateApplicationProxyRequest::SetRule(const vector<ApplicationProxyRule>& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool CreateApplicationProxyRequest::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

uint64_t CreateApplicationProxyRequest::GetSessionPersistTime() const
{
    return m_sessionPersistTime;
}

void CreateApplicationProxyRequest::SetSessionPersistTime(const uint64_t& _sessionPersistTime)
{
    m_sessionPersistTime = _sessionPersistTime;
    m_sessionPersistTimeHasBeenSet = true;
}

bool CreateApplicationProxyRequest::SessionPersistTimeHasBeenSet() const
{
    return m_sessionPersistTimeHasBeenSet;
}

string CreateApplicationProxyRequest::GetProxyType() const
{
    return m_proxyType;
}

void CreateApplicationProxyRequest::SetProxyType(const string& _proxyType)
{
    m_proxyType = _proxyType;
    m_proxyTypeHasBeenSet = true;
}

bool CreateApplicationProxyRequest::ProxyTypeHasBeenSet() const
{
    return m_proxyTypeHasBeenSet;
}


