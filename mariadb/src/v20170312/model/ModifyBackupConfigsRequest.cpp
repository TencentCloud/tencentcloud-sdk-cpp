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

#include <tencentcloud/mariadb/v20170312/model/ModifyBackupConfigsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

ModifyBackupConfigsRequest::ModifyBackupConfigsRequest() :
    m_instanceIdHasBeenSet(false),
    m_daysHasBeenSet(false),
    m_startBackupTimeHasBeenSet(false),
    m_endBackupTimeHasBeenSet(false),
    m_weekDaysHasBeenSet(false),
    m_archiveDaysHasBeenSet(false),
    m_backupConfigSetHasBeenSet(false)
{
}

string ModifyBackupConfigsRequest::ToJsonString() const
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

    if (m_daysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Days";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_days, allocator);
    }

    if (m_startBackupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartBackupTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startBackupTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endBackupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndBackupTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endBackupTime.c_str(), allocator).Move(), allocator);
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

    if (m_archiveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchiveDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_archiveDays, allocator);
    }

    if (m_backupConfigSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupConfigSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_backupConfigSet.begin(); itr != m_backupConfigSet.end(); ++itr, ++i)
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


string ModifyBackupConfigsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyBackupConfigsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyBackupConfigsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t ModifyBackupConfigsRequest::GetDays() const
{
    return m_days;
}

void ModifyBackupConfigsRequest::SetDays(const uint64_t& _days)
{
    m_days = _days;
    m_daysHasBeenSet = true;
}

bool ModifyBackupConfigsRequest::DaysHasBeenSet() const
{
    return m_daysHasBeenSet;
}

string ModifyBackupConfigsRequest::GetStartBackupTime() const
{
    return m_startBackupTime;
}

void ModifyBackupConfigsRequest::SetStartBackupTime(const string& _startBackupTime)
{
    m_startBackupTime = _startBackupTime;
    m_startBackupTimeHasBeenSet = true;
}

bool ModifyBackupConfigsRequest::StartBackupTimeHasBeenSet() const
{
    return m_startBackupTimeHasBeenSet;
}

string ModifyBackupConfigsRequest::GetEndBackupTime() const
{
    return m_endBackupTime;
}

void ModifyBackupConfigsRequest::SetEndBackupTime(const string& _endBackupTime)
{
    m_endBackupTime = _endBackupTime;
    m_endBackupTimeHasBeenSet = true;
}

bool ModifyBackupConfigsRequest::EndBackupTimeHasBeenSet() const
{
    return m_endBackupTimeHasBeenSet;
}

vector<string> ModifyBackupConfigsRequest::GetWeekDays() const
{
    return m_weekDays;
}

void ModifyBackupConfigsRequest::SetWeekDays(const vector<string>& _weekDays)
{
    m_weekDays = _weekDays;
    m_weekDaysHasBeenSet = true;
}

bool ModifyBackupConfigsRequest::WeekDaysHasBeenSet() const
{
    return m_weekDaysHasBeenSet;
}

int64_t ModifyBackupConfigsRequest::GetArchiveDays() const
{
    return m_archiveDays;
}

void ModifyBackupConfigsRequest::SetArchiveDays(const int64_t& _archiveDays)
{
    m_archiveDays = _archiveDays;
    m_archiveDaysHasBeenSet = true;
}

bool ModifyBackupConfigsRequest::ArchiveDaysHasBeenSet() const
{
    return m_archiveDaysHasBeenSet;
}

vector<NewBackupConfig> ModifyBackupConfigsRequest::GetBackupConfigSet() const
{
    return m_backupConfigSet;
}

void ModifyBackupConfigsRequest::SetBackupConfigSet(const vector<NewBackupConfig>& _backupConfigSet)
{
    m_backupConfigSet = _backupConfigSet;
    m_backupConfigSetHasBeenSet = true;
}

bool ModifyBackupConfigsRequest::BackupConfigSetHasBeenSet() const
{
    return m_backupConfigSetHasBeenSet;
}


