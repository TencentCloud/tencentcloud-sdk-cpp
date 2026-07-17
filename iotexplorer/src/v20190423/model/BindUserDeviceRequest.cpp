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

#include <tencentcloud/iotexplorer/v20190423/model/BindUserDeviceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

BindUserDeviceRequest::BindUserDeviceRequest() :
    m_appKeyHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_openIDHasBeenSet(false),
    m_familyNameHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_nickNameHasBeenSet(false)
{
}

string BindUserDeviceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appKey.c_str(), allocator).Move(), allocator);
    }

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

    if (m_openIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openID.c_str(), allocator).Move(), allocator);
    }

    if (m_familyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FamilyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_familyName.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BindUserDeviceRequest::GetAppKey() const
{
    return m_appKey;
}

void BindUserDeviceRequest::SetAppKey(const string& _appKey)
{
    m_appKey = _appKey;
    m_appKeyHasBeenSet = true;
}

bool BindUserDeviceRequest::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

string BindUserDeviceRequest::GetProductId() const
{
    return m_productId;
}

void BindUserDeviceRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool BindUserDeviceRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string BindUserDeviceRequest::GetDeviceName() const
{
    return m_deviceName;
}

void BindUserDeviceRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool BindUserDeviceRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string BindUserDeviceRequest::GetOpenID() const
{
    return m_openID;
}

void BindUserDeviceRequest::SetOpenID(const string& _openID)
{
    m_openID = _openID;
    m_openIDHasBeenSet = true;
}

bool BindUserDeviceRequest::OpenIDHasBeenSet() const
{
    return m_openIDHasBeenSet;
}

string BindUserDeviceRequest::GetFamilyName() const
{
    return m_familyName;
}

void BindUserDeviceRequest::SetFamilyName(const string& _familyName)
{
    m_familyName = _familyName;
    m_familyNameHasBeenSet = true;
}

bool BindUserDeviceRequest::FamilyNameHasBeenSet() const
{
    return m_familyNameHasBeenSet;
}

string BindUserDeviceRequest::GetRoomId() const
{
    return m_roomId;
}

void BindUserDeviceRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool BindUserDeviceRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string BindUserDeviceRequest::GetNickName() const
{
    return m_nickName;
}

void BindUserDeviceRequest::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool BindUserDeviceRequest::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}


