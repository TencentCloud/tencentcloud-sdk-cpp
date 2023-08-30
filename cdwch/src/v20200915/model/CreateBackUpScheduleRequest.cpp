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

#include <tencentcloud/cdwch/v20200915/model/CreateBackUpScheduleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

CreateBackUpScheduleRequest::CreateBackUpScheduleRequest() :
    m_instanceIdHasBeenSet(false),
    m_scheduleTypeHasBeenSet(false),
    m_operationTypeHasBeenSet(false),
    m_retainDaysHasBeenSet(false),
    m_scheduleIdHasBeenSet(false),
    m_weekDaysHasBeenSet(false),
    m_executeHourHasBeenSet(false),
    m_backUpTablesHasBeenSet(false)
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

    if (m_scheduleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduleType.c_str(), allocator).Move(), allocator);
    }

    if (m_operationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operationType.c_str(), allocator).Move(), allocator);
    }

    if (m_retainDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetainDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retainDays, allocator);
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

string CreateBackUpScheduleRequest::GetScheduleType() const
{
    return m_scheduleType;
}

void CreateBackUpScheduleRequest::SetScheduleType(const string& _scheduleType)
{
    m_scheduleType = _scheduleType;
    m_scheduleTypeHasBeenSet = true;
}

bool CreateBackUpScheduleRequest::ScheduleTypeHasBeenSet() const
{
    return m_scheduleTypeHasBeenSet;
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

int64_t CreateBackUpScheduleRequest::GetRetainDays() const
{
    return m_retainDays;
}

void CreateBackUpScheduleRequest::SetRetainDays(const int64_t& _retainDays)
{
    m_retainDays = _retainDays;
    m_retainDaysHasBeenSet = true;
}

bool CreateBackUpScheduleRequest::RetainDaysHasBeenSet() const
{
    return m_retainDaysHasBeenSet;
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


