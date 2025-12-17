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

#include <tencentcloud/es/v20180416/model/Snapshots.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

Snapshots::Snapshots() :
    m_snapshotNameHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_repositoryHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_indicesHasBeenSet(false),
    m_dataStreamsHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_durationInMillisHasBeenSet(false),
    m_totalShardsHasBeenSet(false),
    m_failedShardsHasBeenSet(false),
    m_successfulShardsHasBeenSet(false),
    m_failuresHasBeenSet(false),
    m_userBackUpHasBeenSet(false),
    m_esRepositoryTypeHasBeenSet(false),
    m_paasEsRepositoryHasBeenSet(false),
    m_userEsRepositoryHasBeenSet(false),
    m_storageDurationHasBeenSet(false),
    m_autoBackupIntervalHasBeenSet(false),
    m_cosRetentionHasBeenSet(false),
    m_retainUntilDateHasBeenSet(false),
    m_retentionGraceTimeHasBeenSet(false),
    m_isLockedHasBeenSet(false),
    m_remoteCosHasBeenSet(false),
    m_remoteCosRegionHasBeenSet(false),
    m_cosEncryptionHasBeenSet(false),
    m_kmsKeyHasBeenSet(false),
    m_strategyNameHasBeenSet(false)
{
}

CoreInternalOutcome Snapshots::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SnapshotName") && !value["SnapshotName"].IsNull())
    {
        if (!value["SnapshotName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.SnapshotName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotName = string(value["SnapshotName"].GetString());
        m_snapshotNameHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Repository") && !value["Repository"].IsNull())
    {
        if (!value["Repository"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.Repository` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repository = string(value["Repository"].GetString());
        m_repositoryHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Indices") && !value["Indices"].IsNull())
    {
        if (!value["Indices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Snapshots.Indices` is not array type"));

        const rapidjson::Value &tmpValue = value["Indices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_indices.push_back((*itr).GetString());
        }
        m_indicesHasBeenSet = true;
    }

    if (value.HasMember("DataStreams") && !value["DataStreams"].IsNull())
    {
        if (!value["DataStreams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Snapshots.DataStreams` is not array type"));

        const rapidjson::Value &tmpValue = value["DataStreams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dataStreams.push_back((*itr).GetString());
        }
        m_dataStreamsHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("DurationInMillis") && !value["DurationInMillis"].IsNull())
    {
        if (!value["DurationInMillis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.DurationInMillis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_durationInMillis = value["DurationInMillis"].GetInt64();
        m_durationInMillisHasBeenSet = true;
    }

    if (value.HasMember("TotalShards") && !value["TotalShards"].IsNull())
    {
        if (!value["TotalShards"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.TotalShards` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalShards = value["TotalShards"].GetInt64();
        m_totalShardsHasBeenSet = true;
    }

    if (value.HasMember("FailedShards") && !value["FailedShards"].IsNull())
    {
        if (!value["FailedShards"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.FailedShards` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failedShards = value["FailedShards"].GetInt64();
        m_failedShardsHasBeenSet = true;
    }

    if (value.HasMember("SuccessfulShards") && !value["SuccessfulShards"].IsNull())
    {
        if (!value["SuccessfulShards"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.SuccessfulShards` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successfulShards = value["SuccessfulShards"].GetInt64();
        m_successfulShardsHasBeenSet = true;
    }

    if (value.HasMember("Failures") && !value["Failures"].IsNull())
    {
        if (!value["Failures"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Snapshots.Failures` is not array type"));

        const rapidjson::Value &tmpValue = value["Failures"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Failures item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_failures.push_back(item);
        }
        m_failuresHasBeenSet = true;
    }

    if (value.HasMember("UserBackUp") && !value["UserBackUp"].IsNull())
    {
        if (!value["UserBackUp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.UserBackUp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userBackUp = string(value["UserBackUp"].GetString());
        m_userBackUpHasBeenSet = true;
    }

    if (value.HasMember("EsRepositoryType") && !value["EsRepositoryType"].IsNull())
    {
        if (!value["EsRepositoryType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.EsRepositoryType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_esRepositoryType = value["EsRepositoryType"].GetUint64();
        m_esRepositoryTypeHasBeenSet = true;
    }

    if (value.HasMember("PaasEsRepository") && !value["PaasEsRepository"].IsNull())
    {
        if (!value["PaasEsRepository"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.PaasEsRepository` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paasEsRepository = string(value["PaasEsRepository"].GetString());
        m_paasEsRepositoryHasBeenSet = true;
    }

    if (value.HasMember("UserEsRepository") && !value["UserEsRepository"].IsNull())
    {
        if (!value["UserEsRepository"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.UserEsRepository` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userEsRepository = string(value["UserEsRepository"].GetString());
        m_userEsRepositoryHasBeenSet = true;
    }

    if (value.HasMember("StorageDuration") && !value["StorageDuration"].IsNull())
    {
        if (!value["StorageDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.StorageDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_storageDuration = value["StorageDuration"].GetUint64();
        m_storageDurationHasBeenSet = true;
    }

    if (value.HasMember("AutoBackupInterval") && !value["AutoBackupInterval"].IsNull())
    {
        if (!value["AutoBackupInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.AutoBackupInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoBackupInterval = value["AutoBackupInterval"].GetUint64();
        m_autoBackupIntervalHasBeenSet = true;
    }

    if (value.HasMember("CosRetention") && !value["CosRetention"].IsNull())
    {
        if (!value["CosRetention"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.CosRetention` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cosRetention = value["CosRetention"].GetUint64();
        m_cosRetentionHasBeenSet = true;
    }

    if (value.HasMember("RetainUntilDate") && !value["RetainUntilDate"].IsNull())
    {
        if (!value["RetainUntilDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.RetainUntilDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_retainUntilDate = string(value["RetainUntilDate"].GetString());
        m_retainUntilDateHasBeenSet = true;
    }

    if (value.HasMember("RetentionGraceTime") && !value["RetentionGraceTime"].IsNull())
    {
        if (!value["RetentionGraceTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.RetentionGraceTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionGraceTime = value["RetentionGraceTime"].GetUint64();
        m_retentionGraceTimeHasBeenSet = true;
    }

    if (value.HasMember("IsLocked") && !value["IsLocked"].IsNull())
    {
        if (!value["IsLocked"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.IsLocked` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isLocked = value["IsLocked"].GetUint64();
        m_isLockedHasBeenSet = true;
    }

    if (value.HasMember("RemoteCos") && !value["RemoteCos"].IsNull())
    {
        if (!value["RemoteCos"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.RemoteCos` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_remoteCos = value["RemoteCos"].GetUint64();
        m_remoteCosHasBeenSet = true;
    }

    if (value.HasMember("RemoteCosRegion") && !value["RemoteCosRegion"].IsNull())
    {
        if (!value["RemoteCosRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.RemoteCosRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteCosRegion = string(value["RemoteCosRegion"].GetString());
        m_remoteCosRegionHasBeenSet = true;
    }

    if (value.HasMember("CosEncryption") && !value["CosEncryption"].IsNull())
    {
        if (!value["CosEncryption"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.CosEncryption` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cosEncryption = value["CosEncryption"].GetUint64();
        m_cosEncryptionHasBeenSet = true;
    }

    if (value.HasMember("KmsKey") && !value["KmsKey"].IsNull())
    {
        if (!value["KmsKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.KmsKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsKey = string(value["KmsKey"].GetString());
        m_kmsKeyHasBeenSet = true;
    }

    if (value.HasMember("StrategyName") && !value["StrategyName"].IsNull())
    {
        if (!value["StrategyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Snapshots.StrategyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyName = string(value["StrategyName"].GetString());
        m_strategyNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Snapshots::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_snapshotNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotName.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Repository";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repository.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_indicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Indices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_indices.begin(); itr != m_indices.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dataStreamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataStreams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataStreams.begin(); itr != m_dataStreams.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_durationInMillisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationInMillis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durationInMillis, allocator);
    }

    if (m_totalShardsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalShards";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalShards, allocator);
    }

    if (m_failedShardsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedShards";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedShards, allocator);
    }

    if (m_successfulShardsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessfulShards";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successfulShards, allocator);
    }

    if (m_failuresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Failures";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_failures.begin(); itr != m_failures.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_userBackUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserBackUp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userBackUp.c_str(), allocator).Move(), allocator);
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

    if (m_isLockedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLocked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLocked, allocator);
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

    if (m_cosEncryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosEncryption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cosEncryption, allocator);
    }

    if (m_kmsKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kmsKey.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyName.c_str(), allocator).Move(), allocator);
    }

}


string Snapshots::GetSnapshotName() const
{
    return m_snapshotName;
}

void Snapshots::SetSnapshotName(const string& _snapshotName)
{
    m_snapshotName = _snapshotName;
    m_snapshotNameHasBeenSet = true;
}

bool Snapshots::SnapshotNameHasBeenSet() const
{
    return m_snapshotNameHasBeenSet;
}

string Snapshots::GetUuid() const
{
    return m_uuid;
}

void Snapshots::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool Snapshots::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string Snapshots::GetRepository() const
{
    return m_repository;
}

void Snapshots::SetRepository(const string& _repository)
{
    m_repository = _repository;
    m_repositoryHasBeenSet = true;
}

bool Snapshots::RepositoryHasBeenSet() const
{
    return m_repositoryHasBeenSet;
}

string Snapshots::GetVersion() const
{
    return m_version;
}

void Snapshots::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool Snapshots::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

vector<string> Snapshots::GetIndices() const
{
    return m_indices;
}

void Snapshots::SetIndices(const vector<string>& _indices)
{
    m_indices = _indices;
    m_indicesHasBeenSet = true;
}

bool Snapshots::IndicesHasBeenSet() const
{
    return m_indicesHasBeenSet;
}

vector<string> Snapshots::GetDataStreams() const
{
    return m_dataStreams;
}

void Snapshots::SetDataStreams(const vector<string>& _dataStreams)
{
    m_dataStreams = _dataStreams;
    m_dataStreamsHasBeenSet = true;
}

bool Snapshots::DataStreamsHasBeenSet() const
{
    return m_dataStreamsHasBeenSet;
}

string Snapshots::GetState() const
{
    return m_state;
}

void Snapshots::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool Snapshots::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string Snapshots::GetStartTime() const
{
    return m_startTime;
}

void Snapshots::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool Snapshots::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string Snapshots::GetEndTime() const
{
    return m_endTime;
}

void Snapshots::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool Snapshots::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t Snapshots::GetDurationInMillis() const
{
    return m_durationInMillis;
}

void Snapshots::SetDurationInMillis(const int64_t& _durationInMillis)
{
    m_durationInMillis = _durationInMillis;
    m_durationInMillisHasBeenSet = true;
}

bool Snapshots::DurationInMillisHasBeenSet() const
{
    return m_durationInMillisHasBeenSet;
}

int64_t Snapshots::GetTotalShards() const
{
    return m_totalShards;
}

void Snapshots::SetTotalShards(const int64_t& _totalShards)
{
    m_totalShards = _totalShards;
    m_totalShardsHasBeenSet = true;
}

bool Snapshots::TotalShardsHasBeenSet() const
{
    return m_totalShardsHasBeenSet;
}

int64_t Snapshots::GetFailedShards() const
{
    return m_failedShards;
}

void Snapshots::SetFailedShards(const int64_t& _failedShards)
{
    m_failedShards = _failedShards;
    m_failedShardsHasBeenSet = true;
}

bool Snapshots::FailedShardsHasBeenSet() const
{
    return m_failedShardsHasBeenSet;
}

int64_t Snapshots::GetSuccessfulShards() const
{
    return m_successfulShards;
}

void Snapshots::SetSuccessfulShards(const int64_t& _successfulShards)
{
    m_successfulShards = _successfulShards;
    m_successfulShardsHasBeenSet = true;
}

bool Snapshots::SuccessfulShardsHasBeenSet() const
{
    return m_successfulShardsHasBeenSet;
}

vector<Failures> Snapshots::GetFailures() const
{
    return m_failures;
}

void Snapshots::SetFailures(const vector<Failures>& _failures)
{
    m_failures = _failures;
    m_failuresHasBeenSet = true;
}

bool Snapshots::FailuresHasBeenSet() const
{
    return m_failuresHasBeenSet;
}

string Snapshots::GetUserBackUp() const
{
    return m_userBackUp;
}

void Snapshots::SetUserBackUp(const string& _userBackUp)
{
    m_userBackUp = _userBackUp;
    m_userBackUpHasBeenSet = true;
}

bool Snapshots::UserBackUpHasBeenSet() const
{
    return m_userBackUpHasBeenSet;
}

uint64_t Snapshots::GetEsRepositoryType() const
{
    return m_esRepositoryType;
}

void Snapshots::SetEsRepositoryType(const uint64_t& _esRepositoryType)
{
    m_esRepositoryType = _esRepositoryType;
    m_esRepositoryTypeHasBeenSet = true;
}

bool Snapshots::EsRepositoryTypeHasBeenSet() const
{
    return m_esRepositoryTypeHasBeenSet;
}

string Snapshots::GetPaasEsRepository() const
{
    return m_paasEsRepository;
}

void Snapshots::SetPaasEsRepository(const string& _paasEsRepository)
{
    m_paasEsRepository = _paasEsRepository;
    m_paasEsRepositoryHasBeenSet = true;
}

bool Snapshots::PaasEsRepositoryHasBeenSet() const
{
    return m_paasEsRepositoryHasBeenSet;
}

string Snapshots::GetUserEsRepository() const
{
    return m_userEsRepository;
}

void Snapshots::SetUserEsRepository(const string& _userEsRepository)
{
    m_userEsRepository = _userEsRepository;
    m_userEsRepositoryHasBeenSet = true;
}

bool Snapshots::UserEsRepositoryHasBeenSet() const
{
    return m_userEsRepositoryHasBeenSet;
}

uint64_t Snapshots::GetStorageDuration() const
{
    return m_storageDuration;
}

void Snapshots::SetStorageDuration(const uint64_t& _storageDuration)
{
    m_storageDuration = _storageDuration;
    m_storageDurationHasBeenSet = true;
}

bool Snapshots::StorageDurationHasBeenSet() const
{
    return m_storageDurationHasBeenSet;
}

uint64_t Snapshots::GetAutoBackupInterval() const
{
    return m_autoBackupInterval;
}

void Snapshots::SetAutoBackupInterval(const uint64_t& _autoBackupInterval)
{
    m_autoBackupInterval = _autoBackupInterval;
    m_autoBackupIntervalHasBeenSet = true;
}

bool Snapshots::AutoBackupIntervalHasBeenSet() const
{
    return m_autoBackupIntervalHasBeenSet;
}

uint64_t Snapshots::GetCosRetention() const
{
    return m_cosRetention;
}

void Snapshots::SetCosRetention(const uint64_t& _cosRetention)
{
    m_cosRetention = _cosRetention;
    m_cosRetentionHasBeenSet = true;
}

bool Snapshots::CosRetentionHasBeenSet() const
{
    return m_cosRetentionHasBeenSet;
}

string Snapshots::GetRetainUntilDate() const
{
    return m_retainUntilDate;
}

void Snapshots::SetRetainUntilDate(const string& _retainUntilDate)
{
    m_retainUntilDate = _retainUntilDate;
    m_retainUntilDateHasBeenSet = true;
}

bool Snapshots::RetainUntilDateHasBeenSet() const
{
    return m_retainUntilDateHasBeenSet;
}

uint64_t Snapshots::GetRetentionGraceTime() const
{
    return m_retentionGraceTime;
}

void Snapshots::SetRetentionGraceTime(const uint64_t& _retentionGraceTime)
{
    m_retentionGraceTime = _retentionGraceTime;
    m_retentionGraceTimeHasBeenSet = true;
}

bool Snapshots::RetentionGraceTimeHasBeenSet() const
{
    return m_retentionGraceTimeHasBeenSet;
}

uint64_t Snapshots::GetIsLocked() const
{
    return m_isLocked;
}

void Snapshots::SetIsLocked(const uint64_t& _isLocked)
{
    m_isLocked = _isLocked;
    m_isLockedHasBeenSet = true;
}

bool Snapshots::IsLockedHasBeenSet() const
{
    return m_isLockedHasBeenSet;
}

uint64_t Snapshots::GetRemoteCos() const
{
    return m_remoteCos;
}

void Snapshots::SetRemoteCos(const uint64_t& _remoteCos)
{
    m_remoteCos = _remoteCos;
    m_remoteCosHasBeenSet = true;
}

bool Snapshots::RemoteCosHasBeenSet() const
{
    return m_remoteCosHasBeenSet;
}

string Snapshots::GetRemoteCosRegion() const
{
    return m_remoteCosRegion;
}

void Snapshots::SetRemoteCosRegion(const string& _remoteCosRegion)
{
    m_remoteCosRegion = _remoteCosRegion;
    m_remoteCosRegionHasBeenSet = true;
}

bool Snapshots::RemoteCosRegionHasBeenSet() const
{
    return m_remoteCosRegionHasBeenSet;
}

uint64_t Snapshots::GetCosEncryption() const
{
    return m_cosEncryption;
}

void Snapshots::SetCosEncryption(const uint64_t& _cosEncryption)
{
    m_cosEncryption = _cosEncryption;
    m_cosEncryptionHasBeenSet = true;
}

bool Snapshots::CosEncryptionHasBeenSet() const
{
    return m_cosEncryptionHasBeenSet;
}

string Snapshots::GetKmsKey() const
{
    return m_kmsKey;
}

void Snapshots::SetKmsKey(const string& _kmsKey)
{
    m_kmsKey = _kmsKey;
    m_kmsKeyHasBeenSet = true;
}

bool Snapshots::KmsKeyHasBeenSet() const
{
    return m_kmsKeyHasBeenSet;
}

string Snapshots::GetStrategyName() const
{
    return m_strategyName;
}

void Snapshots::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool Snapshots::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

