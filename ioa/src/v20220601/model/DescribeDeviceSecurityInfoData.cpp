/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ioa/v20220601/model/DescribeDeviceSecurityInfoData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeDeviceSecurityInfoData::DescribeDeviceSecurityInfoData() :
    m_firewallStatusHasBeenSet(false),
    m_realTimeProtectionStatusHasBeenSet(false),
    m_sysRepVersionHasBeenSet(false),
    m_virusVerHasBeenSet(false),
    m_vulVersionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDeviceSecurityInfoData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FirewallStatus") && !value["FirewallStatus"].IsNull())
    {
        if (!value["FirewallStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceSecurityInfoData.FirewallStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_firewallStatus = value["FirewallStatus"].GetInt64();
        m_firewallStatusHasBeenSet = true;
    }

    if (value.HasMember("RealTimeProtectionStatus") && !value["RealTimeProtectionStatus"].IsNull())
    {
        if (!value["RealTimeProtectionStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceSecurityInfoData.RealTimeProtectionStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_realTimeProtectionStatus = value["RealTimeProtectionStatus"].GetInt64();
        m_realTimeProtectionStatusHasBeenSet = true;
    }

    if (value.HasMember("SysRepVersion") && !value["SysRepVersion"].IsNull())
    {
        if (!value["SysRepVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceSecurityInfoData.SysRepVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sysRepVersion = string(value["SysRepVersion"].GetString());
        m_sysRepVersionHasBeenSet = true;
    }

    if (value.HasMember("VirusVer") && !value["VirusVer"].IsNull())
    {
        if (!value["VirusVer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceSecurityInfoData.VirusVer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virusVer = string(value["VirusVer"].GetString());
        m_virusVerHasBeenSet = true;
    }

    if (value.HasMember("VulVersion") && !value["VulVersion"].IsNull())
    {
        if (!value["VulVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceSecurityInfoData.VulVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulVersion = string(value["VulVersion"].GetString());
        m_vulVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDeviceSecurityInfoData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_firewallStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirewallStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firewallStatus, allocator);
    }

    if (m_realTimeProtectionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTimeProtectionStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realTimeProtectionStatus, allocator);
    }

    if (m_sysRepVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SysRepVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sysRepVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_virusVerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusVer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virusVer.c_str(), allocator).Move(), allocator);
    }

    if (m_vulVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulVersion.c_str(), allocator).Move(), allocator);
    }

}


int64_t DescribeDeviceSecurityInfoData::GetFirewallStatus() const
{
    return m_firewallStatus;
}

void DescribeDeviceSecurityInfoData::SetFirewallStatus(const int64_t& _firewallStatus)
{
    m_firewallStatus = _firewallStatus;
    m_firewallStatusHasBeenSet = true;
}

bool DescribeDeviceSecurityInfoData::FirewallStatusHasBeenSet() const
{
    return m_firewallStatusHasBeenSet;
}

int64_t DescribeDeviceSecurityInfoData::GetRealTimeProtectionStatus() const
{
    return m_realTimeProtectionStatus;
}

void DescribeDeviceSecurityInfoData::SetRealTimeProtectionStatus(const int64_t& _realTimeProtectionStatus)
{
    m_realTimeProtectionStatus = _realTimeProtectionStatus;
    m_realTimeProtectionStatusHasBeenSet = true;
}

bool DescribeDeviceSecurityInfoData::RealTimeProtectionStatusHasBeenSet() const
{
    return m_realTimeProtectionStatusHasBeenSet;
}

string DescribeDeviceSecurityInfoData::GetSysRepVersion() const
{
    return m_sysRepVersion;
}

void DescribeDeviceSecurityInfoData::SetSysRepVersion(const string& _sysRepVersion)
{
    m_sysRepVersion = _sysRepVersion;
    m_sysRepVersionHasBeenSet = true;
}

bool DescribeDeviceSecurityInfoData::SysRepVersionHasBeenSet() const
{
    return m_sysRepVersionHasBeenSet;
}

string DescribeDeviceSecurityInfoData::GetVirusVer() const
{
    return m_virusVer;
}

void DescribeDeviceSecurityInfoData::SetVirusVer(const string& _virusVer)
{
    m_virusVer = _virusVer;
    m_virusVerHasBeenSet = true;
}

bool DescribeDeviceSecurityInfoData::VirusVerHasBeenSet() const
{
    return m_virusVerHasBeenSet;
}

string DescribeDeviceSecurityInfoData::GetVulVersion() const
{
    return m_vulVersion;
}

void DescribeDeviceSecurityInfoData::SetVulVersion(const string& _vulVersion)
{
    m_vulVersion = _vulVersion;
    m_vulVersionHasBeenSet = true;
}

bool DescribeDeviceSecurityInfoData::VulVersionHasBeenSet() const
{
    return m_vulVersionHasBeenSet;
}

