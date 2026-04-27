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

#include <tencentcloud/cynosdb/v20190107/model/BackupFileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

BackupFileInfo::BackupFileInfo() :
    m_snapshotIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_backupStatusHasBeenSet(false),
    m_snapshotTimeHasBeenSet(false),
    m_backupIdHasBeenSet(false),
    m_snapShotTypeHasBeenSet(false),
    m_backupNameHasBeenSet(false),
    m_copyStatusHasBeenSet(false),
    m_encryptKeyIdHasBeenSet(false),
    m_encryptRegionHasBeenSet(false),
    m_vaultInfosHasBeenSet(false),
    m_backupPeriodStrategyHasBeenSet(false)
{
}

CoreInternalOutcome BackupFileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SnapshotId") && !value["SnapshotId"].IsNull())
    {
        if (!value["SnapshotId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFileInfo.SnapshotId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotId = value["SnapshotId"].GetUint64();
        m_snapshotIdHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFileInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFileInfo.FileSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetUint64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFileInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFileInfo.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("BackupType") && !value["BackupType"].IsNull())
    {
        if (!value["BackupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFileInfo.BackupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupType = string(value["BackupType"].GetString());
        m_backupTypeHasBeenSet = true;
    }

    if (value.HasMember("BackupMethod") && !value["BackupMethod"].IsNull())
    {
        if (!value["BackupMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFileInfo.BackupMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupMethod = string(value["BackupMethod"].GetString());
        m_backupMethodHasBeenSet = true;
    }

    if (value.HasMember("BackupStatus") && !value["BackupStatus"].IsNull())
    {
        if (!value["BackupStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFileInfo.BackupStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupStatus = string(value["BackupStatus"].GetString());
        m_backupStatusHasBeenSet = true;
    }

    if (value.HasMember("SnapshotTime") && !value["SnapshotTime"].IsNull())
    {
        if (!value["SnapshotTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFileInfo.SnapshotTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotTime = string(value["SnapshotTime"].GetString());
        m_snapshotTimeHasBeenSet = true;
    }

    if (value.HasMember("BackupId") && !value["BackupId"].IsNull())
    {
        if (!value["BackupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFileInfo.BackupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupId = value["BackupId"].GetInt64();
        m_backupIdHasBeenSet = true;
    }

    if (value.HasMember("SnapShotType") && !value["SnapShotType"].IsNull())
    {
        if (!value["SnapShotType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFileInfo.SnapShotType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapShotType = string(value["SnapShotType"].GetString());
        m_snapShotTypeHasBeenSet = true;
    }

    if (value.HasMember("BackupName") && !value["BackupName"].IsNull())
    {
        if (!value["BackupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFileInfo.BackupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupName = string(value["BackupName"].GetString());
        m_backupNameHasBeenSet = true;
    }

    if (value.HasMember("CopyStatus") && !value["CopyStatus"].IsNull())
    {
        if (!value["CopyStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFileInfo.CopyStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_copyStatus = string(value["CopyStatus"].GetString());
        m_copyStatusHasBeenSet = true;
    }

    if (value.HasMember("EncryptKeyId") && !value["EncryptKeyId"].IsNull())
    {
        if (!value["EncryptKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFileInfo.EncryptKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptKeyId = string(value["EncryptKeyId"].GetString());
        m_encryptKeyIdHasBeenSet = true;
    }

    if (value.HasMember("EncryptRegion") && !value["EncryptRegion"].IsNull())
    {
        if (!value["EncryptRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFileInfo.EncryptRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptRegion = string(value["EncryptRegion"].GetString());
        m_encryptRegionHasBeenSet = true;
    }

    if (value.HasMember("VaultInfos") && !value["VaultInfos"].IsNull())
    {
        if (!value["VaultInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupFileInfo.VaultInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["VaultInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VaultInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vaultInfos.push_back(item);
        }
        m_vaultInfosHasBeenSet = true;
    }

    if (value.HasMember("BackupPeriodStrategy") && !value["BackupPeriodStrategy"].IsNull())
    {
        if (!value["BackupPeriodStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFileInfo.BackupPeriodStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupPeriodStrategy = string(value["BackupPeriodStrategy"].GetString());
        m_backupPeriodStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupFileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_snapshotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snapshotId, allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupType.c_str(), allocator).Move(), allocator);
    }

    if (m_backupMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_backupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotTime.c_str(), allocator).Move(), allocator);
    }

    if (m_backupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupId, allocator);
    }

    if (m_snapShotTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapShotType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapShotType.c_str(), allocator).Move(), allocator);
    }

    if (m_backupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupName.c_str(), allocator).Move(), allocator);
    }

    if (m_copyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_copyStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_vaultInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vaultInfos.begin(); itr != m_vaultInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_backupPeriodStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPeriodStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupPeriodStrategy.c_str(), allocator).Move(), allocator);
    }

}


uint64_t BackupFileInfo::GetSnapshotId() const
{
    return m_snapshotId;
}

void BackupFileInfo::SetSnapshotId(const uint64_t& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool BackupFileInfo::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

string BackupFileInfo::GetFileName() const
{
    return m_fileName;
}

void BackupFileInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool BackupFileInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

uint64_t BackupFileInfo::GetFileSize() const
{
    return m_fileSize;
}

void BackupFileInfo::SetFileSize(const uint64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool BackupFileInfo::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string BackupFileInfo::GetStartTime() const
{
    return m_startTime;
}

void BackupFileInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool BackupFileInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string BackupFileInfo::GetFinishTime() const
{
    return m_finishTime;
}

void BackupFileInfo::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool BackupFileInfo::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

string BackupFileInfo::GetBackupType() const
{
    return m_backupType;
}

void BackupFileInfo::SetBackupType(const string& _backupType)
{
    m_backupType = _backupType;
    m_backupTypeHasBeenSet = true;
}

bool BackupFileInfo::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

string BackupFileInfo::GetBackupMethod() const
{
    return m_backupMethod;
}

void BackupFileInfo::SetBackupMethod(const string& _backupMethod)
{
    m_backupMethod = _backupMethod;
    m_backupMethodHasBeenSet = true;
}

bool BackupFileInfo::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

string BackupFileInfo::GetBackupStatus() const
{
    return m_backupStatus;
}

void BackupFileInfo::SetBackupStatus(const string& _backupStatus)
{
    m_backupStatus = _backupStatus;
    m_backupStatusHasBeenSet = true;
}

bool BackupFileInfo::BackupStatusHasBeenSet() const
{
    return m_backupStatusHasBeenSet;
}

string BackupFileInfo::GetSnapshotTime() const
{
    return m_snapshotTime;
}

void BackupFileInfo::SetSnapshotTime(const string& _snapshotTime)
{
    m_snapshotTime = _snapshotTime;
    m_snapshotTimeHasBeenSet = true;
}

bool BackupFileInfo::SnapshotTimeHasBeenSet() const
{
    return m_snapshotTimeHasBeenSet;
}

int64_t BackupFileInfo::GetBackupId() const
{
    return m_backupId;
}

void BackupFileInfo::SetBackupId(const int64_t& _backupId)
{
    m_backupId = _backupId;
    m_backupIdHasBeenSet = true;
}

bool BackupFileInfo::BackupIdHasBeenSet() const
{
    return m_backupIdHasBeenSet;
}

string BackupFileInfo::GetSnapShotType() const
{
    return m_snapShotType;
}

void BackupFileInfo::SetSnapShotType(const string& _snapShotType)
{
    m_snapShotType = _snapShotType;
    m_snapShotTypeHasBeenSet = true;
}

bool BackupFileInfo::SnapShotTypeHasBeenSet() const
{
    return m_snapShotTypeHasBeenSet;
}

string BackupFileInfo::GetBackupName() const
{
    return m_backupName;
}

void BackupFileInfo::SetBackupName(const string& _backupName)
{
    m_backupName = _backupName;
    m_backupNameHasBeenSet = true;
}

bool BackupFileInfo::BackupNameHasBeenSet() const
{
    return m_backupNameHasBeenSet;
}

string BackupFileInfo::GetCopyStatus() const
{
    return m_copyStatus;
}

void BackupFileInfo::SetCopyStatus(const string& _copyStatus)
{
    m_copyStatus = _copyStatus;
    m_copyStatusHasBeenSet = true;
}

bool BackupFileInfo::CopyStatusHasBeenSet() const
{
    return m_copyStatusHasBeenSet;
}

string BackupFileInfo::GetEncryptKeyId() const
{
    return m_encryptKeyId;
}

void BackupFileInfo::SetEncryptKeyId(const string& _encryptKeyId)
{
    m_encryptKeyId = _encryptKeyId;
    m_encryptKeyIdHasBeenSet = true;
}

bool BackupFileInfo::EncryptKeyIdHasBeenSet() const
{
    return m_encryptKeyIdHasBeenSet;
}

string BackupFileInfo::GetEncryptRegion() const
{
    return m_encryptRegion;
}

void BackupFileInfo::SetEncryptRegion(const string& _encryptRegion)
{
    m_encryptRegion = _encryptRegion;
    m_encryptRegionHasBeenSet = true;
}

bool BackupFileInfo::EncryptRegionHasBeenSet() const
{
    return m_encryptRegionHasBeenSet;
}

vector<VaultInfo> BackupFileInfo::GetVaultInfos() const
{
    return m_vaultInfos;
}

void BackupFileInfo::SetVaultInfos(const vector<VaultInfo>& _vaultInfos)
{
    m_vaultInfos = _vaultInfos;
    m_vaultInfosHasBeenSet = true;
}

bool BackupFileInfo::VaultInfosHasBeenSet() const
{
    return m_vaultInfosHasBeenSet;
}

string BackupFileInfo::GetBackupPeriodStrategy() const
{
    return m_backupPeriodStrategy;
}

void BackupFileInfo::SetBackupPeriodStrategy(const string& _backupPeriodStrategy)
{
    m_backupPeriodStrategy = _backupPeriodStrategy;
    m_backupPeriodStrategyHasBeenSet = true;
}

bool BackupFileInfo::BackupPeriodStrategyHasBeenSet() const
{
    return m_backupPeriodStrategyHasBeenSet;
}

