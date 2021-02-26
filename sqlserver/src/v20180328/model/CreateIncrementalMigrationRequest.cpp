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

#include <tencentcloud/sqlserver/v20180328/model/CreateIncrementalMigrationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace rapidjson;
using namespace std;

CreateIncrementalMigrationRequest::CreateIncrementalMigrationRequest() :
    m_instanceIdHasBeenSet(false),
    m_backupMigrationIdHasBeenSet(false),
    m_backupFilesHasBeenSet(false),
    m_isRecoveryHasBeenSet(false)
{
}

string CreateIncrementalMigrationRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupMigrationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BackupMigrationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_backupMigrationId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupFilesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BackupFiles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_backupFiles.begin(); itr != m_backupFiles.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isRecoveryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsRecovery";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_isRecovery.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateIncrementalMigrationRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateIncrementalMigrationRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateIncrementalMigrationRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateIncrementalMigrationRequest::GetBackupMigrationId() const
{
    return m_backupMigrationId;
}

void CreateIncrementalMigrationRequest::SetBackupMigrationId(const string& _backupMigrationId)
{
    m_backupMigrationId = _backupMigrationId;
    m_backupMigrationIdHasBeenSet = true;
}

bool CreateIncrementalMigrationRequest::BackupMigrationIdHasBeenSet() const
{
    return m_backupMigrationIdHasBeenSet;
}

vector<string> CreateIncrementalMigrationRequest::GetBackupFiles() const
{
    return m_backupFiles;
}

void CreateIncrementalMigrationRequest::SetBackupFiles(const vector<string>& _backupFiles)
{
    m_backupFiles = _backupFiles;
    m_backupFilesHasBeenSet = true;
}

bool CreateIncrementalMigrationRequest::BackupFilesHasBeenSet() const
{
    return m_backupFilesHasBeenSet;
}

string CreateIncrementalMigrationRequest::GetIsRecovery() const
{
    return m_isRecovery;
}

void CreateIncrementalMigrationRequest::SetIsRecovery(const string& _isRecovery)
{
    m_isRecovery = _isRecovery;
    m_isRecoveryHasBeenSet = true;
}

bool CreateIncrementalMigrationRequest::IsRecoveryHasBeenSet() const
{
    return m_isRecoveryHasBeenSet;
}


