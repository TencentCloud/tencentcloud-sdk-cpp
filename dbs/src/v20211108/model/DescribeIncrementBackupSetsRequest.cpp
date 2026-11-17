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

#include <tencentcloud/dbs/v20211108/model/DescribeIncrementBackupSetsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

DescribeIncrementBackupSetsRequest::DescribeIncrementBackupSetsRequest() :
    m_backupPlanIdHasBeenSet(false),
    m_backupSetIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeIncrementBackupSetsRequest::ToJsonString() const
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

    if (m_backupSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupSetId.c_str(), allocator).Move(), allocator);
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


string DescribeIncrementBackupSetsRequest::GetBackupPlanId() const
{
    return m_backupPlanId;
}

void DescribeIncrementBackupSetsRequest::SetBackupPlanId(const string& _backupPlanId)
{
    m_backupPlanId = _backupPlanId;
    m_backupPlanIdHasBeenSet = true;
}

bool DescribeIncrementBackupSetsRequest::BackupPlanIdHasBeenSet() const
{
    return m_backupPlanIdHasBeenSet;
}

string DescribeIncrementBackupSetsRequest::GetBackupSetId() const
{
    return m_backupSetId;
}

void DescribeIncrementBackupSetsRequest::SetBackupSetId(const string& _backupSetId)
{
    m_backupSetId = _backupSetId;
    m_backupSetIdHasBeenSet = true;
}

bool DescribeIncrementBackupSetsRequest::BackupSetIdHasBeenSet() const
{
    return m_backupSetIdHasBeenSet;
}

int64_t DescribeIncrementBackupSetsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeIncrementBackupSetsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeIncrementBackupSetsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeIncrementBackupSetsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeIncrementBackupSetsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeIncrementBackupSetsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


