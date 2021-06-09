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

#include <tencentcloud/iotexplorer/v20190423/model/UpdateFirmwareRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

UpdateFirmwareRequest::UpdateFirmwareRequest() :
    m_productIDHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_firmwareVersionHasBeenSet(false),
    m_firmwareOriVersionHasBeenSet(false),
    m_upgradeMethodHasBeenSet(false)
{
}

string UpdateFirmwareRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productID.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_firmwareVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirmwareVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_firmwareVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_firmwareOriVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirmwareOriVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_firmwareOriVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_upgradeMethod, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateFirmwareRequest::GetProductID() const
{
    return m_productID;
}

void UpdateFirmwareRequest::SetProductID(const string& _productID)
{
    m_productID = _productID;
    m_productIDHasBeenSet = true;
}

bool UpdateFirmwareRequest::ProductIDHasBeenSet() const
{
    return m_productIDHasBeenSet;
}

string UpdateFirmwareRequest::GetDeviceName() const
{
    return m_deviceName;
}

void UpdateFirmwareRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool UpdateFirmwareRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string UpdateFirmwareRequest::GetFirmwareVersion() const
{
    return m_firmwareVersion;
}

void UpdateFirmwareRequest::SetFirmwareVersion(const string& _firmwareVersion)
{
    m_firmwareVersion = _firmwareVersion;
    m_firmwareVersionHasBeenSet = true;
}

bool UpdateFirmwareRequest::FirmwareVersionHasBeenSet() const
{
    return m_firmwareVersionHasBeenSet;
}

string UpdateFirmwareRequest::GetFirmwareOriVersion() const
{
    return m_firmwareOriVersion;
}

void UpdateFirmwareRequest::SetFirmwareOriVersion(const string& _firmwareOriVersion)
{
    m_firmwareOriVersion = _firmwareOriVersion;
    m_firmwareOriVersionHasBeenSet = true;
}

bool UpdateFirmwareRequest::FirmwareOriVersionHasBeenSet() const
{
    return m_firmwareOriVersionHasBeenSet;
}

uint64_t UpdateFirmwareRequest::GetUpgradeMethod() const
{
    return m_upgradeMethod;
}

void UpdateFirmwareRequest::SetUpgradeMethod(const uint64_t& _upgradeMethod)
{
    m_upgradeMethod = _upgradeMethod;
    m_upgradeMethodHasBeenSet = true;
}

bool UpdateFirmwareRequest::UpgradeMethodHasBeenSet() const
{
    return m_upgradeMethodHasBeenSet;
}


