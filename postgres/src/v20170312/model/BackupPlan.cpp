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

#include <tencentcloud/postgres/v20170312/model/BackupPlan.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

BackupPlan::BackupPlan() :
    m_backupPeriodHasBeenSet(false),
    m_baseBackupRetentionPeriodHasBeenSet(false),
    m_minBackupStartTimeHasBeenSet(false),
    m_maxBackupStartTimeHasBeenSet(false)
{
}

CoreInternalOutcome BackupPlan::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupPeriod") && !value["BackupPeriod"].IsNull())
    {
        if (!value["BackupPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlan.BackupPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupPeriod = string(value["BackupPeriod"].GetString());
        m_backupPeriodHasBeenSet = true;
    }

    if (value.HasMember("BaseBackupRetentionPeriod") && !value["BaseBackupRetentionPeriod"].IsNull())
    {
        if (!value["BaseBackupRetentionPeriod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlan.BaseBackupRetentionPeriod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_baseBackupRetentionPeriod = value["BaseBackupRetentionPeriod"].GetUint64();
        m_baseBackupRetentionPeriodHasBeenSet = true;
    }

    if (value.HasMember("MinBackupStartTime") && !value["MinBackupStartTime"].IsNull())
    {
        if (!value["MinBackupStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlan.MinBackupStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_minBackupStartTime = string(value["MinBackupStartTime"].GetString());
        m_minBackupStartTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxBackupStartTime") && !value["MaxBackupStartTime"].IsNull())
    {
        if (!value["MaxBackupStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlan.MaxBackupStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxBackupStartTime = string(value["MaxBackupStartTime"].GetString());
        m_maxBackupStartTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupPlan::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backupPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_baseBackupRetentionPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseBackupRetentionPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baseBackupRetentionPeriod, allocator);
    }

    if (m_minBackupStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinBackupStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_minBackupStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_maxBackupStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBackupStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxBackupStartTime.c_str(), allocator).Move(), allocator);
    }

}


string BackupPlan::GetBackupPeriod() const
{
    return m_backupPeriod;
}

void BackupPlan::SetBackupPeriod(const string& _backupPeriod)
{
    m_backupPeriod = _backupPeriod;
    m_backupPeriodHasBeenSet = true;
}

bool BackupPlan::BackupPeriodHasBeenSet() const
{
    return m_backupPeriodHasBeenSet;
}

uint64_t BackupPlan::GetBaseBackupRetentionPeriod() const
{
    return m_baseBackupRetentionPeriod;
}

void BackupPlan::SetBaseBackupRetentionPeriod(const uint64_t& _baseBackupRetentionPeriod)
{
    m_baseBackupRetentionPeriod = _baseBackupRetentionPeriod;
    m_baseBackupRetentionPeriodHasBeenSet = true;
}

bool BackupPlan::BaseBackupRetentionPeriodHasBeenSet() const
{
    return m_baseBackupRetentionPeriodHasBeenSet;
}

string BackupPlan::GetMinBackupStartTime() const
{
    return m_minBackupStartTime;
}

void BackupPlan::SetMinBackupStartTime(const string& _minBackupStartTime)
{
    m_minBackupStartTime = _minBackupStartTime;
    m_minBackupStartTimeHasBeenSet = true;
}

bool BackupPlan::MinBackupStartTimeHasBeenSet() const
{
    return m_minBackupStartTimeHasBeenSet;
}

string BackupPlan::GetMaxBackupStartTime() const
{
    return m_maxBackupStartTime;
}

void BackupPlan::SetMaxBackupStartTime(const string& _maxBackupStartTime)
{
    m_maxBackupStartTime = _maxBackupStartTime;
    m_maxBackupStartTimeHasBeenSet = true;
}

bool BackupPlan::MaxBackupStartTimeHasBeenSet() const
{
    return m_maxBackupStartTimeHasBeenSet;
}

