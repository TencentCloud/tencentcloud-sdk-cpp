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

#include <tencentcloud/ssm/v20190923/model/ProductPrivilegeUnit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssm::V20190923::Model;
using namespace std;

ProductPrivilegeUnit::ProductPrivilegeUnit() :
    m_privilegeNameHasBeenSet(false),
    m_privilegesHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_columnNameHasBeenSet(false)
{
}

CoreInternalOutcome ProductPrivilegeUnit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrivilegeName") && !value["PrivilegeName"].IsNull())
    {
        if (!value["PrivilegeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductPrivilegeUnit.PrivilegeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privilegeName = string(value["PrivilegeName"].GetString());
        m_privilegeNameHasBeenSet = true;
    }

    if (value.HasMember("Privileges") && !value["Privileges"].IsNull())
    {
        if (!value["Privileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProductPrivilegeUnit.Privileges` is not array type"));

        const rapidjson::Value &tmpValue = value["Privileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privileges.push_back((*itr).GetString());
        }
        m_privilegesHasBeenSet = true;
    }

    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductPrivilegeUnit.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductPrivilegeUnit.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("ColumnName") && !value["ColumnName"].IsNull())
    {
        if (!value["ColumnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductPrivilegeUnit.ColumnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnName = string(value["ColumnName"].GetString());
        m_columnNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductPrivilegeUnit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_privilegeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivilegeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privilegeName.c_str(), allocator).Move(), allocator);
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

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_columnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnName.c_str(), allocator).Move(), allocator);
    }

}


string ProductPrivilegeUnit::GetPrivilegeName() const
{
    return m_privilegeName;
}

void ProductPrivilegeUnit::SetPrivilegeName(const string& _privilegeName)
{
    m_privilegeName = _privilegeName;
    m_privilegeNameHasBeenSet = true;
}

bool ProductPrivilegeUnit::PrivilegeNameHasBeenSet() const
{
    return m_privilegeNameHasBeenSet;
}

vector<string> ProductPrivilegeUnit::GetPrivileges() const
{
    return m_privileges;
}

void ProductPrivilegeUnit::SetPrivileges(const vector<string>& _privileges)
{
    m_privileges = _privileges;
    m_privilegesHasBeenSet = true;
}

bool ProductPrivilegeUnit::PrivilegesHasBeenSet() const
{
    return m_privilegesHasBeenSet;
}

string ProductPrivilegeUnit::GetDatabase() const
{
    return m_database;
}

void ProductPrivilegeUnit::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool ProductPrivilegeUnit::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string ProductPrivilegeUnit::GetTableName() const
{
    return m_tableName;
}

void ProductPrivilegeUnit::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool ProductPrivilegeUnit::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string ProductPrivilegeUnit::GetColumnName() const
{
    return m_columnName;
}

void ProductPrivilegeUnit::SetColumnName(const string& _columnName)
{
    m_columnName = _columnName;
    m_columnNameHasBeenSet = true;
}

bool ProductPrivilegeUnit::ColumnNameHasBeenSet() const
{
    return m_columnNameHasBeenSet;
}

