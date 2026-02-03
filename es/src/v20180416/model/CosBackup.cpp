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

#include <tencentcloud/es/v20180416/model/CosBackup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

CosBackup::CosBackup() :
    m_isAutoBackupHasBeenSet(false),
    m_backupTimeHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_esRepositoryTypeHasBeenSet(false),
    m_paasEsRepositoryHasBeenSet(false),
    m_userEsRepositoryHasBeenSet(false),
    m_cosBasePathHasBeenSet(false),
    m_storageDurationHasBeenSet(false),
    m_autoBackupIntervalHasBeenSet(false),
    m_cosRetentionHasBeenSet(false),
    m_retainUntilDateHasBeenSet(false),
    m_retentionGraceTimeHasBeenSet(false),
    m_remoteCosHasBeenSet(false),
    m_remoteCosRegionHasBeenSet(false),
    m_strategyNameHasBeenSet(false),
    m_indicesHasBeenSet(false),
    m_multiAzHasBeenSet(false),
    m_createTimeHasBeenSet(false)
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

    if (value.HasMember("SnapshotName") && !value["SnapshotName"].IsNull())
    {
        if (!value["SnapshotName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBackup.SnapshotName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotName = string(value["SnapshotName"].GetString());
        m_snapshotNameHasBeenSet = true;
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

    if (value.HasMember("PaasEsRepository") && !value["PaasEsRepository"].IsNull())
    {
        if (!value["PaasEsRepository"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBackup.PaasEsRepository` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paasEsRepository = string(value["PaasEsRepository"].GetString());
        m_paasEsRepositoryHasBeenSet = true;
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

    if (value.HasMember("CosBasePath") && !value["CosBasePath"].IsNull())
    {
        if (!value["CosBasePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBackup.CosBasePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBasePath = string(value["CosBasePath"].GetString());
        m_cosBasePathHasBeenSet = true;
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

    if (value.HasMember("CosRetention") && !value["CosRetention"].IsNull())
    {
        if (!value["CosRetention"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosBackup.CosRetention` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cosRetention = value["CosRetention"].GetUint64();
        m_cosRetentionHasBeenSet = true;
    }

    if (value.HasMember("RetainUntilDate") && !value["RetainUntilDate"].IsNull())
    {
        if (!value["RetainUntilDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBackup.RetainUntilDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_retainUntilDate = string(value["RetainUntilDate"].GetString());
        m_retainUntilDateHasBeenSet = true;
    }

    if (value.HasMember("RetentionGraceTime") && !value["RetentionGraceTime"].IsNull())
    {
        if (!value["RetentionGraceTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosBackup.RetentionGraceTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionGraceTime = value["RetentionGraceTime"].GetUint64();
        m_retentionGraceTimeHasBeenSet = true;
    }

    if (value.HasMember("RemoteCos") && !value["RemoteCos"].IsNull())
    {
        if (!value["RemoteCos"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosBackup.RemoteCos` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_remoteCos = value["RemoteCos"].GetUint64();
        m_remoteCosHasBeenSet = true;
    }

    if (value.HasMember("RemoteCosRegion") && !value["RemoteCosRegion"].IsNull())
    {
        if (!value["RemoteCosRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBackup.RemoteCosRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteCosRegion = string(value["RemoteCosRegion"].GetString());
        m_remoteCosRegionHasBeenSet = true;
    }

    if (value.HasMember("StrategyName") && !value["StrategyName"].IsNull())
    {
        if (!value["StrategyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBackup.StrategyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyName = string(value["StrategyName"].GetString());
        m_strategyNameHasBeenSet = true;
    }

    if (value.HasMember("Indices") && !value["Indices"].IsNull())
    {
        if (!value["Indices"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBackup.Indices` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indices = string(value["Indices"].GetString());
        m_indicesHasBeenSet = true;
    }

    if (value.HasMember("MultiAz") && !value["MultiAz"].IsNull())
    {
        if (!value["MultiAz"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosBackup.MultiAz` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_multiAz = value["MultiAz"].GetUint64();
        m_multiAzHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBackup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
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

    if (m_snapshotNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotName.c_str(), allocator).Move(), allocator);
    }

    if (m_esRepositoryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsRepositoryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_esRepositoryType, allocator);
    }

    if (m_paasEsRepositoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaasEsRepository";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paasEsRepository.c_str(), allocator).Move(), allocator);
    }

    if (m_userEsRepositoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserEsRepository";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userEsRepository.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBasePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBasePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBasePath.c_str(), allocator).Move(), allocator);
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

    if (m_cosRetentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosRetention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cosRetention, allocator);
    }

    if (m_retainUntilDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetainUntilDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_retainUntilDate.c_str(), allocator).Move(), allocator);
    }

    if (m_retentionGraceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionGraceTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionGraceTime, allocator);
    }

    if (m_remoteCosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteCos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remoteCos, allocator);
    }

    if (m_remoteCosRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteCosRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteCosRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyName.c_str(), allocator).Move(), allocator);
    }

    if (m_indicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Indices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indices.c_str(), allocator).Move(), allocator);
    }

    if (m_multiAzHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiAz";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_multiAz, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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

string CosBackup::GetSnapshotName() const
{
    return m_snapshotName;
}

void CosBackup::SetSnapshotName(const string& _snapshotName)
{
    m_snapshotName = _snapshotName;
    m_snapshotNameHasBeenSet = true;
}

bool CosBackup::SnapshotNameHasBeenSet() const
{
    return m_snapshotNameHasBeenSet;
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

string CosBackup::GetPaasEsRepository() const
{
    return m_paasEsRepository;
}

void CosBackup::SetPaasEsRepository(const string& _paasEsRepository)
{
    m_paasEsRepository = _paasEsRepository;
    m_paasEsRepositoryHasBeenSet = true;
}

bool CosBackup::PaasEsRepositoryHasBeenSet() const
{
    return m_paasEsRepositoryHasBeenSet;
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

string CosBackup::GetCosBasePath() const
{
    return m_cosBasePath;
}

void CosBackup::SetCosBasePath(const string& _cosBasePath)
{
    m_cosBasePath = _cosBasePath;
    m_cosBasePathHasBeenSet = true;
}

bool CosBackup::CosBasePathHasBeenSet() const
{
    return m_cosBasePathHasBeenSet;
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

uint64_t CosBackup::GetCosRetention() const
{
    return m_cosRetention;
}

void CosBackup::SetCosRetention(const uint64_t& _cosRetention)
{
    m_cosRetention = _cosRetention;
    m_cosRetentionHasBeenSet = true;
}

bool CosBackup::CosRetentionHasBeenSet() const
{
    return m_cosRetentionHasBeenSet;
}

string CosBackup::GetRetainUntilDate() const
{
    return m_retainUntilDate;
}

void CosBackup::SetRetainUntilDate(const string& _retainUntilDate)
{
    m_retainUntilDate = _retainUntilDate;
    m_retainUntilDateHasBeenSet = true;
}

bool CosBackup::RetainUntilDateHasBeenSet() const
{
    return m_retainUntilDateHasBeenSet;
}

uint64_t CosBackup::GetRetentionGraceTime() const
{
    return m_retentionGraceTime;
}

void CosBackup::SetRetentionGraceTime(const uint64_t& _retentionGraceTime)
{
    m_retentionGraceTime = _retentionGraceTime;
    m_retentionGraceTimeHasBeenSet = true;
}

bool CosBackup::RetentionGraceTimeHasBeenSet() const
{
    return m_retentionGraceTimeHasBeenSet;
}

uint64_t CosBackup::GetRemoteCos() const
{
    return m_remoteCos;
}

void CosBackup::SetRemoteCos(const uint64_t& _remoteCos)
{
    m_remoteCos = _remoteCos;
    m_remoteCosHasBeenSet = true;
}

bool CosBackup::RemoteCosHasBeenSet() const
{
    return m_remoteCosHasBeenSet;
}

string CosBackup::GetRemoteCosRegion() const
{
    return m_remoteCosRegion;
}

void CosBackup::SetRemoteCosRegion(const string& _remoteCosRegion)
{
    m_remoteCosRegion = _remoteCosRegion;
    m_remoteCosRegionHasBeenSet = true;
}

bool CosBackup::RemoteCosRegionHasBeenSet() const
{
    return m_remoteCosRegionHasBeenSet;
}

string CosBackup::GetStrategyName() const
{
    return m_strategyName;
}

void CosBackup::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool CosBackup::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

string CosBackup::GetIndices() const
{
    return m_indices;
}

void CosBackup::SetIndices(const string& _indices)
{
    m_indices = _indices;
    m_indicesHasBeenSet = true;
}

bool CosBackup::IndicesHasBeenSet() const
{
    return m_indicesHasBeenSet;
}

uint64_t CosBackup::GetMultiAz() const
{
    return m_multiAz;
}

void CosBackup::SetMultiAz(const uint64_t& _multiAz)
{
    m_multiAz = _multiAz;
    m_multiAzHasBeenSet = true;
}

bool CosBackup::MultiAzHasBeenSet() const
{
    return m_multiAzHasBeenSet;
}

string CosBackup::GetCreateTime() const
{
    return m_createTime;
}

void CosBackup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CosBackup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

