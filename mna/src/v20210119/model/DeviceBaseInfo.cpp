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

#include <tencentcloud/mna/v20210119/model/DeviceBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

DeviceBaseInfo::DeviceBaseInfo() :
    m_deviceIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastTimeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_accessScopeHasBeenSet(false),
    m_licensePayModeHasBeenSet(false),
    m_payerHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_flowTruncHasBeenSet(false),
    m_snHasBeenSet(false),
    m_vendorHasBeenSet(false)
{
}

CoreInternalOutcome DeviceBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceBaseInfo.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceBaseInfo.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceBaseInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LastTime") && !value["LastTime"].IsNull())
    {
        if (!value["LastTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceBaseInfo.LastTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTime = string(value["LastTime"].GetString());
        m_lastTimeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceBaseInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("AccessScope") && !value["AccessScope"].IsNull())
    {
        if (!value["AccessScope"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceBaseInfo.AccessScope` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessScope = value["AccessScope"].GetInt64();
        m_accessScopeHasBeenSet = true;
    }

    if (value.HasMember("LicensePayMode") && !value["LicensePayMode"].IsNull())
    {
        if (!value["LicensePayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceBaseInfo.LicensePayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_licensePayMode = value["LicensePayMode"].GetInt64();
        m_licensePayModeHasBeenSet = true;
    }

    if (value.HasMember("Payer") && !value["Payer"].IsNull())
    {
        if (!value["Payer"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceBaseInfo.Payer` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payer = value["Payer"].GetInt64();
        m_payerHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceBaseInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceBaseInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("FlowTrunc") && !value["FlowTrunc"].IsNull())
    {
        if (!value["FlowTrunc"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceBaseInfo.FlowTrunc` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowTrunc = value["FlowTrunc"].GetInt64();
        m_flowTruncHasBeenSet = true;
    }

    if (value.HasMember("Sn") && !value["Sn"].IsNull())
    {
        if (!value["Sn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceBaseInfo.Sn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sn = string(value["Sn"].GetString());
        m_snHasBeenSet = true;
    }

    if (value.HasMember("Vendor") && !value["Vendor"].IsNull())
    {
        if (!value["Vendor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceBaseInfo.Vendor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vendor = string(value["Vendor"].GetString());
        m_vendorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTime.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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

    if (m_snHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sn.c_str(), allocator).Move(), allocator);
    }

    if (m_vendorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vendor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vendor.c_str(), allocator).Move(), allocator);
    }

}


string DeviceBaseInfo::GetDeviceId() const
{
    return m_deviceId;
}

void DeviceBaseInfo::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool DeviceBaseInfo::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string DeviceBaseInfo::GetDeviceName() const
{
    return m_deviceName;
}

void DeviceBaseInfo::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DeviceBaseInfo::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string DeviceBaseInfo::GetCreateTime() const
{
    return m_createTime;
}

void DeviceBaseInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DeviceBaseInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DeviceBaseInfo::GetLastTime() const
{
    return m_lastTime;
}

void DeviceBaseInfo::SetLastTime(const string& _lastTime)
{
    m_lastTime = _lastTime;
    m_lastTimeHasBeenSet = true;
}

bool DeviceBaseInfo::LastTimeHasBeenSet() const
{
    return m_lastTimeHasBeenSet;
}

string DeviceBaseInfo::GetRemark() const
{
    return m_remark;
}

void DeviceBaseInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DeviceBaseInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t DeviceBaseInfo::GetAccessScope() const
{
    return m_accessScope;
}

void DeviceBaseInfo::SetAccessScope(const int64_t& _accessScope)
{
    m_accessScope = _accessScope;
    m_accessScopeHasBeenSet = true;
}

bool DeviceBaseInfo::AccessScopeHasBeenSet() const
{
    return m_accessScopeHasBeenSet;
}

int64_t DeviceBaseInfo::GetLicensePayMode() const
{
    return m_licensePayMode;
}

void DeviceBaseInfo::SetLicensePayMode(const int64_t& _licensePayMode)
{
    m_licensePayMode = _licensePayMode;
    m_licensePayModeHasBeenSet = true;
}

bool DeviceBaseInfo::LicensePayModeHasBeenSet() const
{
    return m_licensePayModeHasBeenSet;
}

int64_t DeviceBaseInfo::GetPayer() const
{
    return m_payer;
}

void DeviceBaseInfo::SetPayer(const int64_t& _payer)
{
    m_payer = _payer;
    m_payerHasBeenSet = true;
}

bool DeviceBaseInfo::PayerHasBeenSet() const
{
    return m_payerHasBeenSet;
}

string DeviceBaseInfo::GetGroupId() const
{
    return m_groupId;
}

void DeviceBaseInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DeviceBaseInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DeviceBaseInfo::GetGroupName() const
{
    return m_groupName;
}

void DeviceBaseInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DeviceBaseInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t DeviceBaseInfo::GetFlowTrunc() const
{
    return m_flowTrunc;
}

void DeviceBaseInfo::SetFlowTrunc(const int64_t& _flowTrunc)
{
    m_flowTrunc = _flowTrunc;
    m_flowTruncHasBeenSet = true;
}

bool DeviceBaseInfo::FlowTruncHasBeenSet() const
{
    return m_flowTruncHasBeenSet;
}

string DeviceBaseInfo::GetSn() const
{
    return m_sn;
}

void DeviceBaseInfo::SetSn(const string& _sn)
{
    m_sn = _sn;
    m_snHasBeenSet = true;
}

bool DeviceBaseInfo::SnHasBeenSet() const
{
    return m_snHasBeenSet;
}

string DeviceBaseInfo::GetVendor() const
{
    return m_vendor;
}

void DeviceBaseInfo::SetVendor(const string& _vendor)
{
    m_vendor = _vendor;
    m_vendorHasBeenSet = true;
}

bool DeviceBaseInfo::VendorHasBeenSet() const
{
    return m_vendorHasBeenSet;
}

