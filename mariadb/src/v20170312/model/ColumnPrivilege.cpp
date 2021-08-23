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

#include <tencentcloud/mariadb/v20170312/model/ColumnPrivilege.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

ColumnPrivilege::ColumnPrivilege() :
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_columnHasBeenSet(false),
    m_privilegesHasBeenSet(false)
{
}

CoreInternalOutcome ColumnPrivilege::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnPrivilege.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnPrivilege.Table` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_table = string(value["Table"].GetString());
        m_tableHasBeenSet = true;
    }

    if (value.HasMember("Column") && !value["Column"].IsNull())
    {
        if (!value["Column"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnPrivilege.Column` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_column = string(value["Column"].GetString());
        m_columnHasBeenSet = true;
    }

    if (value.HasMember("Privileges") && !value["Privileges"].IsNull())
    {
        if (!value["Privileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ColumnPrivilege.Privileges` is not array type"));

        const rapidjson::Value &tmpValue = value["Privileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privileges.push_back((*itr).GetString());
        }
        m_privilegesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ColumnPrivilege::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_table.c_str(), allocator).Move(), allocator);
    }

    if (m_columnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Column";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_column.c_str(), allocator).Move(), allocator);
    }

    if (m_privilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privileges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_privileges.begin(); itr != m_privileges.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ColumnPrivilege::GetDatabase() const
{
    return m_database;
}

void ColumnPrivilege::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool ColumnPrivilege::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string ColumnPrivilege::GetTable() const
{
    return m_table;
}

void ColumnPrivilege::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool ColumnPrivilege::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

string ColumnPrivilege::GetColumn() const
{
    return m_column;
}

void ColumnPrivilege::SetColumn(const string& _column)
{
    m_column = _column;
    m_columnHasBeenSet = true;
}

bool ColumnPrivilege::ColumnHasBeenSet() const
{
    return m_columnHasBeenSet;
}

vector<string> ColumnPrivilege::GetPrivileges() const
{
    return m_privileges;
}

void ColumnPrivilege::SetPrivileges(const vector<string>& _privileges)
{
    m_privileges = _privileges;
    m_privilegesHasBeenSet = true;
}

bool ColumnPrivilege::PrivilegesHasBeenSet() const
{
    return m_privilegesHasBeenSet;
}

