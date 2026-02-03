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

#include <tencentcloud/cynosdb/v20190107/model/MigrateDBItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

MigrateDBItem::MigrateDBItem() :
    m_dbNameHasBeenSet(false),
    m_migrateTableModeHasBeenSet(false),
    m_tablesHasBeenSet(false)
{
}

CoreInternalOutcome MigrateDBItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateDBItem.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("MigrateTableMode") && !value["MigrateTableMode"].IsNull())
    {
        if (!value["MigrateTableMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateDBItem.MigrateTableMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_migrateTableMode = string(value["MigrateTableMode"].GetString());
        m_migrateTableModeHasBeenSet = true;
    }

    if (value.HasMember("Tables") && !value["Tables"].IsNull())
    {
        if (!value["Tables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MigrateDBItem.Tables` is not array type"));

        const rapidjson::Value &tmpValue = value["Tables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MigrateTableItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tables.push_back(item);
        }
        m_tablesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MigrateDBItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_migrateTableModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateTableMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_migrateTableMode.c_str(), allocator).Move(), allocator);
    }

    if (m_tablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tables.begin(); itr != m_tables.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MigrateDBItem::GetDbName() const
{
    return m_dbName;
}

void MigrateDBItem::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool MigrateDBItem::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string MigrateDBItem::GetMigrateTableMode() const
{
    return m_migrateTableMode;
}

void MigrateDBItem::SetMigrateTableMode(const string& _migrateTableMode)
{
    m_migrateTableMode = _migrateTableMode;
    m_migrateTableModeHasBeenSet = true;
}

bool MigrateDBItem::MigrateTableModeHasBeenSet() const
{
    return m_migrateTableModeHasBeenSet;
}

vector<MigrateTableItem> MigrateDBItem::GetTables() const
{
    return m_tables;
}

void MigrateDBItem::SetTables(const vector<MigrateTableItem>& _tables)
{
    m_tables = _tables;
    m_tablesHasBeenSet = true;
}

bool MigrateDBItem::TablesHasBeenSet() const
{
    return m_tablesHasBeenSet;
}

