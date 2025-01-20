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

#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewaySslServerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyVpnGatewaySslServerRequest::ModifyVpnGatewaySslServerRequest() :
    m_sslVpnServerIdHasBeenSet(false),
    m_sslVpnServerNameHasBeenSet(false),
    m_localAddressHasBeenSet(false),
    m_remoteAddressHasBeenSet(false),
    m_sslVpnProtocolHasBeenSet(false),
    m_sslVpnPortHasBeenSet(false),
    m_encryptAlgorithmHasBeenSet(false),
    m_integrityAlgorithmHasBeenSet(false),
    m_compressHasBeenSet(false),
    m_ssoEnabledHasBeenSet(false),
    m_samlDataHasBeenSet(false)
{
}

string ModifyVpnGatewaySslServerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sslVpnServerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVpnServerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sslVpnServerId.c_str(), allocator).Move(), allocator);
    }

    if (m_sslVpnServerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVpnServerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sslVpnServerName.c_str(), allocator).Move(), allocator);
    }

    if (m_localAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_localAddress.begin(); itr != m_localAddress.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_remoteAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remoteAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_sslVpnProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVpnProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sslVpnProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_sslVpnPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVpnPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sslVpnPort, allocator);
    }

    if (m_encryptAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_integrityAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntegrityAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_integrityAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_compressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_compress, allocator);
    }

    if (m_ssoEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SsoEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ssoEnabled, allocator);
    }

    if (m_samlDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SamlData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_samlData.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyVpnGatewaySslServerRequest::GetSslVpnServerId() const
{
    return m_sslVpnServerId;
}

void ModifyVpnGatewaySslServerRequest::SetSslVpnServerId(const string& _sslVpnServerId)
{
    m_sslVpnServerId = _sslVpnServerId;
    m_sslVpnServerIdHasBeenSet = true;
}

bool ModifyVpnGatewaySslServerRequest::SslVpnServerIdHasBeenSet() const
{
    return m_sslVpnServerIdHasBeenSet;
}

string ModifyVpnGatewaySslServerRequest::GetSslVpnServerName() const
{
    return m_sslVpnServerName;
}

void ModifyVpnGatewaySslServerRequest::SetSslVpnServerName(const string& _sslVpnServerName)
{
    m_sslVpnServerName = _sslVpnServerName;
    m_sslVpnServerNameHasBeenSet = true;
}

bool ModifyVpnGatewaySslServerRequest::SslVpnServerNameHasBeenSet() const
{
    return m_sslVpnServerNameHasBeenSet;
}

vector<string> ModifyVpnGatewaySslServerRequest::GetLocalAddress() const
{
    return m_localAddress;
}

void ModifyVpnGatewaySslServerRequest::SetLocalAddress(const vector<string>& _localAddress)
{
    m_localAddress = _localAddress;
    m_localAddressHasBeenSet = true;
}

bool ModifyVpnGatewaySslServerRequest::LocalAddressHasBeenSet() const
{
    return m_localAddressHasBeenSet;
}

string ModifyVpnGatewaySslServerRequest::GetRemoteAddress() const
{
    return m_remoteAddress;
}

void ModifyVpnGatewaySslServerRequest::SetRemoteAddress(const string& _remoteAddress)
{
    m_remoteAddress = _remoteAddress;
    m_remoteAddressHasBeenSet = true;
}

bool ModifyVpnGatewaySslServerRequest::RemoteAddressHasBeenSet() const
{
    return m_remoteAddressHasBeenSet;
}

string ModifyVpnGatewaySslServerRequest::GetSslVpnProtocol() const
{
    return m_sslVpnProtocol;
}

void ModifyVpnGatewaySslServerRequest::SetSslVpnProtocol(const string& _sslVpnProtocol)
{
    m_sslVpnProtocol = _sslVpnProtocol;
    m_sslVpnProtocolHasBeenSet = true;
}

bool ModifyVpnGatewaySslServerRequest::SslVpnProtocolHasBeenSet() const
{
    return m_sslVpnProtocolHasBeenSet;
}

int64_t ModifyVpnGatewaySslServerRequest::GetSslVpnPort() const
{
    return m_sslVpnPort;
}

void ModifyVpnGatewaySslServerRequest::SetSslVpnPort(const int64_t& _sslVpnPort)
{
    m_sslVpnPort = _sslVpnPort;
    m_sslVpnPortHasBeenSet = true;
}

bool ModifyVpnGatewaySslServerRequest::SslVpnPortHasBeenSet() const
{
    return m_sslVpnPortHasBeenSet;
}

string ModifyVpnGatewaySslServerRequest::GetEncryptAlgorithm() const
{
    return m_encryptAlgorithm;
}

void ModifyVpnGatewaySslServerRequest::SetEncryptAlgorithm(const string& _encryptAlgorithm)
{
    m_encryptAlgorithm = _encryptAlgorithm;
    m_encryptAlgorithmHasBeenSet = true;
}

bool ModifyVpnGatewaySslServerRequest::EncryptAlgorithmHasBeenSet() const
{
    return m_encryptAlgorithmHasBeenSet;
}

string ModifyVpnGatewaySslServerRequest::GetIntegrityAlgorithm() const
{
    return m_integrityAlgorithm;
}

void ModifyVpnGatewaySslServerRequest::SetIntegrityAlgorithm(const string& _integrityAlgorithm)
{
    m_integrityAlgorithm = _integrityAlgorithm;
    m_integrityAlgorithmHasBeenSet = true;
}

bool ModifyVpnGatewaySslServerRequest::IntegrityAlgorithmHasBeenSet() const
{
    return m_integrityAlgorithmHasBeenSet;
}

bool ModifyVpnGatewaySslServerRequest::GetCompress() const
{
    return m_compress;
}

void ModifyVpnGatewaySslServerRequest::SetCompress(const bool& _compress)
{
    m_compress = _compress;
    m_compressHasBeenSet = true;
}

bool ModifyVpnGatewaySslServerRequest::CompressHasBeenSet() const
{
    return m_compressHasBeenSet;
}

bool ModifyVpnGatewaySslServerRequest::GetSsoEnabled() const
{
    return m_ssoEnabled;
}

void ModifyVpnGatewaySslServerRequest::SetSsoEnabled(const bool& _ssoEnabled)
{
    m_ssoEnabled = _ssoEnabled;
    m_ssoEnabledHasBeenSet = true;
}

bool ModifyVpnGatewaySslServerRequest::SsoEnabledHasBeenSet() const
{
    return m_ssoEnabledHasBeenSet;
}

string ModifyVpnGatewaySslServerRequest::GetSamlData() const
{
    return m_samlData;
}

void ModifyVpnGatewaySslServerRequest::SetSamlData(const string& _samlData)
{
    m_samlData = _samlData;
    m_samlDataHasBeenSet = true;
}

bool ModifyVpnGatewaySslServerRequest::SamlDataHasBeenSet() const
{
    return m_samlDataHasBeenSet;
}


