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

#include <tencentcloud/cynosdb/v20190107/model/DescribeBackupListByVaultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeBackupListByVaultRequest::DescribeBackupListByVaultRequest() :
    m_vaultIdHasBeenSet(false),
    m_backupIdsHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_backupNamesHasBeenSet(false),
    m_fileNamesHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderByTypeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string DescribeBackupListByVaultRequest::ToJsonString() const
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

    if (m_backupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backupIds.begin(); itr != m_backupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backupNames.begin(); itr != m_backupNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileNames.begin(); itr != m_fileNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderByType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderByType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBackupListByVaultRequest::GetVaultId() const
{
    return m_vaultId;
}

void DescribeBackupListByVaultRequest::SetVaultId(const string& _vaultId)
{
    m_vaultId = _vaultId;
    m_vaultIdHasBeenSet = true;
}

bool DescribeBackupListByVaultRequest::VaultIdHasBeenSet() const
{
    return m_vaultIdHasBeenSet;
}

vector<int64_t> DescribeBackupListByVaultRequest::GetBackupIds() const
{
    return m_backupIds;
}

void DescribeBackupListByVaultRequest::SetBackupIds(const vector<int64_t>& _backupIds)
{
    m_backupIds = _backupIds;
    m_backupIdsHasBeenSet = true;
}

bool DescribeBackupListByVaultRequest::BackupIdsHasBeenSet() const
{
    return m_backupIdsHasBeenSet;
}

string DescribeBackupListByVaultRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeBackupListByVaultRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeBackupListByVaultRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> DescribeBackupListByVaultRequest::GetBackupNames() const
{
    return m_backupNames;
}

void DescribeBackupListByVaultRequest::SetBackupNames(const vector<string>& _backupNames)
{
    m_backupNames = _backupNames;
    m_backupNamesHasBeenSet = true;
}

bool DescribeBackupListByVaultRequest::BackupNamesHasBeenSet() const
{
    return m_backupNamesHasBeenSet;
}

vector<string> DescribeBackupListByVaultRequest::GetFileNames() const
{
    return m_fileNames;
}

void DescribeBackupListByVaultRequest::SetFileNames(const vector<string>& _fileNames)
{
    m_fileNames = _fileNames;
    m_fileNamesHasBeenSet = true;
}

bool DescribeBackupListByVaultRequest::FileNamesHasBeenSet() const
{
    return m_fileNamesHasBeenSet;
}

int64_t DescribeBackupListByVaultRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBackupListByVaultRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBackupListByVaultRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeBackupListByVaultRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBackupListByVaultRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBackupListByVaultRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeBackupListByVaultRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeBackupListByVaultRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeBackupListByVaultRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeBackupListByVaultRequest::GetOrderByType() const
{
    return m_orderByType;
}

void DescribeBackupListByVaultRequest::SetOrderByType(const string& _orderByType)
{
    m_orderByType = _orderByType;
    m_orderByTypeHasBeenSet = true;
}

bool DescribeBackupListByVaultRequest::OrderByTypeHasBeenSet() const
{
    return m_orderByTypeHasBeenSet;
}

string DescribeBackupListByVaultRequest::GetStatus() const
{
    return m_status;
}

void DescribeBackupListByVaultRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeBackupListByVaultRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


