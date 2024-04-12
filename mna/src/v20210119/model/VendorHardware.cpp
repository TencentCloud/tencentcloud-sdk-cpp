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

#include <tencentcloud/mna/v20210119/model/VendorHardware.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

VendorHardware::VendorHardware() :
    m_hardwareIdHasBeenSet(false),
    m_sNHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_activeTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_licenseChargingModeHasBeenSet(false),
    m_lastOnlineTimeHasBeenSet(false),
    m_licensePayModeHasBeenSet(false),
    m_payerHasBeenSet(false)
{
}

CoreInternalOutcome VendorHardware::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HardwareId") && !value["HardwareId"].IsNull())
    {
        if (!value["HardwareId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VendorHardware.HardwareId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hardwareId = string(value["HardwareId"].GetString());
        m_hardwareIdHasBeenSet = true;
    }

    if (value.HasMember("SN") && !value["SN"].IsNull())
    {
        if (!value["SN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VendorHardware.SN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sN = string(value["SN"].GetString());
        m_sNHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VendorHardware.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VendorHardware.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ActiveTime") && !value["ActiveTime"].IsNull())
    {
        if (!value["ActiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VendorHardware.ActiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activeTime = string(value["ActiveTime"].GetString());
        m_activeTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VendorHardware.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VendorHardware.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("LicenseChargingMode") && !value["LicenseChargingMode"].IsNull())
    {
        if (!value["LicenseChargingMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VendorHardware.LicenseChargingMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseChargingMode = value["LicenseChargingMode"].GetInt64();
        m_licenseChargingModeHasBeenSet = true;
    }

    if (value.HasMember("LastOnlineTime") && !value["LastOnlineTime"].IsNull())
    {
        if (!value["LastOnlineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VendorHardware.LastOnlineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastOnlineTime = string(value["LastOnlineTime"].GetString());
        m_lastOnlineTimeHasBeenSet = true;
    }

    if (value.HasMember("LicensePayMode") && !value["LicensePayMode"].IsNull())
    {
        if (!value["LicensePayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VendorHardware.LicensePayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_licensePayMode = value["LicensePayMode"].GetInt64();
        m_licensePayModeHasBeenSet = true;
    }

    if (value.HasMember("Payer") && !value["Payer"].IsNull())
    {
        if (!value["Payer"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VendorHardware.Payer` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payer = value["Payer"].GetInt64();
        m_payerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VendorHardware::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hardwareIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HardwareId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hardwareId.c_str(), allocator).Move(), allocator);
    }

    if (m_sNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sN.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_activeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseChargingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseChargingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseChargingMode, allocator);
    }

    if (m_lastOnlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastOnlineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastOnlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_licensePayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicensePayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licensePayMode, allocator);
    }

    if (m_payerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payer, allocator);
    }

}


string VendorHardware::GetHardwareId() const
{
    return m_hardwareId;
}

void VendorHardware::SetHardwareId(const string& _hardwareId)
{
    m_hardwareId = _hardwareId;
    m_hardwareIdHasBeenSet = true;
}

bool VendorHardware::HardwareIdHasBeenSet() const
{
    return m_hardwareIdHasBeenSet;
}

string VendorHardware::GetSN() const
{
    return m_sN;
}

void VendorHardware::SetSN(const string& _sN)
{
    m_sN = _sN;
    m_sNHasBeenSet = true;
}

bool VendorHardware::SNHasBeenSet() const
{
    return m_sNHasBeenSet;
}

string VendorHardware::GetCreateTime() const
{
    return m_createTime;
}

void VendorHardware::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VendorHardware::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t VendorHardware::GetStatus() const
{
    return m_status;
}

void VendorHardware::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VendorHardware::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string VendorHardware::GetActiveTime() const
{
    return m_activeTime;
}

void VendorHardware::SetActiveTime(const string& _activeTime)
{
    m_activeTime = _activeTime;
    m_activeTimeHasBeenSet = true;
}

bool VendorHardware::ActiveTimeHasBeenSet() const
{
    return m_activeTimeHasBeenSet;
}

string VendorHardware::GetDescription() const
{
    return m_description;
}

void VendorHardware::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool VendorHardware::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string VendorHardware::GetDeviceId() const
{
    return m_deviceId;
}

void VendorHardware::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool VendorHardware::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

int64_t VendorHardware::GetLicenseChargingMode() const
{
    return m_licenseChargingMode;
}

void VendorHardware::SetLicenseChargingMode(const int64_t& _licenseChargingMode)
{
    m_licenseChargingMode = _licenseChargingMode;
    m_licenseChargingModeHasBeenSet = true;
}

bool VendorHardware::LicenseChargingModeHasBeenSet() const
{
    return m_licenseChargingModeHasBeenSet;
}

string VendorHardware::GetLastOnlineTime() const
{
    return m_lastOnlineTime;
}

void VendorHardware::SetLastOnlineTime(const string& _lastOnlineTime)
{
    m_lastOnlineTime = _lastOnlineTime;
    m_lastOnlineTimeHasBeenSet = true;
}

bool VendorHardware::LastOnlineTimeHasBeenSet() const
{
    return m_lastOnlineTimeHasBeenSet;
}

int64_t VendorHardware::GetLicensePayMode() const
{
    return m_licensePayMode;
}

void VendorHardware::SetLicensePayMode(const int64_t& _licensePayMode)
{
    m_licensePayMode = _licensePayMode;
    m_licensePayModeHasBeenSet = true;
}

bool VendorHardware::LicensePayModeHasBeenSet() const
{
    return m_licensePayModeHasBeenSet;
}

int64_t VendorHardware::GetPayer() const
{
    return m_payer;
}

void VendorHardware::SetPayer(const int64_t& _payer)
{
    m_payer = _payer;
    m_payerHasBeenSet = true;
}

bool VendorHardware::PayerHasBeenSet() const
{
    return m_payerHasBeenSet;
}

