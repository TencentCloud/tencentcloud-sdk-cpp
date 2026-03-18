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

#include <tencentcloud/cynosdb/v20190107/model/CreateVaultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CreateVaultRequest::CreateVaultRequest() :
    m_vaultNameHasBeenSet(false),
    m_backupSaveSecondsHasBeenSet(false),
    m_vaultDescribeHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_keyTypeHasBeenSet(false),
    m_keyRegionHasBeenSet(false),
    m_lockedTimeHasBeenSet(false)
{
}

string CreateVaultRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vaultNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vaultName.c_str(), allocator).Move(), allocator);
    }

    if (m_backupSaveSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSaveSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupSaveSeconds, allocator);
    }

    if (m_vaultDescribeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultDescribe";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vaultDescribe.c_str(), allocator).Move(), allocator);
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

    if (m_lockedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockedTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lockedTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVaultRequest::GetVaultName() const
{
    return m_vaultName;
}

void CreateVaultRequest::SetVaultName(const string& _vaultName)
{
    m_vaultName = _vaultName;
    m_vaultNameHasBeenSet = true;
}

bool CreateVaultRequest::VaultNameHasBeenSet() const
{
    return m_vaultNameHasBeenSet;
}

int64_t CreateVaultRequest::GetBackupSaveSeconds() const
{
    return m_backupSaveSeconds;
}

void CreateVaultRequest::SetBackupSaveSeconds(const int64_t& _backupSaveSeconds)
{
    m_backupSaveSeconds = _backupSaveSeconds;
    m_backupSaveSecondsHasBeenSet = true;
}

bool CreateVaultRequest::BackupSaveSecondsHasBeenSet() const
{
    return m_backupSaveSecondsHasBeenSet;
}

string CreateVaultRequest::GetVaultDescribe() const
{
    return m_vaultDescribe;
}

void CreateVaultRequest::SetVaultDescribe(const string& _vaultDescribe)
{
    m_vaultDescribe = _vaultDescribe;
    m_vaultDescribeHasBeenSet = true;
}

bool CreateVaultRequest::VaultDescribeHasBeenSet() const
{
    return m_vaultDescribeHasBeenSet;
}

string CreateVaultRequest::GetKeyId() const
{
    return m_keyId;
}

void CreateVaultRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool CreateVaultRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string CreateVaultRequest::GetKeyType() const
{
    return m_keyType;
}

void CreateVaultRequest::SetKeyType(const string& _keyType)
{
    m_keyType = _keyType;
    m_keyTypeHasBeenSet = true;
}

bool CreateVaultRequest::KeyTypeHasBeenSet() const
{
    return m_keyTypeHasBeenSet;
}

string CreateVaultRequest::GetKeyRegion() const
{
    return m_keyRegion;
}

void CreateVaultRequest::SetKeyRegion(const string& _keyRegion)
{
    m_keyRegion = _keyRegion;
    m_keyRegionHasBeenSet = true;
}

bool CreateVaultRequest::KeyRegionHasBeenSet() const
{
    return m_keyRegionHasBeenSet;
}

string CreateVaultRequest::GetLockedTime() const
{
    return m_lockedTime;
}

void CreateVaultRequest::SetLockedTime(const string& _lockedTime)
{
    m_lockedTime = _lockedTime;
    m_lockedTimeHasBeenSet = true;
}

bool CreateVaultRequest::LockedTimeHasBeenSet() const
{
    return m_lockedTimeHasBeenSet;
}


