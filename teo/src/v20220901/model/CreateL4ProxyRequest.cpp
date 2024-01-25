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

#include <tencentcloud/teo/v20220901/model/CreateL4ProxyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CreateL4ProxyRequest::CreateL4ProxyRequest() :
    m_zoneIdHasBeenSet(false),
    m_proxyNameHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_ipv6HasBeenSet(false),
    m_staticIpHasBeenSet(false),
    m_accelerateMainlandHasBeenSet(false),
    m_dDosProtectionConfigHasBeenSet(false)
{
}

string CreateL4ProxyRequest::ToJsonString() const
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

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ipv6.c_str(), allocator).Move(), allocator);
    }

    if (m_staticIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_staticIp.c_str(), allocator).Move(), allocator);
    }

    if (m_accelerateMainlandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccelerateMainland";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accelerateMainland.c_str(), allocator).Move(), allocator);
    }

    if (m_dDosProtectionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDosProtectionConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dDosProtectionConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateL4ProxyRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateL4ProxyRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateL4ProxyRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateL4ProxyRequest::GetProxyName() const
{
    return m_proxyName;
}

void CreateL4ProxyRequest::SetProxyName(const string& _proxyName)
{
    m_proxyName = _proxyName;
    m_proxyNameHasBeenSet = true;
}

bool CreateL4ProxyRequest::ProxyNameHasBeenSet() const
{
    return m_proxyNameHasBeenSet;
}

string CreateL4ProxyRequest::GetArea() const
{
    return m_area;
}

void CreateL4ProxyRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool CreateL4ProxyRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string CreateL4ProxyRequest::GetIpv6() const
{
    return m_ipv6;
}

void CreateL4ProxyRequest::SetIpv6(const string& _ipv6)
{
    m_ipv6 = _ipv6;
    m_ipv6HasBeenSet = true;
}

bool CreateL4ProxyRequest::Ipv6HasBeenSet() const
{
    return m_ipv6HasBeenSet;
}

string CreateL4ProxyRequest::GetStaticIp() const
{
    return m_staticIp;
}

void CreateL4ProxyRequest::SetStaticIp(const string& _staticIp)
{
    m_staticIp = _staticIp;
    m_staticIpHasBeenSet = true;
}

bool CreateL4ProxyRequest::StaticIpHasBeenSet() const
{
    return m_staticIpHasBeenSet;
}

string CreateL4ProxyRequest::GetAccelerateMainland() const
{
    return m_accelerateMainland;
}

void CreateL4ProxyRequest::SetAccelerateMainland(const string& _accelerateMainland)
{
    m_accelerateMainland = _accelerateMainland;
    m_accelerateMainlandHasBeenSet = true;
}

bool CreateL4ProxyRequest::AccelerateMainlandHasBeenSet() const
{
    return m_accelerateMainlandHasBeenSet;
}

DDosProtectionConfig CreateL4ProxyRequest::GetDDosProtectionConfig() const
{
    return m_dDosProtectionConfig;
}

void CreateL4ProxyRequest::SetDDosProtectionConfig(const DDosProtectionConfig& _dDosProtectionConfig)
{
    m_dDosProtectionConfig = _dDosProtectionConfig;
    m_dDosProtectionConfigHasBeenSet = true;
}

bool CreateL4ProxyRequest::DDosProtectionConfigHasBeenSet() const
{
    return m_dDosProtectionConfigHasBeenSet;
}


