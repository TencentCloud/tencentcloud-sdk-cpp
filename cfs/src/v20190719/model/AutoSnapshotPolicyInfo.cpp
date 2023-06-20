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

#include <tencentcloud/cfs/v20190719/model/AutoSnapshotPolicyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

AutoSnapshotPolicyInfo::AutoSnapshotPolicyInfo() :
    m_autoSnapshotPolicyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_fileSystemNumsHasBeenSet(false),
    m_dayOfWeekHasBeenSet(false),
    m_hourHasBeenSet(false),
    m_isActivatedHasBeenSet(false),
    m_nextActiveTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_aliveDaysHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_fileSystemsHasBeenSet(false),
    m_dayOfMonthHasBeenSet(false),
    m_intervalDaysHasBeenSet(false),
    m_crossRegionsAliveDaysHasBeenSet(false)
{
}

CoreInternalOutcome AutoSnapshotPolicyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoSnapshotPolicyId") && !value["AutoSnapshotPolicyId"].IsNull())
    {
        if (!value["AutoSnapshotPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicyInfo.AutoSnapshotPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoSnapshotPolicyId = string(value["AutoSnapshotPolicyId"].GetString());
        m_autoSnapshotPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicyInfo.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicyInfo.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("FileSystemNums") && !value["FileSystemNums"].IsNull())
    {
        if (!value["FileSystemNums"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicyInfo.FileSystemNums` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemNums = value["FileSystemNums"].GetUint64();
        m_fileSystemNumsHasBeenSet = true;
    }

    if (value.HasMember("DayOfWeek") && !value["DayOfWeek"].IsNull())
    {
        if (!value["DayOfWeek"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicyInfo.DayOfWeek` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dayOfWeek = string(value["DayOfWeek"].GetString());
        m_dayOfWeekHasBeenSet = true;
    }

    if (value.HasMember("Hour") && !value["Hour"].IsNull())
    {
        if (!value["Hour"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicyInfo.Hour` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hour = string(value["Hour"].GetString());
        m_hourHasBeenSet = true;
    }

    if (value.HasMember("IsActivated") && !value["IsActivated"].IsNull())
    {
        if (!value["IsActivated"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicyInfo.IsActivated` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isActivated = value["IsActivated"].GetUint64();
        m_isActivatedHasBeenSet = true;
    }

    if (value.HasMember("NextActiveTime") && !value["NextActiveTime"].IsNull())
    {
        if (!value["NextActiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicyInfo.NextActiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextActiveTime = string(value["NextActiveTime"].GetString());
        m_nextActiveTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicyInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicyInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AliveDays") && !value["AliveDays"].IsNull())
    {
        if (!value["AliveDays"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicyInfo.AliveDays` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aliveDays = value["AliveDays"].GetUint64();
        m_aliveDaysHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicyInfo.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("FileSystems") && !value["FileSystems"].IsNull())
    {
        if (!value["FileSystems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicyInfo.FileSystems` is not array type"));

        const rapidjson::Value &tmpValue = value["FileSystems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FileSystemByPolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fileSystems.push_back(item);
        }
        m_fileSystemsHasBeenSet = true;
    }

    if (value.HasMember("DayOfMonth") && !value["DayOfMonth"].IsNull())
    {
        if (!value["DayOfMonth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicyInfo.DayOfMonth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dayOfMonth = string(value["DayOfMonth"].GetString());
        m_dayOfMonthHasBeenSet = true;
    }

    if (value.HasMember("IntervalDays") && !value["IntervalDays"].IsNull())
    {
        if (!value["IntervalDays"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicyInfo.IntervalDays` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalDays = value["IntervalDays"].GetUint64();
        m_intervalDaysHasBeenSet = true;
    }

    if (value.HasMember("CrossRegionsAliveDays") && !value["CrossRegionsAliveDays"].IsNull())
    {
        if (!value["CrossRegionsAliveDays"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoSnapshotPolicyInfo.CrossRegionsAliveDays` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_crossRegionsAliveDays = value["CrossRegionsAliveDays"].GetUint64();
        m_crossRegionsAliveDaysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoSnapshotPolicyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoSnapshotPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSnapshotPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoSnapshotPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSystemNums, allocator);
    }

    if (m_dayOfWeekHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayOfWeek";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dayOfWeek.c_str(), allocator).Move(), allocator);
    }

    if (m_hourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hour.c_str(), allocator).Move(), allocator);
    }

    if (m_isActivatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsActivated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isActivated, allocator);
    }

    if (m_nextActiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextActiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextActiveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_aliveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliveDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aliveDays, allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fileSystems.begin(); itr != m_fileSystems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dayOfMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayOfMonth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dayOfMonth.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intervalDays, allocator);
    }

    if (m_crossRegionsAliveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossRegionsAliveDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crossRegionsAliveDays, allocator);
    }

}


string AutoSnapshotPolicyInfo::GetAutoSnapshotPolicyId() const
{
    return m_autoSnapshotPolicyId;
}

void AutoSnapshotPolicyInfo::SetAutoSnapshotPolicyId(const string& _autoSnapshotPolicyId)
{
    m_autoSnapshotPolicyId = _autoSnapshotPolicyId;
    m_autoSnapshotPolicyIdHasBeenSet = true;
}

bool AutoSnapshotPolicyInfo::AutoSnapshotPolicyIdHasBeenSet() const
{
    return m_autoSnapshotPolicyIdHasBeenSet;
}

string AutoSnapshotPolicyInfo::GetPolicyName() const
{
    return m_policyName;
}

void AutoSnapshotPolicyInfo::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool AutoSnapshotPolicyInfo::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string AutoSnapshotPolicyInfo::GetCreationTime() const
{
    return m_creationTime;
}

void AutoSnapshotPolicyInfo::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool AutoSnapshotPolicyInfo::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

uint64_t AutoSnapshotPolicyInfo::GetFileSystemNums() const
{
    return m_fileSystemNums;
}

void AutoSnapshotPolicyInfo::SetFileSystemNums(const uint64_t& _fileSystemNums)
{
    m_fileSystemNums = _fileSystemNums;
    m_fileSystemNumsHasBeenSet = true;
}

bool AutoSnapshotPolicyInfo::FileSystemNumsHasBeenSet() const
{
    return m_fileSystemNumsHasBeenSet;
}

string AutoSnapshotPolicyInfo::GetDayOfWeek() const
{
    return m_dayOfWeek;
}

void AutoSnapshotPolicyInfo::SetDayOfWeek(const string& _dayOfWeek)
{
    m_dayOfWeek = _dayOfWeek;
    m_dayOfWeekHasBeenSet = true;
}

bool AutoSnapshotPolicyInfo::DayOfWeekHasBeenSet() const
{
    return m_dayOfWeekHasBeenSet;
}

string AutoSnapshotPolicyInfo::GetHour() const
{
    return m_hour;
}

void AutoSnapshotPolicyInfo::SetHour(const string& _hour)
{
    m_hour = _hour;
    m_hourHasBeenSet = true;
}

bool AutoSnapshotPolicyInfo::HourHasBeenSet() const
{
    return m_hourHasBeenSet;
}

uint64_t AutoSnapshotPolicyInfo::GetIsActivated() const
{
    return m_isActivated;
}

void AutoSnapshotPolicyInfo::SetIsActivated(const uint64_t& _isActivated)
{
    m_isActivated = _isActivated;
    m_isActivatedHasBeenSet = true;
}

bool AutoSnapshotPolicyInfo::IsActivatedHasBeenSet() const
{
    return m_isActivatedHasBeenSet;
}

string AutoSnapshotPolicyInfo::GetNextActiveTime() const
{
    return m_nextActiveTime;
}

void AutoSnapshotPolicyInfo::SetNextActiveTime(const string& _nextActiveTime)
{
    m_nextActiveTime = _nextActiveTime;
    m_nextActiveTimeHasBeenSet = true;
}

bool AutoSnapshotPolicyInfo::NextActiveTimeHasBeenSet() const
{
    return m_nextActiveTimeHasBeenSet;
}

string AutoSnapshotPolicyInfo::GetStatus() const
{
    return m_status;
}

void AutoSnapshotPolicyInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AutoSnapshotPolicyInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t AutoSnapshotPolicyInfo::GetAppId() const
{
    return m_appId;
}

void AutoSnapshotPolicyInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AutoSnapshotPolicyInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

uint64_t AutoSnapshotPolicyInfo::GetAliveDays() const
{
    return m_aliveDays;
}

void AutoSnapshotPolicyInfo::SetAliveDays(const uint64_t& _aliveDays)
{
    m_aliveDays = _aliveDays;
    m_aliveDaysHasBeenSet = true;
}

bool AutoSnapshotPolicyInfo::AliveDaysHasBeenSet() const
{
    return m_aliveDaysHasBeenSet;
}

string AutoSnapshotPolicyInfo::GetRegionName() const
{
    return m_regionName;
}

void AutoSnapshotPolicyInfo::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool AutoSnapshotPolicyInfo::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

vector<FileSystemByPolicy> AutoSnapshotPolicyInfo::GetFileSystems() const
{
    return m_fileSystems;
}

void AutoSnapshotPolicyInfo::SetFileSystems(const vector<FileSystemByPolicy>& _fileSystems)
{
    m_fileSystems = _fileSystems;
    m_fileSystemsHasBeenSet = true;
}

bool AutoSnapshotPolicyInfo::FileSystemsHasBeenSet() const
{
    return m_fileSystemsHasBeenSet;
}

string AutoSnapshotPolicyInfo::GetDayOfMonth() const
{
    return m_dayOfMonth;
}

void AutoSnapshotPolicyInfo::SetDayOfMonth(const string& _dayOfMonth)
{
    m_dayOfMonth = _dayOfMonth;
    m_dayOfMonthHasBeenSet = true;
}

bool AutoSnapshotPolicyInfo::DayOfMonthHasBeenSet() const
{
    return m_dayOfMonthHasBeenSet;
}

uint64_t AutoSnapshotPolicyInfo::GetIntervalDays() const
{
    return m_intervalDays;
}

void AutoSnapshotPolicyInfo::SetIntervalDays(const uint64_t& _intervalDays)
{
    m_intervalDays = _intervalDays;
    m_intervalDaysHasBeenSet = true;
}

bool AutoSnapshotPolicyInfo::IntervalDaysHasBeenSet() const
{
    return m_intervalDaysHasBeenSet;
}

uint64_t AutoSnapshotPolicyInfo::GetCrossRegionsAliveDays() const
{
    return m_crossRegionsAliveDays;
}

void AutoSnapshotPolicyInfo::SetCrossRegionsAliveDays(const uint64_t& _crossRegionsAliveDays)
{
    m_crossRegionsAliveDays = _crossRegionsAliveDays;
    m_crossRegionsAliveDaysHasBeenSet = true;
}

bool AutoSnapshotPolicyInfo::CrossRegionsAliveDaysHasBeenSet() const
{
    return m_crossRegionsAliveDaysHasBeenSet;
}

