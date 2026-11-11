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

#include <tencentcloud/csip/v20221121/model/HostVulScanStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

HostVulScanStatus::HostVulScanStatus() :
    m_hasScannedHasBeenSet(false),
    m_isFirstScanHasBeenSet(false),
    m_scanTaskStatusHasBeenSet(false),
    m_scanSceneHasBeenSet(false),
    m_latestScanTimeHasBeenSet(false),
    m_totalVulCountHasBeenSet(false),
    m_fixableVulCountHasBeenSet(false),
    m_fixableEmergencyCountHasBeenSet(false),
    m_fixableLinuxVulCountHasBeenSet(false),
    m_fixableWindowVulCountHasBeenSet(false)
{
}

CoreInternalOutcome HostVulScanStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HasScanned") && !value["HasScanned"].IsNull())
    {
        if (!value["HasScanned"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulScanStatus.HasScanned` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasScanned = value["HasScanned"].GetBool();
        m_hasScannedHasBeenSet = true;
    }

    if (value.HasMember("IsFirstScan") && !value["IsFirstScan"].IsNull())
    {
        if (!value["IsFirstScan"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulScanStatus.IsFirstScan` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFirstScan = value["IsFirstScan"].GetBool();
        m_isFirstScanHasBeenSet = true;
    }

    if (value.HasMember("ScanTaskStatus") && !value["ScanTaskStatus"].IsNull())
    {
        if (!value["ScanTaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulScanStatus.ScanTaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanTaskStatus = string(value["ScanTaskStatus"].GetString());
        m_scanTaskStatusHasBeenSet = true;
    }

    if (value.HasMember("ScanScene") && !value["ScanScene"].IsNull())
    {
        if (!value["ScanScene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulScanStatus.ScanScene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanScene = string(value["ScanScene"].GetString());
        m_scanSceneHasBeenSet = true;
    }

    if (value.HasMember("LatestScanTime") && !value["LatestScanTime"].IsNull())
    {
        if (!value["LatestScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulScanStatus.LatestScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestScanTime = string(value["LatestScanTime"].GetString());
        m_latestScanTimeHasBeenSet = true;
    }

    if (value.HasMember("TotalVulCount") && !value["TotalVulCount"].IsNull())
    {
        if (!value["TotalVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulScanStatus.TotalVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalVulCount = value["TotalVulCount"].GetInt64();
        m_totalVulCountHasBeenSet = true;
    }

    if (value.HasMember("FixableVulCount") && !value["FixableVulCount"].IsNull())
    {
        if (!value["FixableVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulScanStatus.FixableVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fixableVulCount = value["FixableVulCount"].GetInt64();
        m_fixableVulCountHasBeenSet = true;
    }

    if (value.HasMember("FixableEmergencyCount") && !value["FixableEmergencyCount"].IsNull())
    {
        if (!value["FixableEmergencyCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulScanStatus.FixableEmergencyCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fixableEmergencyCount = value["FixableEmergencyCount"].GetInt64();
        m_fixableEmergencyCountHasBeenSet = true;
    }

    if (value.HasMember("FixableLinuxVulCount") && !value["FixableLinuxVulCount"].IsNull())
    {
        if (!value["FixableLinuxVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulScanStatus.FixableLinuxVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fixableLinuxVulCount = value["FixableLinuxVulCount"].GetInt64();
        m_fixableLinuxVulCountHasBeenSet = true;
    }

    if (value.HasMember("FixableWindowVulCount") && !value["FixableWindowVulCount"].IsNull())
    {
        if (!value["FixableWindowVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulScanStatus.FixableWindowVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fixableWindowVulCount = value["FixableWindowVulCount"].GetInt64();
        m_fixableWindowVulCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostVulScanStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hasScannedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasScanned";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasScanned, allocator);
    }

    if (m_isFirstScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFirstScan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFirstScan, allocator);
    }

    if (m_scanTaskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanTaskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_scanSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanScene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanScene.c_str(), allocator).Move(), allocator);
    }

    if (m_latestScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_totalVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalVulCount, allocator);
    }

    if (m_fixableVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixableVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixableVulCount, allocator);
    }

    if (m_fixableEmergencyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixableEmergencyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixableEmergencyCount, allocator);
    }

    if (m_fixableLinuxVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixableLinuxVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixableLinuxVulCount, allocator);
    }

    if (m_fixableWindowVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixableWindowVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixableWindowVulCount, allocator);
    }

}


bool HostVulScanStatus::GetHasScanned() const
{
    return m_hasScanned;
}

void HostVulScanStatus::SetHasScanned(const bool& _hasScanned)
{
    m_hasScanned = _hasScanned;
    m_hasScannedHasBeenSet = true;
}

bool HostVulScanStatus::HasScannedHasBeenSet() const
{
    return m_hasScannedHasBeenSet;
}

bool HostVulScanStatus::GetIsFirstScan() const
{
    return m_isFirstScan;
}

void HostVulScanStatus::SetIsFirstScan(const bool& _isFirstScan)
{
    m_isFirstScan = _isFirstScan;
    m_isFirstScanHasBeenSet = true;
}

bool HostVulScanStatus::IsFirstScanHasBeenSet() const
{
    return m_isFirstScanHasBeenSet;
}

string HostVulScanStatus::GetScanTaskStatus() const
{
    return m_scanTaskStatus;
}

void HostVulScanStatus::SetScanTaskStatus(const string& _scanTaskStatus)
{
    m_scanTaskStatus = _scanTaskStatus;
    m_scanTaskStatusHasBeenSet = true;
}

bool HostVulScanStatus::ScanTaskStatusHasBeenSet() const
{
    return m_scanTaskStatusHasBeenSet;
}

string HostVulScanStatus::GetScanScene() const
{
    return m_scanScene;
}

void HostVulScanStatus::SetScanScene(const string& _scanScene)
{
    m_scanScene = _scanScene;
    m_scanSceneHasBeenSet = true;
}

bool HostVulScanStatus::ScanSceneHasBeenSet() const
{
    return m_scanSceneHasBeenSet;
}

string HostVulScanStatus::GetLatestScanTime() const
{
    return m_latestScanTime;
}

void HostVulScanStatus::SetLatestScanTime(const string& _latestScanTime)
{
    m_latestScanTime = _latestScanTime;
    m_latestScanTimeHasBeenSet = true;
}

bool HostVulScanStatus::LatestScanTimeHasBeenSet() const
{
    return m_latestScanTimeHasBeenSet;
}

int64_t HostVulScanStatus::GetTotalVulCount() const
{
    return m_totalVulCount;
}

void HostVulScanStatus::SetTotalVulCount(const int64_t& _totalVulCount)
{
    m_totalVulCount = _totalVulCount;
    m_totalVulCountHasBeenSet = true;
}

bool HostVulScanStatus::TotalVulCountHasBeenSet() const
{
    return m_totalVulCountHasBeenSet;
}

int64_t HostVulScanStatus::GetFixableVulCount() const
{
    return m_fixableVulCount;
}

void HostVulScanStatus::SetFixableVulCount(const int64_t& _fixableVulCount)
{
    m_fixableVulCount = _fixableVulCount;
    m_fixableVulCountHasBeenSet = true;
}

bool HostVulScanStatus::FixableVulCountHasBeenSet() const
{
    return m_fixableVulCountHasBeenSet;
}

int64_t HostVulScanStatus::GetFixableEmergencyCount() const
{
    return m_fixableEmergencyCount;
}

void HostVulScanStatus::SetFixableEmergencyCount(const int64_t& _fixableEmergencyCount)
{
    m_fixableEmergencyCount = _fixableEmergencyCount;
    m_fixableEmergencyCountHasBeenSet = true;
}

bool HostVulScanStatus::FixableEmergencyCountHasBeenSet() const
{
    return m_fixableEmergencyCountHasBeenSet;
}

int64_t HostVulScanStatus::GetFixableLinuxVulCount() const
{
    return m_fixableLinuxVulCount;
}

void HostVulScanStatus::SetFixableLinuxVulCount(const int64_t& _fixableLinuxVulCount)
{
    m_fixableLinuxVulCount = _fixableLinuxVulCount;
    m_fixableLinuxVulCountHasBeenSet = true;
}

bool HostVulScanStatus::FixableLinuxVulCountHasBeenSet() const
{
    return m_fixableLinuxVulCountHasBeenSet;
}

int64_t HostVulScanStatus::GetFixableWindowVulCount() const
{
    return m_fixableWindowVulCount;
}

void HostVulScanStatus::SetFixableWindowVulCount(const int64_t& _fixableWindowVulCount)
{
    m_fixableWindowVulCount = _fixableWindowVulCount;
    m_fixableWindowVulCountHasBeenSet = true;
}

bool HostVulScanStatus::FixableWindowVulCountHasBeenSet() const
{
    return m_fixableWindowVulCountHasBeenSet;
}

