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

#include <tencentcloud/iotexplorer/v20190423/model/DirectBindDeviceInFamilyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DirectBindDeviceInFamilyRequest::DirectBindDeviceInFamilyRequest() :
    m_iotAppIDHasBeenSet(false),
    m_userIDHasBeenSet(false),
    m_familyIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_roomIdHasBeenSet(false)
{
}

string DirectBindDeviceInFamilyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_iotAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IotAppID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iotAppID.c_str(), allocator).Move(), allocator);
    }

    if (m_userIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userID.c_str(), allocator).Move(), allocator);
    }

    if (m_familyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FamilyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_familyId.c_str(), allocator).Move(), allocator);
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

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DirectBindDeviceInFamilyRequest::GetIotAppID() const
{
    return m_iotAppID;
}

void DirectBindDeviceInFamilyRequest::SetIotAppID(const string& _iotAppID)
{
    m_iotAppID = _iotAppID;
    m_iotAppIDHasBeenSet = true;
}

bool DirectBindDeviceInFamilyRequest::IotAppIDHasBeenSet() const
{
    return m_iotAppIDHasBeenSet;
}

string DirectBindDeviceInFamilyRequest::GetUserID() const
{
    return m_userID;
}

void DirectBindDeviceInFamilyRequest::SetUserID(const string& _userID)
{
    m_userID = _userID;
    m_userIDHasBeenSet = true;
}

bool DirectBindDeviceInFamilyRequest::UserIDHasBeenSet() const
{
    return m_userIDHasBeenSet;
}

string DirectBindDeviceInFamilyRequest::GetFamilyId() const
{
    return m_familyId;
}

void DirectBindDeviceInFamilyRequest::SetFamilyId(const string& _familyId)
{
    m_familyId = _familyId;
    m_familyIdHasBeenSet = true;
}

bool DirectBindDeviceInFamilyRequest::FamilyIdHasBeenSet() const
{
    return m_familyIdHasBeenSet;
}

string DirectBindDeviceInFamilyRequest::GetProductId() const
{
    return m_productId;
}

void DirectBindDeviceInFamilyRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DirectBindDeviceInFamilyRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DirectBindDeviceInFamilyRequest::GetDeviceName() const
{
    return m_deviceName;
}

void DirectBindDeviceInFamilyRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DirectBindDeviceInFamilyRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string DirectBindDeviceInFamilyRequest::GetRoomId() const
{
    return m_roomId;
}

void DirectBindDeviceInFamilyRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool DirectBindDeviceInFamilyRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}


