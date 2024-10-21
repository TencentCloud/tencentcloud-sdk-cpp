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

#include <tencentcloud/vpc/v20170312/model/CreateVpnGatewaySslServerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateVpnGatewaySslServerRequest::CreateVpnGatewaySslServerRequest() :
    m_vpnGatewayIdHasBeenSet(false),
    m_sslVpnServerNameHasBeenSet(false),
    m_remoteAddressHasBeenSet(false),
    m_localAddressHasBeenSet(false),
    m_sslVpnProtocolHasBeenSet(false),
    m_sslVpnPortHasBeenSet(false),
    m_integrityAlgorithmHasBeenSet(false),
    m_encryptAlgorithmHasBeenSet(false),
    m_compressHasBeenSet(false),
    m_ssoEnabledHasBeenSet(false),
    m_accessPolicyEnabledHasBeenSet(false),
    m_samlDataHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateVpnGatewaySslServerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpnGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnGatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpnGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_sslVpnServerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVpnServerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sslVpnServerName.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remoteAddress.c_str(), allocator).Move(), allocator);
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

    if (m_integrityAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntegrityAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_integrityAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptAlgorithm.c_str(), allocator).Move(), allocator);
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

    if (m_accessPolicyEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessPolicyEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_accessPolicyEnabled, allocator);
    }

    if (m_samlDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SamlData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_samlData.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVpnGatewaySslServerRequest::GetVpnGatewayId() const
{
    return m_vpnGatewayId;
}

void CreateVpnGatewaySslServerRequest::SetVpnGatewayId(const string& _vpnGatewayId)
{
    m_vpnGatewayId = _vpnGatewayId;
    m_vpnGatewayIdHasBeenSet = true;
}

bool CreateVpnGatewaySslServerRequest::VpnGatewayIdHasBeenSet() const
{
    return m_vpnGatewayIdHasBeenSet;
}

string CreateVpnGatewaySslServerRequest::GetSslVpnServerName() const
{
    return m_sslVpnServerName;
}

void CreateVpnGatewaySslServerRequest::SetSslVpnServerName(const string& _sslVpnServerName)
{
    m_sslVpnServerName = _sslVpnServerName;
    m_sslVpnServerNameHasBeenSet = true;
}

bool CreateVpnGatewaySslServerRequest::SslVpnServerNameHasBeenSet() const
{
    return m_sslVpnServerNameHasBeenSet;
}

string CreateVpnGatewaySslServerRequest::GetRemoteAddress() const
{
    return m_remoteAddress;
}

void CreateVpnGatewaySslServerRequest::SetRemoteAddress(const string& _remoteAddress)
{
    m_remoteAddress = _remoteAddress;
    m_remoteAddressHasBeenSet = true;
}

bool CreateVpnGatewaySslServerRequest::RemoteAddressHasBeenSet() const
{
    return m_remoteAddressHasBeenSet;
}

vector<string> CreateVpnGatewaySslServerRequest::GetLocalAddress() const
{
    return m_localAddress;
}

void CreateVpnGatewaySslServerRequest::SetLocalAddress(const vector<string>& _localAddress)
{
    m_localAddress = _localAddress;
    m_localAddressHasBeenSet = true;
}

bool CreateVpnGatewaySslServerRequest::LocalAddressHasBeenSet() const
{
    return m_localAddressHasBeenSet;
}

string CreateVpnGatewaySslServerRequest::GetSslVpnProtocol() const
{
    return m_sslVpnProtocol;
}

void CreateVpnGatewaySslServerRequest::SetSslVpnProtocol(const string& _sslVpnProtocol)
{
    m_sslVpnProtocol = _sslVpnProtocol;
    m_sslVpnProtocolHasBeenSet = true;
}

bool CreateVpnGatewaySslServerRequest::SslVpnProtocolHasBeenSet() const
{
    return m_sslVpnProtocolHasBeenSet;
}

int64_t CreateVpnGatewaySslServerRequest::GetSslVpnPort() const
{
    return m_sslVpnPort;
}

void CreateVpnGatewaySslServerRequest::SetSslVpnPort(const int64_t& _sslVpnPort)
{
    m_sslVpnPort = _sslVpnPort;
    m_sslVpnPortHasBeenSet = true;
}

bool CreateVpnGatewaySslServerRequest::SslVpnPortHasBeenSet() const
{
    return m_sslVpnPortHasBeenSet;
}

string CreateVpnGatewaySslServerRequest::GetIntegrityAlgorithm() const
{
    return m_integrityAlgorithm;
}

void CreateVpnGatewaySslServerRequest::SetIntegrityAlgorithm(const string& _integrityAlgorithm)
{
    m_integrityAlgorithm = _integrityAlgorithm;
    m_integrityAlgorithmHasBeenSet = true;
}

bool CreateVpnGatewaySslServerRequest::IntegrityAlgorithmHasBeenSet() const
{
    return m_integrityAlgorithmHasBeenSet;
}

string CreateVpnGatewaySslServerRequest::GetEncryptAlgorithm() const
{
    return m_encryptAlgorithm;
}

void CreateVpnGatewaySslServerRequest::SetEncryptAlgorithm(const string& _encryptAlgorithm)
{
    m_encryptAlgorithm = _encryptAlgorithm;
    m_encryptAlgorithmHasBeenSet = true;
}

bool CreateVpnGatewaySslServerRequest::EncryptAlgorithmHasBeenSet() const
{
    return m_encryptAlgorithmHasBeenSet;
}

bool CreateVpnGatewaySslServerRequest::GetCompress() const
{
    return m_compress;
}

void CreateVpnGatewaySslServerRequest::SetCompress(const bool& _compress)
{
    m_compress = _compress;
    m_compressHasBeenSet = true;
}

bool CreateVpnGatewaySslServerRequest::CompressHasBeenSet() const
{
    return m_compressHasBeenSet;
}

bool CreateVpnGatewaySslServerRequest::GetSsoEnabled() const
{
    return m_ssoEnabled;
}

void CreateVpnGatewaySslServerRequest::SetSsoEnabled(const bool& _ssoEnabled)
{
    m_ssoEnabled = _ssoEnabled;
    m_ssoEnabledHasBeenSet = true;
}

bool CreateVpnGatewaySslServerRequest::SsoEnabledHasBeenSet() const
{
    return m_ssoEnabledHasBeenSet;
}

bool CreateVpnGatewaySslServerRequest::GetAccessPolicyEnabled() const
{
    return m_accessPolicyEnabled;
}

void CreateVpnGatewaySslServerRequest::SetAccessPolicyEnabled(const bool& _accessPolicyEnabled)
{
    m_accessPolicyEnabled = _accessPolicyEnabled;
    m_accessPolicyEnabledHasBeenSet = true;
}

bool CreateVpnGatewaySslServerRequest::AccessPolicyEnabledHasBeenSet() const
{
    return m_accessPolicyEnabledHasBeenSet;
}

string CreateVpnGatewaySslServerRequest::GetSamlData() const
{
    return m_samlData;
}

void CreateVpnGatewaySslServerRequest::SetSamlData(const string& _samlData)
{
    m_samlData = _samlData;
    m_samlDataHasBeenSet = true;
}

bool CreateVpnGatewaySslServerRequest::SamlDataHasBeenSet() const
{
    return m_samlDataHasBeenSet;
}

vector<Tag> CreateVpnGatewaySslServerRequest::GetTags() const
{
    return m_tags;
}

void CreateVpnGatewaySslServerRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateVpnGatewaySslServerRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


