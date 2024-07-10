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

#include <tencentcloud/mna/v20210119/model/ActivateHardware.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

ActivateHardware::ActivateHardware() :
    m_vendorHasBeenSet(false),
    m_sNHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dataKeyHasBeenSet(false),
    m_accessScopeHasBeenSet(false),
    m_licensePayModeHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_flowTruncHasBeenSet(false),
    m_deviceIdHasBeenSet(false)
{
}

CoreInternalOutcome ActivateHardware::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Vendor") && !value["Vendor"].IsNull())
    {
        if (!value["Vendor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivateHardware.Vendor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vendor = string(value["Vendor"].GetString());
        m_vendorHasBeenSet = true;
    }

    if (value.HasMember("SN") && !value["SN"].IsNull())
    {
        if (!value["SN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivateHardware.SN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sN = string(value["SN"].GetString());
        m_sNHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivateHardware.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivateHardware.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("DataKey") && !value["DataKey"].IsNull())
    {
        if (!value["DataKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivateHardware.DataKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataKey = string(value["DataKey"].GetString());
        m_dataKeyHasBeenSet = true;
    }

    if (value.HasMember("AccessScope") && !value["AccessScope"].IsNull())
    {
        if (!value["AccessScope"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivateHardware.AccessScope` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessScope = value["AccessScope"].GetInt64();
        m_accessScopeHasBeenSet = true;
    }

    if (value.HasMember("LicensePayMode") && !value["LicensePayMode"].IsNull())
    {
        if (!value["LicensePayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivateHardware.LicensePayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_licensePayMode = value["LicensePayMode"].GetInt64();
        m_licensePayModeHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivateHardware.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivateHardware.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("FlowTrunc") && !value["FlowTrunc"].IsNull())
    {
        if (!value["FlowTrunc"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivateHardware.FlowTrunc` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowTrunc = value["FlowTrunc"].GetInt64();
        m_flowTruncHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivateHardware.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActivateHardware::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vendorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vendor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vendor.c_str(), allocator).Move(), allocator);
    }

    if (m_sNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sN.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_dataKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataKey.c_str(), allocator).Move(), allocator);
    }

    if (m_accessScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessScope, allocator);
    }

    if (m_licensePayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicensePayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licensePayMode, allocator);
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

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

}


string ActivateHardware::GetVendor() const
{
    return m_vendor;
}

void ActivateHardware::SetVendor(const string& _vendor)
{
    m_vendor = _vendor;
    m_vendorHasBeenSet = true;
}

bool ActivateHardware::VendorHasBeenSet() const
{
    return m_vendorHasBeenSet;
}

string ActivateHardware::GetSN() const
{
    return m_sN;
}

void ActivateHardware::SetSN(const string& _sN)
{
    m_sN = _sN;
    m_sNHasBeenSet = true;
}

bool ActivateHardware::SNHasBeenSet() const
{
    return m_sNHasBeenSet;
}

string ActivateHardware::GetDeviceName() const
{
    return m_deviceName;
}

void ActivateHardware::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool ActivateHardware::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string ActivateHardware::GetDescription() const
{
    return m_description;
}

void ActivateHardware::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ActivateHardware::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ActivateHardware::GetDataKey() const
{
    return m_dataKey;
}

void ActivateHardware::SetDataKey(const string& _dataKey)
{
    m_dataKey = _dataKey;
    m_dataKeyHasBeenSet = true;
}

bool ActivateHardware::DataKeyHasBeenSet() const
{
    return m_dataKeyHasBeenSet;
}

int64_t ActivateHardware::GetAccessScope() const
{
    return m_accessScope;
}

void ActivateHardware::SetAccessScope(const int64_t& _accessScope)
{
    m_accessScope = _accessScope;
    m_accessScopeHasBeenSet = true;
}

bool ActivateHardware::AccessScopeHasBeenSet() const
{
    return m_accessScopeHasBeenSet;
}

int64_t ActivateHardware::GetLicensePayMode() const
{
    return m_licensePayMode;
}

void ActivateHardware::SetLicensePayMode(const int64_t& _licensePayMode)
{
    m_licensePayMode = _licensePayMode;
    m_licensePayModeHasBeenSet = true;
}

bool ActivateHardware::LicensePayModeHasBeenSet() const
{
    return m_licensePayModeHasBeenSet;
}

string ActivateHardware::GetGroupId() const
{
    return m_groupId;
}

void ActivateHardware::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ActivateHardware::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ActivateHardware::GetGroupName() const
{
    return m_groupName;
}

void ActivateHardware::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool ActivateHardware::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t ActivateHardware::GetFlowTrunc() const
{
    return m_flowTrunc;
}

void ActivateHardware::SetFlowTrunc(const int64_t& _flowTrunc)
{
    m_flowTrunc = _flowTrunc;
    m_flowTruncHasBeenSet = true;
}

bool ActivateHardware::FlowTruncHasBeenSet() const
{
    return m_flowTruncHasBeenSet;
}

string ActivateHardware::GetDeviceId() const
{
    return m_deviceId;
}

void ActivateHardware::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool ActivateHardware::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

