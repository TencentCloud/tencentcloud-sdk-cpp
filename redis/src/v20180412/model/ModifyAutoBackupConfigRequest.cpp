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

#include <tencentcloud/redis/v20180412/model/ModifyAutoBackupConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

ModifyAutoBackupConfigRequest::ModifyAutoBackupConfigRequest() :
    m_instanceIdHasBeenSet(false),
    m_weekDaysHasBeenSet(false),
    m_timePeriodHasBeenSet(false),
    m_autoBackupTypeHasBeenSet(false),
    m_backupStorageDaysHasBeenSet(false)
{
}

string ModifyAutoBackupConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_weekDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeekDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_weekDays.begin(); itr != m_weekDays.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimePeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timePeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_autoBackupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoBackupType, allocator);
    }

    if (m_backupStorageDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupStorageDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupStorageDays, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAutoBackupConfigRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyAutoBackupConfigRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyAutoBackupConfigRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> ModifyAutoBackupConfigRequest::GetWeekDays() const
{
    return m_weekDays;
}

void ModifyAutoBackupConfigRequest::SetWeekDays(const vector<string>& _weekDays)
{
    m_weekDays = _weekDays;
    m_weekDaysHasBeenSet = true;
}

bool ModifyAutoBackupConfigRequest::WeekDaysHasBeenSet() const
{
    return m_weekDaysHasBeenSet;
}

string ModifyAutoBackupConfigRequest::GetTimePeriod() const
{
    return m_timePeriod;
}

void ModifyAutoBackupConfigRequest::SetTimePeriod(const string& _timePeriod)
{
    m_timePeriod = _timePeriod;
    m_timePeriodHasBeenSet = true;
}

bool ModifyAutoBackupConfigRequest::TimePeriodHasBeenSet() const
{
    return m_timePeriodHasBeenSet;
}

int64_t ModifyAutoBackupConfigRequest::GetAutoBackupType() const
{
    return m_autoBackupType;
}

void ModifyAutoBackupConfigRequest::SetAutoBackupType(const int64_t& _autoBackupType)
{
    m_autoBackupType = _autoBackupType;
    m_autoBackupTypeHasBeenSet = true;
}

bool ModifyAutoBackupConfigRequest::AutoBackupTypeHasBeenSet() const
{
    return m_autoBackupTypeHasBeenSet;
}

int64_t ModifyAutoBackupConfigRequest::GetBackupStorageDays() const
{
    return m_backupStorageDays;
}

void ModifyAutoBackupConfigRequest::SetBackupStorageDays(const int64_t& _backupStorageDays)
{
    m_backupStorageDays = _backupStorageDays;
    m_backupStorageDaysHasBeenSet = true;
}

bool ModifyAutoBackupConfigRequest::BackupStorageDaysHasBeenSet() const
{
    return m_backupStorageDaysHasBeenSet;
}


