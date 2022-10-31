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
    m_filterConditionHasBeenSet(false)
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

