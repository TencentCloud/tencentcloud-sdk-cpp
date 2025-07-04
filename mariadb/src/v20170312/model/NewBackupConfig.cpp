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

#include <tencentcloud/mariadb/v20170312/model/NewBackupConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

NewBackupConfig::NewBackupConfig() :
    m_enableBackupPolicyHasBeenSet(false),
    m_beginDateHasBeenSet(false),
    m_maxRetentionDaysHasBeenSet(false),
    m_frequencyHasBeenSet(false),
    m_weekDaysHasBeenSet(false),
    m_backupCountHasBeenSet(false)
{
}

CoreInternalOutcome NewBackupConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableBackupPolicy") && !value["EnableBackupPolicy"].IsNull())
    {
        if (!value["EnableBackupPolicy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NewBackupConfig.EnableBackupPolicy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableBackupPolicy = value["EnableBackupPolicy"].GetBool();
        m_enableBackupPolicyHasBeenSet = true;
    }

    if (value.HasMember("BeginDate") && !value["BeginDate"].IsNull())
    {
        if (!value["BeginDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewBackupConfig.BeginDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginDate = string(value["BeginDate"].GetString());
        m_beginDateHasBeenSet = true;
    }

    if (value.HasMember("MaxRetentionDays") && !value["MaxRetentionDays"].IsNull())
    {
        if (!value["MaxRetentionDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NewBackupConfig.MaxRetentionDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRetentionDays = value["MaxRetentionDays"].GetInt64();
        m_maxRetentionDaysHasBeenSet = true;
    }

    if (value.HasMember("Frequency") && !value["Frequency"].IsNull())
    {
        if (!value["Frequency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewBackupConfig.Frequency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frequency = string(value["Frequency"].GetString());
        m_frequencyHasBeenSet = true;
    }

    if (value.HasMember("WeekDays") && !value["WeekDays"].IsNull())
    {
        if (!value["WeekDays"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NewBackupConfig.WeekDays` is not array type"));

        const rapidjson::Value &tmpValue = value["WeekDays"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_weekDays.push_back((*itr).GetString());
        }
        m_weekDaysHasBeenSet = true;
    }

    if (value.HasMember("BackupCount") && !value["BackupCount"].IsNull())
    {
        if (!value["BackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NewBackupConfig.BackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupCount = value["BackupCount"].GetInt64();
        m_backupCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NewBackupConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableBackupPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableBackupPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableBackupPolicy, allocator);
    }

    if (m_beginDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginDate.c_str(), allocator).Move(), allocator);
    }

    if (m_maxRetentionDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetentionDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRetentionDays, allocator);
    }

    if (m_frequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Frequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frequency.c_str(), allocator).Move(), allocator);
    }

    if (m_weekDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeekDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_weekDays.begin(); itr != m_weekDays.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_backupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupCount, allocator);
    }

}


bool NewBackupConfig::GetEnableBackupPolicy() const
{
    return m_enableBackupPolicy;
}

void NewBackupConfig::SetEnableBackupPolicy(const bool& _enableBackupPolicy)
{
    m_enableBackupPolicy = _enableBackupPolicy;
    m_enableBackupPolicyHasBeenSet = true;
}

bool NewBackupConfig::EnableBackupPolicyHasBeenSet() const
{
    return m_enableBackupPolicyHasBeenSet;
}

string NewBackupConfig::GetBeginDate() const
{
    return m_beginDate;
}

void NewBackupConfig::SetBeginDate(const string& _beginDate)
{
    m_beginDate = _beginDate;
    m_beginDateHasBeenSet = true;
}

bool NewBackupConfig::BeginDateHasBeenSet() const
{
    return m_beginDateHasBeenSet;
}

int64_t NewBackupConfig::GetMaxRetentionDays() const
{
    return m_maxRetentionDays;
}

void NewBackupConfig::SetMaxRetentionDays(const int64_t& _maxRetentionDays)
{
    m_maxRetentionDays = _maxRetentionDays;
    m_maxRetentionDaysHasBeenSet = true;
}

bool NewBackupConfig::MaxRetentionDaysHasBeenSet() const
{
    return m_maxRetentionDaysHasBeenSet;
}

string NewBackupConfig::GetFrequency() const
{
    return m_frequency;
}

void NewBackupConfig::SetFrequency(const string& _frequency)
{
    m_frequency = _frequency;
    m_frequencyHasBeenSet = true;
}

bool NewBackupConfig::FrequencyHasBeenSet() const
{
    return m_frequencyHasBeenSet;
}

vector<string> NewBackupConfig::GetWeekDays() const
{
    return m_weekDays;
}

void NewBackupConfig::SetWeekDays(const vector<string>& _weekDays)
{
    m_weekDays = _weekDays;
    m_weekDaysHasBeenSet = true;
}

bool NewBackupConfig::WeekDaysHasBeenSet() const
{
    return m_weekDaysHasBeenSet;
}

int64_t NewBackupConfig::GetBackupCount() const
{
    return m_backupCount;
}

void NewBackupConfig::SetBackupCount(const int64_t& _backupCount)
{
    m_backupCount = _backupCount;
    m_backupCountHasBeenSet = true;
}

bool NewBackupConfig::BackupCountHasBeenSet() const
{
    return m_backupCountHasBeenSet;
}

