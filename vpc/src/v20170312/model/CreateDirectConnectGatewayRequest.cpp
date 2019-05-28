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

#include <tencentcloud/vpc/v20170312/model/CreateDirectConnectGatewayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

CreateDirectConnectGatewayRequest::CreateDirectConnectGatewayRequest() :
    m_directConnectGatewayNameHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_networkInstanceIdHasBeenSet(false),
    m_gatewayTypeHasBeenSet(false)
{
}

string CreateDirectConnectGatewayRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_directConnectGatewayNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DirectConnectGatewayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_directConnectGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInstanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_networkInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GatewayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_gatewayType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDirectConnectGatewayRequest::GetDirectConnectGatewayName() const
{
    return m_directConnectGatewayName;
}

void CreateDirectConnectGatewayRequest::SetDirectConnectGatewayName(const string& _directConnectGatewayName)
{
    m_directConnectGatewayName = _directConnectGatewayName;
    m_directConnectGatewayNameHasBeenSet = true;
}

bool CreateDirectConnectGatewayRequest::DirectConnectGatewayNameHasBeenSet() const
{
    return m_directConnectGatewayNameHasBeenSet;
}

string CreateDirectConnectGatewayRequest::GetNetworkType() const
{
    return m_networkType;
}

void CreateDirectConnectGatewayRequest::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool CreateDirectConnectGatewayRequest::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string CreateDirectConnectGatewayRequest::GetNetworkInstanceId() const
{
    return m_networkInstanceId;
}

void CreateDirectConnectGatewayRequest::SetNetworkInstanceId(const string& _networkInstanceId)
{
    m_networkInstanceId = _networkInstanceId;
    m_networkInstanceIdHasBeenSet = true;
}

bool CreateDirectConnectGatewayRequest::NetworkInstanceIdHasBeenSet() const
{
    return m_networkInstanceIdHasBeenSet;
}

string CreateDirectConnectGatewayRequest::GetGatewayType() const
{
    return m_gatewayType;
}

void CreateDirectConnectGatewayRequest::SetGatewayType(const string& _gatewayType)
{
    m_gatewayType = _gatewayType;
    m_gatewayTypeHasBeenSet = true;
}

bool CreateDirectConnectGatewayRequest::GatewayTypeHasBeenSet() const
{
    return m_gatewayTypeHasBeenSet;
}


