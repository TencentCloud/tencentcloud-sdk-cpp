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

#include <tencentcloud/iot/v20180123/model/DeviceEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iot::V20180123::Model;
using namespace std;

DeviceEntry::DeviceEntry() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_deviceSecretHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome DeviceEntry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceEntry.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceEntry.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceSecret") && !value["DeviceSecret"].IsNull())
    {
        if (!value["DeviceSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceEntry.DeviceSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceSecret = string(value["DeviceSecret"].GetString());
        m_deviceSecretHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceEntry.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceEntry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string DeviceEntry::GetProductId() const
{
    return m_productId;
}

void DeviceEntry::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DeviceEntry::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DeviceEntry::GetDeviceName() const
{
    return m_deviceName;
}

void DeviceEntry::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DeviceEntry::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string DeviceEntry::GetDeviceSecret() const
{
    return m_deviceSecret;
}

void DeviceEntry::SetDeviceSecret(const string& _deviceSecret)
{
    m_deviceSecret = _deviceSecret;
    m_deviceSecretHasBeenSet = true;
}

bool DeviceEntry::DeviceSecretHasBeenSet() const
{
    return m_deviceSecretHasBeenSet;
}

string DeviceEntry::GetCreateTime() const
{
    return m_createTime;
}

void DeviceEntry::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DeviceEntry::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

