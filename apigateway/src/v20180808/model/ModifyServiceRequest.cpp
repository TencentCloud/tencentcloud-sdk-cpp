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

#include <tencentcloud/apigateway/v20180808/model/ModifyServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace rapidjson;
using namespace std;

ModifyServiceRequest::ModifyServiceRequest() :
    m_serviceIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceDescHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_netTypesHasBeenSet(false)
{
}

string ModifyServiceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_protocol.c_str(), allocator).Move(), allocator);
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


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyServiceRequest::GetServiceId() const
{
    return m_serviceId;
}

void ModifyServiceRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool ModifyServiceRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string ModifyServiceRequest::GetServiceName() const
{
    return m_serviceName;
}

void ModifyServiceRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ModifyServiceRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string ModifyServiceRequest::GetServiceDesc() const
{
    return m_serviceDesc;
}

void ModifyServiceRequest::SetServiceDesc(const string& _serviceDesc)
{
    m_serviceDesc = _serviceDesc;
    m_serviceDescHasBeenSet = true;
}

bool ModifyServiceRequest::ServiceDescHasBeenSet() const
{
    return m_serviceDescHasBeenSet;
}

string ModifyServiceRequest::GetProtocol() const
{
    return m_protocol;
}

void ModifyServiceRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ModifyServiceRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

vector<string> ModifyServiceRequest::GetNetTypes() const
{
    return m_netTypes;
}

void ModifyServiceRequest::SetNetTypes(const vector<string>& _netTypes)
{
    m_netTypes = _netTypes;
    m_netTypesHasBeenSet = true;
}

bool ModifyServiceRequest::NetTypesHasBeenSet() const
{
    return m_netTypesHasBeenSet;
}


