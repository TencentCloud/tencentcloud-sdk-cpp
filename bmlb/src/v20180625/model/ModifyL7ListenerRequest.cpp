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

#include <tencentcloud/bmlb/v20180625/model/ModifyL7ListenerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

ModifyL7ListenerRequest::ModifyL7ListenerRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
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

string ModifyL7ListenerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_sslModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sslMode, allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_certNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certName.c_str(), allocator).Move(), allocator);
    }

    if (m_certContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certContent.c_str(), allocator).Move(), allocator);
    }

    if (m_certKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certKey.c_str(), allocator).Move(), allocator);
    }

    if (m_certCaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertCaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certCaId.c_str(), allocator).Move(), allocator);
    }

    if (m_certCaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertCaName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certCaName.c_str(), allocator).Move(), allocator);
    }

    if (m_certCaContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertCaContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certCaContent.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_forwardProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forwardProtocol, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyL7ListenerRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void ModifyL7ListenerRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool ModifyL7ListenerRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string ModifyL7ListenerRequest::GetListenerId() const
{
    return m_listenerId;
}

void ModifyL7ListenerRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ModifyL7ListenerRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ModifyL7ListenerRequest::GetListenerName() const
{
    return m_listenerName;
}

void ModifyL7ListenerRequest::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool ModifyL7ListenerRequest::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

int64_t ModifyL7ListenerRequest::GetSslMode() const
{
    return m_sslMode;
}

void ModifyL7ListenerRequest::SetSslMode(const int64_t& _sslMode)
{
    m_sslMode = _sslMode;
    m_sslModeHasBeenSet = true;
}

bool ModifyL7ListenerRequest::SslModeHasBeenSet() const
{
    return m_sslModeHasBeenSet;
}

string ModifyL7ListenerRequest::GetCertId() const
{
    return m_certId;
}

void ModifyL7ListenerRequest::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool ModifyL7ListenerRequest::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string ModifyL7ListenerRequest::GetCertName() const
{
    return m_certName;
}

void ModifyL7ListenerRequest::SetCertName(const string& _certName)
{
    m_certName = _certName;
    m_certNameHasBeenSet = true;
}

bool ModifyL7ListenerRequest::CertNameHasBeenSet() const
{
    return m_certNameHasBeenSet;
}

string ModifyL7ListenerRequest::GetCertContent() const
{
    return m_certContent;
}

void ModifyL7ListenerRequest::SetCertContent(const string& _certContent)
{
    m_certContent = _certContent;
    m_certContentHasBeenSet = true;
}

bool ModifyL7ListenerRequest::CertContentHasBeenSet() const
{
    return m_certContentHasBeenSet;
}

string ModifyL7ListenerRequest::GetCertKey() const
{
    return m_certKey;
}

void ModifyL7ListenerRequest::SetCertKey(const string& _certKey)
{
    m_certKey = _certKey;
    m_certKeyHasBeenSet = true;
}

bool ModifyL7ListenerRequest::CertKeyHasBeenSet() const
{
    return m_certKeyHasBeenSet;
}

string ModifyL7ListenerRequest::GetCertCaId() const
{
    return m_certCaId;
}

void ModifyL7ListenerRequest::SetCertCaId(const string& _certCaId)
{
    m_certCaId = _certCaId;
    m_certCaIdHasBeenSet = true;
}

bool ModifyL7ListenerRequest::CertCaIdHasBeenSet() const
{
    return m_certCaIdHasBeenSet;
}

string ModifyL7ListenerRequest::GetCertCaName() const
{
    return m_certCaName;
}

void ModifyL7ListenerRequest::SetCertCaName(const string& _certCaName)
{
    m_certCaName = _certCaName;
    m_certCaNameHasBeenSet = true;
}

bool ModifyL7ListenerRequest::CertCaNameHasBeenSet() const
{
    return m_certCaNameHasBeenSet;
}

string ModifyL7ListenerRequest::GetCertCaContent() const
{
    return m_certCaContent;
}

void ModifyL7ListenerRequest::SetCertCaContent(const string& _certCaContent)
{
    m_certCaContent = _certCaContent;
    m_certCaContentHasBeenSet = true;
}

bool ModifyL7ListenerRequest::CertCaContentHasBeenSet() const
{
    return m_certCaContentHasBeenSet;
}

int64_t ModifyL7ListenerRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void ModifyL7ListenerRequest::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool ModifyL7ListenerRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

int64_t ModifyL7ListenerRequest::GetForwardProtocol() const
{
    return m_forwardProtocol;
}

void ModifyL7ListenerRequest::SetForwardProtocol(const int64_t& _forwardProtocol)
{
    m_forwardProtocol = _forwardProtocol;
    m_forwardProtocolHasBeenSet = true;
}

bool ModifyL7ListenerRequest::ForwardProtocolHasBeenSet() const
{
    return m_forwardProtocolHasBeenSet;
}


