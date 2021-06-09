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

#include <tencentcloud/sqlserver/v20180328/model/DescribeIncrementalMigrationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeIncrementalMigrationRequest::DescribeIncrementalMigrationRequest() :
    m_backupMigrationIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_backupFileNameHasBeenSet(false),
    m_statusSetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderByTypeHasBeenSet(false),
    m_incrementalMigrationIdHasBeenSet(false)
{
}

string DescribeIncrementalMigrationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_backupMigrationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMigrationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupMigrationId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
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

    if (m_incrementalMigrationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncrementalMigrationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_incrementalMigrationId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeIncrementalMigrationRequest::GetBackupMigrationId() const
{
    return m_backupMigrationId;
}

void DescribeIncrementalMigrationRequest::SetBackupMigrationId(const string& _backupMigrationId)
{
    m_backupMigrationId = _backupMigrationId;
    m_backupMigrationIdHasBeenSet = true;
}

bool DescribeIncrementalMigrationRequest::BackupMigrationIdHasBeenSet() const
{
    return m_backupMigrationIdHasBeenSet;
}

string DescribeIncrementalMigrationRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeIncrementalMigrationRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeIncrementalMigrationRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeIncrementalMigrationRequest::GetBackupFileName() const
{
    return m_backupFileName;
}

void DescribeIncrementalMigrationRequest::SetBackupFileName(const string& _backupFileName)
{
    m_backupFileName = _backupFileName;
    m_backupFileNameHasBeenSet = true;
}

bool DescribeIncrementalMigrationRequest::BackupFileNameHasBeenSet() const
{
    return m_backupFileNameHasBeenSet;
}

vector<int64_t> DescribeIncrementalMigrationRequest::GetStatusSet() const
{
    return m_statusSet;
}

void DescribeIncrementalMigrationRequest::SetStatusSet(const vector<int64_t>& _statusSet)
{
    m_statusSet = _statusSet;
    m_statusSetHasBeenSet = true;
}

bool DescribeIncrementalMigrationRequest::StatusSetHasBeenSet() const
{
    return m_statusSetHasBeenSet;
}

int64_t DescribeIncrementalMigrationRequest::GetLimit() const
{
    return m_limit;
}

void DescribeIncrementalMigrationRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeIncrementalMigrationRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeIncrementalMigrationRequest::GetOffset() const
{
    return m_offset;
}

void DescribeIncrementalMigrationRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeIncrementalMigrationRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeIncrementalMigrationRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeIncrementalMigrationRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeIncrementalMigrationRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeIncrementalMigrationRequest::GetOrderByType() const
{
    return m_orderByType;
}

void DescribeIncrementalMigrationRequest::SetOrderByType(const string& _orderByType)
{
    m_orderByType = _orderByType;
    m_orderByTypeHasBeenSet = true;
}

bool DescribeIncrementalMigrationRequest::OrderByTypeHasBeenSet() const
{
    return m_orderByTypeHasBeenSet;
}

string DescribeIncrementalMigrationRequest::GetIncrementalMigrationId() const
{
    return m_incrementalMigrationId;
}

void DescribeIncrementalMigrationRequest::SetIncrementalMigrationId(const string& _incrementalMigrationId)
{
    m_incrementalMigrationId = _incrementalMigrationId;
    m_incrementalMigrationIdHasBeenSet = true;
}

bool DescribeIncrementalMigrationRequest::IncrementalMigrationIdHasBeenSet() const
{
    return m_incrementalMigrationIdHasBeenSet;
}


