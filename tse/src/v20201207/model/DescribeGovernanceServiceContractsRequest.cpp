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

#include <tencentcloud/tse/v20201207/model/DescribeGovernanceServiceContractsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DescribeGovernanceServiceContractsRequest::DescribeGovernanceServiceContractsRequest() :
    m_instanceIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_contractVersionHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_briefHasBeenSet(false)
{
}

string DescribeGovernanceServiceContractsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
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

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_service.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_contractVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contractVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_briefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brief";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_brief, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeGovernanceServiceContractsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeGovernanceServiceContractsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeGovernanceServiceContractsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeGovernanceServiceContractsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeGovernanceServiceContractsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeGovernanceServiceContractsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeGovernanceServiceContractsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeGovernanceServiceContractsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeGovernanceServiceContractsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeGovernanceServiceContractsRequest::GetNamespace() const
{
    return m_namespace;
}

void DescribeGovernanceServiceContractsRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool DescribeGovernanceServiceContractsRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string DescribeGovernanceServiceContractsRequest::GetService() const
{
    return m_service;
}

void DescribeGovernanceServiceContractsRequest::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool DescribeGovernanceServiceContractsRequest::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

string DescribeGovernanceServiceContractsRequest::GetName() const
{
    return m_name;
}

void DescribeGovernanceServiceContractsRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeGovernanceServiceContractsRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeGovernanceServiceContractsRequest::GetContractVersion() const
{
    return m_contractVersion;
}

void DescribeGovernanceServiceContractsRequest::SetContractVersion(const string& _contractVersion)
{
    m_contractVersion = _contractVersion;
    m_contractVersionHasBeenSet = true;
}

bool DescribeGovernanceServiceContractsRequest::ContractVersionHasBeenSet() const
{
    return m_contractVersionHasBeenSet;
}

string DescribeGovernanceServiceContractsRequest::GetProtocol() const
{
    return m_protocol;
}

void DescribeGovernanceServiceContractsRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DescribeGovernanceServiceContractsRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

bool DescribeGovernanceServiceContractsRequest::GetBrief() const
{
    return m_brief;
}

void DescribeGovernanceServiceContractsRequest::SetBrief(const bool& _brief)
{
    m_brief = _brief;
    m_briefHasBeenSet = true;
}

bool DescribeGovernanceServiceContractsRequest::BriefHasBeenSet() const
{
    return m_briefHasBeenSet;
}


