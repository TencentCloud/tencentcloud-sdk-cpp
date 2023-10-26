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

#include <tencentcloud/teo/v20220901/model/CreateAccelerationDomainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CreateAccelerationDomainRequest::CreateAccelerationDomainRequest() :
    m_zoneIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_originInfoHasBeenSet(false),
    m_originProtocolHasBeenSet(false),
    m_httpOriginPortHasBeenSet(false),
    m_httpsOriginPortHasBeenSet(false),
    m_iPv6StatusHasBeenSet(false)
{
}

string CreateAccelerationDomainRequest::ToJsonString() const
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

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_originInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_originInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_originProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_httpOriginPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpOriginPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_httpOriginPort, allocator);
    }

    if (m_httpsOriginPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpsOriginPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_httpsOriginPort, allocator);
    }

    if (m_iPv6StatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv6Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iPv6Status.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAccelerationDomainRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateAccelerationDomainRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateAccelerationDomainRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateAccelerationDomainRequest::GetDomainName() const
{
    return m_domainName;
}

void CreateAccelerationDomainRequest::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool CreateAccelerationDomainRequest::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

OriginInfo CreateAccelerationDomainRequest::GetOriginInfo() const
{
    return m_originInfo;
}

void CreateAccelerationDomainRequest::SetOriginInfo(const OriginInfo& _originInfo)
{
    m_originInfo = _originInfo;
    m_originInfoHasBeenSet = true;
}

bool CreateAccelerationDomainRequest::OriginInfoHasBeenSet() const
{
    return m_originInfoHasBeenSet;
}

string CreateAccelerationDomainRequest::GetOriginProtocol() const
{
    return m_originProtocol;
}

void CreateAccelerationDomainRequest::SetOriginProtocol(const string& _originProtocol)
{
    m_originProtocol = _originProtocol;
    m_originProtocolHasBeenSet = true;
}

bool CreateAccelerationDomainRequest::OriginProtocolHasBeenSet() const
{
    return m_originProtocolHasBeenSet;
}

uint64_t CreateAccelerationDomainRequest::GetHttpOriginPort() const
{
    return m_httpOriginPort;
}

void CreateAccelerationDomainRequest::SetHttpOriginPort(const uint64_t& _httpOriginPort)
{
    m_httpOriginPort = _httpOriginPort;
    m_httpOriginPortHasBeenSet = true;
}

bool CreateAccelerationDomainRequest::HttpOriginPortHasBeenSet() const
{
    return m_httpOriginPortHasBeenSet;
}

uint64_t CreateAccelerationDomainRequest::GetHttpsOriginPort() const
{
    return m_httpsOriginPort;
}

void CreateAccelerationDomainRequest::SetHttpsOriginPort(const uint64_t& _httpsOriginPort)
{
    m_httpsOriginPort = _httpsOriginPort;
    m_httpsOriginPortHasBeenSet = true;
}

bool CreateAccelerationDomainRequest::HttpsOriginPortHasBeenSet() const
{
    return m_httpsOriginPortHasBeenSet;
}

string CreateAccelerationDomainRequest::GetIPv6Status() const
{
    return m_iPv6Status;
}

void CreateAccelerationDomainRequest::SetIPv6Status(const string& _iPv6Status)
{
    m_iPv6Status = _iPv6Status;
    m_iPv6StatusHasBeenSet = true;
}

bool CreateAccelerationDomainRequest::IPv6StatusHasBeenSet() const
{
    return m_iPv6StatusHasBeenSet;
}


