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

#include <tencentcloud/iotcloud/v20180614/model/CreateLoraDeviceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace std;

CreateLoraDeviceRequest::CreateLoraDeviceRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_appEuiHasBeenSet(false),
    m_deviceEuiHasBeenSet(false),
    m_appKeyHasBeenSet(false),
    m_authKeyHasBeenSet(false),
    m_memoHasBeenSet(false)
{
}

string CreateLoraDeviceRequest::ToJsonString() const
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

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_appEuiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppEui";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appEui.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceEuiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceEui";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceEui.c_str(), allocator).Move(), allocator);
    }

    if (m_appKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appKey.c_str(), allocator).Move(), allocator);
    }

    if (m_authKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authKey.c_str(), allocator).Move(), allocator);
    }

    if (m_memoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_memo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLoraDeviceRequest::GetProductId() const
{
    return m_productId;
}

void CreateLoraDeviceRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CreateLoraDeviceRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string CreateLoraDeviceRequest::GetDeviceName() const
{
    return m_deviceName;
}

void CreateLoraDeviceRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool CreateLoraDeviceRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string CreateLoraDeviceRequest::GetDeviceType() const
{
    return m_deviceType;
}

void CreateLoraDeviceRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool CreateLoraDeviceRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string CreateLoraDeviceRequest::GetAppEui() const
{
    return m_appEui;
}

void CreateLoraDeviceRequest::SetAppEui(const string& _appEui)
{
    m_appEui = _appEui;
    m_appEuiHasBeenSet = true;
}

bool CreateLoraDeviceRequest::AppEuiHasBeenSet() const
{
    return m_appEuiHasBeenSet;
}

string CreateLoraDeviceRequest::GetDeviceEui() const
{
    return m_deviceEui;
}

void CreateLoraDeviceRequest::SetDeviceEui(const string& _deviceEui)
{
    m_deviceEui = _deviceEui;
    m_deviceEuiHasBeenSet = true;
}

bool CreateLoraDeviceRequest::DeviceEuiHasBeenSet() const
{
    return m_deviceEuiHasBeenSet;
}

string CreateLoraDeviceRequest::GetAppKey() const
{
    return m_appKey;
}

void CreateLoraDeviceRequest::SetAppKey(const string& _appKey)
{
    m_appKey = _appKey;
    m_appKeyHasBeenSet = true;
}

bool CreateLoraDeviceRequest::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

string CreateLoraDeviceRequest::GetAuthKey() const
{
    return m_authKey;
}

void CreateLoraDeviceRequest::SetAuthKey(const string& _authKey)
{
    m_authKey = _authKey;
    m_authKeyHasBeenSet = true;
}

bool CreateLoraDeviceRequest::AuthKeyHasBeenSet() const
{
    return m_authKeyHasBeenSet;
}

string CreateLoraDeviceRequest::GetMemo() const
{
    return m_memo;
}

void CreateLoraDeviceRequest::SetMemo(const string& _memo)
{
    m_memo = _memo;
    m_memoHasBeenSet = true;
}

bool CreateLoraDeviceRequest::MemoHasBeenSet() const
{
    return m_memoHasBeenSet;
}


