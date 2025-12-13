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

#include <tencentcloud/dbs/v20211108/model/BackupStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

BackupStrategy::BackupStrategy() :
    m_backupStartTimeHasBeenSet(false),
    m_storageStrategyHasBeenSet(false),
    m_backupPeriodHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_strategyTypeHasBeenSet(false),
    m_enableIncrementHasBeenSet(false)
{
}

CoreInternalOutcome BackupStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupStartTime") && !value["BackupStartTime"].IsNull())
    {
        if (!value["BackupStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStrategy.BackupStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupStartTime = string(value["BackupStartTime"].GetString());
        m_backupStartTimeHasBeenSet = true;
    }

    if (value.HasMember("StorageStrategy") && !value["StorageStrategy"].IsNull())
    {
        if (!value["StorageStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStrategy.StorageStrategy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_storageStrategy.Deserialize(value["StorageStrategy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_storageStrategyHasBeenSet = true;
    }

    if (value.HasMember("BackupPeriod") && !value["BackupPeriod"].IsNull())
    {
        if (!value["BackupPeriod"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStrategy.BackupPeriod` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backupPeriod.Deserialize(value["BackupPeriod"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backupPeriodHasBeenSet = true;
    }

    if (value.HasMember("BackupMethod") && !value["BackupMethod"].IsNull())
    {
        if (!value["BackupMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStrategy.BackupMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupMethod = string(value["BackupMethod"].GetString());
        m_backupMethodHasBeenSet = true;
    }

    if (value.HasMember("StrategyType") && !value["StrategyType"].IsNull())
    {
        if (!value["StrategyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStrategy.StrategyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyType = string(value["StrategyType"].GetString());
        m_strategyTypeHasBeenSet = true;
    }

    if (value.HasMember("EnableIncrement") && !value["EnableIncrement"].IsNull())
    {
        if (!value["EnableIncrement"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStrategy.EnableIncrement` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableIncrement = value["EnableIncrement"].GetBool();
        m_enableIncrementHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backupStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_storageStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storageStrategy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backupPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupPeriod.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backupMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyType.c_str(), allocator).Move(), allocator);
    }

    if (m_enableIncrementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableIncrement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableIncrement, allocator);
    }

}


string BackupStrategy::GetBackupStartTime() const
{
    return m_backupStartTime;
}

void BackupStrategy::SetBackupStartTime(const string& _backupStartTime)
{
    m_backupStartTime = _backupStartTime;
    m_backupStartTimeHasBeenSet = true;
}

bool BackupStrategy::BackupStartTimeHasBeenSet() const
{
    return m_backupStartTimeHasBeenSet;
}

StorageStrategy BackupStrategy::GetStorageStrategy() const
{
    return m_storageStrategy;
}

void BackupStrategy::SetStorageStrategy(const StorageStrategy& _storageStrategy)
{
    m_storageStrategy = _storageStrategy;
    m_storageStrategyHasBeenSet = true;
}

bool BackupStrategy::StorageStrategyHasBeenSet() const
{
    return m_storageStrategyHasBeenSet;
}

BackupPeriod BackupStrategy::GetBackupPeriod() const
{
    return m_backupPeriod;
}

void BackupStrategy::SetBackupPeriod(const BackupPeriod& _backupPeriod)
{
    m_backupPeriod = _backupPeriod;
    m_backupPeriodHasBeenSet = true;
}

bool BackupStrategy::BackupPeriodHasBeenSet() const
{
    return m_backupPeriodHasBeenSet;
}

string BackupStrategy::GetBackupMethod() const
{
    return m_backupMethod;
}

void BackupStrategy::SetBackupMethod(const string& _backupMethod)
{
    m_backupMethod = _backupMethod;
    m_backupMethodHasBeenSet = true;
}

bool BackupStrategy::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

string BackupStrategy::GetStrategyType() const
{
    return m_strategyType;
}

void BackupStrategy::SetStrategyType(const string& _strategyType)
{
    m_strategyType = _strategyType;
    m_strategyTypeHasBeenSet = true;
}

bool BackupStrategy::StrategyTypeHasBeenSet() const
{
    return m_strategyTypeHasBeenSet;
}

bool BackupStrategy::GetEnableIncrement() const
{
    return m_enableIncrement;
}

void BackupStrategy::SetEnableIncrement(const bool& _enableIncrement)
{
    m_enableIncrement = _enableIncrement;
    m_enableIncrementHasBeenSet = true;
}

bool BackupStrategy::EnableIncrementHasBeenSet() const
{
    return m_enableIncrementHasBeenSet;
}

