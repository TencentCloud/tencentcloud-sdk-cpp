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

#include <tencentcloud/cynosdb/v20190107/model/VaultInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

VaultInfo::VaultInfo() :
    m_vaultIdHasBeenSet(false),
    m_vaultNameHasBeenSet(false),
    m_vaultRegionHasBeenSet(false),
    m_vaultStatusHasBeenSet(false),
    m_backupSaveSecondsHasBeenSet(false)
{
}

CoreInternalOutcome VaultInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VaultId") && !value["VaultId"].IsNull())
    {
        if (!value["VaultId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VaultInfo.VaultId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vaultId = string(value["VaultId"].GetString());
        m_vaultIdHasBeenSet = true;
    }

    if (value.HasMember("VaultName") && !value["VaultName"].IsNull())
    {
        if (!value["VaultName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VaultInfo.VaultName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vaultName = string(value["VaultName"].GetString());
        m_vaultNameHasBeenSet = true;
    }

    if (value.HasMember("VaultRegion") && !value["VaultRegion"].IsNull())
    {
        if (!value["VaultRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VaultInfo.VaultRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vaultRegion = string(value["VaultRegion"].GetString());
        m_vaultRegionHasBeenSet = true;
    }

    if (value.HasMember("VaultStatus") && !value["VaultStatus"].IsNull())
    {
        if (!value["VaultStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VaultInfo.VaultStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vaultStatus = string(value["VaultStatus"].GetString());
        m_vaultStatusHasBeenSet = true;
    }

    if (value.HasMember("BackupSaveSeconds") && !value["BackupSaveSeconds"].IsNull())
    {
        if (!value["BackupSaveSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VaultInfo.BackupSaveSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupSaveSeconds = value["BackupSaveSeconds"].GetInt64();
        m_backupSaveSecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VaultInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_vaultRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vaultRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_vaultStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vaultStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_backupSaveSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSaveSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupSaveSeconds, allocator);
    }

}


string VaultInfo::GetVaultId() const
{
    return m_vaultId;
}

void VaultInfo::SetVaultId(const string& _vaultId)
{
    m_vaultId = _vaultId;
    m_vaultIdHasBeenSet = true;
}

bool VaultInfo::VaultIdHasBeenSet() const
{
    return m_vaultIdHasBeenSet;
}

string VaultInfo::GetVaultName() const
{
    return m_vaultName;
}

void VaultInfo::SetVaultName(const string& _vaultName)
{
    m_vaultName = _vaultName;
    m_vaultNameHasBeenSet = true;
}

bool VaultInfo::VaultNameHasBeenSet() const
{
    return m_vaultNameHasBeenSet;
}

string VaultInfo::GetVaultRegion() const
{
    return m_vaultRegion;
}

void VaultInfo::SetVaultRegion(const string& _vaultRegion)
{
    m_vaultRegion = _vaultRegion;
    m_vaultRegionHasBeenSet = true;
}

bool VaultInfo::VaultRegionHasBeenSet() const
{
    return m_vaultRegionHasBeenSet;
}

string VaultInfo::GetVaultStatus() const
{
    return m_vaultStatus;
}

void VaultInfo::SetVaultStatus(const string& _vaultStatus)
{
    m_vaultStatus = _vaultStatus;
    m_vaultStatusHasBeenSet = true;
}

bool VaultInfo::VaultStatusHasBeenSet() const
{
    return m_vaultStatusHasBeenSet;
}

int64_t VaultInfo::GetBackupSaveSeconds() const
{
    return m_backupSaveSeconds;
}

void VaultInfo::SetBackupSaveSeconds(const int64_t& _backupSaveSeconds)
{
    m_backupSaveSeconds = _backupSaveSeconds;
    m_backupSaveSecondsHasBeenSet = true;
}

bool VaultInfo::BackupSaveSecondsHasBeenSet() const
{
    return m_backupSaveSecondsHasBeenSet;
}

