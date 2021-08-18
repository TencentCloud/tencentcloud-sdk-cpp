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

#include <tencentcloud/iotexplorer/v20190423/model/CreateDeviceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CreateDeviceRequest::CreateDeviceRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_devAddrHasBeenSet(false),
    m_appKeyHasBeenSet(false),
    m_devEUIHasBeenSet(false),
    m_appSKeyHasBeenSet(false),
    m_nwkSKeyHasBeenSet(false),
    m_definedPskHasBeenSet(false)
{
}

string CreateDeviceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_devAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevAddr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_devAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_appKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appKey.c_str(), allocator).Move(), allocator);
    }

    if (m_devEUIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevEUI";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_devEUI.c_str(), allocator).Move(), allocator);
    }

    if (m_appSKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppSKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appSKey.c_str(), allocator).Move(), allocator);
    }

    if (m_nwkSKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NwkSKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nwkSKey.c_str(), allocator).Move(), allocator);
    }

    if (m_definedPskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefinedPsk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_definedPsk.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDeviceRequest::GetProductId() const
{
    return m_productId;
}

void CreateDeviceRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CreateDeviceRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string CreateDeviceRequest::GetDeviceName() const
{
    return m_deviceName;
}

void CreateDeviceRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool CreateDeviceRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string CreateDeviceRequest::GetDevAddr() const
{
    return m_devAddr;
}

void CreateDeviceRequest::SetDevAddr(const string& _devAddr)
{
    m_devAddr = _devAddr;
    m_devAddrHasBeenSet = true;
}

bool CreateDeviceRequest::DevAddrHasBeenSet() const
{
    return m_devAddrHasBeenSet;
}

string CreateDeviceRequest::GetAppKey() const
{
    return m_appKey;
}

void CreateDeviceRequest::SetAppKey(const string& _appKey)
{
    m_appKey = _appKey;
    m_appKeyHasBeenSet = true;
}

bool CreateDeviceRequest::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

string CreateDeviceRequest::GetDevEUI() const
{
    return m_devEUI;
}

void CreateDeviceRequest::SetDevEUI(const string& _devEUI)
{
    m_devEUI = _devEUI;
    m_devEUIHasBeenSet = true;
}

bool CreateDeviceRequest::DevEUIHasBeenSet() const
{
    return m_devEUIHasBeenSet;
}

string CreateDeviceRequest::GetAppSKey() const
{
    return m_appSKey;
}

void CreateDeviceRequest::SetAppSKey(const string& _appSKey)
{
    m_appSKey = _appSKey;
    m_appSKeyHasBeenSet = true;
}

bool CreateDeviceRequest::AppSKeyHasBeenSet() const
{
    return m_appSKeyHasBeenSet;
}

string CreateDeviceRequest::GetNwkSKey() const
{
    return m_nwkSKey;
}

void CreateDeviceRequest::SetNwkSKey(const string& _nwkSKey)
{
    m_nwkSKey = _nwkSKey;
    m_nwkSKeyHasBeenSet = true;
}

bool CreateDeviceRequest::NwkSKeyHasBeenSet() const
{
    return m_nwkSKeyHasBeenSet;
}

string CreateDeviceRequest::GetDefinedPsk() const
{
    return m_definedPsk;
}

void CreateDeviceRequest::SetDefinedPsk(const string& _definedPsk)
{
    m_definedPsk = _definedPsk;
    m_definedPskHasBeenSet = true;
}

bool CreateDeviceRequest::DefinedPskHasBeenSet() const
{
    return m_definedPskHasBeenSet;
}


