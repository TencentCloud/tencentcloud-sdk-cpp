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

#include <tencentcloud/cwp/v20180228/model/CreateRansomDefenseStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

CreateRansomDefenseStrategyRequest::CreateRansomDefenseStrategyRequest() :
    m_nameHasBeenSet(false),
    m_hourHasBeenSet(false),
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isAllHasBeenSet(false),
    m_includeDirHasBeenSet(false),
    m_excludeDirHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_weekdayHasBeenSet(false),
    m_saveDayHasBeenSet(false),
    m_machinesHasBeenSet(false)
{
}

string CreateRansomDefenseStrategyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_hourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hour";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hour.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_isAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAll, allocator);
    }

    if (m_includeDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeDir";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_includeDir.c_str(), allocator).Move(), allocator);
    }

    if (m_excludeDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeDir";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_excludeDir.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupType, allocator);
    }

    if (m_weekdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weekday";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_weekday.c_str(), allocator).Move(), allocator);
    }

    if (m_saveDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaveDay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_saveDay, allocator);
    }

    if (m_machinesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Machines";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_machines.begin(); itr != m_machines.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRansomDefenseStrategyRequest::GetName() const
{
    return m_name;
}

void CreateRansomDefenseStrategyRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateRansomDefenseStrategyRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateRansomDefenseStrategyRequest::GetHour() const
{
    return m_hour;
}

void CreateRansomDefenseStrategyRequest::SetHour(const string& _hour)
{
    m_hour = _hour;
    m_hourHasBeenSet = true;
}

bool CreateRansomDefenseStrategyRequest::HourHasBeenSet() const
{
    return m_hourHasBeenSet;
}

uint64_t CreateRansomDefenseStrategyRequest::GetId() const
{
    return m_id;
}

void CreateRansomDefenseStrategyRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CreateRansomDefenseStrategyRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CreateRansomDefenseStrategyRequest::GetDescription() const
{
    return m_description;
}

void CreateRansomDefenseStrategyRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateRansomDefenseStrategyRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t CreateRansomDefenseStrategyRequest::GetStatus() const
{
    return m_status;
}

void CreateRansomDefenseStrategyRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateRansomDefenseStrategyRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t CreateRansomDefenseStrategyRequest::GetIsAll() const
{
    return m_isAll;
}

void CreateRansomDefenseStrategyRequest::SetIsAll(const uint64_t& _isAll)
{
    m_isAll = _isAll;
    m_isAllHasBeenSet = true;
}

bool CreateRansomDefenseStrategyRequest::IsAllHasBeenSet() const
{
    return m_isAllHasBeenSet;
}

string CreateRansomDefenseStrategyRequest::GetIncludeDir() const
{
    return m_includeDir;
}

void CreateRansomDefenseStrategyRequest::SetIncludeDir(const string& _includeDir)
{
    m_includeDir = _includeDir;
    m_includeDirHasBeenSet = true;
}

bool CreateRansomDefenseStrategyRequest::IncludeDirHasBeenSet() const
{
    return m_includeDirHasBeenSet;
}

string CreateRansomDefenseStrategyRequest::GetExcludeDir() const
{
    return m_excludeDir;
}

void CreateRansomDefenseStrategyRequest::SetExcludeDir(const string& _excludeDir)
{
    m_excludeDir = _excludeDir;
    m_excludeDirHasBeenSet = true;
}

bool CreateRansomDefenseStrategyRequest::ExcludeDirHasBeenSet() const
{
    return m_excludeDirHasBeenSet;
}

uint64_t CreateRansomDefenseStrategyRequest::GetBackupType() const
{
    return m_backupType;
}

void CreateRansomDefenseStrategyRequest::SetBackupType(const uint64_t& _backupType)
{
    m_backupType = _backupType;
    m_backupTypeHasBeenSet = true;
}

bool CreateRansomDefenseStrategyRequest::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

string CreateRansomDefenseStrategyRequest::GetWeekday() const
{
    return m_weekday;
}

void CreateRansomDefenseStrategyRequest::SetWeekday(const string& _weekday)
{
    m_weekday = _weekday;
    m_weekdayHasBeenSet = true;
}

bool CreateRansomDefenseStrategyRequest::WeekdayHasBeenSet() const
{
    return m_weekdayHasBeenSet;
}

uint64_t CreateRansomDefenseStrategyRequest::GetSaveDay() const
{
    return m_saveDay;
}

void CreateRansomDefenseStrategyRequest::SetSaveDay(const uint64_t& _saveDay)
{
    m_saveDay = _saveDay;
    m_saveDayHasBeenSet = true;
}

bool CreateRansomDefenseStrategyRequest::SaveDayHasBeenSet() const
{
    return m_saveDayHasBeenSet;
}

vector<RansomDefenseStrategyMachineInfo> CreateRansomDefenseStrategyRequest::GetMachines() const
{
    return m_machines;
}

void CreateRansomDefenseStrategyRequest::SetMachines(const vector<RansomDefenseStrategyMachineInfo>& _machines)
{
    m_machines = _machines;
    m_machinesHasBeenSet = true;
}

bool CreateRansomDefenseStrategyRequest::MachinesHasBeenSet() const
{
    return m_machinesHasBeenSet;
}


