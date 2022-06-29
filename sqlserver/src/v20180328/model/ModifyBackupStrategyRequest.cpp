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

#include <tencentcloud/sqlserver/v20180328/model/ModifyBackupStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

ModifyBackupStrategyRequest::ModifyBackupStrategyRequest() :
    m_instanceIdHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_backupTimeHasBeenSet(false),
    m_backupDayHasBeenSet(false),
    m_backupModelHasBeenSet(false),
    m_backupCycleHasBeenSet(false),
    m_backupSaveDaysHasBeenSet(false)
{
}

string ModifyBackupStrategyRequest::ToJsonString() const
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

    if (m_backupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupType.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupTime, allocator);
    }

    if (m_backupDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupDay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupDay, allocator);
    }

    if (m_backupModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupModel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupModel.c_str(), allocator).Move(), allocator);
    }

    if (m_backupCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupCycle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backupCycle.begin(); itr != m_backupCycle.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_backupSaveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSaveDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupSaveDays, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyBackupStrategyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyBackupStrategyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyBackupStrategyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyBackupStrategyRequest::GetBackupType() const
{
    return m_backupType;
}

void ModifyBackupStrategyRequest::SetBackupType(const string& _backupType)
{
    m_backupType = _backupType;
    m_backupTypeHasBeenSet = true;
}

bool ModifyBackupStrategyRequest::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

uint64_t ModifyBackupStrategyRequest::GetBackupTime() const
{
    return m_backupTime;
}

void ModifyBackupStrategyRequest::SetBackupTime(const uint64_t& _backupTime)
{
    m_backupTime = _backupTime;
    m_backupTimeHasBeenSet = true;
}

bool ModifyBackupStrategyRequest::BackupTimeHasBeenSet() const
{
    return m_backupTimeHasBeenSet;
}

uint64_t ModifyBackupStrategyRequest::GetBackupDay() const
{
    return m_backupDay;
}

void ModifyBackupStrategyRequest::SetBackupDay(const uint64_t& _backupDay)
{
    m_backupDay = _backupDay;
    m_backupDayHasBeenSet = true;
}

bool ModifyBackupStrategyRequest::BackupDayHasBeenSet() const
{
    return m_backupDayHasBeenSet;
}

string ModifyBackupStrategyRequest::GetBackupModel() const
{
    return m_backupModel;
}

void ModifyBackupStrategyRequest::SetBackupModel(const string& _backupModel)
{
    m_backupModel = _backupModel;
    m_backupModelHasBeenSet = true;
}

bool ModifyBackupStrategyRequest::BackupModelHasBeenSet() const
{
    return m_backupModelHasBeenSet;
}

vector<uint64_t> ModifyBackupStrategyRequest::GetBackupCycle() const
{
    return m_backupCycle;
}

void ModifyBackupStrategyRequest::SetBackupCycle(const vector<uint64_t>& _backupCycle)
{
    m_backupCycle = _backupCycle;
    m_backupCycleHasBeenSet = true;
}

bool ModifyBackupStrategyRequest::BackupCycleHasBeenSet() const
{
    return m_backupCycleHasBeenSet;
}

uint64_t ModifyBackupStrategyRequest::GetBackupSaveDays() const
{
    return m_backupSaveDays;
}

void ModifyBackupStrategyRequest::SetBackupSaveDays(const uint64_t& _backupSaveDays)
{
    m_backupSaveDays = _backupSaveDays;
    m_backupSaveDaysHasBeenSet = true;
}

bool ModifyBackupStrategyRequest::BackupSaveDaysHasBeenSet() const
{
    return m_backupSaveDaysHasBeenSet;
}


