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

#include <tencentcloud/cws/v20180312/model/Monitor.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cws::V20180312::Model;
using namespace std;

Monitor::Monitor() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_monitorStatusHasBeenSet(false),
    m_scannerTypeHasBeenSet(false),
    m_crontabHasBeenSet(false),
    m_includedVulsTypesHasBeenSet(false),
    m_rateLimitHasBeenSet(false),
    m_firstScanStartTimeHasBeenSet(false),
    m_scanStatusHasBeenSet(false),
    m_lastScanFinishTimeHasBeenSet(false),
    m_currentScanStartTimeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_appidHasBeenSet(false),
    m_contentScanStatusHasBeenSet(false)
{
}

CoreInternalOutcome Monitor::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("MonitorStatus") && !value["MonitorStatus"].IsNull())
    {
        if (!value["MonitorStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.MonitorStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorStatus = value["MonitorStatus"].GetUint64();
        m_monitorStatusHasBeenSet = true;
    }

    if (value.HasMember("ScannerType") && !value["ScannerType"].IsNull())
    {
        if (!value["ScannerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.ScannerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scannerType = string(value["ScannerType"].GetString());
        m_scannerTypeHasBeenSet = true;
    }

    if (value.HasMember("Crontab") && !value["Crontab"].IsNull())
    {
        if (!value["Crontab"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.Crontab` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_crontab = value["Crontab"].GetUint64();
        m_crontabHasBeenSet = true;
    }

    if (value.HasMember("IncludedVulsTypes") && !value["IncludedVulsTypes"].IsNull())
    {
        if (!value["IncludedVulsTypes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.IncludedVulsTypes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_includedVulsTypes = string(value["IncludedVulsTypes"].GetString());
        m_includedVulsTypesHasBeenSet = true;
    }

    if (value.HasMember("RateLimit") && !value["RateLimit"].IsNull())
    {
        if (!value["RateLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.RateLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rateLimit = value["RateLimit"].GetUint64();
        m_rateLimitHasBeenSet = true;
    }

    if (value.HasMember("FirstScanStartTime") && !value["FirstScanStartTime"].IsNull())
    {
        if (!value["FirstScanStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.FirstScanStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstScanStartTime = string(value["FirstScanStartTime"].GetString());
        m_firstScanStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ScanStatus") && !value["ScanStatus"].IsNull())
    {
        if (!value["ScanStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.ScanStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanStatus = value["ScanStatus"].GetUint64();
        m_scanStatusHasBeenSet = true;
    }

    if (value.HasMember("LastScanFinishTime") && !value["LastScanFinishTime"].IsNull())
    {
        if (!value["LastScanFinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.LastScanFinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanFinishTime = string(value["LastScanFinishTime"].GetString());
        m_lastScanFinishTimeHasBeenSet = true;
    }

    if (value.HasMember("CurrentScanStartTime") && !value["CurrentScanStartTime"].IsNull())
    {
        if (!value["CurrentScanStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.CurrentScanStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentScanStartTime = string(value["CurrentScanStartTime"].GetString());
        m_currentScanStartTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("Appid") && !value["Appid"].IsNull())
    {
        if (!value["Appid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.Appid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appid = value["Appid"].GetUint64();
        m_appidHasBeenSet = true;
    }

    if (value.HasMember("ContentScanStatus") && !value["ContentScanStatus"].IsNull())
    {
        if (!value["ContentScanStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Monitor.ContentScanStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_contentScanStatus = value["ContentScanStatus"].GetUint64();
        m_contentScanStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Monitor::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorStatus, allocator);
    }

    if (m_scannerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScannerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scannerType.c_str(), allocator).Move(), allocator);
    }

    if (m_crontabHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Crontab";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crontab, allocator);
    }

    if (m_includedVulsTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludedVulsTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_includedVulsTypes.c_str(), allocator).Move(), allocator);
    }

    if (m_rateLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rateLimit, allocator);
    }

    if (m_firstScanStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstScanStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstScanStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanStatus, allocator);
    }

    if (m_lastScanFinishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanFinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanFinishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_currentScanStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentScanStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentScanStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_appidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Appid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appid, allocator);
    }

    if (m_contentScanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentScanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contentScanStatus, allocator);
    }

}


uint64_t Monitor::GetId() const
{
    return m_id;
}

void Monitor::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Monitor::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Monitor::GetName() const
{
    return m_name;
}

void Monitor::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Monitor::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t Monitor::GetMonitorStatus() const
{
    return m_monitorStatus;
}

void Monitor::SetMonitorStatus(const uint64_t& _monitorStatus)
{
    m_monitorStatus = _monitorStatus;
    m_monitorStatusHasBeenSet = true;
}

bool Monitor::MonitorStatusHasBeenSet() const
{
    return m_monitorStatusHasBeenSet;
}

string Monitor::GetScannerType() const
{
    return m_scannerType;
}

void Monitor::SetScannerType(const string& _scannerType)
{
    m_scannerType = _scannerType;
    m_scannerTypeHasBeenSet = true;
}

bool Monitor::ScannerTypeHasBeenSet() const
{
    return m_scannerTypeHasBeenSet;
}

uint64_t Monitor::GetCrontab() const
{
    return m_crontab;
}

void Monitor::SetCrontab(const uint64_t& _crontab)
{
    m_crontab = _crontab;
    m_crontabHasBeenSet = true;
}

bool Monitor::CrontabHasBeenSet() const
{
    return m_crontabHasBeenSet;
}

string Monitor::GetIncludedVulsTypes() const
{
    return m_includedVulsTypes;
}

void Monitor::SetIncludedVulsTypes(const string& _includedVulsTypes)
{
    m_includedVulsTypes = _includedVulsTypes;
    m_includedVulsTypesHasBeenSet = true;
}

bool Monitor::IncludedVulsTypesHasBeenSet() const
{
    return m_includedVulsTypesHasBeenSet;
}

uint64_t Monitor::GetRateLimit() const
{
    return m_rateLimit;
}

void Monitor::SetRateLimit(const uint64_t& _rateLimit)
{
    m_rateLimit = _rateLimit;
    m_rateLimitHasBeenSet = true;
}

bool Monitor::RateLimitHasBeenSet() const
{
    return m_rateLimitHasBeenSet;
}

string Monitor::GetFirstScanStartTime() const
{
    return m_firstScanStartTime;
}

void Monitor::SetFirstScanStartTime(const string& _firstScanStartTime)
{
    m_firstScanStartTime = _firstScanStartTime;
    m_firstScanStartTimeHasBeenSet = true;
}

bool Monitor::FirstScanStartTimeHasBeenSet() const
{
    return m_firstScanStartTimeHasBeenSet;
}

uint64_t Monitor::GetScanStatus() const
{
    return m_scanStatus;
}

void Monitor::SetScanStatus(const uint64_t& _scanStatus)
{
    m_scanStatus = _scanStatus;
    m_scanStatusHasBeenSet = true;
}

bool Monitor::ScanStatusHasBeenSet() const
{
    return m_scanStatusHasBeenSet;
}

string Monitor::GetLastScanFinishTime() const
{
    return m_lastScanFinishTime;
}

void Monitor::SetLastScanFinishTime(const string& _lastScanFinishTime)
{
    m_lastScanFinishTime = _lastScanFinishTime;
    m_lastScanFinishTimeHasBeenSet = true;
}

bool Monitor::LastScanFinishTimeHasBeenSet() const
{
    return m_lastScanFinishTimeHasBeenSet;
}

string Monitor::GetCurrentScanStartTime() const
{
    return m_currentScanStartTime;
}

void Monitor::SetCurrentScanStartTime(const string& _currentScanStartTime)
{
    m_currentScanStartTime = _currentScanStartTime;
    m_currentScanStartTimeHasBeenSet = true;
}

bool Monitor::CurrentScanStartTimeHasBeenSet() const
{
    return m_currentScanStartTimeHasBeenSet;
}

string Monitor::GetCreatedAt() const
{
    return m_createdAt;
}

void Monitor::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool Monitor::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string Monitor::GetUpdatedAt() const
{
    return m_updatedAt;
}

void Monitor::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool Monitor::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

uint64_t Monitor::GetAppid() const
{
    return m_appid;
}

void Monitor::SetAppid(const uint64_t& _appid)
{
    m_appid = _appid;
    m_appidHasBeenSet = true;
}

bool Monitor::AppidHasBeenSet() const
{
    return m_appidHasBeenSet;
}

uint64_t Monitor::GetContentScanStatus() const
{
    return m_contentScanStatus;
}

void Monitor::SetContentScanStatus(const uint64_t& _contentScanStatus)
{
    m_contentScanStatus = _contentScanStatus;
    m_contentScanStatusHasBeenSet = true;
}

bool Monitor::ContentScanStatusHasBeenSet() const
{
    return m_contentScanStatusHasBeenSet;
}

