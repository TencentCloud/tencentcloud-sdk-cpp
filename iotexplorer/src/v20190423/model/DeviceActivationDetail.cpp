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

#include <tencentcloud/iotexplorer/v20190423/model/DeviceActivationDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DeviceActivationDetail::DeviceActivationDetail() :
    m_totalDeviceNumHasBeenSet(false),
    m_usedDeviceNumHasBeenSet(false),
    m_totalNormalLicenseHasBeenSet(false),
    m_usedNormalLicenseHasBeenSet(false),
    m_totalBluetoothLicenseHasBeenSet(false),
    m_usedBluetoothLicenseHasBeenSet(false),
    m_totalFreeLicenseHasBeenSet(false),
    m_usedFreeLicenseHasBeenSet(false)
{
}

CoreInternalOutcome DeviceActivationDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalDeviceNum") && !value["TotalDeviceNum"].IsNull())
    {
        if (!value["TotalDeviceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceActivationDetail.TotalDeviceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalDeviceNum = value["TotalDeviceNum"].GetInt64();
        m_totalDeviceNumHasBeenSet = true;
    }

    if (value.HasMember("UsedDeviceNum") && !value["UsedDeviceNum"].IsNull())
    {
        if (!value["UsedDeviceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceActivationDetail.UsedDeviceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedDeviceNum = value["UsedDeviceNum"].GetInt64();
        m_usedDeviceNumHasBeenSet = true;
    }

    if (value.HasMember("TotalNormalLicense") && !value["TotalNormalLicense"].IsNull())
    {
        if (!value["TotalNormalLicense"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceActivationDetail.TotalNormalLicense` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNormalLicense = value["TotalNormalLicense"].GetInt64();
        m_totalNormalLicenseHasBeenSet = true;
    }

    if (value.HasMember("UsedNormalLicense") && !value["UsedNormalLicense"].IsNull())
    {
        if (!value["UsedNormalLicense"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceActivationDetail.UsedNormalLicense` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedNormalLicense = value["UsedNormalLicense"].GetInt64();
        m_usedNormalLicenseHasBeenSet = true;
    }

    if (value.HasMember("TotalBluetoothLicense") && !value["TotalBluetoothLicense"].IsNull())
    {
        if (!value["TotalBluetoothLicense"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceActivationDetail.TotalBluetoothLicense` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalBluetoothLicense = value["TotalBluetoothLicense"].GetInt64();
        m_totalBluetoothLicenseHasBeenSet = true;
    }

    if (value.HasMember("UsedBluetoothLicense") && !value["UsedBluetoothLicense"].IsNull())
    {
        if (!value["UsedBluetoothLicense"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceActivationDetail.UsedBluetoothLicense` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedBluetoothLicense = value["UsedBluetoothLicense"].GetInt64();
        m_usedBluetoothLicenseHasBeenSet = true;
    }

    if (value.HasMember("TotalFreeLicense") && !value["TotalFreeLicense"].IsNull())
    {
        if (!value["TotalFreeLicense"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceActivationDetail.TotalFreeLicense` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalFreeLicense = value["TotalFreeLicense"].GetInt64();
        m_totalFreeLicenseHasBeenSet = true;
    }

    if (value.HasMember("UsedFreeLicense") && !value["UsedFreeLicense"].IsNull())
    {
        if (!value["UsedFreeLicense"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceActivationDetail.UsedFreeLicense` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedFreeLicense = value["UsedFreeLicense"].GetInt64();
        m_usedFreeLicenseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceActivationDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalDeviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalDeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalDeviceNum, allocator);
    }

    if (m_usedDeviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedDeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedDeviceNum, allocator);
    }

    if (m_totalNormalLicenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNormalLicense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNormalLicense, allocator);
    }

    if (m_usedNormalLicenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedNormalLicense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedNormalLicense, allocator);
    }

    if (m_totalBluetoothLicenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalBluetoothLicense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalBluetoothLicense, allocator);
    }

    if (m_usedBluetoothLicenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedBluetoothLicense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedBluetoothLicense, allocator);
    }

    if (m_totalFreeLicenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalFreeLicense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalFreeLicense, allocator);
    }

    if (m_usedFreeLicenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedFreeLicense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedFreeLicense, allocator);
    }

}


int64_t DeviceActivationDetail::GetTotalDeviceNum() const
{
    return m_totalDeviceNum;
}

void DeviceActivationDetail::SetTotalDeviceNum(const int64_t& _totalDeviceNum)
{
    m_totalDeviceNum = _totalDeviceNum;
    m_totalDeviceNumHasBeenSet = true;
}

bool DeviceActivationDetail::TotalDeviceNumHasBeenSet() const
{
    return m_totalDeviceNumHasBeenSet;
}

int64_t DeviceActivationDetail::GetUsedDeviceNum() const
{
    return m_usedDeviceNum;
}

void DeviceActivationDetail::SetUsedDeviceNum(const int64_t& _usedDeviceNum)
{
    m_usedDeviceNum = _usedDeviceNum;
    m_usedDeviceNumHasBeenSet = true;
}

bool DeviceActivationDetail::UsedDeviceNumHasBeenSet() const
{
    return m_usedDeviceNumHasBeenSet;
}

int64_t DeviceActivationDetail::GetTotalNormalLicense() const
{
    return m_totalNormalLicense;
}

void DeviceActivationDetail::SetTotalNormalLicense(const int64_t& _totalNormalLicense)
{
    m_totalNormalLicense = _totalNormalLicense;
    m_totalNormalLicenseHasBeenSet = true;
}

bool DeviceActivationDetail::TotalNormalLicenseHasBeenSet() const
{
    return m_totalNormalLicenseHasBeenSet;
}

int64_t DeviceActivationDetail::GetUsedNormalLicense() const
{
    return m_usedNormalLicense;
}

void DeviceActivationDetail::SetUsedNormalLicense(const int64_t& _usedNormalLicense)
{
    m_usedNormalLicense = _usedNormalLicense;
    m_usedNormalLicenseHasBeenSet = true;
}

bool DeviceActivationDetail::UsedNormalLicenseHasBeenSet() const
{
    return m_usedNormalLicenseHasBeenSet;
}

int64_t DeviceActivationDetail::GetTotalBluetoothLicense() const
{
    return m_totalBluetoothLicense;
}

void DeviceActivationDetail::SetTotalBluetoothLicense(const int64_t& _totalBluetoothLicense)
{
    m_totalBluetoothLicense = _totalBluetoothLicense;
    m_totalBluetoothLicenseHasBeenSet = true;
}

bool DeviceActivationDetail::TotalBluetoothLicenseHasBeenSet() const
{
    return m_totalBluetoothLicenseHasBeenSet;
}

int64_t DeviceActivationDetail::GetUsedBluetoothLicense() const
{
    return m_usedBluetoothLicense;
}

void DeviceActivationDetail::SetUsedBluetoothLicense(const int64_t& _usedBluetoothLicense)
{
    m_usedBluetoothLicense = _usedBluetoothLicense;
    m_usedBluetoothLicenseHasBeenSet = true;
}

bool DeviceActivationDetail::UsedBluetoothLicenseHasBeenSet() const
{
    return m_usedBluetoothLicenseHasBeenSet;
}

int64_t DeviceActivationDetail::GetTotalFreeLicense() const
{
    return m_totalFreeLicense;
}

void DeviceActivationDetail::SetTotalFreeLicense(const int64_t& _totalFreeLicense)
{
    m_totalFreeLicense = _totalFreeLicense;
    m_totalFreeLicenseHasBeenSet = true;
}

bool DeviceActivationDetail::TotalFreeLicenseHasBeenSet() const
{
    return m_totalFreeLicenseHasBeenSet;
}

int64_t DeviceActivationDetail::GetUsedFreeLicense() const
{
    return m_usedFreeLicense;
}

void DeviceActivationDetail::SetUsedFreeLicense(const int64_t& _usedFreeLicense)
{
    m_usedFreeLicense = _usedFreeLicense;
    m_usedFreeLicenseHasBeenSet = true;
}

bool DeviceActivationDetail::UsedFreeLicenseHasBeenSet() const
{
    return m_usedFreeLicenseHasBeenSet;
}

