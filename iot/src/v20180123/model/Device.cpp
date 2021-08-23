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

#include <tencentcloud/iot/v20180123/model/Device.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iot::V20180123::Model;
using namespace std;

Device::Device() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_deviceSecretHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_deviceInfoHasBeenSet(false)
{
}

CoreInternalOutcome Device::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceSecret") && !value["DeviceSecret"].IsNull())
    {
        if (!value["DeviceSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.DeviceSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceSecret = string(value["DeviceSecret"].GetString());
        m_deviceSecretHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DeviceInfo") && !value["DeviceInfo"].IsNull())
    {
        if (!value["DeviceInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.DeviceInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceInfo = string(value["DeviceInfo"].GetString());
        m_deviceInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Device::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_deviceSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceInfo.c_str(), allocator).Move(), allocator);
    }

}


string Device::GetProductId() const
{
    return m_productId;
}

void Device::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool Device::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string Device::GetDeviceName() const
{
    return m_deviceName;
}

void Device::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool Device::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string Device::GetDeviceSecret() const
{
    return m_deviceSecret;
}

void Device::SetDeviceSecret(const string& _deviceSecret)
{
    m_deviceSecret = _deviceSecret;
    m_deviceSecretHasBeenSet = true;
}

bool Device::DeviceSecretHasBeenSet() const
{
    return m_deviceSecretHasBeenSet;
}

string Device::GetUpdateTime() const
{
    return m_updateTime;
}

void Device::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Device::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string Device::GetCreateTime() const
{
    return m_createTime;
}

void Device::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Device::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Device::GetDeviceInfo() const
{
    return m_deviceInfo;
}

void Device::SetDeviceInfo(const string& _deviceInfo)
{
    m_deviceInfo = _deviceInfo;
    m_deviceInfoHasBeenSet = true;
}

bool Device::DeviceInfoHasBeenSet() const
{
    return m_deviceInfoHasBeenSet;
}

