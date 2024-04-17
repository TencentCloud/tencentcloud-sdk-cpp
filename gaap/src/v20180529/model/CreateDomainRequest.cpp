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

#include <tencentcloud/gaap/v20180529/model/CreateDomainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

CreateDomainRequest::CreateDomainRequest() :
    m_listenerIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_clientCertificateIdHasBeenSet(false),
    m_polyClientCertificateIdsHasBeenSet(false),
    m_http3SupportedHasBeenSet(false),
    m_isDefaultServerHasBeenSet(false)
{
}

string CreateDomainRequest::ToJsonString() const
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

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
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

    if (m_http3SupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Http3Supported";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_http3Supported, allocator);
    }

    if (m_isDefaultServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefaultServer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDefaultServer, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDomainRequest::GetListenerId() const
{
    return m_listenerId;
}

void CreateDomainRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool CreateDomainRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string CreateDomainRequest::GetDomain() const
{
    return m_domain;
}

void CreateDomainRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateDomainRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CreateDomainRequest::GetCertificateId() const
{
    return m_certificateId;
}

void CreateDomainRequest::SetCertificateId(const string& _certificateId)
{
    m_certificateId = _certificateId;
    m_certificateIdHasBeenSet = true;
}

bool CreateDomainRequest::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

string CreateDomainRequest::GetClientCertificateId() const
{
    return m_clientCertificateId;
}

void CreateDomainRequest::SetClientCertificateId(const string& _clientCertificateId)
{
    m_clientCertificateId = _clientCertificateId;
    m_clientCertificateIdHasBeenSet = true;
}

bool CreateDomainRequest::ClientCertificateIdHasBeenSet() const
{
    return m_clientCertificateIdHasBeenSet;
}

vector<string> CreateDomainRequest::GetPolyClientCertificateIds() const
{
    return m_polyClientCertificateIds;
}

void CreateDomainRequest::SetPolyClientCertificateIds(const vector<string>& _polyClientCertificateIds)
{
    m_polyClientCertificateIds = _polyClientCertificateIds;
    m_polyClientCertificateIdsHasBeenSet = true;
}

bool CreateDomainRequest::PolyClientCertificateIdsHasBeenSet() const
{
    return m_polyClientCertificateIdsHasBeenSet;
}

int64_t CreateDomainRequest::GetHttp3Supported() const
{
    return m_http3Supported;
}

void CreateDomainRequest::SetHttp3Supported(const int64_t& _http3Supported)
{
    m_http3Supported = _http3Supported;
    m_http3SupportedHasBeenSet = true;
}

bool CreateDomainRequest::Http3SupportedHasBeenSet() const
{
    return m_http3SupportedHasBeenSet;
}

bool CreateDomainRequest::GetIsDefaultServer() const
{
    return m_isDefaultServer;
}

void CreateDomainRequest::SetIsDefaultServer(const bool& _isDefaultServer)
{
    m_isDefaultServer = _isDefaultServer;
    m_isDefaultServerHasBeenSet = true;
}

bool CreateDomainRequest::IsDefaultServerHasBeenSet() const
{
    return m_isDefaultServerHasBeenSet;
}


