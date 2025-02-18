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

#include <tencentcloud/postgres/v20170312/model/CreateBackupPlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

CreateBackupPlanRequest::CreateBackupPlanRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_planNameHasBeenSet(false),
    m_backupPeriodTypeHasBeenSet(false),
    m_backupPeriodHasBeenSet(false),
    m_minBackupStartTimeHasBeenSet(false),
    m_maxBackupStartTimeHasBeenSet(false),
    m_baseBackupRetentionPeriodHasBeenSet(false)
{
}

string CreateBackupPlanRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_planNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_planName.c_str(), allocator).Move(), allocator);
    }

    if (m_backupPeriodTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPeriodType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupPeriodType.c_str(), allocator).Move(), allocator);
    }

    if (m_backupPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backupPeriod.begin(); itr != m_backupPeriod.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_minBackupStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinBackupStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_minBackupStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_maxBackupStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBackupStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_maxBackupStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_baseBackupRetentionPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseBackupRetentionPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_baseBackupRetentionPeriod, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBackupPlanRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void CreateBackupPlanRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool CreateBackupPlanRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

string CreateBackupPlanRequest::GetPlanName() const
{
    return m_planName;
}

void CreateBackupPlanRequest::SetPlanName(const string& _planName)
{
    m_planName = _planName;
    m_planNameHasBeenSet = true;
}

bool CreateBackupPlanRequest::PlanNameHasBeenSet() const
{
    return m_planNameHasBeenSet;
}

string CreateBackupPlanRequest::GetBackupPeriodType() const
{
    return m_backupPeriodType;
}

void CreateBackupPlanRequest::SetBackupPeriodType(const string& _backupPeriodType)
{
    m_backupPeriodType = _backupPeriodType;
    m_backupPeriodTypeHasBeenSet = true;
}

bool CreateBackupPlanRequest::BackupPeriodTypeHasBeenSet() const
{
    return m_backupPeriodTypeHasBeenSet;
}

vector<string> CreateBackupPlanRequest::GetBackupPeriod() const
{
    return m_backupPeriod;
}

void CreateBackupPlanRequest::SetBackupPeriod(const vector<string>& _backupPeriod)
{
    m_backupPeriod = _backupPeriod;
    m_backupPeriodHasBeenSet = true;
}

bool CreateBackupPlanRequest::BackupPeriodHasBeenSet() const
{
    return m_backupPeriodHasBeenSet;
}

string CreateBackupPlanRequest::GetMinBackupStartTime() const
{
    return m_minBackupStartTime;
}

void CreateBackupPlanRequest::SetMinBackupStartTime(const string& _minBackupStartTime)
{
    m_minBackupStartTime = _minBackupStartTime;
    m_minBackupStartTimeHasBeenSet = true;
}

bool CreateBackupPlanRequest::MinBackupStartTimeHasBeenSet() const
{
    return m_minBackupStartTimeHasBeenSet;
}

string CreateBackupPlanRequest::GetMaxBackupStartTime() const
{
    return m_maxBackupStartTime;
}

void CreateBackupPlanRequest::SetMaxBackupStartTime(const string& _maxBackupStartTime)
{
    m_maxBackupStartTime = _maxBackupStartTime;
    m_maxBackupStartTimeHasBeenSet = true;
}

bool CreateBackupPlanRequest::MaxBackupStartTimeHasBeenSet() const
{
    return m_maxBackupStartTimeHasBeenSet;
}

uint64_t CreateBackupPlanRequest::GetBaseBackupRetentionPeriod() const
{
    return m_baseBackupRetentionPeriod;
}

void CreateBackupPlanRequest::SetBaseBackupRetentionPeriod(const uint64_t& _baseBackupRetentionPeriod)
{
    m_baseBackupRetentionPeriod = _baseBackupRetentionPeriod;
    m_baseBackupRetentionPeriodHasBeenSet = true;
}

bool CreateBackupPlanRequest::BaseBackupRetentionPeriodHasBeenSet() const
{
    return m_baseBackupRetentionPeriodHasBeenSet;
}


