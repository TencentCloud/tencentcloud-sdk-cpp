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

#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupMigrationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeBackupMigrationRequest::DescribeBackupMigrationRequest() :
    m_instanceIdHasBeenSet(false),
    m_backupMigrationIdHasBeenSet(false),
    m_migrationNameHasBeenSet(false),
    m_backupFileNameHasBeenSet(false),
    m_statusSetHasBeenSet(false),
    m_recoveryTypeHasBeenSet(false),
    m_uploadTypeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderByTypeHasBeenSet(false)
{
}

string DescribeBackupMigrationRequest::ToJsonString() const
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

    if (m_backupFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupFileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_statusSet.begin(); itr != m_statusSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
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


string DescribeBackupMigrationRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeBackupMigrationRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeBackupMigrationRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeBackupMigrationRequest::GetBackupMigrationId() const
{
    return m_backupMigrationId;
}

void DescribeBackupMigrationRequest::SetBackupMigrationId(const string& _backupMigrationId)
{
    m_backupMigrationId = _backupMigrationId;
    m_backupMigrationIdHasBeenSet = true;
}

bool DescribeBackupMigrationRequest::BackupMigrationIdHasBeenSet() const
{
    return m_backupMigrationIdHasBeenSet;
}

string DescribeBackupMigrationRequest::GetMigrationName() const
{
    return m_migrationName;
}

void DescribeBackupMigrationRequest::SetMigrationName(const string& _migrationName)
{
    m_migrationName = _migrationName;
    m_migrationNameHasBeenSet = true;
}

bool DescribeBackupMigrationRequest::MigrationNameHasBeenSet() const
{
    return m_migrationNameHasBeenSet;
}

string DescribeBackupMigrationRequest::GetBackupFileName() const
{
    return m_backupFileName;
}

void DescribeBackupMigrationRequest::SetBackupFileName(const string& _backupFileName)
{
    m_backupFileName = _backupFileName;
    m_backupFileNameHasBeenSet = true;
}

bool DescribeBackupMigrationRequest::BackupFileNameHasBeenSet() const
{
    return m_backupFileNameHasBeenSet;
}

vector<int64_t> DescribeBackupMigrationRequest::GetStatusSet() const
{
    return m_statusSet;
}

void DescribeBackupMigrationRequest::SetStatusSet(const vector<int64_t>& _statusSet)
{
    m_statusSet = _statusSet;
    m_statusSetHasBeenSet = true;
}

bool DescribeBackupMigrationRequest::StatusSetHasBeenSet() const
{
    return m_statusSetHasBeenSet;
}

string DescribeBackupMigrationRequest::GetRecoveryType() const
{
    return m_recoveryType;
}

void DescribeBackupMigrationRequest::SetRecoveryType(const string& _recoveryType)
{
    m_recoveryType = _recoveryType;
    m_recoveryTypeHasBeenSet = true;
}

bool DescribeBackupMigrationRequest::RecoveryTypeHasBeenSet() const
{
    return m_recoveryTypeHasBeenSet;
}

string DescribeBackupMigrationRequest::GetUploadType() const
{
    return m_uploadType;
}

void DescribeBackupMigrationRequest::SetUploadType(const string& _uploadType)
{
    m_uploadType = _uploadType;
    m_uploadTypeHasBeenSet = true;
}

bool DescribeBackupMigrationRequest::UploadTypeHasBeenSet() const
{
    return m_uploadTypeHasBeenSet;
}

int64_t DescribeBackupMigrationRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBackupMigrationRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBackupMigrationRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeBackupMigrationRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBackupMigrationRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBackupMigrationRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeBackupMigrationRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeBackupMigrationRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeBackupMigrationRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeBackupMigrationRequest::GetOrderByType() const
{
    return m_orderByType;
}

void DescribeBackupMigrationRequest::SetOrderByType(const string& _orderByType)
{
    m_orderByType = _orderByType;
    m_orderByTypeHasBeenSet = true;
}

bool DescribeBackupMigrationRequest::OrderByTypeHasBeenSet() const
{
    return m_orderByTypeHasBeenSet;
}


