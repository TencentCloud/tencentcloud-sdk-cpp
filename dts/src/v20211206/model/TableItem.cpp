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

#include <tencentcloud/dts/v20211206/model/TableItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

TableItem::TableItem() :
    m_tableNameHasBeenSet(false),
    m_newTableNameHasBeenSet(false),
    m_tmpTablesHasBeenSet(false),
    m_tableEditModeHasBeenSet(false)
{
}

CoreInternalOutcome TableItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableItem.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("NewTableName") && !value["NewTableName"].IsNull())
    {
        if (!value["NewTableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableItem.NewTableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newTableName = string(value["NewTableName"].GetString());
        m_newTableNameHasBeenSet = true;
    }

    if (value.HasMember("TmpTables") && !value["TmpTables"].IsNull())
    {
        if (!value["TmpTables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableItem.TmpTables` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `TableItem.TableEditMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableEditMode = string(value["TableEditMode"].GetString());
        m_tableEditModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string TableItem::GetTableName() const
{
    return m_tableName;
}

void TableItem::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TableItem::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string TableItem::GetNewTableName() const
{
    return m_newTableName;
}

void TableItem::SetNewTableName(const string& _newTableName)
{
    m_newTableName = _newTableName;
    m_newTableNameHasBeenSet = true;
}

bool TableItem::NewTableNameHasBeenSet() const
{
    return m_newTableNameHasBeenSet;
}

vector<string> TableItem::GetTmpTables() const
{
    return m_tmpTables;
}

void TableItem::SetTmpTables(const vector<string>& _tmpTables)
{
    m_tmpTables = _tmpTables;
    m_tmpTablesHasBeenSet = true;
}

bool TableItem::TmpTablesHasBeenSet() const
{
    return m_tmpTablesHasBeenSet;
}

string TableItem::GetTableEditMode() const
{
    return m_tableEditMode;
}

void TableItem::SetTableEditMode(const string& _tableEditMode)
{
    m_tableEditMode = _tableEditMode;
    m_tableEditModeHasBeenSet = true;
}

bool TableItem::TableEditModeHasBeenSet() const
{
    return m_tableEditModeHasBeenSet;
}

