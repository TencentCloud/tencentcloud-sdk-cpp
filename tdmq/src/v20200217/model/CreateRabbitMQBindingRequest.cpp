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

#include <tencentcloud/tdmq/v20200217/model/CreateRabbitMQBindingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CreateRabbitMQBindingRequest::CreateRabbitMQBindingRequest() :
    m_instanceIdHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_destinationTypeHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_routingKeyHasBeenSet(false)
{
}

string CreateRabbitMQBindingRequest::ToJsonString() const
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

    if (m_virtualHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_virtualHost.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destinationType.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Destination";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destination.c_str(), allocator).Move(), allocator);
    }

    if (m_routingKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutingKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routingKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRabbitMQBindingRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateRabbitMQBindingRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateRabbitMQBindingRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateRabbitMQBindingRequest::GetVirtualHost() const
{
    return m_virtualHost;
}

void CreateRabbitMQBindingRequest::SetVirtualHost(const string& _virtualHost)
{
    m_virtualHost = _virtualHost;
    m_virtualHostHasBeenSet = true;
}

bool CreateRabbitMQBindingRequest::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

string CreateRabbitMQBindingRequest::GetSource() const
{
    return m_source;
}

void CreateRabbitMQBindingRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool CreateRabbitMQBindingRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string CreateRabbitMQBindingRequest::GetDestinationType() const
{
    return m_destinationType;
}

void CreateRabbitMQBindingRequest::SetDestinationType(const string& _destinationType)
{
    m_destinationType = _destinationType;
    m_destinationTypeHasBeenSet = true;
}

bool CreateRabbitMQBindingRequest::DestinationTypeHasBeenSet() const
{
    return m_destinationTypeHasBeenSet;
}

string CreateRabbitMQBindingRequest::GetDestination() const
{
    return m_destination;
}

void CreateRabbitMQBindingRequest::SetDestination(const string& _destination)
{
    m_destination = _destination;
    m_destinationHasBeenSet = true;
}

bool CreateRabbitMQBindingRequest::DestinationHasBeenSet() const
{
    return m_destinationHasBeenSet;
}

string CreateRabbitMQBindingRequest::GetRoutingKey() const
{
    return m_routingKey;
}

void CreateRabbitMQBindingRequest::SetRoutingKey(const string& _routingKey)
{
    m_routingKey = _routingKey;
    m_routingKeyHasBeenSet = true;
}

bool CreateRabbitMQBindingRequest::RoutingKeyHasBeenSet() const
{
    return m_routingKeyHasBeenSet;
}


