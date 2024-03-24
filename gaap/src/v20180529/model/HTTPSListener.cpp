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

#include <tencentcloud/gaap/v20180529/model/HTTPSListener.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

HTTPSListener::HTTPSListener() :
    m_listenerIdHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_portHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_listenerStatusHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_forwardProtocolHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_certificateAliasHasBeenSet(false),
    m_clientCertificateIdHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_clientCertificateAliasHasBeenSet(false),
    m_polyClientCertificateAliasInfoHasBeenSet(false),
    m_http3SupportedHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_tLSSupportVersionHasBeenSet(false),
    m_tLSCiphersHasBeenSet(false)
{
}

CoreInternalOutcome HTTPSListener::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPSListener.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("ListenerName") && !value["ListenerName"].IsNull())
    {
        if (!value["ListenerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPSListener.ListenerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerName = string(value["ListenerName"].GetString());
        m_listenerNameHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPSListener.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPSListener.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("ListenerStatus") && !value["ListenerStatus"].IsNull())
    {
        if (!value["ListenerStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPSListener.ListenerStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_listenerStatus = value["ListenerStatus"].GetUint64();
        m_listenerStatusHasBeenSet = true;
    }

    if (value.HasMember("CertificateId") && !value["CertificateId"].IsNull())
    {
        if (!value["CertificateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPSListener.CertificateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateId = string(value["CertificateId"].GetString());
        m_certificateIdHasBeenSet = true;
    }

    if (value.HasMember("ForwardProtocol") && !value["ForwardProtocol"].IsNull())
    {
        if (!value["ForwardProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPSListener.ForwardProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardProtocol = string(value["ForwardProtocol"].GetString());
        m_forwardProtocolHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPSListener.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("CertificateAlias") && !value["CertificateAlias"].IsNull())
    {
        if (!value["CertificateAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPSListener.CertificateAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateAlias = string(value["CertificateAlias"].GetString());
        m_certificateAliasHasBeenSet = true;
    }

    if (value.HasMember("ClientCertificateId") && !value["ClientCertificateId"].IsNull())
    {
        if (!value["ClientCertificateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPSListener.ClientCertificateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientCertificateId = string(value["ClientCertificateId"].GetString());
        m_clientCertificateIdHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPSListener.AuthType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authType = value["AuthType"].GetInt64();
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("ClientCertificateAlias") && !value["ClientCertificateAlias"].IsNull())
    {
        if (!value["ClientCertificateAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPSListener.ClientCertificateAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientCertificateAlias = string(value["ClientCertificateAlias"].GetString());
        m_clientCertificateAliasHasBeenSet = true;
    }

    if (value.HasMember("PolyClientCertificateAliasInfo") && !value["PolyClientCertificateAliasInfo"].IsNull())
    {
        if (!value["PolyClientCertificateAliasInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HTTPSListener.PolyClientCertificateAliasInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["PolyClientCertificateAliasInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CertificateAliasInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_polyClientCertificateAliasInfo.push_back(item);
        }
        m_polyClientCertificateAliasInfoHasBeenSet = true;
    }

    if (value.HasMember("Http3Supported") && !value["Http3Supported"].IsNull())
    {
        if (!value["Http3Supported"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPSListener.Http3Supported` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_http3Supported = value["Http3Supported"].GetInt64();
        m_http3SupportedHasBeenSet = true;
    }

    if (value.HasMember("ProxyId") && !value["ProxyId"].IsNull())
    {
        if (!value["ProxyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPSListener.ProxyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyId = string(value["ProxyId"].GetString());
        m_proxyIdHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPSListener.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("TLSSupportVersion") && !value["TLSSupportVersion"].IsNull())
    {
        if (!value["TLSSupportVersion"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HTTPSListener.TLSSupportVersion` is not array type"));

        const rapidjson::Value &tmpValue = value["TLSSupportVersion"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tLSSupportVersion.push_back((*itr).GetString());
        }
        m_tLSSupportVersionHasBeenSet = true;
    }

    if (value.HasMember("TLSCiphers") && !value["TLSCiphers"].IsNull())
    {
        if (!value["TLSCiphers"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPSListener.TLSCiphers` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tLSCiphers = string(value["TLSCiphers"].GetString());
        m_tLSCiphersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HTTPSListener::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listenerStatus, allocator);
    }

    if (m_certificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_certificateAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_clientCertificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientCertificateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientCertificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authType, allocator);
    }

    if (m_clientCertificateAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientCertificateAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientCertificateAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_polyClientCertificateAliasInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolyClientCertificateAliasInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_polyClientCertificateAliasInfo.begin(); itr != m_polyClientCertificateAliasInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_http3SupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Http3Supported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_http3Supported, allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_tLSSupportVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TLSSupportVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tLSSupportVersion.begin(); itr != m_tLSSupportVersion.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tLSCiphersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TLSCiphers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tLSCiphers.c_str(), allocator).Move(), allocator);
    }

}


string HTTPSListener::GetListenerId() const
{
    return m_listenerId;
}

void HTTPSListener::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool HTTPSListener::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string HTTPSListener::GetListenerName() const
{
    return m_listenerName;
}

void HTTPSListener::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool HTTPSListener::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

uint64_t HTTPSListener::GetPort() const
{
    return m_port;
}

void HTTPSListener::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool HTTPSListener::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string HTTPSListener::GetProtocol() const
{
    return m_protocol;
}

void HTTPSListener::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool HTTPSListener::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

uint64_t HTTPSListener::GetListenerStatus() const
{
    return m_listenerStatus;
}

void HTTPSListener::SetListenerStatus(const uint64_t& _listenerStatus)
{
    m_listenerStatus = _listenerStatus;
    m_listenerStatusHasBeenSet = true;
}

bool HTTPSListener::ListenerStatusHasBeenSet() const
{
    return m_listenerStatusHasBeenSet;
}

string HTTPSListener::GetCertificateId() const
{
    return m_certificateId;
}

void HTTPSListener::SetCertificateId(const string& _certificateId)
{
    m_certificateId = _certificateId;
    m_certificateIdHasBeenSet = true;
}

bool HTTPSListener::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

string HTTPSListener::GetForwardProtocol() const
{
    return m_forwardProtocol;
}

void HTTPSListener::SetForwardProtocol(const string& _forwardProtocol)
{
    m_forwardProtocol = _forwardProtocol;
    m_forwardProtocolHasBeenSet = true;
}

bool HTTPSListener::ForwardProtocolHasBeenSet() const
{
    return m_forwardProtocolHasBeenSet;
}

uint64_t HTTPSListener::GetCreateTime() const
{
    return m_createTime;
}

void HTTPSListener::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool HTTPSListener::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string HTTPSListener::GetCertificateAlias() const
{
    return m_certificateAlias;
}

void HTTPSListener::SetCertificateAlias(const string& _certificateAlias)
{
    m_certificateAlias = _certificateAlias;
    m_certificateAliasHasBeenSet = true;
}

bool HTTPSListener::CertificateAliasHasBeenSet() const
{
    return m_certificateAliasHasBeenSet;
}

string HTTPSListener::GetClientCertificateId() const
{
    return m_clientCertificateId;
}

void HTTPSListener::SetClientCertificateId(const string& _clientCertificateId)
{
    m_clientCertificateId = _clientCertificateId;
    m_clientCertificateIdHasBeenSet = true;
}

bool HTTPSListener::ClientCertificateIdHasBeenSet() const
{
    return m_clientCertificateIdHasBeenSet;
}

int64_t HTTPSListener::GetAuthType() const
{
    return m_authType;
}

void HTTPSListener::SetAuthType(const int64_t& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool HTTPSListener::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string HTTPSListener::GetClientCertificateAlias() const
{
    return m_clientCertificateAlias;
}

void HTTPSListener::SetClientCertificateAlias(const string& _clientCertificateAlias)
{
    m_clientCertificateAlias = _clientCertificateAlias;
    m_clientCertificateAliasHasBeenSet = true;
}

bool HTTPSListener::ClientCertificateAliasHasBeenSet() const
{
    return m_clientCertificateAliasHasBeenSet;
}

vector<CertificateAliasInfo> HTTPSListener::GetPolyClientCertificateAliasInfo() const
{
    return m_polyClientCertificateAliasInfo;
}

void HTTPSListener::SetPolyClientCertificateAliasInfo(const vector<CertificateAliasInfo>& _polyClientCertificateAliasInfo)
{
    m_polyClientCertificateAliasInfo = _polyClientCertificateAliasInfo;
    m_polyClientCertificateAliasInfoHasBeenSet = true;
}

bool HTTPSListener::PolyClientCertificateAliasInfoHasBeenSet() const
{
    return m_polyClientCertificateAliasInfoHasBeenSet;
}

int64_t HTTPSListener::GetHttp3Supported() const
{
    return m_http3Supported;
}

void HTTPSListener::SetHttp3Supported(const int64_t& _http3Supported)
{
    m_http3Supported = _http3Supported;
    m_http3SupportedHasBeenSet = true;
}

bool HTTPSListener::Http3SupportedHasBeenSet() const
{
    return m_http3SupportedHasBeenSet;
}

string HTTPSListener::GetProxyId() const
{
    return m_proxyId;
}

void HTTPSListener::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool HTTPSListener::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string HTTPSListener::GetGroupId() const
{
    return m_groupId;
}

void HTTPSListener::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool HTTPSListener::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

vector<string> HTTPSListener::GetTLSSupportVersion() const
{
    return m_tLSSupportVersion;
}

void HTTPSListener::SetTLSSupportVersion(const vector<string>& _tLSSupportVersion)
{
    m_tLSSupportVersion = _tLSSupportVersion;
    m_tLSSupportVersionHasBeenSet = true;
}

bool HTTPSListener::TLSSupportVersionHasBeenSet() const
{
    return m_tLSSupportVersionHasBeenSet;
}

string HTTPSListener::GetTLSCiphers() const
{
    return m_tLSCiphers;
}

void HTTPSListener::SetTLSCiphers(const string& _tLSCiphers)
{
    m_tLSCiphers = _tLSCiphers;
    m_tLSCiphersHasBeenSet = true;
}

bool HTTPSListener::TLSCiphersHasBeenSet() const
{
    return m_tLSCiphersHasBeenSet;
}

