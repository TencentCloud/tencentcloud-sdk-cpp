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

#include <tencentcloud/iotcloud/v20180614/model/CreateDeviceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace std;

CreateDeviceRequest::CreateDeviceRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_attributeHasBeenSet(false),
    m_definedPskHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_imeiHasBeenSet(false),
    m_loraDevEuiHasBeenSet(false),
    m_loraMoteTypeHasBeenSet(false),
    m_skeyHasBeenSet(false),
    m_loraAppKeyHasBeenSet(false)
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

    if (m_attributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attribute";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_attribute.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_definedPskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefinedPsk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_definedPsk.c_str(), allocator).Move(), allocator);
    }

    if (m_ispHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isp, allocator);
    }

    if (m_imeiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Imei";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imei.c_str(), allocator).Move(), allocator);
    }

    if (m_loraDevEuiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoraDevEui";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loraDevEui.c_str(), allocator).Move(), allocator);
    }

    if (m_loraMoteTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoraMoteType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_loraMoteType, allocator);
    }

    if (m_skeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Skey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_skey.c_str(), allocator).Move(), allocator);
    }

    if (m_loraAppKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoraAppKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loraAppKey.c_str(), allocator).Move(), allocator);
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

Attribute CreateDeviceRequest::GetAttribute() const
{
    return m_attribute;
}

void CreateDeviceRequest::SetAttribute(const Attribute& _attribute)
{
    m_attribute = _attribute;
    m_attributeHasBeenSet = true;
}

bool CreateDeviceRequest::AttributeHasBeenSet() const
{
    return m_attributeHasBeenSet;
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

uint64_t CreateDeviceRequest::GetIsp() const
{
    return m_isp;
}

void CreateDeviceRequest::SetIsp(const uint64_t& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool CreateDeviceRequest::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

string CreateDeviceRequest::GetImei() const
{
    return m_imei;
}

void CreateDeviceRequest::SetImei(const string& _imei)
{
    m_imei = _imei;
    m_imeiHasBeenSet = true;
}

bool CreateDeviceRequest::ImeiHasBeenSet() const
{
    return m_imeiHasBeenSet;
}

string CreateDeviceRequest::GetLoraDevEui() const
{
    return m_loraDevEui;
}

void CreateDeviceRequest::SetLoraDevEui(const string& _loraDevEui)
{
    m_loraDevEui = _loraDevEui;
    m_loraDevEuiHasBeenSet = true;
}

bool CreateDeviceRequest::LoraDevEuiHasBeenSet() const
{
    return m_loraDevEuiHasBeenSet;
}

uint64_t CreateDeviceRequest::GetLoraMoteType() const
{
    return m_loraMoteType;
}

void CreateDeviceRequest::SetLoraMoteType(const uint64_t& _loraMoteType)
{
    m_loraMoteType = _loraMoteType;
    m_loraMoteTypeHasBeenSet = true;
}

bool CreateDeviceRequest::LoraMoteTypeHasBeenSet() const
{
    return m_loraMoteTypeHasBeenSet;
}

string CreateDeviceRequest::GetSkey() const
{
    return m_skey;
}

void CreateDeviceRequest::SetSkey(const string& _skey)
{
    m_skey = _skey;
    m_skeyHasBeenSet = true;
}

bool CreateDeviceRequest::SkeyHasBeenSet() const
{
    return m_skeyHasBeenSet;
}

string CreateDeviceRequest::GetLoraAppKey() const
{
    return m_loraAppKey;
}

void CreateDeviceRequest::SetLoraAppKey(const string& _loraAppKey)
{
    m_loraAppKey = _loraAppKey;
    m_loraAppKeyHasBeenSet = true;
}

bool CreateDeviceRequest::LoraAppKeyHasBeenSet() const
{
    return m_loraAppKeyHasBeenSet;
}


