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

#include <tencentcloud/dbbrain/v20210527/model/DescribeTableSpaceDataV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeTableSpaceDataV2Request::DescribeTableSpaceDataV2Request() :
    m_instanceIdHasBeenSet(false),
    m_productHasBeenSet(false),
    m_tableSchemaHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableCatalogHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_sortByHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_regexHasBeenSet(false)
{
}

string DescribeTableSpaceDataV2Request::ToJsonString() const
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

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_tableSchemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableSchema";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableSchema.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableCatalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableCatalog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableCatalog.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_sortByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortBy.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_regexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_regex, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTableSpaceDataV2Request::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeTableSpaceDataV2Request::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeTableSpaceDataV2Request::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeTableSpaceDataV2Request::GetProduct() const
{
    return m_product;
}

void DescribeTableSpaceDataV2Request::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeTableSpaceDataV2Request::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string DescribeTableSpaceDataV2Request::GetTableSchema() const
{
    return m_tableSchema;
}

void DescribeTableSpaceDataV2Request::SetTableSchema(const string& _tableSchema)
{
    m_tableSchema = _tableSchema;
    m_tableSchemaHasBeenSet = true;
}

bool DescribeTableSpaceDataV2Request::TableSchemaHasBeenSet() const
{
    return m_tableSchemaHasBeenSet;
}

string DescribeTableSpaceDataV2Request::GetTableName() const
{
    return m_tableName;
}

void DescribeTableSpaceDataV2Request::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DescribeTableSpaceDataV2Request::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string DescribeTableSpaceDataV2Request::GetTableCatalog() const
{
    return m_tableCatalog;
}

void DescribeTableSpaceDataV2Request::SetTableCatalog(const string& _tableCatalog)
{
    m_tableCatalog = _tableCatalog;
    m_tableCatalogHasBeenSet = true;
}

bool DescribeTableSpaceDataV2Request::TableCatalogHasBeenSet() const
{
    return m_tableCatalogHasBeenSet;
}

string DescribeTableSpaceDataV2Request::GetDate() const
{
    return m_date;
}

void DescribeTableSpaceDataV2Request::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool DescribeTableSpaceDataV2Request::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string DescribeTableSpaceDataV2Request::GetSortBy() const
{
    return m_sortBy;
}

void DescribeTableSpaceDataV2Request::SetSortBy(const string& _sortBy)
{
    m_sortBy = _sortBy;
    m_sortByHasBeenSet = true;
}

bool DescribeTableSpaceDataV2Request::SortByHasBeenSet() const
{
    return m_sortByHasBeenSet;
}

int64_t DescribeTableSpaceDataV2Request::GetLimit() const
{
    return m_limit;
}

void DescribeTableSpaceDataV2Request::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTableSpaceDataV2Request::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

bool DescribeTableSpaceDataV2Request::GetRegex() const
{
    return m_regex;
}

void DescribeTableSpaceDataV2Request::SetRegex(const bool& _regex)
{
    m_regex = _regex;
    m_regexHasBeenSet = true;
}

bool DescribeTableSpaceDataV2Request::RegexHasBeenSet() const
{
    return m_regexHasBeenSet;
}


