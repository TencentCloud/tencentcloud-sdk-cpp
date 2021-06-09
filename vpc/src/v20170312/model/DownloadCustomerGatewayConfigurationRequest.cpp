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

#include <tencentcloud/vpc/v20170312/model/DownloadCustomerGatewayConfigurationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DownloadCustomerGatewayConfigurationRequest::DownloadCustomerGatewayConfigurationRequest() :
    m_vpnGatewayIdHasBeenSet(false),
    m_vpnConnectionIdHasBeenSet(false),
    m_customerGatewayVendorHasBeenSet(false),
    m_interfaceNameHasBeenSet(false)
{
}

string DownloadCustomerGatewayConfigurationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpnGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnGatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpnGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnConnectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnConnectionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpnConnectionId.c_str(), allocator).Move(), allocator);
    }

    if (m_customerGatewayVendorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerGatewayVendor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customerGatewayVendor.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_interfaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterfaceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_interfaceName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DownloadCustomerGatewayConfigurationRequest::GetVpnGatewayId() const
{
    return m_vpnGatewayId;
}

void DownloadCustomerGatewayConfigurationRequest::SetVpnGatewayId(const string& _vpnGatewayId)
{
    m_vpnGatewayId = _vpnGatewayId;
    m_vpnGatewayIdHasBeenSet = true;
}

bool DownloadCustomerGatewayConfigurationRequest::VpnGatewayIdHasBeenSet() const
{
    return m_vpnGatewayIdHasBeenSet;
}

string DownloadCustomerGatewayConfigurationRequest::GetVpnConnectionId() const
{
    return m_vpnConnectionId;
}

void DownloadCustomerGatewayConfigurationRequest::SetVpnConnectionId(const string& _vpnConnectionId)
{
    m_vpnConnectionId = _vpnConnectionId;
    m_vpnConnectionIdHasBeenSet = true;
}

bool DownloadCustomerGatewayConfigurationRequest::VpnConnectionIdHasBeenSet() const
{
    return m_vpnConnectionIdHasBeenSet;
}

CustomerGatewayVendor DownloadCustomerGatewayConfigurationRequest::GetCustomerGatewayVendor() const
{
    return m_customerGatewayVendor;
}

void DownloadCustomerGatewayConfigurationRequest::SetCustomerGatewayVendor(const CustomerGatewayVendor& _customerGatewayVendor)
{
    m_customerGatewayVendor = _customerGatewayVendor;
    m_customerGatewayVendorHasBeenSet = true;
}

bool DownloadCustomerGatewayConfigurationRequest::CustomerGatewayVendorHasBeenSet() const
{
    return m_customerGatewayVendorHasBeenSet;
}

string DownloadCustomerGatewayConfigurationRequest::GetInterfaceName() const
{
    return m_interfaceName;
}

void DownloadCustomerGatewayConfigurationRequest::SetInterfaceName(const string& _interfaceName)
{
    m_interfaceName = _interfaceName;
    m_interfaceNameHasBeenSet = true;
}

bool DownloadCustomerGatewayConfigurationRequest::InterfaceNameHasBeenSet() const
{
    return m_interfaceNameHasBeenSet;
}


