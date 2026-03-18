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

#include <tencentcloud/cynosdb/v20190107/model/DescribeVaultsItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeVaultsItem::DescribeVaultsItem() :
    m_vaultIdHasBeenSet(false),
    m_vaultNameHasBeenSet(false),
    m_vaultDescribeHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_keyRegionHasBeenSet(false),
    m_keyTypeHasBeenSet(false),
    m_backupFileCountHasBeenSet(false),
    m_backupFileSizeHasBeenSet(false),
    m_binlogFileCountHasBeenSet(false),
    m_binlogFileSizeHasBeenSet(false),
    m_redoLogFileCountHasBeenSet(false),
    m_redoLogFileSizeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_backupSaveSecondsHasBeenSet(false),
    m_lockedTimeHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_vaultRegionHasBeenSet(false),
    m_autoCopyConfigsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVaultsItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VaultId") && !value["VaultId"].IsNull())
    {
        if (!value["VaultId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVaultsItem.VaultId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vaultId = string(value["VaultId"].GetString());
        m_vaultIdHasBeenSet = true;
    }

    if (value.HasMember("VaultName") && !value["VaultName"].IsNull())
    {
        if (!value["VaultName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVaultsItem.VaultName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vaultName = string(value["VaultName"].GetString());
        m_vaultNameHasBeenSet = true;
    }

    if (value.HasMember("VaultDescribe") && !value["VaultDescribe"].IsNull())
    {
        if (!value["VaultDescribe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVaultsItem.VaultDescribe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vaultDescribe = string(value["VaultDescribe"].GetString());
        m_vaultDescribeHasBeenSet = true;
    }

    if (value.HasMember("KeyId") && !value["KeyId"].IsNull())
    {
        if (!value["KeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVaultsItem.KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(value["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (value.HasMember("KeyRegion") && !value["KeyRegion"].IsNull())
    {
        if (!value["KeyRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVaultsItem.KeyRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyRegion = string(value["KeyRegion"].GetString());
        m_keyRegionHasBeenSet = true;
    }

    if (value.HasMember("KeyType") && !value["KeyType"].IsNull())
    {
        if (!value["KeyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVaultsItem.KeyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyType = string(value["KeyType"].GetString());
        m_keyTypeHasBeenSet = true;
    }

    if (value.HasMember("BackupFileCount") && !value["BackupFileCount"].IsNull())
    {
        if (!value["BackupFileCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVaultsItem.BackupFileCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupFileCount = value["BackupFileCount"].GetInt64();
        m_backupFileCountHasBeenSet = true;
    }

    if (value.HasMember("BackupFileSize") && !value["BackupFileSize"].IsNull())
    {
        if (!value["BackupFileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVaultsItem.BackupFileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupFileSize = value["BackupFileSize"].GetInt64();
        m_backupFileSizeHasBeenSet = true;
    }

    if (value.HasMember("BinlogFileCount") && !value["BinlogFileCount"].IsNull())
    {
        if (!value["BinlogFileCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVaultsItem.BinlogFileCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_binlogFileCount = value["BinlogFileCount"].GetInt64();
        m_binlogFileCountHasBeenSet = true;
    }

    if (value.HasMember("BinlogFileSize") && !value["BinlogFileSize"].IsNull())
    {
        if (!value["BinlogFileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVaultsItem.BinlogFileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_binlogFileSize = value["BinlogFileSize"].GetInt64();
        m_binlogFileSizeHasBeenSet = true;
    }

    if (value.HasMember("RedoLogFileCount") && !value["RedoLogFileCount"].IsNull())
    {
        if (!value["RedoLogFileCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVaultsItem.RedoLogFileCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_redoLogFileCount = value["RedoLogFileCount"].GetInt64();
        m_redoLogFileCountHasBeenSet = true;
    }

    if (value.HasMember("RedoLogFileSize") && !value["RedoLogFileSize"].IsNull())
    {
        if (!value["RedoLogFileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVaultsItem.RedoLogFileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_redoLogFileSize = value["RedoLogFileSize"].GetInt64();
        m_redoLogFileSizeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVaultsItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("BackupSaveSeconds") && !value["BackupSaveSeconds"].IsNull())
    {
        if (!value["BackupSaveSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVaultsItem.BackupSaveSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupSaveSeconds = value["BackupSaveSeconds"].GetInt64();
        m_backupSaveSecondsHasBeenSet = true;
    }

    if (value.HasMember("LockedTime") && !value["LockedTime"].IsNull())
    {
        if (!value["LockedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVaultsItem.LockedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lockedTime = string(value["LockedTime"].GetString());
        m_lockedTimeHasBeenSet = true;
    }

    if (value.HasMember("Tasks") && !value["Tasks"].IsNull())
    {
        if (!value["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeVaultsItem.Tasks` is not array type"));

        const rapidjson::Value &tmpValue = value["Tasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ObjectTask item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tasks.push_back(item);
        }
        m_tasksHasBeenSet = true;
    }

    if (value.HasMember("VaultRegion") && !value["VaultRegion"].IsNull())
    {
        if (!value["VaultRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVaultsItem.VaultRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vaultRegion = string(value["VaultRegion"].GetString());
        m_vaultRegionHasBeenSet = true;
    }

    if (value.HasMember("AutoCopyConfigs") && !value["AutoCopyConfigs"].IsNull())
    {
        if (!value["AutoCopyConfigs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeVaultsItem.AutoCopyConfigs` is not array type"));

        const rapidjson::Value &tmpValue = value["AutoCopyConfigs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AutoCopyConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_autoCopyConfigs.push_back(item);
        }
        m_autoCopyConfigsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeVaultsItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vaultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vaultId.c_str(), allocator).Move(), allocator);
    }

    if (m_vaultNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vaultName.c_str(), allocator).Move(), allocator);
    }

    if (m_vaultDescribeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultDescribe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vaultDescribe.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_keyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyType.c_str(), allocator).Move(), allocator);
    }

    if (m_backupFileCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupFileCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupFileCount, allocator);
    }

    if (m_backupFileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupFileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupFileSize, allocator);
    }

    if (m_binlogFileCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogFileCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_binlogFileCount, allocator);
    }

    if (m_binlogFileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogFileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_binlogFileSize, allocator);
    }

    if (m_redoLogFileCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedoLogFileCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redoLogFileCount, allocator);
    }

    if (m_redoLogFileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedoLogFileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redoLogFileSize, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_backupSaveSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSaveSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupSaveSeconds, allocator);
    }

    if (m_lockedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lockedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tasks.begin(); itr != m_tasks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vaultRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vaultRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_autoCopyConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoCopyConfigs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_autoCopyConfigs.begin(); itr != m_autoCopyConfigs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DescribeVaultsItem::GetVaultId() const
{
    return m_vaultId;
}

void DescribeVaultsItem::SetVaultId(const string& _vaultId)
{
    m_vaultId = _vaultId;
    m_vaultIdHasBeenSet = true;
}

bool DescribeVaultsItem::VaultIdHasBeenSet() const
{
    return m_vaultIdHasBeenSet;
}

string DescribeVaultsItem::GetVaultName() const
{
    return m_vaultName;
}

void DescribeVaultsItem::SetVaultName(const string& _vaultName)
{
    m_vaultName = _vaultName;
    m_vaultNameHasBeenSet = true;
}

bool DescribeVaultsItem::VaultNameHasBeenSet() const
{
    return m_vaultNameHasBeenSet;
}

string DescribeVaultsItem::GetVaultDescribe() const
{
    return m_vaultDescribe;
}

void DescribeVaultsItem::SetVaultDescribe(const string& _vaultDescribe)
{
    m_vaultDescribe = _vaultDescribe;
    m_vaultDescribeHasBeenSet = true;
}

bool DescribeVaultsItem::VaultDescribeHasBeenSet() const
{
    return m_vaultDescribeHasBeenSet;
}

string DescribeVaultsItem::GetKeyId() const
{
    return m_keyId;
}

void DescribeVaultsItem::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool DescribeVaultsItem::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string DescribeVaultsItem::GetKeyRegion() const
{
    return m_keyRegion;
}

void DescribeVaultsItem::SetKeyRegion(const string& _keyRegion)
{
    m_keyRegion = _keyRegion;
    m_keyRegionHasBeenSet = true;
}

bool DescribeVaultsItem::KeyRegionHasBeenSet() const
{
    return m_keyRegionHasBeenSet;
}

string DescribeVaultsItem::GetKeyType() const
{
    return m_keyType;
}

void DescribeVaultsItem::SetKeyType(const string& _keyType)
{
    m_keyType = _keyType;
    m_keyTypeHasBeenSet = true;
}

bool DescribeVaultsItem::KeyTypeHasBeenSet() const
{
    return m_keyTypeHasBeenSet;
}

int64_t DescribeVaultsItem::GetBackupFileCount() const
{
    return m_backupFileCount;
}

void DescribeVaultsItem::SetBackupFileCount(const int64_t& _backupFileCount)
{
    m_backupFileCount = _backupFileCount;
    m_backupFileCountHasBeenSet = true;
}

bool DescribeVaultsItem::BackupFileCountHasBeenSet() const
{
    return m_backupFileCountHasBeenSet;
}

int64_t DescribeVaultsItem::GetBackupFileSize() const
{
    return m_backupFileSize;
}

void DescribeVaultsItem::SetBackupFileSize(const int64_t& _backupFileSize)
{
    m_backupFileSize = _backupFileSize;
    m_backupFileSizeHasBeenSet = true;
}

bool DescribeVaultsItem::BackupFileSizeHasBeenSet() const
{
    return m_backupFileSizeHasBeenSet;
}

int64_t DescribeVaultsItem::GetBinlogFileCount() const
{
    return m_binlogFileCount;
}

void DescribeVaultsItem::SetBinlogFileCount(const int64_t& _binlogFileCount)
{
    m_binlogFileCount = _binlogFileCount;
    m_binlogFileCountHasBeenSet = true;
}

bool DescribeVaultsItem::BinlogFileCountHasBeenSet() const
{
    return m_binlogFileCountHasBeenSet;
}

int64_t DescribeVaultsItem::GetBinlogFileSize() const
{
    return m_binlogFileSize;
}

void DescribeVaultsItem::SetBinlogFileSize(const int64_t& _binlogFileSize)
{
    m_binlogFileSize = _binlogFileSize;
    m_binlogFileSizeHasBeenSet = true;
}

bool DescribeVaultsItem::BinlogFileSizeHasBeenSet() const
{
    return m_binlogFileSizeHasBeenSet;
}

int64_t DescribeVaultsItem::GetRedoLogFileCount() const
{
    return m_redoLogFileCount;
}

void DescribeVaultsItem::SetRedoLogFileCount(const int64_t& _redoLogFileCount)
{
    m_redoLogFileCount = _redoLogFileCount;
    m_redoLogFileCountHasBeenSet = true;
}

bool DescribeVaultsItem::RedoLogFileCountHasBeenSet() const
{
    return m_redoLogFileCountHasBeenSet;
}

int64_t DescribeVaultsItem::GetRedoLogFileSize() const
{
    return m_redoLogFileSize;
}

void DescribeVaultsItem::SetRedoLogFileSize(const int64_t& _redoLogFileSize)
{
    m_redoLogFileSize = _redoLogFileSize;
    m_redoLogFileSizeHasBeenSet = true;
}

bool DescribeVaultsItem::RedoLogFileSizeHasBeenSet() const
{
    return m_redoLogFileSizeHasBeenSet;
}

string DescribeVaultsItem::GetStatus() const
{
    return m_status;
}

void DescribeVaultsItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeVaultsItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeVaultsItem::GetBackupSaveSeconds() const
{
    return m_backupSaveSeconds;
}

void DescribeVaultsItem::SetBackupSaveSeconds(const int64_t& _backupSaveSeconds)
{
    m_backupSaveSeconds = _backupSaveSeconds;
    m_backupSaveSecondsHasBeenSet = true;
}

bool DescribeVaultsItem::BackupSaveSecondsHasBeenSet() const
{
    return m_backupSaveSecondsHasBeenSet;
}

string DescribeVaultsItem::GetLockedTime() const
{
    return m_lockedTime;
}

void DescribeVaultsItem::SetLockedTime(const string& _lockedTime)
{
    m_lockedTime = _lockedTime;
    m_lockedTimeHasBeenSet = true;
}

bool DescribeVaultsItem::LockedTimeHasBeenSet() const
{
    return m_lockedTimeHasBeenSet;
}

vector<ObjectTask> DescribeVaultsItem::GetTasks() const
{
    return m_tasks;
}

void DescribeVaultsItem::SetTasks(const vector<ObjectTask>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool DescribeVaultsItem::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

string DescribeVaultsItem::GetVaultRegion() const
{
    return m_vaultRegion;
}

void DescribeVaultsItem::SetVaultRegion(const string& _vaultRegion)
{
    m_vaultRegion = _vaultRegion;
    m_vaultRegionHasBeenSet = true;
}

bool DescribeVaultsItem::VaultRegionHasBeenSet() const
{
    return m_vaultRegionHasBeenSet;
}

vector<AutoCopyConfig> DescribeVaultsItem::GetAutoCopyConfigs() const
{
    return m_autoCopyConfigs;
}

void DescribeVaultsItem::SetAutoCopyConfigs(const vector<AutoCopyConfig>& _autoCopyConfigs)
{
    m_autoCopyConfigs = _autoCopyConfigs;
    m_autoCopyConfigsHasBeenSet = true;
}

bool DescribeVaultsItem::AutoCopyConfigsHasBeenSet() const
{
    return m_autoCopyConfigsHasBeenSet;
}

