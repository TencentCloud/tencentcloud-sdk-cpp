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

#include <tencentcloud/gaap/v20180529/model/ModifyHTTPSListenerAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

ModifyHTTPSListenerAttributeRequest::ModifyHTTPSListenerAttributeRequest() :
    m_listenerIdHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_forwardProtocolHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_clientCertificateIdHasBeenSet(false),
    m_polyClientCertificateIdsHasBeenSet(false)
{
}

string ModifyHTTPSListenerAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_forwardProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certificateId.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyHTTPSListenerAttributeRequest::GetListenerId() const
{
    return m_listenerId;
}

void ModifyHTTPSListenerAttributeRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ModifyHTTPSListenerAttributeRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ModifyHTTPSListenerAttributeRequest::GetProxyId() const
{
    return m_proxyId;
}

void ModifyHTTPSListenerAttributeRequest::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool ModifyHTTPSListenerAttributeRequest::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string ModifyHTTPSListenerAttributeRequest::GetListenerName() const
{
    return m_listenerName;
}

void ModifyHTTPSListenerAttributeRequest::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool ModifyHTTPSListenerAttributeRequest::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

string ModifyHTTPSListenerAttributeRequest::GetForwardProtocol() const
{
    return m_forwardProtocol;
}

void ModifyHTTPSListenerAttributeRequest::SetForwardProtocol(const string& _forwardProtocol)
{
    m_forwardProtocol = _forwardProtocol;
    m_forwardProtocolHasBeenSet = true;
}

bool ModifyHTTPSListenerAttributeRequest::ForwardProtocolHasBeenSet() const
{
    return m_forwardProtocolHasBeenSet;
}

string ModifyHTTPSListenerAttributeRequest::GetCertificateId() const
{
    return m_certificateId;
}

void ModifyHTTPSListenerAttributeRequest::SetCertificateId(const string& _certificateId)
{
    m_certificateId = _certificateId;
    m_certificateIdHasBeenSet = true;
}

bool ModifyHTTPSListenerAttributeRequest::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

string ModifyHTTPSListenerAttributeRequest::GetClientCertificateId() const
{
    return m_clientCertificateId;
}

void ModifyHTTPSListenerAttributeRequest::SetClientCertificateId(const string& _clientCertificateId)
{
    m_clientCertificateId = _clientCertificateId;
    m_clientCertificateIdHasBeenSet = true;
}

bool ModifyHTTPSListenerAttributeRequest::ClientCertificateIdHasBeenSet() const
{
    return m_clientCertificateIdHasBeenSet;
}

vector<string> ModifyHTTPSListenerAttributeRequest::GetPolyClientCertificateIds() const
{
    return m_polyClientCertificateIds;
}

void ModifyHTTPSListenerAttributeRequest::SetPolyClientCertificateIds(const vector<string>& _polyClientCertificateIds)
{
    m_polyClientCertificateIds = _polyClientCertificateIds;
    m_polyClientCertificateIdsHasBeenSet = true;
}

bool ModifyHTTPSListenerAttributeRequest::PolyClientCertificateIdsHasBeenSet() const
{
    return m_polyClientCertificateIdsHasBeenSet;
}


