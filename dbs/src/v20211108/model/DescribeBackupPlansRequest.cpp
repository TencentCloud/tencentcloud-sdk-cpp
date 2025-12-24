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

#include <tencentcloud/dbs/v20211108/model/DescribeBackupPlansRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

DescribeBackupPlansRequest::DescribeBackupPlansRequest() :
    m_backupPlanIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_databaseTypeHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_backupPlanNameHasBeenSet(false),
    m_tagFiltersHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeBackupPlansRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_backupPlanIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPlanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupPlanId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_status.begin(); itr != m_status.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_databaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_databaseType.begin(); itr != m_databaseType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accessType.begin(); itr != m_accessType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_backupPlanNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPlanName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupPlanName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagFilters.begin(); itr != m_tagFilters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBackupPlansRequest::GetBackupPlanId() const
{
    return m_backupPlanId;
}

void DescribeBackupPlansRequest::SetBackupPlanId(const string& _backupPlanId)
{
    m_backupPlanId = _backupPlanId;
    m_backupPlanIdHasBeenSet = true;
}

bool DescribeBackupPlansRequest::BackupPlanIdHasBeenSet() const
{
    return m_backupPlanIdHasBeenSet;
}

vector<string> DescribeBackupPlansRequest::GetStatus() const
{
    return m_status;
}

void DescribeBackupPlansRequest::SetStatus(const vector<string>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeBackupPlansRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DescribeBackupPlansRequest::GetDatabaseType() const
{
    return m_databaseType;
}

void DescribeBackupPlansRequest::SetDatabaseType(const vector<string>& _databaseType)
{
    m_databaseType = _databaseType;
    m_databaseTypeHasBeenSet = true;
}

bool DescribeBackupPlansRequest::DatabaseTypeHasBeenSet() const
{
    return m_databaseTypeHasBeenSet;
}

vector<string> DescribeBackupPlansRequest::GetAccessType() const
{
    return m_accessType;
}

void DescribeBackupPlansRequest::SetAccessType(const vector<string>& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool DescribeBackupPlansRequest::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string DescribeBackupPlansRequest::GetBackupPlanName() const
{
    return m_backupPlanName;
}

void DescribeBackupPlansRequest::SetBackupPlanName(const string& _backupPlanName)
{
    m_backupPlanName = _backupPlanName;
    m_backupPlanNameHasBeenSet = true;
}

bool DescribeBackupPlansRequest::BackupPlanNameHasBeenSet() const
{
    return m_backupPlanNameHasBeenSet;
}

vector<TagFilter> DescribeBackupPlansRequest::GetTagFilters() const
{
    return m_tagFilters;
}

void DescribeBackupPlansRequest::SetTagFilters(const vector<TagFilter>& _tagFilters)
{
    m_tagFilters = _tagFilters;
    m_tagFiltersHasBeenSet = true;
}

bool DescribeBackupPlansRequest::TagFiltersHasBeenSet() const
{
    return m_tagFiltersHasBeenSet;
}

int64_t DescribeBackupPlansRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBackupPlansRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBackupPlansRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeBackupPlansRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBackupPlansRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBackupPlansRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


