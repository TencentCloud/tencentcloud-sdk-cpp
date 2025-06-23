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

#include <tencentcloud/es/v20180416/model/CosBackup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

CosBackup::CosBackup() :
    m_isAutoBackupHasBeenSet(false),
    m_backupTimeHasBeenSet(false),
    m_esRepositoryTypeHasBeenSet(false),
    m_userEsRepositoryHasBeenSet(false),
    m_storageDurationHasBeenSet(false),
    m_autoBackupIntervalHasBeenSet(false)
{
}

CoreInternalOutcome CosBackup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsAutoBackup") && !value["IsAutoBackup"].IsNull())
    {
        if (!value["IsAutoBackup"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CosBackup.IsAutoBackup` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAutoBackup = value["IsAutoBackup"].GetBool();
        m_isAutoBackupHasBeenSet = true;
    }

    if (value.HasMember("BackupTime") && !value["BackupTime"].IsNull())
    {
        if (!value["BackupTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBackup.BackupTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupTime = string(value["BackupTime"].GetString());
        m_backupTimeHasBeenSet = true;
    }

    if (value.HasMember("EsRepositoryType") && !value["EsRepositoryType"].IsNull())
    {
        if (!value["EsRepositoryType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosBackup.EsRepositoryType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_esRepositoryType = value["EsRepositoryType"].GetUint64();
        m_esRepositoryTypeHasBeenSet = true;
    }

    if (value.HasMember("UserEsRepository") && !value["UserEsRepository"].IsNull())
    {
        if (!value["UserEsRepository"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBackup.UserEsRepository` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userEsRepository = string(value["UserEsRepository"].GetString());
        m_userEsRepositoryHasBeenSet = true;
    }

    if (value.HasMember("StorageDuration") && !value["StorageDuration"].IsNull())
    {
        if (!value["StorageDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosBackup.StorageDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_storageDuration = value["StorageDuration"].GetUint64();
        m_storageDurationHasBeenSet = true;
    }

    if (value.HasMember("AutoBackupInterval") && !value["AutoBackupInterval"].IsNull())
    {
        if (!value["AutoBackupInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosBackup.AutoBackupInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoBackupInterval = value["AutoBackupInterval"].GetUint64();
        m_autoBackupIntervalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosBackup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isAutoBackupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAutoBackup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAutoBackup, allocator);
    }

    if (m_backupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupTime.c_str(), allocator).Move(), allocator);
    }

    if (m_esRepositoryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsRepositoryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_esRepositoryType, allocator);
    }

    if (m_userEsRepositoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserEsRepository";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userEsRepository.c_str(), allocator).Move(), allocator);
    }

    if (m_storageDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageDuration, allocator);
    }

    if (m_autoBackupIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoBackupInterval, allocator);
    }

}


bool CosBackup::GetIsAutoBackup() const
{
    return m_isAutoBackup;
}

void CosBackup::SetIsAutoBackup(const bool& _isAutoBackup)
{
    m_isAutoBackup = _isAutoBackup;
    m_isAutoBackupHasBeenSet = true;
}

bool CosBackup::IsAutoBackupHasBeenSet() const
{
    return m_isAutoBackupHasBeenSet;
}

string CosBackup::GetBackupTime() const
{
    return m_backupTime;
}

void CosBackup::SetBackupTime(const string& _backupTime)
{
    m_backupTime = _backupTime;
    m_backupTimeHasBeenSet = true;
}

bool CosBackup::BackupTimeHasBeenSet() const
{
    return m_backupTimeHasBeenSet;
}

uint64_t CosBackup::GetEsRepositoryType() const
{
    return m_esRepositoryType;
}

void CosBackup::SetEsRepositoryType(const uint64_t& _esRepositoryType)
{
    m_esRepositoryType = _esRepositoryType;
    m_esRepositoryTypeHasBeenSet = true;
}

bool CosBackup::EsRepositoryTypeHasBeenSet() const
{
    return m_esRepositoryTypeHasBeenSet;
}

string CosBackup::GetUserEsRepository() const
{
    return m_userEsRepository;
}

void CosBackup::SetUserEsRepository(const string& _userEsRepository)
{
    m_userEsRepository = _userEsRepository;
    m_userEsRepositoryHasBeenSet = true;
}

bool CosBackup::UserEsRepositoryHasBeenSet() const
{
    return m_userEsRepositoryHasBeenSet;
}

uint64_t CosBackup::GetStorageDuration() const
{
    return m_storageDuration;
}

void CosBackup::SetStorageDuration(const uint64_t& _storageDuration)
{
    m_storageDuration = _storageDuration;
    m_storageDurationHasBeenSet = true;
}

bool CosBackup::StorageDurationHasBeenSet() const
{
    return m_storageDurationHasBeenSet;
}

uint64_t CosBackup::GetAutoBackupInterval() const
{
    return m_autoBackupInterval;
}

void CosBackup::SetAutoBackupInterval(const uint64_t& _autoBackupInterval)
{
    m_autoBackupInterval = _autoBackupInterval;
    m_autoBackupIntervalHasBeenSet = true;
}

bool CosBackup::AutoBackupIntervalHasBeenSet() const
{
    return m_autoBackupIntervalHasBeenSet;
}

