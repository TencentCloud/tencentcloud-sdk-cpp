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

#include <tencentcloud/dlc/v20210125/model/DescribeDMSTablesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeDMSTablesRequest::DescribeDMSTablesRequest() :
    m_dbNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_patternHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_ascHasBeenSet(false),
    m_datasourceConnectionNameHasBeenSet(false)
{
}

string DescribeDMSTablesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_patternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pattern.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
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

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sort.c_str(), allocator).Move(), allocator);
    }

    if (m_ascHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_asc, allocator);
    }

    if (m_datasourceConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceConnectionName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDMSTablesRequest::GetDbName() const
{
    return m_dbName;
}

void DescribeDMSTablesRequest::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DescribeDMSTablesRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string DescribeDMSTablesRequest::GetSchemaName() const
{
    return m_schemaName;
}

void DescribeDMSTablesRequest::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool DescribeDMSTablesRequest::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string DescribeDMSTablesRequest::GetName() const
{
    return m_name;
}

void DescribeDMSTablesRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeDMSTablesRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeDMSTablesRequest::GetCatalog() const
{
    return m_catalog;
}

void DescribeDMSTablesRequest::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool DescribeDMSTablesRequest::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string DescribeDMSTablesRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeDMSTablesRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeDMSTablesRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribeDMSTablesRequest::GetPattern() const
{
    return m_pattern;
}

void DescribeDMSTablesRequest::SetPattern(const string& _pattern)
{
    m_pattern = _pattern;
    m_patternHasBeenSet = true;
}

bool DescribeDMSTablesRequest::PatternHasBeenSet() const
{
    return m_patternHasBeenSet;
}

string DescribeDMSTablesRequest::GetType() const
{
    return m_type;
}

void DescribeDMSTablesRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeDMSTablesRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeDMSTablesRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeDMSTablesRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeDMSTablesRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeDMSTablesRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeDMSTablesRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeDMSTablesRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeDMSTablesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDMSTablesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDMSTablesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeDMSTablesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDMSTablesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDMSTablesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeDMSTablesRequest::GetSort() const
{
    return m_sort;
}

void DescribeDMSTablesRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeDMSTablesRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

bool DescribeDMSTablesRequest::GetAsc() const
{
    return m_asc;
}

void DescribeDMSTablesRequest::SetAsc(const bool& _asc)
{
    m_asc = _asc;
    m_ascHasBeenSet = true;
}

bool DescribeDMSTablesRequest::AscHasBeenSet() const
{
    return m_ascHasBeenSet;
}

string DescribeDMSTablesRequest::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void DescribeDMSTablesRequest::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool DescribeDMSTablesRequest::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}


