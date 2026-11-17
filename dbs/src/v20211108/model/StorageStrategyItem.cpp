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

#include <tencentcloud/dbs/v20211108/model/StorageStrategyItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

StorageStrategyItem::StorageStrategyItem() :
    m_storageTypeHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_backupRetentionPeriodHasBeenSet(false),
    m_fullStorageStrategyHasBeenSet(false),
    m_incStorageStrategyHasBeenSet(false)
{
}

CoreInternalOutcome StorageStrategyItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageStrategyItem.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("Encryption") && !value["Encryption"].IsNull())
    {
        if (!value["Encryption"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageStrategyItem.Encryption` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryption = string(value["Encryption"].GetString());
        m_encryptionHasBeenSet = true;
    }

    if (value.HasMember("BackupRetentionPeriod") && !value["BackupRetentionPeriod"].IsNull())
    {
        if (!value["BackupRetentionPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageStrategyItem.BackupRetentionPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupRetentionPeriod = value["BackupRetentionPeriod"].GetInt64();
        m_backupRetentionPeriodHasBeenSet = true;
    }

    if (value.HasMember("FullStorageStrategy") && !value["FullStorageStrategy"].IsNull())
    {
        if (!value["FullStorageStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StorageStrategyItem.FullStorageStrategy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fullStorageStrategy.Deserialize(value["FullStorageStrategy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fullStorageStrategyHasBeenSet = true;
    }

    if (value.HasMember("IncStorageStrategy") && !value["IncStorageStrategy"].IsNull())
    {
        if (!value["IncStorageStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StorageStrategyItem.IncStorageStrategy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_incStorageStrategy.Deserialize(value["IncStorageStrategy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_incStorageStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageStrategyItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encryption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryption.c_str(), allocator).Move(), allocator);
    }

    if (m_backupRetentionPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupRetentionPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupRetentionPeriod, allocator);
    }

    if (m_fullStorageStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullStorageStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fullStorageStrategy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_incStorageStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncStorageStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_incStorageStrategy.ToJsonObject(value[key.c_str()], allocator);
    }

}


string StorageStrategyItem::GetStorageType() const
{
    return m_storageType;
}

void StorageStrategyItem::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool StorageStrategyItem::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string StorageStrategyItem::GetEncryption() const
{
    return m_encryption;
}

void StorageStrategyItem::SetEncryption(const string& _encryption)
{
    m_encryption = _encryption;
    m_encryptionHasBeenSet = true;
}

bool StorageStrategyItem::EncryptionHasBeenSet() const
{
    return m_encryptionHasBeenSet;
}

int64_t StorageStrategyItem::GetBackupRetentionPeriod() const
{
    return m_backupRetentionPeriod;
}

void StorageStrategyItem::SetBackupRetentionPeriod(const int64_t& _backupRetentionPeriod)
{
    m_backupRetentionPeriod = _backupRetentionPeriod;
    m_backupRetentionPeriodHasBeenSet = true;
}

bool StorageStrategyItem::BackupRetentionPeriodHasBeenSet() const
{
    return m_backupRetentionPeriodHasBeenSet;
}

StorageStrategySingle StorageStrategyItem::GetFullStorageStrategy() const
{
    return m_fullStorageStrategy;
}

void StorageStrategyItem::SetFullStorageStrategy(const StorageStrategySingle& _fullStorageStrategy)
{
    m_fullStorageStrategy = _fullStorageStrategy;
    m_fullStorageStrategyHasBeenSet = true;
}

bool StorageStrategyItem::FullStorageStrategyHasBeenSet() const
{
    return m_fullStorageStrategyHasBeenSet;
}

StorageStrategySingle StorageStrategyItem::GetIncStorageStrategy() const
{
    return m_incStorageStrategy;
}

void StorageStrategyItem::SetIncStorageStrategy(const StorageStrategySingle& _incStorageStrategy)
{
    m_incStorageStrategy = _incStorageStrategy;
    m_incStorageStrategyHasBeenSet = true;
}

bool StorageStrategyItem::IncStorageStrategyHasBeenSet() const
{
    return m_incStorageStrategyHasBeenSet;
}

