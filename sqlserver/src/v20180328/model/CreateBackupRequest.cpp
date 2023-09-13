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

#include <tencentcloud/sqlserver/v20180328/model/CreateBackupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

CreateBackupRequest::CreateBackupRequest() :
    m_strategyHasBeenSet(false),
    m_dBNamesHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_backupNameHasBeenSet(false),
    m_storageStrategyHasBeenSet(false)
{
}

string CreateBackupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_strategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_strategy, allocator);
    }

    if (m_dBNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dBNames.begin(); itr != m_dBNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupName.c_str(), allocator).Move(), allocator);
    }

    if (m_storageStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storageStrategy, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateBackupRequest::GetStrategy() const
{
    return m_strategy;
}

void CreateBackupRequest::SetStrategy(const int64_t& _strategy)
{
    m_strategy = _strategy;
    m_strategyHasBeenSet = true;
}

bool CreateBackupRequest::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}

vector<string> CreateBackupRequest::GetDBNames() const
{
    return m_dBNames;
}

void CreateBackupRequest::SetDBNames(const vector<string>& _dBNames)
{
    m_dBNames = _dBNames;
    m_dBNamesHasBeenSet = true;
}

bool CreateBackupRequest::DBNamesHasBeenSet() const
{
    return m_dBNamesHasBeenSet;
}

string CreateBackupRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateBackupRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateBackupRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
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

int64_t CreateBackupRequest::GetStorageStrategy() const
{
    return m_storageStrategy;
}

void CreateBackupRequest::SetStorageStrategy(const int64_t& _storageStrategy)
{
    m_storageStrategy = _storageStrategy;
    m_storageStrategyHasBeenSet = true;
}

bool CreateBackupRequest::StorageStrategyHasBeenSet() const
{
    return m_storageStrategyHasBeenSet;
}


