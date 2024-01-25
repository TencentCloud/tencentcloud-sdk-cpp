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

#include <tencentcloud/wedata/v20210820/model/CsvReadDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CsvReadDTO::CsvReadDTO() :
    m_rowCountHasBeenSet(false),
    m_isHeadLineSchemaHasBeenSet(false),
    m_columnCountHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_rowsHasBeenSet(false)
{
}

CoreInternalOutcome CsvReadDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RowCount") && !value["RowCount"].IsNull())
    {
        if (!value["RowCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CsvReadDTO.RowCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rowCount = value["RowCount"].GetUint64();
        m_rowCountHasBeenSet = true;
    }

    if (value.HasMember("IsHeadLineSchema") && !value["IsHeadLineSchema"].IsNull())
    {
        if (!value["IsHeadLineSchema"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CsvReadDTO.IsHeadLineSchema` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isHeadLineSchema = value["IsHeadLineSchema"].GetBool();
        m_isHeadLineSchemaHasBeenSet = true;
    }

    if (value.HasMember("ColumnCount") && !value["ColumnCount"].IsNull())
    {
        if (!value["ColumnCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CsvReadDTO.ColumnCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_columnCount = value["ColumnCount"].GetUint64();
        m_columnCountHasBeenSet = true;
    }

    if (value.HasMember("Columns") && !value["Columns"].IsNull())
    {
        if (!value["Columns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CsvReadDTO.Columns` is not array type"));

        const rapidjson::Value &tmpValue = value["Columns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RowColumn item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_columns.push_back(item);
        }
        m_columnsHasBeenSet = true;
    }

    if (value.HasMember("Rows") && !value["Rows"].IsNull())
    {
        if (!value["Rows"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CsvReadDTO.Rows` is not array type"));

        const rapidjson::Value &tmpValue = value["Rows"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CsvRow item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rows.push_back(item);
        }
        m_rowsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CsvReadDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rowCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowCount, allocator);
    }

    if (m_isHeadLineSchemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsHeadLineSchema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isHeadLineSchema, allocator);
    }

    if (m_columnCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_columnCount, allocator);
    }

    if (m_columnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Columns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columns.begin(); itr != m_columns.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rows.begin(); itr != m_rows.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t CsvReadDTO::GetRowCount() const
{
    return m_rowCount;
}

void CsvReadDTO::SetRowCount(const uint64_t& _rowCount)
{
    m_rowCount = _rowCount;
    m_rowCountHasBeenSet = true;
}

bool CsvReadDTO::RowCountHasBeenSet() const
{
    return m_rowCountHasBeenSet;
}

bool CsvReadDTO::GetIsHeadLineSchema() const
{
    return m_isHeadLineSchema;
}

void CsvReadDTO::SetIsHeadLineSchema(const bool& _isHeadLineSchema)
{
    m_isHeadLineSchema = _isHeadLineSchema;
    m_isHeadLineSchemaHasBeenSet = true;
}

bool CsvReadDTO::IsHeadLineSchemaHasBeenSet() const
{
    return m_isHeadLineSchemaHasBeenSet;
}

uint64_t CsvReadDTO::GetColumnCount() const
{
    return m_columnCount;
}

void CsvReadDTO::SetColumnCount(const uint64_t& _columnCount)
{
    m_columnCount = _columnCount;
    m_columnCountHasBeenSet = true;
}

bool CsvReadDTO::ColumnCountHasBeenSet() const
{
    return m_columnCountHasBeenSet;
}

vector<RowColumn> CsvReadDTO::GetColumns() const
{
    return m_columns;
}

void CsvReadDTO::SetColumns(const vector<RowColumn>& _columns)
{
    m_columns = _columns;
    m_columnsHasBeenSet = true;
}

bool CsvReadDTO::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

vector<CsvRow> CsvReadDTO::GetRows() const
{
    return m_rows;
}

void CsvReadDTO::SetRows(const vector<CsvRow>& _rows)
{
    m_rows = _rows;
    m_rowsHasBeenSet = true;
}

bool CsvReadDTO::RowsHasBeenSet() const
{
    return m_rowsHasBeenSet;
}

