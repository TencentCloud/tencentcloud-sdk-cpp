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

#include <tencentcloud/bmlb/v20180625/model/CreateL7Listener.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

CreateL7Listener::CreateL7Listener() :
    m_loadBalancerPortHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_sslModeHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_certNameHasBeenSet(false),
    m_certContentHasBeenSet(false),
    m_certKeyHasBeenSet(false),
    m_certCaIdHasBeenSet(false),
    m_certCaNameHasBeenSet(false),
    m_certCaContentHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_forwardProtocolHasBeenSet(false)
{
}

CoreInternalOutcome CreateL7Listener::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LoadBalancerPort") && !value["LoadBalancerPort"].IsNull())
    {
        if (!value["LoadBalancerPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL7Listener.LoadBalancerPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerPort = value["LoadBalancerPort"].GetInt64();
        m_loadBalancerPortHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL7Listener.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("ListenerName") && !value["ListenerName"].IsNull())
    {
        if (!value["ListenerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL7Listener.ListenerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerName = string(value["ListenerName"].GetString());
        m_listenerNameHasBeenSet = true;
    }

    if (value.HasMember("SslMode") && !value["SslMode"].IsNull())
    {
        if (!value["SslMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL7Listener.SslMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sslMode = value["SslMode"].GetInt64();
        m_sslModeHasBeenSet = true;
    }

    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL7Listener.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("CertName") && !value["CertName"].IsNull())
    {
        if (!value["CertName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL7Listener.CertName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certName = string(value["CertName"].GetString());
        m_certNameHasBeenSet = true;
    }

    if (value.HasMember("CertContent") && !value["CertContent"].IsNull())
    {
        if (!value["CertContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL7Listener.CertContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certContent = string(value["CertContent"].GetString());
        m_certContentHasBeenSet = true;
    }

    if (value.HasMember("CertKey") && !value["CertKey"].IsNull())
    {
        if (!value["CertKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL7Listener.CertKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certKey = string(value["CertKey"].GetString());
        m_certKeyHasBeenSet = true;
    }

    if (value.HasMember("CertCaId") && !value["CertCaId"].IsNull())
    {
        if (!value["CertCaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL7Listener.CertCaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certCaId = string(value["CertCaId"].GetString());
        m_certCaIdHasBeenSet = true;
    }

    if (value.HasMember("CertCaName") && !value["CertCaName"].IsNull())
    {
        if (!value["CertCaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL7Listener.CertCaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certCaName = string(value["CertCaName"].GetString());
        m_certCaNameHasBeenSet = true;
    }

    if (value.HasMember("CertCaContent") && !value["CertCaContent"].IsNull())
    {
        if (!value["CertCaContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL7Listener.CertCaContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certCaContent = string(value["CertCaContent"].GetString());
        m_certCaContentHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL7Listener.Bandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetInt64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("ForwardProtocol") && !value["ForwardProtocol"].IsNull())
    {
        if (!value["ForwardProtocol"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL7Listener.ForwardProtocol` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_forwardProtocol = value["ForwardProtocol"].GetInt64();
        m_forwardProtocolHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateL7Listener::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_loadBalancerPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loadBalancerPort, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_sslModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sslMode, allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_certNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certName.c_str(), allocator).Move(), allocator);
    }

    if (m_certContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certContent.c_str(), allocator).Move(), allocator);
    }

    if (m_certKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certKey.c_str(), allocator).Move(), allocator);
    }

    if (m_certCaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertCaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certCaId.c_str(), allocator).Move(), allocator);
    }

    if (m_certCaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertCaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certCaName.c_str(), allocator).Move(), allocator);
    }

    if (m_certCaContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertCaContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certCaContent.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_forwardProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forwardProtocol, allocator);
    }

}


int64_t CreateL7Listener::GetLoadBalancerPort() const
{
    return m_loadBalancerPort;
}

void CreateL7Listener::SetLoadBalancerPort(const int64_t& _loadBalancerPort)
{
    m_loadBalancerPort = _loadBalancerPort;
    m_loadBalancerPortHasBeenSet = true;
}

bool CreateL7Listener::LoadBalancerPortHasBeenSet() const
{
    return m_loadBalancerPortHasBeenSet;
}

string CreateL7Listener::GetProtocol() const
{
    return m_protocol;
}

void CreateL7Listener::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateL7Listener::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string CreateL7Listener::GetListenerName() const
{
    return m_listenerName;
}

void CreateL7Listener::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool CreateL7Listener::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

int64_t CreateL7Listener::GetSslMode() const
{
    return m_sslMode;
}

void CreateL7Listener::SetSslMode(const int64_t& _sslMode)
{
    m_sslMode = _sslMode;
    m_sslModeHasBeenSet = true;
}

bool CreateL7Listener::SslModeHasBeenSet() const
{
    return m_sslModeHasBeenSet;
}

string CreateL7Listener::GetCertId() const
{
    return m_certId;
}

void CreateL7Listener::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool CreateL7Listener::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string CreateL7Listener::GetCertName() const
{
    return m_certName;
}

void CreateL7Listener::SetCertName(const string& _certName)
{
    m_certName = _certName;
    m_certNameHasBeenSet = true;
}

bool CreateL7Listener::CertNameHasBeenSet() const
{
    return m_certNameHasBeenSet;
}

string CreateL7Listener::GetCertContent() const
{
    return m_certContent;
}

void CreateL7Listener::SetCertContent(const string& _certContent)
{
    m_certContent = _certContent;
    m_certContentHasBeenSet = true;
}

bool CreateL7Listener::CertContentHasBeenSet() const
{
    return m_certContentHasBeenSet;
}

string CreateL7Listener::GetCertKey() const
{
    return m_certKey;
}

void CreateL7Listener::SetCertKey(const string& _certKey)
{
    m_certKey = _certKey;
    m_certKeyHasBeenSet = true;
}

bool CreateL7Listener::CertKeyHasBeenSet() const
{
    return m_certKeyHasBeenSet;
}

string CreateL7Listener::GetCertCaId() const
{
    return m_certCaId;
}

void CreateL7Listener::SetCertCaId(const string& _certCaId)
{
    m_certCaId = _certCaId;
    m_certCaIdHasBeenSet = true;
}

bool CreateL7Listener::CertCaIdHasBeenSet() const
{
    return m_certCaIdHasBeenSet;
}

string CreateL7Listener::GetCertCaName() const
{
    return m_certCaName;
}

void CreateL7Listener::SetCertCaName(const string& _certCaName)
{
    m_certCaName = _certCaName;
    m_certCaNameHasBeenSet = true;
}

bool CreateL7Listener::CertCaNameHasBeenSet() const
{
    return m_certCaNameHasBeenSet;
}

string CreateL7Listener::GetCertCaContent() const
{
    return m_certCaContent;
}

void CreateL7Listener::SetCertCaContent(const string& _certCaContent)
{
    m_certCaContent = _certCaContent;
    m_certCaContentHasBeenSet = true;
}

bool CreateL7Listener::CertCaContentHasBeenSet() const
{
    return m_certCaContentHasBeenSet;
}

int64_t CreateL7Listener::GetBandwidth() const
{
    return m_bandwidth;
}

void CreateL7Listener::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool CreateL7Listener::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

int64_t CreateL7Listener::GetForwardProtocol() const
{
    return m_forwardProtocol;
}

void CreateL7Listener::SetForwardProtocol(const int64_t& _forwardProtocol)
{
    m_forwardProtocol = _forwardProtocol;
    m_forwardProtocolHasBeenSet = true;
}

bool CreateL7Listener::ForwardProtocolHasBeenSet() const
{
    return m_forwardProtocolHasBeenSet;
}

