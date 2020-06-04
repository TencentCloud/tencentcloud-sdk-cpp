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

#include <tencentcloud/apigateway/v20180808/model/CreateServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace rapidjson;
using namespace std;

CreateServiceRequest::CreateServiceRequest() :
    m_serviceNameHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_serviceDescHasBeenSet(false),
    m_exclusiveSetNameHasBeenSet(false),
    m_netTypesHasBeenSet(false),
    m_ipVersionHasBeenSet(false),
    m_setServerNameHasBeenSet(false),
    m_appIdTypeHasBeenSet(false)
{
}

string CreateServiceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_exclusiveSetNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExclusiveSetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_exclusiveSetName.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_netTypes.begin(); itr != m_netTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ipVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IpVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ipVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_setServerNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SetServerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_setServerName.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppIdType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_appIdType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateServiceRequest::GetServiceName() const
{
    return m_serviceName;
}

void CreateServiceRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool CreateServiceRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string CreateServiceRequest::GetProtocol() const
{
    return m_protocol;
}

void CreateServiceRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateServiceRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string CreateServiceRequest::GetServiceDesc() const
{
    return m_serviceDesc;
}

void CreateServiceRequest::SetServiceDesc(const string& _serviceDesc)
{
    m_serviceDesc = _serviceDesc;
    m_serviceDescHasBeenSet = true;
}

bool CreateServiceRequest::ServiceDescHasBeenSet() const
{
    return m_serviceDescHasBeenSet;
}

string CreateServiceRequest::GetExclusiveSetName() const
{
    return m_exclusiveSetName;
}

void CreateServiceRequest::SetExclusiveSetName(const string& _exclusiveSetName)
{
    m_exclusiveSetName = _exclusiveSetName;
    m_exclusiveSetNameHasBeenSet = true;
}

bool CreateServiceRequest::ExclusiveSetNameHasBeenSet() const
{
    return m_exclusiveSetNameHasBeenSet;
}

vector<string> CreateServiceRequest::GetNetTypes() const
{
    return m_netTypes;
}

void CreateServiceRequest::SetNetTypes(const vector<string>& _netTypes)
{
    m_netTypes = _netTypes;
    m_netTypesHasBeenSet = true;
}

bool CreateServiceRequest::NetTypesHasBeenSet() const
{
    return m_netTypesHasBeenSet;
}

string CreateServiceRequest::GetIpVersion() const
{
    return m_ipVersion;
}

void CreateServiceRequest::SetIpVersion(const string& _ipVersion)
{
    m_ipVersion = _ipVersion;
    m_ipVersionHasBeenSet = true;
}

bool CreateServiceRequest::IpVersionHasBeenSet() const
{
    return m_ipVersionHasBeenSet;
}

string CreateServiceRequest::GetSetServerName() const
{
    return m_setServerName;
}

void CreateServiceRequest::SetSetServerName(const string& _setServerName)
{
    m_setServerName = _setServerName;
    m_setServerNameHasBeenSet = true;
}

bool CreateServiceRequest::SetServerNameHasBeenSet() const
{
    return m_setServerNameHasBeenSet;
}

string CreateServiceRequest::GetAppIdType() const
{
    return m_appIdType;
}

void CreateServiceRequest::SetAppIdType(const string& _appIdType)
{
    m_appIdType = _appIdType;
    m_appIdTypeHasBeenSet = true;
}

bool CreateServiceRequest::AppIdTypeHasBeenSet() const
{
    return m_appIdTypeHasBeenSet;
}


