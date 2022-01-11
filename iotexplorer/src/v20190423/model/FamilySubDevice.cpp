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

#include <tencentcloud/iotexplorer/v20190423/model/FamilySubDevice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

FamilySubDevice::FamilySubDevice() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_aliasNameHasBeenSet(false),
    m_familyIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_iconUrlGridHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome FamilySubDevice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FamilySubDevice.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FamilySubDevice.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FamilySubDevice.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("AliasName") && !value["AliasName"].IsNull())
    {
        if (!value["AliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FamilySubDevice.AliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasName = string(value["AliasName"].GetString());
        m_aliasNameHasBeenSet = true;
    }

    if (value.HasMember("FamilyId") && !value["FamilyId"].IsNull())
    {
        if (!value["FamilyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FamilySubDevice.FamilyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_familyId = string(value["FamilyId"].GetString());
        m_familyIdHasBeenSet = true;
    }

    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FamilySubDevice.RoomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = string(value["RoomId"].GetString());
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("IconUrl") && !value["IconUrl"].IsNull())
    {
        if (!value["IconUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FamilySubDevice.IconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iconUrl = string(value["IconUrl"].GetString());
        m_iconUrlHasBeenSet = true;
    }

    if (value.HasMember("IconUrlGrid") && !value["IconUrlGrid"].IsNull())
    {
        if (!value["IconUrlGrid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FamilySubDevice.IconUrlGrid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iconUrlGrid = string(value["IconUrlGrid"].GetString());
        m_iconUrlGridHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FamilySubDevice.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FamilySubDevice.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FamilySubDevice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasName.c_str(), allocator).Move(), allocator);
    }

    if (m_familyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FamilyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_familyId.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_iconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IconUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iconUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_iconUrlGridHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IconUrlGrid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iconUrlGrid.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string FamilySubDevice::GetProductId() const
{
    return m_productId;
}

void FamilySubDevice::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool FamilySubDevice::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string FamilySubDevice::GetDeviceName() const
{
    return m_deviceName;
}

void FamilySubDevice::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool FamilySubDevice::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string FamilySubDevice::GetDeviceId() const
{
    return m_deviceId;
}

void FamilySubDevice::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool FamilySubDevice::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string FamilySubDevice::GetAliasName() const
{
    return m_aliasName;
}

void FamilySubDevice::SetAliasName(const string& _aliasName)
{
    m_aliasName = _aliasName;
    m_aliasNameHasBeenSet = true;
}

bool FamilySubDevice::AliasNameHasBeenSet() const
{
    return m_aliasNameHasBeenSet;
}

string FamilySubDevice::GetFamilyId() const
{
    return m_familyId;
}

void FamilySubDevice::SetFamilyId(const string& _familyId)
{
    m_familyId = _familyId;
    m_familyIdHasBeenSet = true;
}

bool FamilySubDevice::FamilyIdHasBeenSet() const
{
    return m_familyIdHasBeenSet;
}

string FamilySubDevice::GetRoomId() const
{
    return m_roomId;
}

void FamilySubDevice::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool FamilySubDevice::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string FamilySubDevice::GetIconUrl() const
{
    return m_iconUrl;
}

void FamilySubDevice::SetIconUrl(const string& _iconUrl)
{
    m_iconUrl = _iconUrl;
    m_iconUrlHasBeenSet = true;
}

bool FamilySubDevice::IconUrlHasBeenSet() const
{
    return m_iconUrlHasBeenSet;
}

string FamilySubDevice::GetIconUrlGrid() const
{
    return m_iconUrlGrid;
}

void FamilySubDevice::SetIconUrlGrid(const string& _iconUrlGrid)
{
    m_iconUrlGrid = _iconUrlGrid;
    m_iconUrlGridHasBeenSet = true;
}

bool FamilySubDevice::IconUrlGridHasBeenSet() const
{
    return m_iconUrlGridHasBeenSet;
}

uint64_t FamilySubDevice::GetCreateTime() const
{
    return m_createTime;
}

void FamilySubDevice::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool FamilySubDevice::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t FamilySubDevice::GetUpdateTime() const
{
    return m_updateTime;
}

void FamilySubDevice::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool FamilySubDevice::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

