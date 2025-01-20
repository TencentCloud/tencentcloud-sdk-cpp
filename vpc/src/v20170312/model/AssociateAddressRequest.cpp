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

#include <tencentcloud/vpc/v20170312/model/AssociateAddressRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

AssociateAddressRequest::AssociateAddressRequest() :
    m_addressIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_eipDirectConnectionHasBeenSet(false),
    m_instanceRegionHasBeenSet(false)
{
}

string AssociateAddressRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_addressIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addressId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInterfaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterfaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkInterfaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_privateIpAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_eipDirectConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipDirectConnection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_eipDirectConnection, allocator);
    }

    if (m_instanceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceRegion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AssociateAddressRequest::GetAddressId() const
{
    return m_addressId;
}

void AssociateAddressRequest::SetAddressId(const string& _addressId)
{
    m_addressId = _addressId;
    m_addressIdHasBeenSet = true;
}

bool AssociateAddressRequest::AddressIdHasBeenSet() const
{
    return m_addressIdHasBeenSet;
}

string AssociateAddressRequest::GetInstanceId() const
{
    return m_instanceId;
}

void AssociateAddressRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AssociateAddressRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AssociateAddressRequest::GetNetworkInterfaceId() const
{
    return m_networkInterfaceId;
}

void AssociateAddressRequest::SetNetworkInterfaceId(const string& _networkInterfaceId)
{
    m_networkInterfaceId = _networkInterfaceId;
    m_networkInterfaceIdHasBeenSet = true;
}

bool AssociateAddressRequest::NetworkInterfaceIdHasBeenSet() const
{
    return m_networkInterfaceIdHasBeenSet;
}

string AssociateAddressRequest::GetPrivateIpAddress() const
{
    return m_privateIpAddress;
}

void AssociateAddressRequest::SetPrivateIpAddress(const string& _privateIpAddress)
{
    m_privateIpAddress = _privateIpAddress;
    m_privateIpAddressHasBeenSet = true;
}

bool AssociateAddressRequest::PrivateIpAddressHasBeenSet() const
{
    return m_privateIpAddressHasBeenSet;
}

bool AssociateAddressRequest::GetEipDirectConnection() const
{
    return m_eipDirectConnection;
}

void AssociateAddressRequest::SetEipDirectConnection(const bool& _eipDirectConnection)
{
    m_eipDirectConnection = _eipDirectConnection;
    m_eipDirectConnectionHasBeenSet = true;
}

bool AssociateAddressRequest::EipDirectConnectionHasBeenSet() const
{
    return m_eipDirectConnectionHasBeenSet;
}

string AssociateAddressRequest::GetInstanceRegion() const
{
    return m_instanceRegion;
}

void AssociateAddressRequest::SetInstanceRegion(const string& _instanceRegion)
{
    m_instanceRegion = _instanceRegion;
    m_instanceRegionHasBeenSet = true;
}

bool AssociateAddressRequest::InstanceRegionHasBeenSet() const
{
    return m_instanceRegionHasBeenSet;
}


