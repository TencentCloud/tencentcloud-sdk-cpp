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

#include <tencentcloud/mna/v20210119/model/HardwareInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

HardwareInfo::HardwareInfo() :
    m_deviceIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_activeTimeHasBeenSet(false),
    m_lastOnlineTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_vendorDescriptionHasBeenSet(false),
    m_licenseChargingModeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_sNHasBeenSet(false),
    m_licensePayModeHasBeenSet(false),
    m_payerHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_flowTruncHasBeenSet(false)
{
}

CoreInternalOutcome HardwareInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HardwareInfo.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HardwareInfo.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("ActiveTime") && !value["ActiveTime"].IsNull())
    {
        if (!value["ActiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HardwareInfo.ActiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activeTime = string(value["ActiveTime"].GetString());
        m_activeTimeHasBeenSet = true;
    }

    if (value.HasMember("LastOnlineTime") && !value["LastOnlineTime"].IsNull())
    {
        if (!value["LastOnlineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HardwareInfo.LastOnlineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastOnlineTime = string(value["LastOnlineTime"].GetString());
        m_lastOnlineTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HardwareInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("VendorDescription") && !value["VendorDescription"].IsNull())
    {
        if (!value["VendorDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HardwareInfo.VendorDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vendorDescription = string(value["VendorDescription"].GetString());
        m_vendorDescriptionHasBeenSet = true;
    }

    if (value.HasMember("LicenseChargingMode") && !value["LicenseChargingMode"].IsNull())
    {
        if (!value["LicenseChargingMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HardwareInfo.LicenseChargingMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseChargingMode = value["LicenseChargingMode"].GetInt64();
        m_licenseChargingModeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HardwareInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SN") && !value["SN"].IsNull())
    {
        if (!value["SN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HardwareInfo.SN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sN = string(value["SN"].GetString());
        m_sNHasBeenSet = true;
    }

    if (value.HasMember("LicensePayMode") && !value["LicensePayMode"].IsNull())
    {
        if (!value["LicensePayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HardwareInfo.LicensePayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_licensePayMode = value["LicensePayMode"].GetInt64();
        m_licensePayModeHasBeenSet = true;
    }

    if (value.HasMember("Payer") && !value["Payer"].IsNull())
    {
        if (!value["Payer"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HardwareInfo.Payer` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payer = value["Payer"].GetInt64();
        m_payerHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HardwareInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HardwareInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("FlowTrunc") && !value["FlowTrunc"].IsNull())
    {
        if (!value["FlowTrunc"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HardwareInfo.FlowTrunc` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowTrunc = value["FlowTrunc"].GetInt64();
        m_flowTruncHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HardwareInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_activeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastOnlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastOnlineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastOnlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_vendorDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VendorDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vendorDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseChargingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseChargingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseChargingMode, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sN.c_str(), allocator).Move(), allocator);
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

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_flowTruncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowTrunc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowTrunc, allocator);
    }

}


string HardwareInfo::GetDeviceId() const
{
    return m_deviceId;
}

void HardwareInfo::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool HardwareInfo::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string HardwareInfo::GetDeviceName() const
{
    return m_deviceName;
}

void HardwareInfo::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool HardwareInfo::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string HardwareInfo::GetActiveTime() const
{
    return m_activeTime;
}

void HardwareInfo::SetActiveTime(const string& _activeTime)
{
    m_activeTime = _activeTime;
    m_activeTimeHasBeenSet = true;
}

bool HardwareInfo::ActiveTimeHasBeenSet() const
{
    return m_activeTimeHasBeenSet;
}

string HardwareInfo::GetLastOnlineTime() const
{
    return m_lastOnlineTime;
}

void HardwareInfo::SetLastOnlineTime(const string& _lastOnlineTime)
{
    m_lastOnlineTime = _lastOnlineTime;
    m_lastOnlineTimeHasBeenSet = true;
}

bool HardwareInfo::LastOnlineTimeHasBeenSet() const
{
    return m_lastOnlineTimeHasBeenSet;
}

string HardwareInfo::GetDescription() const
{
    return m_description;
}

void HardwareInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool HardwareInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string HardwareInfo::GetVendorDescription() const
{
    return m_vendorDescription;
}

void HardwareInfo::SetVendorDescription(const string& _vendorDescription)
{
    m_vendorDescription = _vendorDescription;
    m_vendorDescriptionHasBeenSet = true;
}

bool HardwareInfo::VendorDescriptionHasBeenSet() const
{
    return m_vendorDescriptionHasBeenSet;
}

int64_t HardwareInfo::GetLicenseChargingMode() const
{
    return m_licenseChargingMode;
}

void HardwareInfo::SetLicenseChargingMode(const int64_t& _licenseChargingMode)
{
    m_licenseChargingMode = _licenseChargingMode;
    m_licenseChargingModeHasBeenSet = true;
}

bool HardwareInfo::LicenseChargingModeHasBeenSet() const
{
    return m_licenseChargingModeHasBeenSet;
}

string HardwareInfo::GetCreateTime() const
{
    return m_createTime;
}

void HardwareInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool HardwareInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string HardwareInfo::GetSN() const
{
    return m_sN;
}

void HardwareInfo::SetSN(const string& _sN)
{
    m_sN = _sN;
    m_sNHasBeenSet = true;
}

bool HardwareInfo::SNHasBeenSet() const
{
    return m_sNHasBeenSet;
}

int64_t HardwareInfo::GetLicensePayMode() const
{
    return m_licensePayMode;
}

void HardwareInfo::SetLicensePayMode(const int64_t& _licensePayMode)
{
    m_licensePayMode = _licensePayMode;
    m_licensePayModeHasBeenSet = true;
}

bool HardwareInfo::LicensePayModeHasBeenSet() const
{
    return m_licensePayModeHasBeenSet;
}

int64_t HardwareInfo::GetPayer() const
{
    return m_payer;
}

void HardwareInfo::SetPayer(const int64_t& _payer)
{
    m_payer = _payer;
    m_payerHasBeenSet = true;
}

bool HardwareInfo::PayerHasBeenSet() const
{
    return m_payerHasBeenSet;
}

string HardwareInfo::GetGroupId() const
{
    return m_groupId;
}

void HardwareInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool HardwareInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string HardwareInfo::GetGroupName() const
{
    return m_groupName;
}

void HardwareInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool HardwareInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t HardwareInfo::GetFlowTrunc() const
{
    return m_flowTrunc;
}

void HardwareInfo::SetFlowTrunc(const int64_t& _flowTrunc)
{
    m_flowTrunc = _flowTrunc;
    m_flowTruncHasBeenSet = true;
}

bool HardwareInfo::FlowTruncHasBeenSet() const
{
    return m_flowTruncHasBeenSet;
}

