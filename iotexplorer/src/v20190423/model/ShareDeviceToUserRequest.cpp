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

#include <tencentcloud/iotexplorer/v20190423/model/ShareDeviceToUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

ShareDeviceToUserRequest::ShareDeviceToUserRequest() :
    m_appKeyHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_ownerOpenIDHasBeenSet(false),
    m_toOpenIDHasBeenSet(false),
    m_toNickNameHasBeenSet(false)
{
}

string ShareDeviceToUserRequest::ToJsonString() const
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

    if (m_ownerOpenIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerOpenID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerOpenID.c_str(), allocator).Move(), allocator);
    }

    if (m_toOpenIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToOpenID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toOpenID.c_str(), allocator).Move(), allocator);
    }

    if (m_toNickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToNickName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toNickName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ShareDeviceToUserRequest::GetAppKey() const
{
    return m_appKey;
}

void ShareDeviceToUserRequest::SetAppKey(const string& _appKey)
{
    m_appKey = _appKey;
    m_appKeyHasBeenSet = true;
}

bool ShareDeviceToUserRequest::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

string ShareDeviceToUserRequest::GetProductId() const
{
    return m_productId;
}

void ShareDeviceToUserRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ShareDeviceToUserRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ShareDeviceToUserRequest::GetDeviceName() const
{
    return m_deviceName;
}

void ShareDeviceToUserRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool ShareDeviceToUserRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string ShareDeviceToUserRequest::GetOwnerOpenID() const
{
    return m_ownerOpenID;
}

void ShareDeviceToUserRequest::SetOwnerOpenID(const string& _ownerOpenID)
{
    m_ownerOpenID = _ownerOpenID;
    m_ownerOpenIDHasBeenSet = true;
}

bool ShareDeviceToUserRequest::OwnerOpenIDHasBeenSet() const
{
    return m_ownerOpenIDHasBeenSet;
}

string ShareDeviceToUserRequest::GetToOpenID() const
{
    return m_toOpenID;
}

void ShareDeviceToUserRequest::SetToOpenID(const string& _toOpenID)
{
    m_toOpenID = _toOpenID;
    m_toOpenIDHasBeenSet = true;
}

bool ShareDeviceToUserRequest::ToOpenIDHasBeenSet() const
{
    return m_toOpenIDHasBeenSet;
}

string ShareDeviceToUserRequest::GetToNickName() const
{
    return m_toNickName;
}

void ShareDeviceToUserRequest::SetToNickName(const string& _toNickName)
{
    m_toNickName = _toNickName;
    m_toNickNameHasBeenSet = true;
}

bool ShareDeviceToUserRequest::ToNickNameHasBeenSet() const
{
    return m_toNickNameHasBeenSet;
}


