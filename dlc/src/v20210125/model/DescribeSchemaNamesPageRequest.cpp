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

#include <tencentcloud/dlc/v20210125/model/DescribeSchemaNamesPageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeSchemaNamesPageRequest::DescribeSchemaNamesPageRequest() :
    m_catalogNameHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_snapshotBasedHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_schemaNamePatternHasBeenSet(false)
{
}

string DescribeSchemaNamesPageRequest::ToJsonString() const
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

    if (m_schemaNamePatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaNamePattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schemaNamePattern.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSchemaNamesPageRequest::GetCatalogName() const
{
    return m_catalogName;
}

void DescribeSchemaNamesPageRequest::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool DescribeSchemaNamesPageRequest::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

uint64_t DescribeSchemaNamesPageRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSchemaNamesPageRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSchemaNamesPageRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeSchemaNamesPageRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSchemaNamesPageRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSchemaNamesPageRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

bool DescribeSchemaNamesPageRequest::GetSnapshotBased() const
{
    return m_snapshotBased;
}

void DescribeSchemaNamesPageRequest::SetSnapshotBased(const bool& _snapshotBased)
{
    m_snapshotBased = _snapshotBased;
    m_snapshotBasedHasBeenSet = true;
}

bool DescribeSchemaNamesPageRequest::SnapshotBasedHasBeenSet() const
{
    return m_snapshotBasedHasBeenSet;
}

string DescribeSchemaNamesPageRequest::GetSnapshotId() const
{
    return m_snapshotId;
}

void DescribeSchemaNamesPageRequest::SetSnapshotId(const string& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool DescribeSchemaNamesPageRequest::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

string DescribeSchemaNamesPageRequest::GetSchemaNamePattern() const
{
    return m_schemaNamePattern;
}

void DescribeSchemaNamesPageRequest::SetSchemaNamePattern(const string& _schemaNamePattern)
{
    m_schemaNamePattern = _schemaNamePattern;
    m_schemaNamePatternHasBeenSet = true;
}

bool DescribeSchemaNamesPageRequest::SchemaNamePatternHasBeenSet() const
{
    return m_schemaNamePatternHasBeenSet;
}


