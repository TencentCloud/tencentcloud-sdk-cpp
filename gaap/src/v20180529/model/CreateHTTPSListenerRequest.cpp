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

#include <tencentcloud/gaap/v20180529/model/CreateHTTPSListenerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

CreateHTTPSListenerRequest::CreateHTTPSListenerRequest() :
    m_listenerNameHasBeenSet(false),
    m_portHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_forwardProtocolHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_clientCertificateIdHasBeenSet(false),
    m_polyClientCertificateIdsHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_http3SupportedHasBeenSet(false)
{
}

string CreateHTTPSListenerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_listenerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }

    if (m_certificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_forwardProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_authType, allocator);
    }

    if (m_clientCertificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientCertificateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientCertificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_polyClientCertificateIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolyClientCertificateIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_polyClientCertificateIds.begin(); itr != m_polyClientCertificateIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_http3SupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Http3Supported";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_http3Supported, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateHTTPSListenerRequest::GetListenerName() const
{
    return m_listenerName;
}

void CreateHTTPSListenerRequest::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool CreateHTTPSListenerRequest::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

uint64_t CreateHTTPSListenerRequest::GetPort() const
{
    return m_port;
}

void CreateHTTPSListenerRequest::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool CreateHTTPSListenerRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string CreateHTTPSListenerRequest::GetCertificateId() const
{
    return m_certificateId;
}

void CreateHTTPSListenerRequest::SetCertificateId(const string& _certificateId)
{
    m_certificateId = _certificateId;
    m_certificateIdHasBeenSet = true;
}

bool CreateHTTPSListenerRequest::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

string CreateHTTPSListenerRequest::GetForwardProtocol() const
{
    return m_forwardProtocol;
}

void CreateHTTPSListenerRequest::SetForwardProtocol(const string& _forwardProtocol)
{
    m_forwardProtocol = _forwardProtocol;
    m_forwardProtocolHasBeenSet = true;
}

bool CreateHTTPSListenerRequest::ForwardProtocolHasBeenSet() const
{
    return m_forwardProtocolHasBeenSet;
}

string CreateHTTPSListenerRequest::GetProxyId() const
{
    return m_proxyId;
}

void CreateHTTPSListenerRequest::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool CreateHTTPSListenerRequest::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

uint64_t CreateHTTPSListenerRequest::GetAuthType() const
{
    return m_authType;
}

void CreateHTTPSListenerRequest::SetAuthType(const uint64_t& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool CreateHTTPSListenerRequest::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string CreateHTTPSListenerRequest::GetClientCertificateId() const
{
    return m_clientCertificateId;
}

void CreateHTTPSListenerRequest::SetClientCertificateId(const string& _clientCertificateId)
{
    m_clientCertificateId = _clientCertificateId;
    m_clientCertificateIdHasBeenSet = true;
}

bool CreateHTTPSListenerRequest::ClientCertificateIdHasBeenSet() const
{
    return m_clientCertificateIdHasBeenSet;
}

vector<string> CreateHTTPSListenerRequest::GetPolyClientCertificateIds() const
{
    return m_polyClientCertificateIds;
}

void CreateHTTPSListenerRequest::SetPolyClientCertificateIds(const vector<string>& _polyClientCertificateIds)
{
    m_polyClientCertificateIds = _polyClientCertificateIds;
    m_polyClientCertificateIdsHasBeenSet = true;
}

bool CreateHTTPSListenerRequest::PolyClientCertificateIdsHasBeenSet() const
{
    return m_polyClientCertificateIdsHasBeenSet;
}

string CreateHTTPSListenerRequest::GetGroupId() const
{
    return m_groupId;
}

void CreateHTTPSListenerRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreateHTTPSListenerRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t CreateHTTPSListenerRequest::GetHttp3Supported() const
{
    return m_http3Supported;
}

void CreateHTTPSListenerRequest::SetHttp3Supported(const int64_t& _http3Supported)
{
    m_http3Supported = _http3Supported;
    m_http3SupportedHasBeenSet = true;
}

bool CreateHTTPSListenerRequest::Http3SupportedHasBeenSet() const
{
    return m_http3SupportedHasBeenSet;
}


