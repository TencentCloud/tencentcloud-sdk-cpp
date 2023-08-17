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

#include <tencentcloud/ms/v20180408/model/UpdateClientStateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

UpdateClientStateRequest::UpdateClientStateRequest() :
    m_clientIdHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_internalHasBeenSet(false),
    m_serverVersionHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_osHasBeenSet(false)
{
}

string UpdateClientStateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_internalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Internal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_internal, allocator);
    }

    if (m_serverVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_hostnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hostname";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostname.c_str(), allocator).Move(), allocator);
    }

    if (m_osHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Os";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_os.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateClientStateRequest::GetClientId() const
{
    return m_clientId;
}

void UpdateClientStateRequest::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool UpdateClientStateRequest::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string UpdateClientStateRequest::GetIp() const
{
    return m_ip;
}

void UpdateClientStateRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool UpdateClientStateRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t UpdateClientStateRequest::GetInternal() const
{
    return m_internal;
}

void UpdateClientStateRequest::SetInternal(const int64_t& _internal)
{
    m_internal = _internal;
    m_internalHasBeenSet = true;
}

bool UpdateClientStateRequest::InternalHasBeenSet() const
{
    return m_internalHasBeenSet;
}

string UpdateClientStateRequest::GetServerVersion() const
{
    return m_serverVersion;
}

void UpdateClientStateRequest::SetServerVersion(const string& _serverVersion)
{
    m_serverVersion = _serverVersion;
    m_serverVersionHasBeenSet = true;
}

bool UpdateClientStateRequest::ServerVersionHasBeenSet() const
{
    return m_serverVersionHasBeenSet;
}

string UpdateClientStateRequest::GetHostname() const
{
    return m_hostname;
}

void UpdateClientStateRequest::SetHostname(const string& _hostname)
{
    m_hostname = _hostname;
    m_hostnameHasBeenSet = true;
}

bool UpdateClientStateRequest::HostnameHasBeenSet() const
{
    return m_hostnameHasBeenSet;
}

string UpdateClientStateRequest::GetOs() const
{
    return m_os;
}

void UpdateClientStateRequest::SetOs(const string& _os)
{
    m_os = _os;
    m_osHasBeenSet = true;
}

bool UpdateClientStateRequest::OsHasBeenSet() const
{
    return m_osHasBeenSet;
}


