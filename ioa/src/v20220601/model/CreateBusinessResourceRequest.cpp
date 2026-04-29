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

#include <tencentcloud/ioa/v20220601/model/CreateBusinessResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

CreateBusinessResourceRequest::CreateBusinessResourceRequest() :
    m_areaIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_servicePortHasBeenSet(false),
    m_levelsHasBeenSet(false),
    m_serviceAddressHasBeenSet(false),
    m_directConnHasBeenSet(false)
{
}

string CreateBusinessResourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_areaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_areaId, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_protocol, allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_servicePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServicePort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_servicePort.c_str(), allocator).Move(), allocator);
    }

    if (m_levelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Levels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_levels, allocator);
    }

    if (m_serviceAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_directConn, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateBusinessResourceRequest::GetAreaId() const
{
    return m_areaId;
}

void CreateBusinessResourceRequest::SetAreaId(const int64_t& _areaId)
{
    m_areaId = _areaId;
    m_areaIdHasBeenSet = true;
}

bool CreateBusinessResourceRequest::AreaIdHasBeenSet() const
{
    return m_areaIdHasBeenSet;
}

int64_t CreateBusinessResourceRequest::GetProtocol() const
{
    return m_protocol;
}

void CreateBusinessResourceRequest::SetProtocol(const int64_t& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateBusinessResourceRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string CreateBusinessResourceRequest::GetServiceName() const
{
    return m_serviceName;
}

void CreateBusinessResourceRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool CreateBusinessResourceRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string CreateBusinessResourceRequest::GetServiceType() const
{
    return m_serviceType;
}

void CreateBusinessResourceRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool CreateBusinessResourceRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string CreateBusinessResourceRequest::GetServicePort() const
{
    return m_servicePort;
}

void CreateBusinessResourceRequest::SetServicePort(const string& _servicePort)
{
    m_servicePort = _servicePort;
    m_servicePortHasBeenSet = true;
}

bool CreateBusinessResourceRequest::ServicePortHasBeenSet() const
{
    return m_servicePortHasBeenSet;
}

int64_t CreateBusinessResourceRequest::GetLevels() const
{
    return m_levels;
}

void CreateBusinessResourceRequest::SetLevels(const int64_t& _levels)
{
    m_levels = _levels;
    m_levelsHasBeenSet = true;
}

bool CreateBusinessResourceRequest::LevelsHasBeenSet() const
{
    return m_levelsHasBeenSet;
}

string CreateBusinessResourceRequest::GetServiceAddress() const
{
    return m_serviceAddress;
}

void CreateBusinessResourceRequest::SetServiceAddress(const string& _serviceAddress)
{
    m_serviceAddress = _serviceAddress;
    m_serviceAddressHasBeenSet = true;
}

bool CreateBusinessResourceRequest::ServiceAddressHasBeenSet() const
{
    return m_serviceAddressHasBeenSet;
}

int64_t CreateBusinessResourceRequest::GetDirectConn() const
{
    return m_directConn;
}

void CreateBusinessResourceRequest::SetDirectConn(const int64_t& _directConn)
{
    m_directConn = _directConn;
    m_directConnHasBeenSet = true;
}

bool CreateBusinessResourceRequest::DirectConnHasBeenSet() const
{
    return m_directConnHasBeenSet;
}


