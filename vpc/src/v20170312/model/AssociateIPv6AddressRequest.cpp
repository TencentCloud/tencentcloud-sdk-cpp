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

#include <tencentcloud/vpc/v20170312/model/AssociateIPv6AddressRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

AssociateIPv6AddressRequest::AssociateIPv6AddressRequest() :
    m_iPv6AddressIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_privateIPv6AddressHasBeenSet(false)
{
}

string AssociateIPv6AddressRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_iPv6AddressIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv6AddressId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iPv6AddressId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInterfaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterfaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkInterfaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIPv6AddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIPv6Address";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_privateIPv6Address.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AssociateIPv6AddressRequest::GetIPv6AddressId() const
{
    return m_iPv6AddressId;
}

void AssociateIPv6AddressRequest::SetIPv6AddressId(const string& _iPv6AddressId)
{
    m_iPv6AddressId = _iPv6AddressId;
    m_iPv6AddressIdHasBeenSet = true;
}

bool AssociateIPv6AddressRequest::IPv6AddressIdHasBeenSet() const
{
    return m_iPv6AddressIdHasBeenSet;
}

string AssociateIPv6AddressRequest::GetNetworkInterfaceId() const
{
    return m_networkInterfaceId;
}

void AssociateIPv6AddressRequest::SetNetworkInterfaceId(const string& _networkInterfaceId)
{
    m_networkInterfaceId = _networkInterfaceId;
    m_networkInterfaceIdHasBeenSet = true;
}

bool AssociateIPv6AddressRequest::NetworkInterfaceIdHasBeenSet() const
{
    return m_networkInterfaceIdHasBeenSet;
}

string AssociateIPv6AddressRequest::GetPrivateIPv6Address() const
{
    return m_privateIPv6Address;
}

void AssociateIPv6AddressRequest::SetPrivateIPv6Address(const string& _privateIPv6Address)
{
    m_privateIPv6Address = _privateIPv6Address;
    m_privateIPv6AddressHasBeenSet = true;
}

bool AssociateIPv6AddressRequest::PrivateIPv6AddressHasBeenSet() const
{
    return m_privateIPv6AddressHasBeenSet;
}


