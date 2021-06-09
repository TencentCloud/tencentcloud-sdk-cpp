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

#include <tencentcloud/bmvpc/v20180625/model/DownloadCustomerGatewayConfigurationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

DownloadCustomerGatewayConfigurationRequest::DownloadCustomerGatewayConfigurationRequest() :
    m_vpnConnectionIdHasBeenSet(false),
    m_vendorNameHasBeenSet(false)
{
}

string DownloadCustomerGatewayConfigurationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpnConnectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnConnectionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpnConnectionId.c_str(), allocator).Move(), allocator);
    }

    if (m_vendorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VendorName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vendorName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
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

string DownloadCustomerGatewayConfigurationRequest::GetVendorName() const
{
    return m_vendorName;
}

void DownloadCustomerGatewayConfigurationRequest::SetVendorName(const string& _vendorName)
{
    m_vendorName = _vendorName;
    m_vendorNameHasBeenSet = true;
}

bool DownloadCustomerGatewayConfigurationRequest::VendorNameHasBeenSet() const
{
    return m_vendorNameHasBeenSet;
}


