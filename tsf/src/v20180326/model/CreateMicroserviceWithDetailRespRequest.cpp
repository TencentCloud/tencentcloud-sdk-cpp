/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tsf/v20180326/model/CreateMicroserviceWithDetailRespRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

CreateMicroserviceWithDetailRespRequest::CreateMicroserviceWithDetailRespRequest() :
    m_namespaceIdHasBeenSet(false),
    m_microserviceNameHasBeenSet(false),
    m_microserviceDescHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_serviceUrlHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_serviceDiscoveryHasBeenSet(false)
{
}

string CreateMicroserviceWithDetailRespRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_microserviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroserviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_microserviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_microserviceDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroserviceDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_microserviceDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceDiscoveryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceDiscovery";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceDiscovery.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMicroserviceWithDetailRespRequest::GetNamespaceId() const
{
    return m_namespaceId;
}

void CreateMicroserviceWithDetailRespRequest::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool CreateMicroserviceWithDetailRespRequest::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string CreateMicroserviceWithDetailRespRequest::GetMicroserviceName() const
{
    return m_microserviceName;
}

void CreateMicroserviceWithDetailRespRequest::SetMicroserviceName(const string& _microserviceName)
{
    m_microserviceName = _microserviceName;
    m_microserviceNameHasBeenSet = true;
}

bool CreateMicroserviceWithDetailRespRequest::MicroserviceNameHasBeenSet() const
{
    return m_microserviceNameHasBeenSet;
}

string CreateMicroserviceWithDetailRespRequest::GetMicroserviceDesc() const
{
    return m_microserviceDesc;
}

void CreateMicroserviceWithDetailRespRequest::SetMicroserviceDesc(const string& _microserviceDesc)
{
    m_microserviceDesc = _microserviceDesc;
    m_microserviceDescHasBeenSet = true;
}

bool CreateMicroserviceWithDetailRespRequest::MicroserviceDescHasBeenSet() const
{
    return m_microserviceDescHasBeenSet;
}

string CreateMicroserviceWithDetailRespRequest::GetServiceType() const
{
    return m_serviceType;
}

void CreateMicroserviceWithDetailRespRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool CreateMicroserviceWithDetailRespRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string CreateMicroserviceWithDetailRespRequest::GetServiceUrl() const
{
    return m_serviceUrl;
}

void CreateMicroserviceWithDetailRespRequest::SetServiceUrl(const string& _serviceUrl)
{
    m_serviceUrl = _serviceUrl;
    m_serviceUrlHasBeenSet = true;
}

bool CreateMicroserviceWithDetailRespRequest::ServiceUrlHasBeenSet() const
{
    return m_serviceUrlHasBeenSet;
}

string CreateMicroserviceWithDetailRespRequest::GetProtocol() const
{
    return m_protocol;
}

void CreateMicroserviceWithDetailRespRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateMicroserviceWithDetailRespRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string CreateMicroserviceWithDetailRespRequest::GetServiceDiscovery() const
{
    return m_serviceDiscovery;
}

void CreateMicroserviceWithDetailRespRequest::SetServiceDiscovery(const string& _serviceDiscovery)
{
    m_serviceDiscovery = _serviceDiscovery;
    m_serviceDiscoveryHasBeenSet = true;
}

bool CreateMicroserviceWithDetailRespRequest::ServiceDiscoveryHasBeenSet() const
{
    return m_serviceDiscoveryHasBeenSet;
}


