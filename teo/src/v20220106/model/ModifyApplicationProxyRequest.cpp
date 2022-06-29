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

#include <tencentcloud/teo/v20220106/model/ModifyApplicationProxyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

ModifyApplicationProxyRequest::ModifyApplicationProxyRequest() :
    m_zoneIdHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_proxyNameHasBeenSet(false),
    m_forwardClientIpHasBeenSet(false),
    m_sessionPersistHasBeenSet(false),
    m_sessionPersistTimeHasBeenSet(false),
    m_proxyTypeHasBeenSet(false)
{
}

string ModifyApplicationProxyRequest::ToJsonString() const
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

    if (m_proxyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyName.c_str(), allocator).Move(), allocator);
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


string ModifyApplicationProxyRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyApplicationProxyRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyApplicationProxyRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyApplicationProxyRequest::GetProxyId() const
{
    return m_proxyId;
}

void ModifyApplicationProxyRequest::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool ModifyApplicationProxyRequest::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string ModifyApplicationProxyRequest::GetProxyName() const
{
    return m_proxyName;
}

void ModifyApplicationProxyRequest::SetProxyName(const string& _proxyName)
{
    m_proxyName = _proxyName;
    m_proxyNameHasBeenSet = true;
}

bool ModifyApplicationProxyRequest::ProxyNameHasBeenSet() const
{
    return m_proxyNameHasBeenSet;
}

string ModifyApplicationProxyRequest::GetForwardClientIp() const
{
    return m_forwardClientIp;
}

void ModifyApplicationProxyRequest::SetForwardClientIp(const string& _forwardClientIp)
{
    m_forwardClientIp = _forwardClientIp;
    m_forwardClientIpHasBeenSet = true;
}

bool ModifyApplicationProxyRequest::ForwardClientIpHasBeenSet() const
{
    return m_forwardClientIpHasBeenSet;
}

bool ModifyApplicationProxyRequest::GetSessionPersist() const
{
    return m_sessionPersist;
}

void ModifyApplicationProxyRequest::SetSessionPersist(const bool& _sessionPersist)
{
    m_sessionPersist = _sessionPersist;
    m_sessionPersistHasBeenSet = true;
}

bool ModifyApplicationProxyRequest::SessionPersistHasBeenSet() const
{
    return m_sessionPersistHasBeenSet;
}

uint64_t ModifyApplicationProxyRequest::GetSessionPersistTime() const
{
    return m_sessionPersistTime;
}

void ModifyApplicationProxyRequest::SetSessionPersistTime(const uint64_t& _sessionPersistTime)
{
    m_sessionPersistTime = _sessionPersistTime;
    m_sessionPersistTimeHasBeenSet = true;
}

bool ModifyApplicationProxyRequest::SessionPersistTimeHasBeenSet() const
{
    return m_sessionPersistTimeHasBeenSet;
}

string ModifyApplicationProxyRequest::GetProxyType() const
{
    return m_proxyType;
}

void ModifyApplicationProxyRequest::SetProxyType(const string& _proxyType)
{
    m_proxyType = _proxyType;
    m_proxyTypeHasBeenSet = true;
}

bool ModifyApplicationProxyRequest::ProxyTypeHasBeenSet() const
{
    return m_proxyTypeHasBeenSet;
}


