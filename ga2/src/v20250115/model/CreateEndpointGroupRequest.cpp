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

#include <tencentcloud/ga2/v20250115/model/CreateEndpointGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

CreateEndpointGroupRequest::CreateEndpointGroupRequest() :
    m_globalAcceleratorIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_endpointGroupTypeHasBeenSet(false),
    m_endpointGroupConfigurationHasBeenSet(false)
{
}

string CreateEndpointGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_globalAcceleratorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_globalAcceleratorId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointGroupType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpointGroupType.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointGroupConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointGroupConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_endpointGroupConfiguration.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateEndpointGroupRequest::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void CreateEndpointGroupRequest::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool CreateEndpointGroupRequest::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}

string CreateEndpointGroupRequest::GetListenerId() const
{
    return m_listenerId;
}

void CreateEndpointGroupRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool CreateEndpointGroupRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string CreateEndpointGroupRequest::GetEndpointGroupType() const
{
    return m_endpointGroupType;
}

void CreateEndpointGroupRequest::SetEndpointGroupType(const string& _endpointGroupType)
{
    m_endpointGroupType = _endpointGroupType;
    m_endpointGroupTypeHasBeenSet = true;
}

bool CreateEndpointGroupRequest::EndpointGroupTypeHasBeenSet() const
{
    return m_endpointGroupTypeHasBeenSet;
}

EndpointGroupConfiguration CreateEndpointGroupRequest::GetEndpointGroupConfiguration() const
{
    return m_endpointGroupConfiguration;
}

void CreateEndpointGroupRequest::SetEndpointGroupConfiguration(const EndpointGroupConfiguration& _endpointGroupConfiguration)
{
    m_endpointGroupConfiguration = _endpointGroupConfiguration;
    m_endpointGroupConfigurationHasBeenSet = true;
}

bool CreateEndpointGroupRequest::EndpointGroupConfigurationHasBeenSet() const
{
    return m_endpointGroupConfigurationHasBeenSet;
}


