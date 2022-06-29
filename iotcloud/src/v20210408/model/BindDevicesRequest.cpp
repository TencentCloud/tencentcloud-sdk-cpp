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

#include <tencentcloud/iotcloud/v20210408/model/BindDevicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotcloud::V20210408::Model;
using namespace std;

BindDevicesRequest::BindDevicesRequest() :
    m_gatewayProductIdHasBeenSet(false),
    m_gatewayDeviceNameHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_deviceNamesHasBeenSet(false),
    m_skeyHasBeenSet(false)
{
}

string BindDevicesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayProductIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayProductId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayDeviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayDeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayDeviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceNames.begin(); itr != m_deviceNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_skeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Skey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_skey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BindDevicesRequest::GetGatewayProductId() const
{
    return m_gatewayProductId;
}

void BindDevicesRequest::SetGatewayProductId(const string& _gatewayProductId)
{
    m_gatewayProductId = _gatewayProductId;
    m_gatewayProductIdHasBeenSet = true;
}

bool BindDevicesRequest::GatewayProductIdHasBeenSet() const
{
    return m_gatewayProductIdHasBeenSet;
}

string BindDevicesRequest::GetGatewayDeviceName() const
{
    return m_gatewayDeviceName;
}

void BindDevicesRequest::SetGatewayDeviceName(const string& _gatewayDeviceName)
{
    m_gatewayDeviceName = _gatewayDeviceName;
    m_gatewayDeviceNameHasBeenSet = true;
}

bool BindDevicesRequest::GatewayDeviceNameHasBeenSet() const
{
    return m_gatewayDeviceNameHasBeenSet;
}

string BindDevicesRequest::GetProductId() const
{
    return m_productId;
}

void BindDevicesRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool BindDevicesRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

vector<string> BindDevicesRequest::GetDeviceNames() const
{
    return m_deviceNames;
}

void BindDevicesRequest::SetDeviceNames(const vector<string>& _deviceNames)
{
    m_deviceNames = _deviceNames;
    m_deviceNamesHasBeenSet = true;
}

bool BindDevicesRequest::DeviceNamesHasBeenSet() const
{
    return m_deviceNamesHasBeenSet;
}

string BindDevicesRequest::GetSkey() const
{
    return m_skey;
}

void BindDevicesRequest::SetSkey(const string& _skey)
{
    m_skey = _skey;
    m_skeyHasBeenSet = true;
}

bool BindDevicesRequest::SkeyHasBeenSet() const
{
    return m_skeyHasBeenSet;
}


