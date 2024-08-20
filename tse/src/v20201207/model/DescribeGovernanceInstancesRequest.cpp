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

#include <tencentcloud/tse/v20201207/model/DescribeGovernanceInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DescribeGovernanceInstancesRequest::DescribeGovernanceInstancesRequest() :
    m_serviceHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_instanceVersionHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_healthStatusHasBeenSet(false),
    m_isolateHasBeenSet(false),
    m_metadatasHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

string DescribeGovernanceInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_service.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_healthStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_healthStatus, allocator);
    }

    if (m_isolateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isolate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isolate, allocator);
    }

    if (m_metadatasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadatas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metadatas.begin(); itr != m_metadatas.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_location.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeGovernanceInstancesRequest::GetService() const
{
    return m_service;
}

void DescribeGovernanceInstancesRequest::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool DescribeGovernanceInstancesRequest::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

string DescribeGovernanceInstancesRequest::GetNamespace() const
{
    return m_namespace;
}

void DescribeGovernanceInstancesRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool DescribeGovernanceInstancesRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string DescribeGovernanceInstancesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeGovernanceInstancesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeGovernanceInstancesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeGovernanceInstancesRequest::GetHost() const
{
    return m_host;
}

void DescribeGovernanceInstancesRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DescribeGovernanceInstancesRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string DescribeGovernanceInstancesRequest::GetInstanceVersion() const
{
    return m_instanceVersion;
}

void DescribeGovernanceInstancesRequest::SetInstanceVersion(const string& _instanceVersion)
{
    m_instanceVersion = _instanceVersion;
    m_instanceVersionHasBeenSet = true;
}

bool DescribeGovernanceInstancesRequest::InstanceVersionHasBeenSet() const
{
    return m_instanceVersionHasBeenSet;
}

string DescribeGovernanceInstancesRequest::GetProtocol() const
{
    return m_protocol;
}

void DescribeGovernanceInstancesRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DescribeGovernanceInstancesRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

bool DescribeGovernanceInstancesRequest::GetHealthStatus() const
{
    return m_healthStatus;
}

void DescribeGovernanceInstancesRequest::SetHealthStatus(const bool& _healthStatus)
{
    m_healthStatus = _healthStatus;
    m_healthStatusHasBeenSet = true;
}

bool DescribeGovernanceInstancesRequest::HealthStatusHasBeenSet() const
{
    return m_healthStatusHasBeenSet;
}

bool DescribeGovernanceInstancesRequest::GetIsolate() const
{
    return m_isolate;
}

void DescribeGovernanceInstancesRequest::SetIsolate(const bool& _isolate)
{
    m_isolate = _isolate;
    m_isolateHasBeenSet = true;
}

bool DescribeGovernanceInstancesRequest::IsolateHasBeenSet() const
{
    return m_isolateHasBeenSet;
}

vector<Metadata> DescribeGovernanceInstancesRequest::GetMetadatas() const
{
    return m_metadatas;
}

void DescribeGovernanceInstancesRequest::SetMetadatas(const vector<Metadata>& _metadatas)
{
    m_metadatas = _metadatas;
    m_metadatasHasBeenSet = true;
}

bool DescribeGovernanceInstancesRequest::MetadatasHasBeenSet() const
{
    return m_metadatasHasBeenSet;
}

uint64_t DescribeGovernanceInstancesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeGovernanceInstancesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeGovernanceInstancesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeGovernanceInstancesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeGovernanceInstancesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeGovernanceInstancesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

Location DescribeGovernanceInstancesRequest::GetLocation() const
{
    return m_location;
}

void DescribeGovernanceInstancesRequest::SetLocation(const Location& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool DescribeGovernanceInstancesRequest::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}


