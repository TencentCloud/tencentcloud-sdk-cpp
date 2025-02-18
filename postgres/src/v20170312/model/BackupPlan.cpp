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
    m_maxBackupStartTimeHasBeenSet(false),
    m_planIdHasBeenSet(false),
    m_planNameHasBeenSet(false),
    m_logBackupRetentionPeriodHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_planTypeHasBeenSet(false),
    m_backupPeriodTypeHasBeenSet(false)
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

    if (value.HasMember("PlanId") && !value["PlanId"].IsNull())
    {
        if (!value["PlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlan.PlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planId = string(value["PlanId"].GetString());
        m_planIdHasBeenSet = true;
    }

    if (value.HasMember("PlanName") && !value["PlanName"].IsNull())
    {
        if (!value["PlanName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlan.PlanName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planName = string(value["PlanName"].GetString());
        m_planNameHasBeenSet = true;
    }

    if (value.HasMember("LogBackupRetentionPeriod") && !value["LogBackupRetentionPeriod"].IsNull())
    {
        if (!value["LogBackupRetentionPeriod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlan.LogBackupRetentionPeriod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logBackupRetentionPeriod = value["LogBackupRetentionPeriod"].GetUint64();
        m_logBackupRetentionPeriodHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlan.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlan.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("PlanType") && !value["PlanType"].IsNull())
    {
        if (!value["PlanType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlan.PlanType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planType = string(value["PlanType"].GetString());
        m_planTypeHasBeenSet = true;
    }

    if (value.HasMember("BackupPeriodType") && !value["BackupPeriodType"].IsNull())
    {
        if (!value["BackupPeriodType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPlan.BackupPeriodType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupPeriodType = string(value["BackupPeriodType"].GetString());
        m_backupPeriodTypeHasBeenSet = true;
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

    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_planId.c_str(), allocator).Move(), allocator);
    }

    if (m_planNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_planName.c_str(), allocator).Move(), allocator);
    }

    if (m_logBackupRetentionPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogBackupRetentionPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logBackupRetentionPeriod, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_planTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_planType.c_str(), allocator).Move(), allocator);
    }

    if (m_backupPeriodTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPeriodType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupPeriodType.c_str(), allocator).Move(), allocator);
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

string BackupPlan::GetPlanId() const
{
    return m_planId;
}

void BackupPlan::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool BackupPlan::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

string BackupPlan::GetPlanName() const
{
    return m_planName;
}

void BackupPlan::SetPlanName(const string& _planName)
{
    m_planName = _planName;
    m_planNameHasBeenSet = true;
}

bool BackupPlan::PlanNameHasBeenSet() const
{
    return m_planNameHasBeenSet;
}

uint64_t BackupPlan::GetLogBackupRetentionPeriod() const
{
    return m_logBackupRetentionPeriod;
}

void BackupPlan::SetLogBackupRetentionPeriod(const uint64_t& _logBackupRetentionPeriod)
{
    m_logBackupRetentionPeriod = _logBackupRetentionPeriod;
    m_logBackupRetentionPeriodHasBeenSet = true;
}

bool BackupPlan::LogBackupRetentionPeriodHasBeenSet() const
{
    return m_logBackupRetentionPeriodHasBeenSet;
}

string BackupPlan::GetCreatedTime() const
{
    return m_createdTime;
}

void BackupPlan::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool BackupPlan::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string BackupPlan::GetUpdatedTime() const
{
    return m_updatedTime;
}

void BackupPlan::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool BackupPlan::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

string BackupPlan::GetPlanType() const
{
    return m_planType;
}

void BackupPlan::SetPlanType(const string& _planType)
{
    m_planType = _planType;
    m_planTypeHasBeenSet = true;
}

bool BackupPlan::PlanTypeHasBeenSet() const
{
    return m_planTypeHasBeenSet;
}

string BackupPlan::GetBackupPeriodType() const
{
    return m_backupPeriodType;
}

void BackupPlan::SetBackupPeriodType(const string& _backupPeriodType)
{
    m_backupPeriodType = _backupPeriodType;
    m_backupPeriodTypeHasBeenSet = true;
}

bool BackupPlan::BackupPeriodTypeHasBeenSet() const
{
    return m_backupPeriodTypeHasBeenSet;
}

