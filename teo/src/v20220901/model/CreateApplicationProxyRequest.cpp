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

#include <tencentcloud/teo/v20220901/model/CreateApplicationProxyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CreateApplicationProxyRequest::CreateApplicationProxyRequest() :
    m_zoneIdHasBeenSet(false),
    m_proxyNameHasBeenSet(false),
    m_platTypeHasBeenSet(false),
    m_securityTypeHasBeenSet(false),
    m_accelerateTypeHasBeenSet(false),
    m_proxyTypeHasBeenSet(false),
    m_sessionPersistTimeHasBeenSet(false),
    m_ipv6HasBeenSet(false),
    m_applicationProxyRulesHasBeenSet(false),
    m_accelerateMainlandHasBeenSet(false)
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

    if (m_proxyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyType.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionPersistTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionPersistTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sessionPersistTime, allocator);
    }

    if (m_ipv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipv6.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_applicationProxyRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationProxyRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_applicationProxyRules.begin(); itr != m_applicationProxyRules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_accelerateMainlandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccelerateMainland";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_accelerateMainland.ToJsonObject(d[key.c_str()], allocator);
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

Ipv6 CreateApplicationProxyRequest::GetIpv6() const
{
    return m_ipv6;
}

void CreateApplicationProxyRequest::SetIpv6(const Ipv6& _ipv6)
{
    m_ipv6 = _ipv6;
    m_ipv6HasBeenSet = true;
}

bool CreateApplicationProxyRequest::Ipv6HasBeenSet() const
{
    return m_ipv6HasBeenSet;
}

vector<ApplicationProxyRule> CreateApplicationProxyRequest::GetApplicationProxyRules() const
{
    return m_applicationProxyRules;
}

void CreateApplicationProxyRequest::SetApplicationProxyRules(const vector<ApplicationProxyRule>& _applicationProxyRules)
{
    m_applicationProxyRules = _applicationProxyRules;
    m_applicationProxyRulesHasBeenSet = true;
}

bool CreateApplicationProxyRequest::ApplicationProxyRulesHasBeenSet() const
{
    return m_applicationProxyRulesHasBeenSet;
}

AccelerateMainland CreateApplicationProxyRequest::GetAccelerateMainland() const
{
    return m_accelerateMainland;
}

void CreateApplicationProxyRequest::SetAccelerateMainland(const AccelerateMainland& _accelerateMainland)
{
    m_accelerateMainland = _accelerateMainland;
    m_accelerateMainlandHasBeenSet = true;
}

bool CreateApplicationProxyRequest::AccelerateMainlandHasBeenSet() const
{
    return m_accelerateMainlandHasBeenSet;
}


