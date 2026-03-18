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

#include <tencentcloud/cynosdb/v20190107/model/ModifyVaultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyVaultRequest::ModifyVaultRequest() :
    m_vaultIdHasBeenSet(false),
    m_vaultNameHasBeenSet(false),
    m_vaultDescribeHasBeenSet(false),
    m_backupSaveSecondsHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_keyTypeHasBeenSet(false),
    m_keyRegionHasBeenSet(false),
    m_isLockHasBeenSet(false),
    m_lockedTimeHasBeenSet(false),
    m_isEncryptionHasBeenSet(false)
{
}

string ModifyVaultRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vaultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vaultId.c_str(), allocator).Move(), allocator);
    }

    if (m_vaultNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vaultName.c_str(), allocator).Move(), allocator);
    }

    if (m_vaultDescribeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultDescribe";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vaultDescribe.c_str(), allocator).Move(), allocator);
    }

    if (m_backupSaveSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSaveSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupSaveSeconds, allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyType.c_str(), allocator).Move(), allocator);
    }

    if (m_keyRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_isLockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLock";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isLock, allocator);
    }

    if (m_lockedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockedTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lockedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isEncryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEncryption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEncryption, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyVaultRequest::GetVaultId() const
{
    return m_vaultId;
}

void ModifyVaultRequest::SetVaultId(const string& _vaultId)
{
    m_vaultId = _vaultId;
    m_vaultIdHasBeenSet = true;
}

bool ModifyVaultRequest::VaultIdHasBeenSet() const
{
    return m_vaultIdHasBeenSet;
}

string ModifyVaultRequest::GetVaultName() const
{
    return m_vaultName;
}

void ModifyVaultRequest::SetVaultName(const string& _vaultName)
{
    m_vaultName = _vaultName;
    m_vaultNameHasBeenSet = true;
}

bool ModifyVaultRequest::VaultNameHasBeenSet() const
{
    return m_vaultNameHasBeenSet;
}

string ModifyVaultRequest::GetVaultDescribe() const
{
    return m_vaultDescribe;
}

void ModifyVaultRequest::SetVaultDescribe(const string& _vaultDescribe)
{
    m_vaultDescribe = _vaultDescribe;
    m_vaultDescribeHasBeenSet = true;
}

bool ModifyVaultRequest::VaultDescribeHasBeenSet() const
{
    return m_vaultDescribeHasBeenSet;
}

int64_t ModifyVaultRequest::GetBackupSaveSeconds() const
{
    return m_backupSaveSeconds;
}

void ModifyVaultRequest::SetBackupSaveSeconds(const int64_t& _backupSaveSeconds)
{
    m_backupSaveSeconds = _backupSaveSeconds;
    m_backupSaveSecondsHasBeenSet = true;
}

bool ModifyVaultRequest::BackupSaveSecondsHasBeenSet() const
{
    return m_backupSaveSecondsHasBeenSet;
}

string ModifyVaultRequest::GetKeyId() const
{
    return m_keyId;
}

void ModifyVaultRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool ModifyVaultRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string ModifyVaultRequest::GetKeyType() const
{
    return m_keyType;
}

void ModifyVaultRequest::SetKeyType(const string& _keyType)
{
    m_keyType = _keyType;
    m_keyTypeHasBeenSet = true;
}

bool ModifyVaultRequest::KeyTypeHasBeenSet() const
{
    return m_keyTypeHasBeenSet;
}

string ModifyVaultRequest::GetKeyRegion() const
{
    return m_keyRegion;
}

void ModifyVaultRequest::SetKeyRegion(const string& _keyRegion)
{
    m_keyRegion = _keyRegion;
    m_keyRegionHasBeenSet = true;
}

bool ModifyVaultRequest::KeyRegionHasBeenSet() const
{
    return m_keyRegionHasBeenSet;
}

bool ModifyVaultRequest::GetIsLock() const
{
    return m_isLock;
}

void ModifyVaultRequest::SetIsLock(const bool& _isLock)
{
    m_isLock = _isLock;
    m_isLockHasBeenSet = true;
}

bool ModifyVaultRequest::IsLockHasBeenSet() const
{
    return m_isLockHasBeenSet;
}

string ModifyVaultRequest::GetLockedTime() const
{
    return m_lockedTime;
}

void ModifyVaultRequest::SetLockedTime(const string& _lockedTime)
{
    m_lockedTime = _lockedTime;
    m_lockedTimeHasBeenSet = true;
}

bool ModifyVaultRequest::LockedTimeHasBeenSet() const
{
    return m_lockedTimeHasBeenSet;
}

bool ModifyVaultRequest::GetIsEncryption() const
{
    return m_isEncryption;
}

void ModifyVaultRequest::SetIsEncryption(const bool& _isEncryption)
{
    m_isEncryption = _isEncryption;
    m_isEncryptionHasBeenSet = true;
}

bool ModifyVaultRequest::IsEncryptionHasBeenSet() const
{
    return m_isEncryptionHasBeenSet;
}


