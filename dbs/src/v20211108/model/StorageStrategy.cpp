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

#include <tencentcloud/dbs/v20211108/model/StorageStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

StorageStrategy::StorageStrategy() :
    m_storageTypeHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_backupRetentionPeriodHasBeenSet(false)
{
}

CoreInternalOutcome StorageStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageStrategy.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("Encryption") && !value["Encryption"].IsNull())
    {
        if (!value["Encryption"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageStrategy.Encryption` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryption = string(value["Encryption"].GetString());
        m_encryptionHasBeenSet = true;
    }

    if (value.HasMember("BackupRetentionPeriod") && !value["BackupRetentionPeriod"].IsNull())
    {
        if (!value["BackupRetentionPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageStrategy.BackupRetentionPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupRetentionPeriod = value["BackupRetentionPeriod"].GetInt64();
        m_backupRetentionPeriodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string StorageStrategy::GetStorageType() const
{
    return m_storageType;
}

void StorageStrategy::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool StorageStrategy::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string StorageStrategy::GetEncryption() const
{
    return m_encryption;
}

void StorageStrategy::SetEncryption(const string& _encryption)
{
    m_encryption = _encryption;
    m_encryptionHasBeenSet = true;
}

bool StorageStrategy::EncryptionHasBeenSet() const
{
    return m_encryptionHasBeenSet;
}

int64_t StorageStrategy::GetBackupRetentionPeriod() const
{
    return m_backupRetentionPeriod;
}

void StorageStrategy::SetBackupRetentionPeriod(const int64_t& _backupRetentionPeriod)
{
    m_backupRetentionPeriod = _backupRetentionPeriod;
    m_backupRetentionPeriodHasBeenSet = true;
}

bool StorageStrategy::BackupRetentionPeriodHasBeenSet() const
{
    return m_backupRetentionPeriodHasBeenSet;
}

