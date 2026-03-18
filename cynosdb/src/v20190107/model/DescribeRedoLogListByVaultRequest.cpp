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

#include <tencentcloud/cynosdb/v20190107/model/DescribeRedoLogListByVaultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeRedoLogListByVaultRequest::DescribeRedoLogListByVaultRequest() :
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

string DescribeRedoLogListByVaultRequest::ToJsonString() const
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


string DescribeRedoLogListByVaultRequest::GetVaultId() const
{
    return m_vaultId;
}

void DescribeRedoLogListByVaultRequest::SetVaultId(const string& _vaultId)
{
    m_vaultId = _vaultId;
    m_vaultIdHasBeenSet = true;
}

bool DescribeRedoLogListByVaultRequest::VaultIdHasBeenSet() const
{
    return m_vaultIdHasBeenSet;
}

vector<int64_t> DescribeRedoLogListByVaultRequest::GetBackupIds() const
{
    return m_backupIds;
}

void DescribeRedoLogListByVaultRequest::SetBackupIds(const vector<int64_t>& _backupIds)
{
    m_backupIds = _backupIds;
    m_backupIdsHasBeenSet = true;
}

bool DescribeRedoLogListByVaultRequest::BackupIdsHasBeenSet() const
{
    return m_backupIdsHasBeenSet;
}

string DescribeRedoLogListByVaultRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeRedoLogListByVaultRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeRedoLogListByVaultRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> DescribeRedoLogListByVaultRequest::GetBackupNames() const
{
    return m_backupNames;
}

void DescribeRedoLogListByVaultRequest::SetBackupNames(const vector<string>& _backupNames)
{
    m_backupNames = _backupNames;
    m_backupNamesHasBeenSet = true;
}

bool DescribeRedoLogListByVaultRequest::BackupNamesHasBeenSet() const
{
    return m_backupNamesHasBeenSet;
}

vector<string> DescribeRedoLogListByVaultRequest::GetFileNames() const
{
    return m_fileNames;
}

void DescribeRedoLogListByVaultRequest::SetFileNames(const vector<string>& _fileNames)
{
    m_fileNames = _fileNames;
    m_fileNamesHasBeenSet = true;
}

bool DescribeRedoLogListByVaultRequest::FileNamesHasBeenSet() const
{
    return m_fileNamesHasBeenSet;
}

int64_t DescribeRedoLogListByVaultRequest::GetLimit() const
{
    return m_limit;
}

void DescribeRedoLogListByVaultRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRedoLogListByVaultRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeRedoLogListByVaultRequest::GetOffset() const
{
    return m_offset;
}

void DescribeRedoLogListByVaultRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeRedoLogListByVaultRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeRedoLogListByVaultRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeRedoLogListByVaultRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeRedoLogListByVaultRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeRedoLogListByVaultRequest::GetOrderByType() const
{
    return m_orderByType;
}

void DescribeRedoLogListByVaultRequest::SetOrderByType(const string& _orderByType)
{
    m_orderByType = _orderByType;
    m_orderByTypeHasBeenSet = true;
}

bool DescribeRedoLogListByVaultRequest::OrderByTypeHasBeenSet() const
{
    return m_orderByTypeHasBeenSet;
}

string DescribeRedoLogListByVaultRequest::GetStatus() const
{
    return m_status;
}

void DescribeRedoLogListByVaultRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeRedoLogListByVaultRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


