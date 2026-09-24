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

#include <tencentcloud/dlc/v20210125/model/DescribeCatalogTableNamesPageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeCatalogTableNamesPageRequest::DescribeCatalogTableNamesPageRequest() :
    m_catalogNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_snapshotBasedHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_tableNamePatternHasBeenSet(false)
{
}

string DescribeCatalogTableNamesPageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_catalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalogName.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
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

    if (m_snapshotBasedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotBased";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_snapshotBased, allocator);
    }

    if (m_snapshotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNamePatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableNamePattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableNamePattern.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCatalogTableNamesPageRequest::GetCatalogName() const
{
    return m_catalogName;
}

void DescribeCatalogTableNamesPageRequest::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool DescribeCatalogTableNamesPageRequest::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

string DescribeCatalogTableNamesPageRequest::GetSchemaName() const
{
    return m_schemaName;
}

void DescribeCatalogTableNamesPageRequest::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool DescribeCatalogTableNamesPageRequest::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

uint64_t DescribeCatalogTableNamesPageRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCatalogTableNamesPageRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCatalogTableNamesPageRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeCatalogTableNamesPageRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCatalogTableNamesPageRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCatalogTableNamesPageRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

bool DescribeCatalogTableNamesPageRequest::GetSnapshotBased() const
{
    return m_snapshotBased;
}

void DescribeCatalogTableNamesPageRequest::SetSnapshotBased(const bool& _snapshotBased)
{
    m_snapshotBased = _snapshotBased;
    m_snapshotBasedHasBeenSet = true;
}

bool DescribeCatalogTableNamesPageRequest::SnapshotBasedHasBeenSet() const
{
    return m_snapshotBasedHasBeenSet;
}

string DescribeCatalogTableNamesPageRequest::GetSnapshotId() const
{
    return m_snapshotId;
}

void DescribeCatalogTableNamesPageRequest::SetSnapshotId(const string& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool DescribeCatalogTableNamesPageRequest::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

string DescribeCatalogTableNamesPageRequest::GetTableNamePattern() const
{
    return m_tableNamePattern;
}

void DescribeCatalogTableNamesPageRequest::SetTableNamePattern(const string& _tableNamePattern)
{
    m_tableNamePattern = _tableNamePattern;
    m_tableNamePatternHasBeenSet = true;
}

bool DescribeCatalogTableNamesPageRequest::TableNamePatternHasBeenSet() const
{
    return m_tableNamePatternHasBeenSet;
}


