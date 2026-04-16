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

#include <tencentcloud/dts/v20211206/model/DescribeSyncCompareDiffItemsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DescribeSyncCompareDiffItemsRequest::DescribeSyncCompareDiffItemsRequest() :
    m_jobIdHasBeenSet(false),
    m_compareTaskIdHasBeenSet(false),
    m_dBNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_chunkIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeSyncCompareDiffItemsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_compareTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_compareTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_dBNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBName.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_chunkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChunkId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_chunkId, allocator);
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


string DescribeSyncCompareDiffItemsRequest::GetJobId() const
{
    return m_jobId;
}

void DescribeSyncCompareDiffItemsRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool DescribeSyncCompareDiffItemsRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string DescribeSyncCompareDiffItemsRequest::GetCompareTaskId() const
{
    return m_compareTaskId;
}

void DescribeSyncCompareDiffItemsRequest::SetCompareTaskId(const string& _compareTaskId)
{
    m_compareTaskId = _compareTaskId;
    m_compareTaskIdHasBeenSet = true;
}

bool DescribeSyncCompareDiffItemsRequest::CompareTaskIdHasBeenSet() const
{
    return m_compareTaskIdHasBeenSet;
}

string DescribeSyncCompareDiffItemsRequest::GetDBName() const
{
    return m_dBName;
}

void DescribeSyncCompareDiffItemsRequest::SetDBName(const string& _dBName)
{
    m_dBName = _dBName;
    m_dBNameHasBeenSet = true;
}

bool DescribeSyncCompareDiffItemsRequest::DBNameHasBeenSet() const
{
    return m_dBNameHasBeenSet;
}

string DescribeSyncCompareDiffItemsRequest::GetSchemaName() const
{
    return m_schemaName;
}

void DescribeSyncCompareDiffItemsRequest::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool DescribeSyncCompareDiffItemsRequest::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string DescribeSyncCompareDiffItemsRequest::GetTableName() const
{
    return m_tableName;
}

void DescribeSyncCompareDiffItemsRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DescribeSyncCompareDiffItemsRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

int64_t DescribeSyncCompareDiffItemsRequest::GetChunkId() const
{
    return m_chunkId;
}

void DescribeSyncCompareDiffItemsRequest::SetChunkId(const int64_t& _chunkId)
{
    m_chunkId = _chunkId;
    m_chunkIdHasBeenSet = true;
}

bool DescribeSyncCompareDiffItemsRequest::ChunkIdHasBeenSet() const
{
    return m_chunkIdHasBeenSet;
}

int64_t DescribeSyncCompareDiffItemsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSyncCompareDiffItemsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSyncCompareDiffItemsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeSyncCompareDiffItemsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSyncCompareDiffItemsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSyncCompareDiffItemsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


