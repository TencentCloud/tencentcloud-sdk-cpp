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

#include <tencentcloud/dts/v20211206/model/CompareTableItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

CompareTableItem::CompareTableItem() :
    m_tableNameHasBeenSet(false),
    m_columnModeHasBeenSet(false),
    m_columnsHasBeenSet(false)
{
}

CoreInternalOutcome CompareTableItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTableItem.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("ColumnMode") && !value["ColumnMode"].IsNull())
    {
        if (!value["ColumnMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTableItem.ColumnMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnMode = string(value["ColumnMode"].GetString());
        m_columnModeHasBeenSet = true;
    }

    if (value.HasMember("Columns") && !value["Columns"].IsNull())
    {
        if (!value["Columns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompareTableItem.Columns` is not array type"));

        const rapidjson::Value &tmpValue = value["Columns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CompareColumnItem item;
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


    return CoreInternalOutcome(true);
}

void CompareTableItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
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

}


string CompareTableItem::GetTableName() const
{
    return m_tableName;
}

void CompareTableItem::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool CompareTableItem::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string CompareTableItem::GetColumnMode() const
{
    return m_columnMode;
}

void CompareTableItem::SetColumnMode(const string& _columnMode)
{
    m_columnMode = _columnMode;
    m_columnModeHasBeenSet = true;
}

bool CompareTableItem::ColumnModeHasBeenSet() const
{
    return m_columnModeHasBeenSet;
}

vector<CompareColumnItem> CompareTableItem::GetColumns() const
{
    return m_columns;
}

void CompareTableItem::SetColumns(const vector<CompareColumnItem>& _columns)
{
    m_columns = _columns;
    m_columnsHasBeenSet = true;
}

bool CompareTableItem::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

