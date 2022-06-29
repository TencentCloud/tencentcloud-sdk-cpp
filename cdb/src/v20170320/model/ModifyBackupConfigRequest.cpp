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

#include <tencentcloud/cdb/v20170320/model/ModifyBackupConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ModifyBackupConfigRequest::ModifyBackupConfigRequest() :
    m_instanceIdHasBeenSet(false),
    m_expireDaysHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_binlogExpireDaysHasBeenSet(false),
    m_backupTimeWindowHasBeenSet(false),
    m_enableBackupPeriodSaveHasBeenSet(false),
    m_enableBackupPeriodLongTermSaveHasBeenSet(false),
    m_backupPeriodSaveDaysHasBeenSet(false),
    m_backupPeriodSaveIntervalHasBeenSet(false),
    m_backupPeriodSaveCountHasBeenSet(false),
    m_startBackupPeriodSaveDateHasBeenSet(false)
{
}

string ModifyBackupConfigRequest::ToJsonString() const
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

    if (m_expireDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireDays, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_backupMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_binlogExpireDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogExpireDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_binlogExpireDays, allocator);
    }

    if (m_backupTimeWindowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTimeWindow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupTimeWindow.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_enableBackupPeriodSaveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableBackupPeriodSave";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enableBackupPeriodSave.c_str(), allocator).Move(), allocator);
    }

    if (m_enableBackupPeriodLongTermSaveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableBackupPeriodLongTermSave";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enableBackupPeriodLongTermSave.c_str(), allocator).Move(), allocator);
    }

    if (m_backupPeriodSaveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPeriodSaveDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupPeriodSaveDays, allocator);
    }

    if (m_backupPeriodSaveIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPeriodSaveInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupPeriodSaveInterval.c_str(), allocator).Move(), allocator);
    }

    if (m_backupPeriodSaveCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPeriodSaveCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupPeriodSaveCount, allocator);
    }

    if (m_startBackupPeriodSaveDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartBackupPeriodSaveDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startBackupPeriodSaveDate.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyBackupConfigRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyBackupConfigRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyBackupConfigRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ModifyBackupConfigRequest::GetExpireDays() const
{
    return m_expireDays;
}

void ModifyBackupConfigRequest::SetExpireDays(const int64_t& _expireDays)
{
    m_expireDays = _expireDays;
    m_expireDaysHasBeenSet = true;
}

bool ModifyBackupConfigRequest::ExpireDaysHasBeenSet() const
{
    return m_expireDaysHasBeenSet;
}

string ModifyBackupConfigRequest::GetStartTime() const
{
    return m_startTime;
}

void ModifyBackupConfigRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModifyBackupConfigRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ModifyBackupConfigRequest::GetBackupMethod() const
{
    return m_backupMethod;
}

void ModifyBackupConfigRequest::SetBackupMethod(const string& _backupMethod)
{
    m_backupMethod = _backupMethod;
    m_backupMethodHasBeenSet = true;
}

bool ModifyBackupConfigRequest::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

int64_t ModifyBackupConfigRequest::GetBinlogExpireDays() const
{
    return m_binlogExpireDays;
}

void ModifyBackupConfigRequest::SetBinlogExpireDays(const int64_t& _binlogExpireDays)
{
    m_binlogExpireDays = _binlogExpireDays;
    m_binlogExpireDaysHasBeenSet = true;
}

bool ModifyBackupConfigRequest::BinlogExpireDaysHasBeenSet() const
{
    return m_binlogExpireDaysHasBeenSet;
}

CommonTimeWindow ModifyBackupConfigRequest::GetBackupTimeWindow() const
{
    return m_backupTimeWindow;
}

void ModifyBackupConfigRequest::SetBackupTimeWindow(const CommonTimeWindow& _backupTimeWindow)
{
    m_backupTimeWindow = _backupTimeWindow;
    m_backupTimeWindowHasBeenSet = true;
}

bool ModifyBackupConfigRequest::BackupTimeWindowHasBeenSet() const
{
    return m_backupTimeWindowHasBeenSet;
}

string ModifyBackupConfigRequest::GetEnableBackupPeriodSave() const
{
    return m_enableBackupPeriodSave;
}

void ModifyBackupConfigRequest::SetEnableBackupPeriodSave(const string& _enableBackupPeriodSave)
{
    m_enableBackupPeriodSave = _enableBackupPeriodSave;
    m_enableBackupPeriodSaveHasBeenSet = true;
}

bool ModifyBackupConfigRequest::EnableBackupPeriodSaveHasBeenSet() const
{
    return m_enableBackupPeriodSaveHasBeenSet;
}

string ModifyBackupConfigRequest::GetEnableBackupPeriodLongTermSave() const
{
    return m_enableBackupPeriodLongTermSave;
}

void ModifyBackupConfigRequest::SetEnableBackupPeriodLongTermSave(const string& _enableBackupPeriodLongTermSave)
{
    m_enableBackupPeriodLongTermSave = _enableBackupPeriodLongTermSave;
    m_enableBackupPeriodLongTermSaveHasBeenSet = true;
}

bool ModifyBackupConfigRequest::EnableBackupPeriodLongTermSaveHasBeenSet() const
{
    return m_enableBackupPeriodLongTermSaveHasBeenSet;
}

int64_t ModifyBackupConfigRequest::GetBackupPeriodSaveDays() const
{
    return m_backupPeriodSaveDays;
}

void ModifyBackupConfigRequest::SetBackupPeriodSaveDays(const int64_t& _backupPeriodSaveDays)
{
    m_backupPeriodSaveDays = _backupPeriodSaveDays;
    m_backupPeriodSaveDaysHasBeenSet = true;
}

bool ModifyBackupConfigRequest::BackupPeriodSaveDaysHasBeenSet() const
{
    return m_backupPeriodSaveDaysHasBeenSet;
}

string ModifyBackupConfigRequest::GetBackupPeriodSaveInterval() const
{
    return m_backupPeriodSaveInterval;
}

void ModifyBackupConfigRequest::SetBackupPeriodSaveInterval(const string& _backupPeriodSaveInterval)
{
    m_backupPeriodSaveInterval = _backupPeriodSaveInterval;
    m_backupPeriodSaveIntervalHasBeenSet = true;
}

bool ModifyBackupConfigRequest::BackupPeriodSaveIntervalHasBeenSet() const
{
    return m_backupPeriodSaveIntervalHasBeenSet;
}

int64_t ModifyBackupConfigRequest::GetBackupPeriodSaveCount() const
{
    return m_backupPeriodSaveCount;
}

void ModifyBackupConfigRequest::SetBackupPeriodSaveCount(const int64_t& _backupPeriodSaveCount)
{
    m_backupPeriodSaveCount = _backupPeriodSaveCount;
    m_backupPeriodSaveCountHasBeenSet = true;
}

bool ModifyBackupConfigRequest::BackupPeriodSaveCountHasBeenSet() const
{
    return m_backupPeriodSaveCountHasBeenSet;
}

string ModifyBackupConfigRequest::GetStartBackupPeriodSaveDate() const
{
    return m_startBackupPeriodSaveDate;
}

void ModifyBackupConfigRequest::SetStartBackupPeriodSaveDate(const string& _startBackupPeriodSaveDate)
{
    m_startBackupPeriodSaveDate = _startBackupPeriodSaveDate;
    m_startBackupPeriodSaveDateHasBeenSet = true;
}

bool ModifyBackupConfigRequest::StartBackupPeriodSaveDateHasBeenSet() const
{
    return m_startBackupPeriodSaveDateHasBeenSet;
}


