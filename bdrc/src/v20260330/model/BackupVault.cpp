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

#include <tencentcloud/bdrc/v20260330/model/BackupVault.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

BackupVault::BackupVault() :
    m_vaultIdHasBeenSet(false),
    m_vaultNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_encryptTypeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_vaultTypeHasBeenSet(false),
    m_backupPolicySetHasBeenSet(false),
    m_backupSetHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_sourceDataSizeHasBeenSet(false),
    m_vaultDataSizeHasBeenSet(false)
{
}

CoreInternalOutcome BackupVault::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VaultId") && !value["VaultId"].IsNull())
    {
        if (!value["VaultId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupVault.VaultId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vaultId = string(value["VaultId"].GetString());
        m_vaultIdHasBeenSet = true;
    }

    if (value.HasMember("VaultName") && !value["VaultName"].IsNull())
    {
        if (!value["VaultName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupVault.VaultName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vaultName = string(value["VaultName"].GetString());
        m_vaultNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupVault.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupVault.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EncryptType") && !value["EncryptType"].IsNull())
    {
        if (!value["EncryptType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupVault.EncryptType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptType = string(value["EncryptType"].GetString());
        m_encryptTypeHasBeenSet = true;
    }

    if (value.HasMember("KmsKeyId") && !value["KmsKeyId"].IsNull())
    {
        if (!value["KmsKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupVault.KmsKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsKeyId = string(value["KmsKeyId"].GetString());
        m_kmsKeyIdHasBeenSet = true;
    }

    if (value.HasMember("VaultType") && !value["VaultType"].IsNull())
    {
        if (!value["VaultType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupVault.VaultType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vaultType = string(value["VaultType"].GetString());
        m_vaultTypeHasBeenSet = true;
    }

    if (value.HasMember("BackupPolicySet") && !value["BackupPolicySet"].IsNull())
    {
        if (!value["BackupPolicySet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupVault.BackupPolicySet` is not array type"));

        const rapidjson::Value &tmpValue = value["BackupPolicySet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TypeCount item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_backupPolicySet.push_back(item);
        }
        m_backupPolicySetHasBeenSet = true;
    }

    if (value.HasMember("BackupSet") && !value["BackupSet"].IsNull())
    {
        if (!value["BackupSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupVault.BackupSet` is not array type"));

        const rapidjson::Value &tmpValue = value["BackupSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TypeCount item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_backupSet.push_back(item);
        }
        m_backupSetHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupVault.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupVault.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SourceDataSize") && !value["SourceDataSize"].IsNull())
    {
        if (!value["SourceDataSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupVault.SourceDataSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceDataSize = value["SourceDataSize"].GetUint64();
        m_sourceDataSizeHasBeenSet = true;
    }

    if (value.HasMember("VaultDataSize") && !value["VaultDataSize"].IsNull())
    {
        if (!value["VaultDataSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupVault.VaultDataSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vaultDataSize = value["VaultDataSize"].GetUint64();
        m_vaultDataSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupVault::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptType.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kmsKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_vaultTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vaultType.c_str(), allocator).Move(), allocator);
    }

    if (m_backupPolicySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPolicySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_backupPolicySet.begin(); itr != m_backupPolicySet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_backupSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_backupSet.begin(); itr != m_backupSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceDataSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceDataSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceDataSize, allocator);
    }

    if (m_vaultDataSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultDataSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vaultDataSize, allocator);
    }

}


string BackupVault::GetVaultId() const
{
    return m_vaultId;
}

void BackupVault::SetVaultId(const string& _vaultId)
{
    m_vaultId = _vaultId;
    m_vaultIdHasBeenSet = true;
}

bool BackupVault::VaultIdHasBeenSet() const
{
    return m_vaultIdHasBeenSet;
}

string BackupVault::GetVaultName() const
{
    return m_vaultName;
}

void BackupVault::SetVaultName(const string& _vaultName)
{
    m_vaultName = _vaultName;
    m_vaultNameHasBeenSet = true;
}

bool BackupVault::VaultNameHasBeenSet() const
{
    return m_vaultNameHasBeenSet;
}

string BackupVault::GetDescription() const
{
    return m_description;
}

void BackupVault::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool BackupVault::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string BackupVault::GetStatus() const
{
    return m_status;
}

void BackupVault::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BackupVault::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BackupVault::GetEncryptType() const
{
    return m_encryptType;
}

void BackupVault::SetEncryptType(const string& _encryptType)
{
    m_encryptType = _encryptType;
    m_encryptTypeHasBeenSet = true;
}

bool BackupVault::EncryptTypeHasBeenSet() const
{
    return m_encryptTypeHasBeenSet;
}

string BackupVault::GetKmsKeyId() const
{
    return m_kmsKeyId;
}

void BackupVault::SetKmsKeyId(const string& _kmsKeyId)
{
    m_kmsKeyId = _kmsKeyId;
    m_kmsKeyIdHasBeenSet = true;
}

bool BackupVault::KmsKeyIdHasBeenSet() const
{
    return m_kmsKeyIdHasBeenSet;
}

string BackupVault::GetVaultType() const
{
    return m_vaultType;
}

void BackupVault::SetVaultType(const string& _vaultType)
{
    m_vaultType = _vaultType;
    m_vaultTypeHasBeenSet = true;
}

bool BackupVault::VaultTypeHasBeenSet() const
{
    return m_vaultTypeHasBeenSet;
}

vector<TypeCount> BackupVault::GetBackupPolicySet() const
{
    return m_backupPolicySet;
}

void BackupVault::SetBackupPolicySet(const vector<TypeCount>& _backupPolicySet)
{
    m_backupPolicySet = _backupPolicySet;
    m_backupPolicySetHasBeenSet = true;
}

bool BackupVault::BackupPolicySetHasBeenSet() const
{
    return m_backupPolicySetHasBeenSet;
}

vector<TypeCount> BackupVault::GetBackupSet() const
{
    return m_backupSet;
}

void BackupVault::SetBackupSet(const vector<TypeCount>& _backupSet)
{
    m_backupSet = _backupSet;
    m_backupSetHasBeenSet = true;
}

bool BackupVault::BackupSetHasBeenSet() const
{
    return m_backupSetHasBeenSet;
}

string BackupVault::GetRegion() const
{
    return m_region;
}

void BackupVault::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool BackupVault::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string BackupVault::GetCreateTime() const
{
    return m_createTime;
}

void BackupVault::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BackupVault::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t BackupVault::GetSourceDataSize() const
{
    return m_sourceDataSize;
}

void BackupVault::SetSourceDataSize(const uint64_t& _sourceDataSize)
{
    m_sourceDataSize = _sourceDataSize;
    m_sourceDataSizeHasBeenSet = true;
}

bool BackupVault::SourceDataSizeHasBeenSet() const
{
    return m_sourceDataSizeHasBeenSet;
}

uint64_t BackupVault::GetVaultDataSize() const
{
    return m_vaultDataSize;
}

void BackupVault::SetVaultDataSize(const uint64_t& _vaultDataSize)
{
    m_vaultDataSize = _vaultDataSize;
    m_vaultDataSizeHasBeenSet = true;
}

bool BackupVault::VaultDataSizeHasBeenSet() const
{
    return m_vaultDataSizeHasBeenSet;
}

