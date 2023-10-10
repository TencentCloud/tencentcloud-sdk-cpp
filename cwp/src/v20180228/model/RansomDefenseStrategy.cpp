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

#include <tencentcloud/cwp/v20180228/model/RansomDefenseStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RansomDefenseStrategy::RansomDefenseStrategy() :
    m_idHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isAllHasBeenSet(false),
    m_includeDirHasBeenSet(false),
    m_excludeDirHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_weekdayHasBeenSet(false),
    m_hourHasBeenSet(false),
    m_saveDayHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_machineCountHasBeenSet(false)
{
}

CoreInternalOutcome RansomDefenseStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategy.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategy.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategy.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategy.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategy.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsAll") && !value["IsAll"].IsNull())
    {
        if (!value["IsAll"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategy.IsAll` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isAll = value["IsAll"].GetUint64();
        m_isAllHasBeenSet = true;
    }

    if (value.HasMember("IncludeDir") && !value["IncludeDir"].IsNull())
    {
        if (!value["IncludeDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategy.IncludeDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_includeDir = string(value["IncludeDir"].GetString());
        m_includeDirHasBeenSet = true;
    }

    if (value.HasMember("ExcludeDir") && !value["ExcludeDir"].IsNull())
    {
        if (!value["ExcludeDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategy.ExcludeDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_excludeDir = string(value["ExcludeDir"].GetString());
        m_excludeDirHasBeenSet = true;
    }

    if (value.HasMember("BackupType") && !value["BackupType"].IsNull())
    {
        if (!value["BackupType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategy.BackupType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupType = value["BackupType"].GetUint64();
        m_backupTypeHasBeenSet = true;
    }

    if (value.HasMember("Weekday") && !value["Weekday"].IsNull())
    {
        if (!value["Weekday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategy.Weekday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weekday = string(value["Weekday"].GetString());
        m_weekdayHasBeenSet = true;
    }

    if (value.HasMember("Hour") && !value["Hour"].IsNull())
    {
        if (!value["Hour"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategy.Hour` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hour = string(value["Hour"].GetString());
        m_hourHasBeenSet = true;
    }

    if (value.HasMember("SaveDay") && !value["SaveDay"].IsNull())
    {
        if (!value["SaveDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategy.SaveDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_saveDay = value["SaveDay"].GetUint64();
        m_saveDayHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategy.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategy.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("MachineCount") && !value["MachineCount"].IsNull())
    {
        if (!value["MachineCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategy.MachineCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_machineCount = value["MachineCount"].GetUint64();
        m_machineCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RansomDefenseStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_isAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAll, allocator);
    }

    if (m_includeDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_includeDir.c_str(), allocator).Move(), allocator);
    }

    if (m_excludeDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_excludeDir.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupType, allocator);
    }

    if (m_weekdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weekday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weekday.c_str(), allocator).Move(), allocator);
    }

    if (m_hourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hour.c_str(), allocator).Move(), allocator);
    }

    if (m_saveDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaveDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_saveDay, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_machineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machineCount, allocator);
    }

}


int64_t RansomDefenseStrategy::GetId() const
{
    return m_id;
}

void RansomDefenseStrategy::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RansomDefenseStrategy::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string RansomDefenseStrategy::GetUin() const
{
    return m_uin;
}

void RansomDefenseStrategy::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool RansomDefenseStrategy::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string RansomDefenseStrategy::GetName() const
{
    return m_name;
}

void RansomDefenseStrategy::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RansomDefenseStrategy::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RansomDefenseStrategy::GetDescription() const
{
    return m_description;
}

void RansomDefenseStrategy::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RansomDefenseStrategy::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t RansomDefenseStrategy::GetStatus() const
{
    return m_status;
}

void RansomDefenseStrategy::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RansomDefenseStrategy::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t RansomDefenseStrategy::GetIsAll() const
{
    return m_isAll;
}

void RansomDefenseStrategy::SetIsAll(const uint64_t& _isAll)
{
    m_isAll = _isAll;
    m_isAllHasBeenSet = true;
}

bool RansomDefenseStrategy::IsAllHasBeenSet() const
{
    return m_isAllHasBeenSet;
}

string RansomDefenseStrategy::GetIncludeDir() const
{
    return m_includeDir;
}

void RansomDefenseStrategy::SetIncludeDir(const string& _includeDir)
{
    m_includeDir = _includeDir;
    m_includeDirHasBeenSet = true;
}

bool RansomDefenseStrategy::IncludeDirHasBeenSet() const
{
    return m_includeDirHasBeenSet;
}

string RansomDefenseStrategy::GetExcludeDir() const
{
    return m_excludeDir;
}

void RansomDefenseStrategy::SetExcludeDir(const string& _excludeDir)
{
    m_excludeDir = _excludeDir;
    m_excludeDirHasBeenSet = true;
}

bool RansomDefenseStrategy::ExcludeDirHasBeenSet() const
{
    return m_excludeDirHasBeenSet;
}

uint64_t RansomDefenseStrategy::GetBackupType() const
{
    return m_backupType;
}

void RansomDefenseStrategy::SetBackupType(const uint64_t& _backupType)
{
    m_backupType = _backupType;
    m_backupTypeHasBeenSet = true;
}

bool RansomDefenseStrategy::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

string RansomDefenseStrategy::GetWeekday() const
{
    return m_weekday;
}

void RansomDefenseStrategy::SetWeekday(const string& _weekday)
{
    m_weekday = _weekday;
    m_weekdayHasBeenSet = true;
}

bool RansomDefenseStrategy::WeekdayHasBeenSet() const
{
    return m_weekdayHasBeenSet;
}

string RansomDefenseStrategy::GetHour() const
{
    return m_hour;
}

void RansomDefenseStrategy::SetHour(const string& _hour)
{
    m_hour = _hour;
    m_hourHasBeenSet = true;
}

bool RansomDefenseStrategy::HourHasBeenSet() const
{
    return m_hourHasBeenSet;
}

uint64_t RansomDefenseStrategy::GetSaveDay() const
{
    return m_saveDay;
}

void RansomDefenseStrategy::SetSaveDay(const uint64_t& _saveDay)
{
    m_saveDay = _saveDay;
    m_saveDayHasBeenSet = true;
}

bool RansomDefenseStrategy::SaveDayHasBeenSet() const
{
    return m_saveDayHasBeenSet;
}

string RansomDefenseStrategy::GetCreateTime() const
{
    return m_createTime;
}

void RansomDefenseStrategy::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RansomDefenseStrategy::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RansomDefenseStrategy::GetModifyTime() const
{
    return m_modifyTime;
}

void RansomDefenseStrategy::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool RansomDefenseStrategy::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

uint64_t RansomDefenseStrategy::GetMachineCount() const
{
    return m_machineCount;
}

void RansomDefenseStrategy::SetMachineCount(const uint64_t& _machineCount)
{
    m_machineCount = _machineCount;
    m_machineCountHasBeenSet = true;
}

bool RansomDefenseStrategy::MachineCountHasBeenSet() const
{
    return m_machineCountHasBeenSet;
}

