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

#include <tencentcloud/dts/v20211206/model/Table.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

Table::Table() :
    m_tableNameHasBeenSet(false),
    m_newTableNameHasBeenSet(false),
    m_filterConditionHasBeenSet(false),
    m_columnModeHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_tmpTablesHasBeenSet(false),
    m_tableEditModeHasBeenSet(false)
{
}

CoreInternalOutcome Table::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Table.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("NewTableName") && !value["NewTableName"].IsNull())
    {
        if (!value["NewTableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Table.NewTableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newTableName = string(value["NewTableName"].GetString());
        m_newTableNameHasBeenSet = true;
    }

    if (value.HasMember("FilterCondition") && !value["FilterCondition"].IsNull())
    {
        if (!value["FilterCondition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Table.FilterCondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filterCondition = string(value["FilterCondition"].GetString());
        m_filterConditionHasBeenSet = true;
    }

    if (value.HasMember("ColumnMode") && !value["ColumnMode"].IsNull())
    {
        if (!value["ColumnMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Table.ColumnMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnMode = string(value["ColumnMode"].GetString());
        m_columnModeHasBeenSet = true;
    }

    if (value.HasMember("Columns") && !value["Columns"].IsNull())
    {
        if (!value["Columns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Table.Columns` is not array type"));

        const rapidjson::Value &tmpValue = value["Columns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Column item;
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

    if (value.HasMember("TmpTables") && !value["TmpTables"].IsNull())
    {
        if (!value["TmpTables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Table.TmpTables` is not array type"));

        const rapidjson::Value &tmpValue = value["TmpTables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tmpTables.push_back((*itr).GetString());
        }
        m_tmpTablesHasBeenSet = true;
    }

    if (value.HasMember("TableEditMode") && !value["TableEditMode"].IsNull())
    {
        if (!value["TableEditMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Table.TableEditMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableEditMode = string(value["TableEditMode"].GetString());
        m_tableEditModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Table::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_newTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewTableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newTableName.c_str(), allocator).Move(), allocator);
    }

    if (m_filterConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filterCondition.c_str(), allocator).Move(), allocator);
    }

    if (m_columnModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnMode.c_str(), allocator).Move(), allocator);
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

    if (m_tmpTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmpTables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tmpTables.begin(); itr != m_tmpTables.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tableEditModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableEditMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableEditMode.c_str(), allocator).Move(), allocator);
    }

}


string Table::GetTableName() const
{
    return m_tableName;
}

void Table::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool Table::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string Table::GetNewTableName() const
{
    return m_newTableName;
}

void Table::SetNewTableName(const string& _newTableName)
{
    m_newTableName = _newTableName;
    m_newTableNameHasBeenSet = true;
}

bool Table::NewTableNameHasBeenSet() const
{
    return m_newTableNameHasBeenSet;
}

string Table::GetFilterCondition() const
{
    return m_filterCondition;
}

void Table::SetFilterCondition(const string& _filterCondition)
{
    m_filterCondition = _filterCondition;
    m_filterConditionHasBeenSet = true;
}

bool Table::FilterConditionHasBeenSet() const
{
    return m_filterConditionHasBeenSet;
}

string Table::GetColumnMode() const
{
    return m_columnMode;
}

void Table::SetColumnMode(const string& _columnMode)
{
    m_columnMode = _columnMode;
    m_columnModeHasBeenSet = true;
}

bool Table::ColumnModeHasBeenSet() const
{
    return m_columnModeHasBeenSet;
}

vector<Column> Table::GetColumns() const
{
    return m_columns;
}

void Table::SetColumns(const vector<Column>& _columns)
{
    m_columns = _columns;
    m_columnsHasBeenSet = true;
}

bool Table::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

vector<string> Table::GetTmpTables() const
{
    return m_tmpTables;
}

void Table::SetTmpTables(const vector<string>& _tmpTables)
{
    m_tmpTables = _tmpTables;
    m_tmpTablesHasBeenSet = true;
}

bool Table::TmpTablesHasBeenSet() const
{
    return m_tmpTablesHasBeenSet;
}

string Table::GetTableEditMode() const
{
    return m_tableEditMode;
}

void Table::SetTableEditMode(const string& _tableEditMode)
{
    m_tableEditMode = _tableEditMode;
    m_tableEditModeHasBeenSet = true;
}

bool Table::TableEditModeHasBeenSet() const
{
    return m_tableEditModeHasBeenSet;
}

