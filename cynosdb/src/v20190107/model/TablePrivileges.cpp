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

#include <tencentcloud/cynosdb/v20190107/model/TablePrivileges.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

TablePrivileges::TablePrivileges() :
    m_dbHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_privilegesHasBeenSet(false)
{
}

CoreInternalOutcome TablePrivileges::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Db") && !value["Db"].IsNull())
    {
        if (!value["Db"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TablePrivileges.Db` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_db = string(value["Db"].GetString());
        m_dbHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TablePrivileges.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("Privileges") && !value["Privileges"].IsNull())
    {
        if (!value["Privileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TablePrivileges.Privileges` is not array type"));

        const rapidjson::Value &tmpValue = value["Privileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privileges.push_back((*itr).GetString());
        }
        m_privilegesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TablePrivileges::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Db";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_db.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
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


string TablePrivileges::GetDb() const
{
    return m_db;
}

void TablePrivileges::SetDb(const string& _db)
{
    m_db = _db;
    m_dbHasBeenSet = true;
}

bool TablePrivileges::DbHasBeenSet() const
{
    return m_dbHasBeenSet;
}

string TablePrivileges::GetTableName() const
{
    return m_tableName;
}

void TablePrivileges::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TablePrivileges::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

vector<string> TablePrivileges::GetPrivileges() const
{
    return m_privileges;
}

void TablePrivileges::SetPrivileges(const vector<string>& _privileges)
{
    m_privileges = _privileges;
    m_privilegesHasBeenSet = true;
}

bool TablePrivileges::PrivilegesHasBeenSet() const
{
    return m_privilegesHasBeenSet;
}

