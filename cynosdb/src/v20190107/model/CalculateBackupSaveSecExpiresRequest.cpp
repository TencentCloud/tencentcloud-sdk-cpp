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

#include <tencentcloud/cynosdb/v20190107/model/CalculateBackupSaveSecExpiresRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CalculateBackupSaveSecExpiresRequest::CalculateBackupSaveSecExpiresRequest() :
    m_vaultIdHasBeenSet(false),
    m_backupSaveSecondsHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderByTypeHasBeenSet(false)
{
}

string CalculateBackupSaveSecExpiresRequest::ToJsonString() const
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

    if (m_backupSaveSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSaveSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupSaveSeconds, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CalculateBackupSaveSecExpiresRequest::GetVaultId() const
{
    return m_vaultId;
}

void CalculateBackupSaveSecExpiresRequest::SetVaultId(const string& _vaultId)
{
    m_vaultId = _vaultId;
    m_vaultIdHasBeenSet = true;
}

bool CalculateBackupSaveSecExpiresRequest::VaultIdHasBeenSet() const
{
    return m_vaultIdHasBeenSet;
}

int64_t CalculateBackupSaveSecExpiresRequest::GetBackupSaveSeconds() const
{
    return m_backupSaveSeconds;
}

void CalculateBackupSaveSecExpiresRequest::SetBackupSaveSeconds(const int64_t& _backupSaveSeconds)
{
    m_backupSaveSeconds = _backupSaveSeconds;
    m_backupSaveSecondsHasBeenSet = true;
}

bool CalculateBackupSaveSecExpiresRequest::BackupSaveSecondsHasBeenSet() const
{
    return m_backupSaveSecondsHasBeenSet;
}

int64_t CalculateBackupSaveSecExpiresRequest::GetLimit() const
{
    return m_limit;
}

void CalculateBackupSaveSecExpiresRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool CalculateBackupSaveSecExpiresRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t CalculateBackupSaveSecExpiresRequest::GetOffset() const
{
    return m_offset;
}

void CalculateBackupSaveSecExpiresRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool CalculateBackupSaveSecExpiresRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string CalculateBackupSaveSecExpiresRequest::GetOrderBy() const
{
    return m_orderBy;
}

void CalculateBackupSaveSecExpiresRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool CalculateBackupSaveSecExpiresRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string CalculateBackupSaveSecExpiresRequest::GetOrderByType() const
{
    return m_orderByType;
}

void CalculateBackupSaveSecExpiresRequest::SetOrderByType(const string& _orderByType)
{
    m_orderByType = _orderByType;
    m_orderByTypeHasBeenSet = true;
}

bool CalculateBackupSaveSecExpiresRequest::OrderByTypeHasBeenSet() const
{
    return m_orderByTypeHasBeenSet;
}


