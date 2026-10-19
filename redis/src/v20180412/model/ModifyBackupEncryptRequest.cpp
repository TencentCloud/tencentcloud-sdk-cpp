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

#include <tencentcloud/redis/v20180412/model/ModifyBackupEncryptRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

ModifyBackupEncryptRequest::ModifyBackupEncryptRequest() :
    m_instanceIdHasBeenSet(false),
    m_backupEncryptHasBeenSet(false),
    m_encryptKeyTypeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_kmsRegionHasBeenSet(false)
{
}

string ModifyBackupEncryptRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupEncryptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupEncrypt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupEncrypt, allocator);
    }

    if (m_encryptKeyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptKeyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_encryptKeyType, allocator);
    }

    if (m_kmsKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsKeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kmsKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kmsRegion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyBackupEncryptRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyBackupEncryptRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyBackupEncryptRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

bool ModifyBackupEncryptRequest::GetBackupEncrypt() const
{
    return m_backupEncrypt;
}

void ModifyBackupEncryptRequest::SetBackupEncrypt(const bool& _backupEncrypt)
{
    m_backupEncrypt = _backupEncrypt;
    m_backupEncryptHasBeenSet = true;
}

bool ModifyBackupEncryptRequest::BackupEncryptHasBeenSet() const
{
    return m_backupEncryptHasBeenSet;
}

int64_t ModifyBackupEncryptRequest::GetEncryptKeyType() const
{
    return m_encryptKeyType;
}

void ModifyBackupEncryptRequest::SetEncryptKeyType(const int64_t& _encryptKeyType)
{
    m_encryptKeyType = _encryptKeyType;
    m_encryptKeyTypeHasBeenSet = true;
}

bool ModifyBackupEncryptRequest::EncryptKeyTypeHasBeenSet() const
{
    return m_encryptKeyTypeHasBeenSet;
}

string ModifyBackupEncryptRequest::GetKmsKeyId() const
{
    return m_kmsKeyId;
}

void ModifyBackupEncryptRequest::SetKmsKeyId(const string& _kmsKeyId)
{
    m_kmsKeyId = _kmsKeyId;
    m_kmsKeyIdHasBeenSet = true;
}

bool ModifyBackupEncryptRequest::KmsKeyIdHasBeenSet() const
{
    return m_kmsKeyIdHasBeenSet;
}

string ModifyBackupEncryptRequest::GetKmsRegion() const
{
    return m_kmsRegion;
}

void ModifyBackupEncryptRequest::SetKmsRegion(const string& _kmsRegion)
{
    m_kmsRegion = _kmsRegion;
    m_kmsRegionHasBeenSet = true;
}

bool ModifyBackupEncryptRequest::KmsRegionHasBeenSet() const
{
    return m_kmsRegionHasBeenSet;
}


