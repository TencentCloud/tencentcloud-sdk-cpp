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

#include <tencentcloud/cynosdb/v20190107/model/DescribeBinlogListByVaultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeBinlogListByVaultRequest::DescribeBinlogListByVaultRequest() :
    m_vaultIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_backupIdsHasBeenSet(false),
    m_backupNamesHasBeenSet(false),
    m_fileNamesHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderByTypeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string DescribeBinlogListByVaultRequest::ToJsonString() const
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

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
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


string DescribeBinlogListByVaultRequest::GetVaultId() const
{
    return m_vaultId;
}

void DescribeBinlogListByVaultRequest::SetVaultId(const string& _vaultId)
{
    m_vaultId = _vaultId;
    m_vaultIdHasBeenSet = true;
}

bool DescribeBinlogListByVaultRequest::VaultIdHasBeenSet() const
{
    return m_vaultIdHasBeenSet;
}

string DescribeBinlogListByVaultRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeBinlogListByVaultRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeBinlogListByVaultRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<int64_t> DescribeBinlogListByVaultRequest::GetBackupIds() const
{
    return m_backupIds;
}

void DescribeBinlogListByVaultRequest::SetBackupIds(const vector<int64_t>& _backupIds)
{
    m_backupIds = _backupIds;
    m_backupIdsHasBeenSet = true;
}

bool DescribeBinlogListByVaultRequest::BackupIdsHasBeenSet() const
{
    return m_backupIdsHasBeenSet;
}

vector<string> DescribeBinlogListByVaultRequest::GetBackupNames() const
{
    return m_backupNames;
}

void DescribeBinlogListByVaultRequest::SetBackupNames(const vector<string>& _backupNames)
{
    m_backupNames = _backupNames;
    m_backupNamesHasBeenSet = true;
}

bool DescribeBinlogListByVaultRequest::BackupNamesHasBeenSet() const
{
    return m_backupNamesHasBeenSet;
}

vector<string> DescribeBinlogListByVaultRequest::GetFileNames() const
{
    return m_fileNames;
}

void DescribeBinlogListByVaultRequest::SetFileNames(const vector<string>& _fileNames)
{
    m_fileNames = _fileNames;
    m_fileNamesHasBeenSet = true;
}

bool DescribeBinlogListByVaultRequest::FileNamesHasBeenSet() const
{
    return m_fileNamesHasBeenSet;
}

int64_t DescribeBinlogListByVaultRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBinlogListByVaultRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBinlogListByVaultRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeBinlogListByVaultRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBinlogListByVaultRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBinlogListByVaultRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeBinlogListByVaultRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeBinlogListByVaultRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeBinlogListByVaultRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeBinlogListByVaultRequest::GetOrderByType() const
{
    return m_orderByType;
}

void DescribeBinlogListByVaultRequest::SetOrderByType(const string& _orderByType)
{
    m_orderByType = _orderByType;
    m_orderByTypeHasBeenSet = true;
}

bool DescribeBinlogListByVaultRequest::OrderByTypeHasBeenSet() const
{
    return m_orderByTypeHasBeenSet;
}

string DescribeBinlogListByVaultRequest::GetStatus() const
{
    return m_status;
}

void DescribeBinlogListByVaultRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeBinlogListByVaultRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


