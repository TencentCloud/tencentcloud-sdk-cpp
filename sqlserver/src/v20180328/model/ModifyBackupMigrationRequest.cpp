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

#include <tencentcloud/sqlserver/v20180328/model/ModifyBackupMigrationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

ModifyBackupMigrationRequest::ModifyBackupMigrationRequest() :
    m_instanceIdHasBeenSet(false),
    m_backupMigrationIdHasBeenSet(false),
    m_migrationNameHasBeenSet(false),
    m_recoveryTypeHasBeenSet(false),
    m_uploadTypeHasBeenSet(false),
    m_backupFilesHasBeenSet(false),
    m_dBRenameHasBeenSet(false)
{
}

string ModifyBackupMigrationRequest::ToJsonString() const
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

    if (m_backupMigrationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMigrationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupMigrationId.c_str(), allocator).Move(), allocator);
    }

    if (m_migrationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_migrationName.c_str(), allocator).Move(), allocator);
    }

    if (m_recoveryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecoveryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recoveryType.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uploadType.c_str(), allocator).Move(), allocator);
    }

    if (m_backupFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupFiles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backupFiles.begin(); itr != m_backupFiles.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dBRenameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBRename";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dBRename.begin(); itr != m_dBRename.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyBackupMigrationRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyBackupMigrationRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyBackupMigrationRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyBackupMigrationRequest::GetBackupMigrationId() const
{
    return m_backupMigrationId;
}

void ModifyBackupMigrationRequest::SetBackupMigrationId(const string& _backupMigrationId)
{
    m_backupMigrationId = _backupMigrationId;
    m_backupMigrationIdHasBeenSet = true;
}

bool ModifyBackupMigrationRequest::BackupMigrationIdHasBeenSet() const
{
    return m_backupMigrationIdHasBeenSet;
}

string ModifyBackupMigrationRequest::GetMigrationName() const
{
    return m_migrationName;
}

void ModifyBackupMigrationRequest::SetMigrationName(const string& _migrationName)
{
    m_migrationName = _migrationName;
    m_migrationNameHasBeenSet = true;
}

bool ModifyBackupMigrationRequest::MigrationNameHasBeenSet() const
{
    return m_migrationNameHasBeenSet;
}

string ModifyBackupMigrationRequest::GetRecoveryType() const
{
    return m_recoveryType;
}

void ModifyBackupMigrationRequest::SetRecoveryType(const string& _recoveryType)
{
    m_recoveryType = _recoveryType;
    m_recoveryTypeHasBeenSet = true;
}

bool ModifyBackupMigrationRequest::RecoveryTypeHasBeenSet() const
{
    return m_recoveryTypeHasBeenSet;
}

string ModifyBackupMigrationRequest::GetUploadType() const
{
    return m_uploadType;
}

void ModifyBackupMigrationRequest::SetUploadType(const string& _uploadType)
{
    m_uploadType = _uploadType;
    m_uploadTypeHasBeenSet = true;
}

bool ModifyBackupMigrationRequest::UploadTypeHasBeenSet() const
{
    return m_uploadTypeHasBeenSet;
}

vector<string> ModifyBackupMigrationRequest::GetBackupFiles() const
{
    return m_backupFiles;
}

void ModifyBackupMigrationRequest::SetBackupFiles(const vector<string>& _backupFiles)
{
    m_backupFiles = _backupFiles;
    m_backupFilesHasBeenSet = true;
}

bool ModifyBackupMigrationRequest::BackupFilesHasBeenSet() const
{
    return m_backupFilesHasBeenSet;
}

vector<RenameRestoreDatabase> ModifyBackupMigrationRequest::GetDBRename() const
{
    return m_dBRename;
}

void ModifyBackupMigrationRequest::SetDBRename(const vector<RenameRestoreDatabase>& _dBRename)
{
    m_dBRename = _dBRename;
    m_dBRenameHasBeenSet = true;
}

bool ModifyBackupMigrationRequest::DBRenameHasBeenSet() const
{
    return m_dBRenameHasBeenSet;
}


