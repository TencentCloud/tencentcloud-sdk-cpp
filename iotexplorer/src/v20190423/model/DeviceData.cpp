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

#include <tencentcloud/iotexplorer/v20190423/model/DeviceData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DeviceData::DeviceData() :
    m_deviceCertHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_devicePrivateKeyHasBeenSet(false),
    m_devicePskHasBeenSet(false)
{
}

CoreInternalOutcome DeviceData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceCert") && !value["DeviceCert"].IsNull())
    {
        if (!value["DeviceCert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceData.DeviceCert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceCert = string(value["DeviceCert"].GetString());
        m_deviceCertHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceData.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("DevicePrivateKey") && !value["DevicePrivateKey"].IsNull())
    {
        if (!value["DevicePrivateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceData.DevicePrivateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devicePrivateKey = string(value["DevicePrivateKey"].GetString());
        m_devicePrivateKeyHasBeenSet = true;
    }

    if (value.HasMember("DevicePsk") && !value["DevicePsk"].IsNull())
    {
        if (!value["DevicePsk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceData.DevicePsk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devicePsk = string(value["DevicePsk"].GetString());
        m_devicePskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceCert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceCert.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_devicePrivateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevicePrivateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devicePrivateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_devicePskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevicePsk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devicePsk.c_str(), allocator).Move(), allocator);
    }

}


string DeviceData::GetDeviceCert() const
{
    return m_deviceCert;
}

void DeviceData::SetDeviceCert(const string& _deviceCert)
{
    m_deviceCert = _deviceCert;
    m_deviceCertHasBeenSet = true;
}

bool DeviceData::DeviceCertHasBeenSet() const
{
    return m_deviceCertHasBeenSet;
}

string DeviceData::GetDeviceName() const
{
    return m_deviceName;
}

void DeviceData::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DeviceData::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string DeviceData::GetDevicePrivateKey() const
{
    return m_devicePrivateKey;
}

void DeviceData::SetDevicePrivateKey(const string& _devicePrivateKey)
{
    m_devicePrivateKey = _devicePrivateKey;
    m_devicePrivateKeyHasBeenSet = true;
}

bool DeviceData::DevicePrivateKeyHasBeenSet() const
{
    return m_devicePrivateKeyHasBeenSet;
}

string DeviceData::GetDevicePsk() const
{
    return m_devicePsk;
}

void DeviceData::SetDevicePsk(const string& _devicePsk)
{
    m_devicePsk = _devicePsk;
    m_devicePskHasBeenSet = true;
}

bool DeviceData::DevicePskHasBeenSet() const
{
    return m_devicePskHasBeenSet;
}

