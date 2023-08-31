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
using namespace std;

ModifyServiceRequest::ModifyServiceRequest() :
    m_serviceIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceDescHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_netTypesHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false)
{
}

string ModifyServiceRequest::ToJsonString() const
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

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_netTypes.begin(); itr != m_netTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
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

string ModifyServiceRequest::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void ModifyServiceRequest::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool ModifyServiceRequest::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}


