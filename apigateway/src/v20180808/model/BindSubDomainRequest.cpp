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

#include <tencentcloud/apigateway/v20180808/model/BindSubDomainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

BindSubDomainRequest::BindSubDomainRequest() :
    m_serviceIdHasBeenSet(false),
    m_subDomainHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_isDefaultMappingHasBeenSet(false),
    m_netSubDomainHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_pathMappingSetHasBeenSet(false),
    m_isForcedHttpsHasBeenSet(false)
{
}

string BindSubDomainRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_subDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_netType.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultMappingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefaultMapping";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDefaultMapping, allocator);
    }

    if (m_netSubDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetSubDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_netSubDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_pathMappingSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathMappingSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pathMappingSet.begin(); itr != m_pathMappingSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_isForcedHttpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsForcedHttps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isForcedHttps, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BindSubDomainRequest::GetServiceId() const
{
    return m_serviceId;
}

void BindSubDomainRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool BindSubDomainRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string BindSubDomainRequest::GetSubDomain() const
{
    return m_subDomain;
}

void BindSubDomainRequest::SetSubDomain(const string& _subDomain)
{
    m_subDomain = _subDomain;
    m_subDomainHasBeenSet = true;
}

bool BindSubDomainRequest::SubDomainHasBeenSet() const
{
    return m_subDomainHasBeenSet;
}

string BindSubDomainRequest::GetProtocol() const
{
    return m_protocol;
}

void BindSubDomainRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool BindSubDomainRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string BindSubDomainRequest::GetNetType() const
{
    return m_netType;
}

void BindSubDomainRequest::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool BindSubDomainRequest::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

bool BindSubDomainRequest::GetIsDefaultMapping() const
{
    return m_isDefaultMapping;
}

void BindSubDomainRequest::SetIsDefaultMapping(const bool& _isDefaultMapping)
{
    m_isDefaultMapping = _isDefaultMapping;
    m_isDefaultMappingHasBeenSet = true;
}

bool BindSubDomainRequest::IsDefaultMappingHasBeenSet() const
{
    return m_isDefaultMappingHasBeenSet;
}

string BindSubDomainRequest::GetNetSubDomain() const
{
    return m_netSubDomain;
}

void BindSubDomainRequest::SetNetSubDomain(const string& _netSubDomain)
{
    m_netSubDomain = _netSubDomain;
    m_netSubDomainHasBeenSet = true;
}

bool BindSubDomainRequest::NetSubDomainHasBeenSet() const
{
    return m_netSubDomainHasBeenSet;
}

string BindSubDomainRequest::GetCertificateId() const
{
    return m_certificateId;
}

void BindSubDomainRequest::SetCertificateId(const string& _certificateId)
{
    m_certificateId = _certificateId;
    m_certificateIdHasBeenSet = true;
}

bool BindSubDomainRequest::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

vector<PathMapping> BindSubDomainRequest::GetPathMappingSet() const
{
    return m_pathMappingSet;
}

void BindSubDomainRequest::SetPathMappingSet(const vector<PathMapping>& _pathMappingSet)
{
    m_pathMappingSet = _pathMappingSet;
    m_pathMappingSetHasBeenSet = true;
}

bool BindSubDomainRequest::PathMappingSetHasBeenSet() const
{
    return m_pathMappingSetHasBeenSet;
}

bool BindSubDomainRequest::GetIsForcedHttps() const
{
    return m_isForcedHttps;
}

void BindSubDomainRequest::SetIsForcedHttps(const bool& _isForcedHttps)
{
    m_isForcedHttps = _isForcedHttps;
    m_isForcedHttpsHasBeenSet = true;
}

bool BindSubDomainRequest::IsForcedHttpsHasBeenSet() const
{
    return m_isForcedHttpsHasBeenSet;
}


