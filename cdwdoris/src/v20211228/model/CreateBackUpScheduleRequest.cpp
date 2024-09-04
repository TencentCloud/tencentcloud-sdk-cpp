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

#include <tencentcloud/cdwdoris/v20211228/model/CreateBackUpScheduleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

CreateBackUpScheduleRequest::CreateBackUpScheduleRequest() :
    m_instanceIdHasBeenSet(false),
    m_operationTypeHasBeenSet(false),
    m_scheduleIdHasBeenSet(false),
    m_weekDaysHasBeenSet(false),
    m_executeHourHasBeenSet(false),
    m_backUpTablesHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_dorisSourceInfoHasBeenSet(false),
    m_backupTimeTypeHasBeenSet(false),
    m_restoreTypeHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_cosSourceInfoHasBeenSet(false),
    m_scheduleNameHasBeenSet(false),
    m_scheduleInfoHasBeenSet(false),
    m_updateStatusHasBeenSet(false),
    m_cosBucketHasBeenSet(false)
{
}

string CreateBackUpScheduleRequest::ToJsonString() const
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

    if (m_operationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operationType.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scheduleId, allocator);
    }

    if (m_weekDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeekDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_weekDays.c_str(), allocator).Move(), allocator);
    }

    if (m_executeHourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteHour";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_executeHour, allocator);
    }

    if (m_backUpTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackUpTables";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_backUpTables.begin(); itr != m_backUpTables.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_backupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupType, allocator);
    }

    if (m_dorisSourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DorisSourceInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dorisSourceInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_backupTimeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTimeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupTimeType, allocator);
    }

    if (m_restoreTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_restoreType, allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_authType, allocator);
    }

    if (m_cosSourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosSourceInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosSourceInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_scheduleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduleName.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scheduleInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_updateStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updateStatus, allocator);
    }

    if (m_cosBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosBucket.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBackUpScheduleRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateBackUpScheduleRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateBackUpScheduleRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateBackUpScheduleRequest::GetOperationType() const
{
    return m_operationType;
}

void CreateBackUpScheduleRequest::SetOperationType(const string& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool CreateBackUpScheduleRequest::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

int64_t CreateBackUpScheduleRequest::GetScheduleId() const
{
    return m_scheduleId;
}

void CreateBackUpScheduleRequest::SetScheduleId(const int64_t& _scheduleId)
{
    m_scheduleId = _scheduleId;
    m_scheduleIdHasBeenSet = true;
}

bool CreateBackUpScheduleRequest::ScheduleIdHasBeenSet() const
{
    return m_scheduleIdHasBeenSet;
}

string CreateBackUpScheduleRequest::GetWeekDays() const
{
    return m_weekDays;
}

void CreateBackUpScheduleRequest::SetWeekDays(const string& _weekDays)
{
    m_weekDays = _weekDays;
    m_weekDaysHasBeenSet = true;
}

bool CreateBackUpScheduleRequest::WeekDaysHasBeenSet() const
{
    return m_weekDaysHasBeenSet;
}

int64_t CreateBackUpScheduleRequest::GetExecuteHour() const
{
    return m_executeHour;
}

void CreateBackUpScheduleRequest::SetExecuteHour(const int64_t& _executeHour)
{
    m_executeHour = _executeHour;
    m_executeHourHasBeenSet = true;
}

bool CreateBackUpScheduleRequest::ExecuteHourHasBeenSet() const
{
    return m_executeHourHasBeenSet;
}

vector<BackupTableContent> CreateBackUpScheduleRequest::GetBackUpTables() const
{
    return m_backUpTables;
}

void CreateBackUpScheduleRequest::SetBackUpTables(const vector<BackupTableContent>& _backUpTables)
{
    m_backUpTables = _backUpTables;
    m_backUpTablesHasBeenSet = true;
}

bool CreateBackUpScheduleRequest::BackUpTablesHasBeenSet() const
{
    return m_backUpTablesHasBeenSet;
}

int64_t CreateBackUpScheduleRequest::GetBackupType() const
{
    return m_backupType;
}

void CreateBackUpScheduleRequest::SetBackupType(const int64_t& _backupType)
{
    m_backupType = _backupType;
    m_backupTypeHasBeenSet = true;
}

bool CreateBackUpScheduleRequest::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

DorisSourceInfo CreateBackUpScheduleRequest::GetDorisSourceInfo() const
{
    return m_dorisSourceInfo;
}

void CreateBackUpScheduleRequest::SetDorisSourceInfo(const DorisSourceInfo& _dorisSourceInfo)
{
    m_dorisSourceInfo = _dorisSourceInfo;
    m_dorisSourceInfoHasBeenSet = true;
}

bool CreateBackUpScheduleRequest::DorisSourceInfoHasBeenSet() const
{
    return m_dorisSourceInfoHasBeenSet;
}

int64_t CreateBackUpScheduleRequest::GetBackupTimeType() const
{
    return m_backupTimeType;
}

void CreateBackUpScheduleRequest::SetBackupTimeType(const int64_t& _backupTimeType)
{
    m_backupTimeType = _backupTimeType;
    m_backupTimeTypeHasBeenSet = true;
}

bool CreateBackUpScheduleRequest::BackupTimeTypeHasBeenSet() const
{
    return m_backupTimeTypeHasBeenSet;
}

int64_t CreateBackUpScheduleRequest::GetRestoreType() const
{
    return m_restoreType;
}

void CreateBackUpScheduleRequest::SetRestoreType(const int64_t& _restoreType)
{
    m_restoreType = _restoreType;
    m_restoreTypeHasBeenSet = true;
}

bool CreateBackUpScheduleRequest::RestoreTypeHasBeenSet() const
{
    return m_restoreTypeHasBeenSet;
}

int64_t CreateBackUpScheduleRequest::GetAuthType() const
{
    return m_authType;
}

void CreateBackUpScheduleRequest::SetAuthType(const int64_t& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool CreateBackUpScheduleRequest::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

CosSourceInfo CreateBackUpScheduleRequest::GetCosSourceInfo() const
{
    return m_cosSourceInfo;
}

void CreateBackUpScheduleRequest::SetCosSourceInfo(const CosSourceInfo& _cosSourceInfo)
{
    m_cosSourceInfo = _cosSourceInfo;
    m_cosSourceInfoHasBeenSet = true;
}

bool CreateBackUpScheduleRequest::CosSourceInfoHasBeenSet() const
{
    return m_cosSourceInfoHasBeenSet;
}

string CreateBackUpScheduleRequest::GetScheduleName() const
{
    return m_scheduleName;
}

void CreateBackUpScheduleRequest::SetScheduleName(const string& _scheduleName)
{
    m_scheduleName = _scheduleName;
    m_scheduleNameHasBeenSet = true;
}

bool CreateBackUpScheduleRequest::ScheduleNameHasBeenSet() const
{
    return m_scheduleNameHasBeenSet;
}

ScheduleInfo CreateBackUpScheduleRequest::GetScheduleInfo() const
{
    return m_scheduleInfo;
}

void CreateBackUpScheduleRequest::SetScheduleInfo(const ScheduleInfo& _scheduleInfo)
{
    m_scheduleInfo = _scheduleInfo;
    m_scheduleInfoHasBeenSet = true;
}

bool CreateBackUpScheduleRequest::ScheduleInfoHasBeenSet() const
{
    return m_scheduleInfoHasBeenSet;
}

int64_t CreateBackUpScheduleRequest::GetUpdateStatus() const
{
    return m_updateStatus;
}

void CreateBackUpScheduleRequest::SetUpdateStatus(const int64_t& _updateStatus)
{
    m_updateStatus = _updateStatus;
    m_updateStatusHasBeenSet = true;
}

bool CreateBackUpScheduleRequest::UpdateStatusHasBeenSet() const
{
    return m_updateStatusHasBeenSet;
}

string CreateBackUpScheduleRequest::GetCosBucket() const
{
    return m_cosBucket;
}

void CreateBackUpScheduleRequest::SetCosBucket(const string& _cosBucket)
{
    m_cosBucket = _cosBucket;
    m_cosBucketHasBeenSet = true;
}

bool CreateBackUpScheduleRequest::CosBucketHasBeenSet() const
{
    return m_cosBucketHasBeenSet;
}


