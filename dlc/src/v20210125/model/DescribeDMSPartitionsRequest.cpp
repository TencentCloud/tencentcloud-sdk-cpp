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

#include <tencentcloud/dlc/v20210125/model/DescribeDMSPartitionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeDMSPartitionsRequest::DescribeDMSPartitionsRequest() :
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_partitionNamesHasBeenSet(false),
    m_partValuesHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_maxPartsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_expressionHasBeenSet(false),
    m_datasourceConnectionNameHasBeenSet(false)
{
}

string DescribeDMSPartitionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
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

    if (m_valuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_values.begin(); itr != m_values.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_partitionNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_partitionNames.begin(); itr != m_partitionNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_partValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartValues";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_partValues.begin(); itr != m_partValues.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filter.c_str(), allocator).Move(), allocator);
    }

    if (m_maxPartsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxParts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxParts, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_expressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expression";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expression.c_str(), allocator).Move(), allocator);
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


string DescribeDMSPartitionsRequest::GetDatabaseName() const
{
    return m_databaseName;
}

void DescribeDMSPartitionsRequest::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool DescribeDMSPartitionsRequest::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string DescribeDMSPartitionsRequest::GetTableName() const
{
    return m_tableName;
}

void DescribeDMSPartitionsRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DescribeDMSPartitionsRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string DescribeDMSPartitionsRequest::GetSchemaName() const
{
    return m_schemaName;
}

void DescribeDMSPartitionsRequest::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool DescribeDMSPartitionsRequest::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string DescribeDMSPartitionsRequest::GetName() const
{
    return m_name;
}

void DescribeDMSPartitionsRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeDMSPartitionsRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> DescribeDMSPartitionsRequest::GetValues() const
{
    return m_values;
}

void DescribeDMSPartitionsRequest::SetValues(const vector<string>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool DescribeDMSPartitionsRequest::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

vector<string> DescribeDMSPartitionsRequest::GetPartitionNames() const
{
    return m_partitionNames;
}

void DescribeDMSPartitionsRequest::SetPartitionNames(const vector<string>& _partitionNames)
{
    m_partitionNames = _partitionNames;
    m_partitionNamesHasBeenSet = true;
}

bool DescribeDMSPartitionsRequest::PartitionNamesHasBeenSet() const
{
    return m_partitionNamesHasBeenSet;
}

vector<string> DescribeDMSPartitionsRequest::GetPartValues() const
{
    return m_partValues;
}

void DescribeDMSPartitionsRequest::SetPartValues(const vector<string>& _partValues)
{
    m_partValues = _partValues;
    m_partValuesHasBeenSet = true;
}

bool DescribeDMSPartitionsRequest::PartValuesHasBeenSet() const
{
    return m_partValuesHasBeenSet;
}

string DescribeDMSPartitionsRequest::GetFilter() const
{
    return m_filter;
}

void DescribeDMSPartitionsRequest::SetFilter(const string& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeDMSPartitionsRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

int64_t DescribeDMSPartitionsRequest::GetMaxParts() const
{
    return m_maxParts;
}

void DescribeDMSPartitionsRequest::SetMaxParts(const int64_t& _maxParts)
{
    m_maxParts = _maxParts;
    m_maxPartsHasBeenSet = true;
}

bool DescribeDMSPartitionsRequest::MaxPartsHasBeenSet() const
{
    return m_maxPartsHasBeenSet;
}

int64_t DescribeDMSPartitionsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDMSPartitionsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDMSPartitionsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeDMSPartitionsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDMSPartitionsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDMSPartitionsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeDMSPartitionsRequest::GetExpression() const
{
    return m_expression;
}

void DescribeDMSPartitionsRequest::SetExpression(const string& _expression)
{
    m_expression = _expression;
    m_expressionHasBeenSet = true;
}

bool DescribeDMSPartitionsRequest::ExpressionHasBeenSet() const
{
    return m_expressionHasBeenSet;
}

string DescribeDMSPartitionsRequest::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void DescribeDMSPartitionsRequest::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool DescribeDMSPartitionsRequest::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}


