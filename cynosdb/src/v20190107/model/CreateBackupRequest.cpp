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

#include <tencentcloud/cynosdb/v20190107/model/CreateBackupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CreateBackupRequest::CreateBackupRequest() :
    m_clusterIdHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_backupDatabasesHasBeenSet(false),
    m_backupTablesHasBeenSet(false),
    m_backupNameHasBeenSet(false)
{
}

string CreateBackupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupType.c_str(), allocator).Move(), allocator);
    }

    if (m_backupDatabasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupDatabases";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backupDatabases.begin(); itr != m_backupDatabases.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_backupTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTables";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_backupTables.begin(); itr != m_backupTables.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_backupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBackupRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateBackupRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateBackupRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateBackupRequest::GetBackupType() const
{
    return m_backupType;
}

void CreateBackupRequest::SetBackupType(const string& _backupType)
{
    m_backupType = _backupType;
    m_backupTypeHasBeenSet = true;
}

bool CreateBackupRequest::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

vector<string> CreateBackupRequest::GetBackupDatabases() const
{
    return m_backupDatabases;
}

void CreateBackupRequest::SetBackupDatabases(const vector<string>& _backupDatabases)
{
    m_backupDatabases = _backupDatabases;
    m_backupDatabasesHasBeenSet = true;
}

bool CreateBackupRequest::BackupDatabasesHasBeenSet() const
{
    return m_backupDatabasesHasBeenSet;
}

vector<DatabaseTables> CreateBackupRequest::GetBackupTables() const
{
    return m_backupTables;
}

void CreateBackupRequest::SetBackupTables(const vector<DatabaseTables>& _backupTables)
{
    m_backupTables = _backupTables;
    m_backupTablesHasBeenSet = true;
}

bool CreateBackupRequest::BackupTablesHasBeenSet() const
{
    return m_backupTablesHasBeenSet;
}

string CreateBackupRequest::GetBackupName() const
{
    return m_backupName;
}

void CreateBackupRequest::SetBackupName(const string& _backupName)
{
    m_backupName = _backupName;
    m_backupNameHasBeenSet = true;
}

bool CreateBackupRequest::BackupNameHasBeenSet() const
{
    return m_backupNameHasBeenSet;
}


