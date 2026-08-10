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

#include <tencentcloud/csip/v20221121/model/HostVulOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

HostVulOverview::HostVulOverview() :
    m_urgentRepairCountHasBeenSet(false),
    m_defendHostCountHasBeenSet(false),
    m_totalHostCountHasBeenSet(false),
    m_fixedVulCountHasBeenSet(false),
    m_linuxVulCountHasBeenSet(false),
    m_windowVulCountHasBeenSet(false),
    m_webCMSVulCountHasBeenSet(false),
    m_appVulCountHasBeenSet(false),
    m_emergencyCountHasBeenSet(false),
    m_vulItemCountHasBeenSet(false),
    m_latestScanTimeHasBeenSet(false),
    m_enableTimingScanHasBeenSet(false),
    m_criticalRepairCountHasBeenSet(false),
    m_criticalRepairLinuxVulCountHasBeenSet(false),
    m_criticalRepairAppVulCountHasBeenSet(false),
    m_criticalRepairWebCMSVulCountHasBeenSet(false),
    m_criticalRepairEmergencyCountHasBeenSet(false)
{
}

CoreInternalOutcome HostVulOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UrgentRepairCount") && !value["UrgentRepairCount"].IsNull())
    {
        if (!value["UrgentRepairCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulOverview.UrgentRepairCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_urgentRepairCount = value["UrgentRepairCount"].GetUint64();
        m_urgentRepairCountHasBeenSet = true;
    }

    if (value.HasMember("DefendHostCount") && !value["DefendHostCount"].IsNull())
    {
        if (!value["DefendHostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulOverview.DefendHostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_defendHostCount = value["DefendHostCount"].GetUint64();
        m_defendHostCountHasBeenSet = true;
    }

    if (value.HasMember("TotalHostCount") && !value["TotalHostCount"].IsNull())
    {
        if (!value["TotalHostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulOverview.TotalHostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalHostCount = value["TotalHostCount"].GetUint64();
        m_totalHostCountHasBeenSet = true;
    }

    if (value.HasMember("FixedVulCount") && !value["FixedVulCount"].IsNull())
    {
        if (!value["FixedVulCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulOverview.FixedVulCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fixedVulCount = value["FixedVulCount"].GetUint64();
        m_fixedVulCountHasBeenSet = true;
    }

    if (value.HasMember("LinuxVulCount") && !value["LinuxVulCount"].IsNull())
    {
        if (!value["LinuxVulCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulOverview.LinuxVulCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_linuxVulCount = value["LinuxVulCount"].GetUint64();
        m_linuxVulCountHasBeenSet = true;
    }

    if (value.HasMember("WindowVulCount") && !value["WindowVulCount"].IsNull())
    {
        if (!value["WindowVulCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulOverview.WindowVulCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_windowVulCount = value["WindowVulCount"].GetUint64();
        m_windowVulCountHasBeenSet = true;
    }

    if (value.HasMember("WebCMSVulCount") && !value["WebCMSVulCount"].IsNull())
    {
        if (!value["WebCMSVulCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulOverview.WebCMSVulCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webCMSVulCount = value["WebCMSVulCount"].GetUint64();
        m_webCMSVulCountHasBeenSet = true;
    }

    if (value.HasMember("AppVulCount") && !value["AppVulCount"].IsNull())
    {
        if (!value["AppVulCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulOverview.AppVulCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appVulCount = value["AppVulCount"].GetUint64();
        m_appVulCountHasBeenSet = true;
    }

    if (value.HasMember("EmergencyCount") && !value["EmergencyCount"].IsNull())
    {
        if (!value["EmergencyCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulOverview.EmergencyCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_emergencyCount = value["EmergencyCount"].GetUint64();
        m_emergencyCountHasBeenSet = true;
    }

    if (value.HasMember("VulItemCount") && !value["VulItemCount"].IsNull())
    {
        if (!value["VulItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulOverview.VulItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulItemCount = value["VulItemCount"].GetUint64();
        m_vulItemCountHasBeenSet = true;
    }

    if (value.HasMember("LatestScanTime") && !value["LatestScanTime"].IsNull())
    {
        if (!value["LatestScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulOverview.LatestScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestScanTime = string(value["LatestScanTime"].GetString());
        m_latestScanTimeHasBeenSet = true;
    }

    if (value.HasMember("EnableTimingScan") && !value["EnableTimingScan"].IsNull())
    {
        if (!value["EnableTimingScan"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulOverview.EnableTimingScan` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableTimingScan = value["EnableTimingScan"].GetUint64();
        m_enableTimingScanHasBeenSet = true;
    }

    if (value.HasMember("CriticalRepairCount") && !value["CriticalRepairCount"].IsNull())
    {
        if (!value["CriticalRepairCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulOverview.CriticalRepairCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_criticalRepairCount = value["CriticalRepairCount"].GetUint64();
        m_criticalRepairCountHasBeenSet = true;
    }

    if (value.HasMember("CriticalRepairLinuxVulCount") && !value["CriticalRepairLinuxVulCount"].IsNull())
    {
        if (!value["CriticalRepairLinuxVulCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulOverview.CriticalRepairLinuxVulCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_criticalRepairLinuxVulCount = value["CriticalRepairLinuxVulCount"].GetUint64();
        m_criticalRepairLinuxVulCountHasBeenSet = true;
    }

    if (value.HasMember("CriticalRepairAppVulCount") && !value["CriticalRepairAppVulCount"].IsNull())
    {
        if (!value["CriticalRepairAppVulCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulOverview.CriticalRepairAppVulCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_criticalRepairAppVulCount = value["CriticalRepairAppVulCount"].GetUint64();
        m_criticalRepairAppVulCountHasBeenSet = true;
    }

    if (value.HasMember("CriticalRepairWebCMSVulCount") && !value["CriticalRepairWebCMSVulCount"].IsNull())
    {
        if (!value["CriticalRepairWebCMSVulCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulOverview.CriticalRepairWebCMSVulCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_criticalRepairWebCMSVulCount = value["CriticalRepairWebCMSVulCount"].GetUint64();
        m_criticalRepairWebCMSVulCountHasBeenSet = true;
    }

    if (value.HasMember("CriticalRepairEmergencyCount") && !value["CriticalRepairEmergencyCount"].IsNull())
    {
        if (!value["CriticalRepairEmergencyCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulOverview.CriticalRepairEmergencyCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_criticalRepairEmergencyCount = value["CriticalRepairEmergencyCount"].GetUint64();
        m_criticalRepairEmergencyCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostVulOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urgentRepairCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrgentRepairCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_urgentRepairCount, allocator);
    }

    if (m_defendHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defendHostCount, allocator);
    }

    if (m_totalHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalHostCount, allocator);
    }

    if (m_fixedVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixedVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixedVulCount, allocator);
    }

    if (m_linuxVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinuxVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_linuxVulCount, allocator);
    }

    if (m_windowVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WindowVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_windowVulCount, allocator);
    }

    if (m_webCMSVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebCMSVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webCMSVulCount, allocator);
    }

    if (m_appVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appVulCount, allocator);
    }

    if (m_emergencyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmergencyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_emergencyCount, allocator);
    }

    if (m_vulItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulItemCount, allocator);
    }

    if (m_latestScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_enableTimingScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableTimingScan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableTimingScan, allocator);
    }

    if (m_criticalRepairCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalRepairCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_criticalRepairCount, allocator);
    }

    if (m_criticalRepairLinuxVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalRepairLinuxVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_criticalRepairLinuxVulCount, allocator);
    }

    if (m_criticalRepairAppVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalRepairAppVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_criticalRepairAppVulCount, allocator);
    }

    if (m_criticalRepairWebCMSVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalRepairWebCMSVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_criticalRepairWebCMSVulCount, allocator);
    }

    if (m_criticalRepairEmergencyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalRepairEmergencyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_criticalRepairEmergencyCount, allocator);
    }

}


uint64_t HostVulOverview::GetUrgentRepairCount() const
{
    return m_urgentRepairCount;
}

void HostVulOverview::SetUrgentRepairCount(const uint64_t& _urgentRepairCount)
{
    m_urgentRepairCount = _urgentRepairCount;
    m_urgentRepairCountHasBeenSet = true;
}

bool HostVulOverview::UrgentRepairCountHasBeenSet() const
{
    return m_urgentRepairCountHasBeenSet;
}

uint64_t HostVulOverview::GetDefendHostCount() const
{
    return m_defendHostCount;
}

void HostVulOverview::SetDefendHostCount(const uint64_t& _defendHostCount)
{
    m_defendHostCount = _defendHostCount;
    m_defendHostCountHasBeenSet = true;
}

bool HostVulOverview::DefendHostCountHasBeenSet() const
{
    return m_defendHostCountHasBeenSet;
}

uint64_t HostVulOverview::GetTotalHostCount() const
{
    return m_totalHostCount;
}

void HostVulOverview::SetTotalHostCount(const uint64_t& _totalHostCount)
{
    m_totalHostCount = _totalHostCount;
    m_totalHostCountHasBeenSet = true;
}

bool HostVulOverview::TotalHostCountHasBeenSet() const
{
    return m_totalHostCountHasBeenSet;
}

uint64_t HostVulOverview::GetFixedVulCount() const
{
    return m_fixedVulCount;
}

void HostVulOverview::SetFixedVulCount(const uint64_t& _fixedVulCount)
{
    m_fixedVulCount = _fixedVulCount;
    m_fixedVulCountHasBeenSet = true;
}

bool HostVulOverview::FixedVulCountHasBeenSet() const
{
    return m_fixedVulCountHasBeenSet;
}

uint64_t HostVulOverview::GetLinuxVulCount() const
{
    return m_linuxVulCount;
}

void HostVulOverview::SetLinuxVulCount(const uint64_t& _linuxVulCount)
{
    m_linuxVulCount = _linuxVulCount;
    m_linuxVulCountHasBeenSet = true;
}

bool HostVulOverview::LinuxVulCountHasBeenSet() const
{
    return m_linuxVulCountHasBeenSet;
}

uint64_t HostVulOverview::GetWindowVulCount() const
{
    return m_windowVulCount;
}

void HostVulOverview::SetWindowVulCount(const uint64_t& _windowVulCount)
{
    m_windowVulCount = _windowVulCount;
    m_windowVulCountHasBeenSet = true;
}

bool HostVulOverview::WindowVulCountHasBeenSet() const
{
    return m_windowVulCountHasBeenSet;
}

uint64_t HostVulOverview::GetWebCMSVulCount() const
{
    return m_webCMSVulCount;
}

void HostVulOverview::SetWebCMSVulCount(const uint64_t& _webCMSVulCount)
{
    m_webCMSVulCount = _webCMSVulCount;
    m_webCMSVulCountHasBeenSet = true;
}

bool HostVulOverview::WebCMSVulCountHasBeenSet() const
{
    return m_webCMSVulCountHasBeenSet;
}

uint64_t HostVulOverview::GetAppVulCount() const
{
    return m_appVulCount;
}

void HostVulOverview::SetAppVulCount(const uint64_t& _appVulCount)
{
    m_appVulCount = _appVulCount;
    m_appVulCountHasBeenSet = true;
}

bool HostVulOverview::AppVulCountHasBeenSet() const
{
    return m_appVulCountHasBeenSet;
}

uint64_t HostVulOverview::GetEmergencyCount() const
{
    return m_emergencyCount;
}

void HostVulOverview::SetEmergencyCount(const uint64_t& _emergencyCount)
{
    m_emergencyCount = _emergencyCount;
    m_emergencyCountHasBeenSet = true;
}

bool HostVulOverview::EmergencyCountHasBeenSet() const
{
    return m_emergencyCountHasBeenSet;
}

uint64_t HostVulOverview::GetVulItemCount() const
{
    return m_vulItemCount;
}

void HostVulOverview::SetVulItemCount(const uint64_t& _vulItemCount)
{
    m_vulItemCount = _vulItemCount;
    m_vulItemCountHasBeenSet = true;
}

bool HostVulOverview::VulItemCountHasBeenSet() const
{
    return m_vulItemCountHasBeenSet;
}

string HostVulOverview::GetLatestScanTime() const
{
    return m_latestScanTime;
}

void HostVulOverview::SetLatestScanTime(const string& _latestScanTime)
{
    m_latestScanTime = _latestScanTime;
    m_latestScanTimeHasBeenSet = true;
}

bool HostVulOverview::LatestScanTimeHasBeenSet() const
{
    return m_latestScanTimeHasBeenSet;
}

uint64_t HostVulOverview::GetEnableTimingScan() const
{
    return m_enableTimingScan;
}

void HostVulOverview::SetEnableTimingScan(const uint64_t& _enableTimingScan)
{
    m_enableTimingScan = _enableTimingScan;
    m_enableTimingScanHasBeenSet = true;
}

bool HostVulOverview::EnableTimingScanHasBeenSet() const
{
    return m_enableTimingScanHasBeenSet;
}

uint64_t HostVulOverview::GetCriticalRepairCount() const
{
    return m_criticalRepairCount;
}

void HostVulOverview::SetCriticalRepairCount(const uint64_t& _criticalRepairCount)
{
    m_criticalRepairCount = _criticalRepairCount;
    m_criticalRepairCountHasBeenSet = true;
}

bool HostVulOverview::CriticalRepairCountHasBeenSet() const
{
    return m_criticalRepairCountHasBeenSet;
}

uint64_t HostVulOverview::GetCriticalRepairLinuxVulCount() const
{
    return m_criticalRepairLinuxVulCount;
}

void HostVulOverview::SetCriticalRepairLinuxVulCount(const uint64_t& _criticalRepairLinuxVulCount)
{
    m_criticalRepairLinuxVulCount = _criticalRepairLinuxVulCount;
    m_criticalRepairLinuxVulCountHasBeenSet = true;
}

bool HostVulOverview::CriticalRepairLinuxVulCountHasBeenSet() const
{
    return m_criticalRepairLinuxVulCountHasBeenSet;
}

uint64_t HostVulOverview::GetCriticalRepairAppVulCount() const
{
    return m_criticalRepairAppVulCount;
}

void HostVulOverview::SetCriticalRepairAppVulCount(const uint64_t& _criticalRepairAppVulCount)
{
    m_criticalRepairAppVulCount = _criticalRepairAppVulCount;
    m_criticalRepairAppVulCountHasBeenSet = true;
}

bool HostVulOverview::CriticalRepairAppVulCountHasBeenSet() const
{
    return m_criticalRepairAppVulCountHasBeenSet;
}

uint64_t HostVulOverview::GetCriticalRepairWebCMSVulCount() const
{
    return m_criticalRepairWebCMSVulCount;
}

void HostVulOverview::SetCriticalRepairWebCMSVulCount(const uint64_t& _criticalRepairWebCMSVulCount)
{
    m_criticalRepairWebCMSVulCount = _criticalRepairWebCMSVulCount;
    m_criticalRepairWebCMSVulCountHasBeenSet = true;
}

bool HostVulOverview::CriticalRepairWebCMSVulCountHasBeenSet() const
{
    return m_criticalRepairWebCMSVulCountHasBeenSet;
}

uint64_t HostVulOverview::GetCriticalRepairEmergencyCount() const
{
    return m_criticalRepairEmergencyCount;
}

void HostVulOverview::SetCriticalRepairEmergencyCount(const uint64_t& _criticalRepairEmergencyCount)
{
    m_criticalRepairEmergencyCount = _criticalRepairEmergencyCount;
    m_criticalRepairEmergencyCountHasBeenSet = true;
}

bool HostVulOverview::CriticalRepairEmergencyCountHasBeenSet() const
{
    return m_criticalRepairEmergencyCountHasBeenSet;
}

