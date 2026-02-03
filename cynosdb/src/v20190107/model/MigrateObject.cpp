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

#include <tencentcloud/cynosdb/v20190107/model/MigrateObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

MigrateObject::MigrateObject() :
    m_migrateDBModeHasBeenSet(false),
    m_databasesHasBeenSet(false)
{
}

CoreInternalOutcome MigrateObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MigrateDBMode") && !value["MigrateDBMode"].IsNull())
    {
        if (!value["MigrateDBMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateObject.MigrateDBMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_migrateDBMode = string(value["MigrateDBMode"].GetString());
        m_migrateDBModeHasBeenSet = true;
    }

    if (value.HasMember("Databases") && !value["Databases"].IsNull())
    {
        if (!value["Databases"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MigrateObject.Databases` is not array type"));

        const rapidjson::Value &tmpValue = value["Databases"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MigrateDBItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_databases.push_back(item);
        }
        m_databasesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MigrateObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_migrateDBModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateDBMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_migrateDBMode.c_str(), allocator).Move(), allocator);
    }

    if (m_databasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Databases";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_databases.begin(); itr != m_databases.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MigrateObject::GetMigrateDBMode() const
{
    return m_migrateDBMode;
}

void MigrateObject::SetMigrateDBMode(const string& _migrateDBMode)
{
    m_migrateDBMode = _migrateDBMode;
    m_migrateDBModeHasBeenSet = true;
}

bool MigrateObject::MigrateDBModeHasBeenSet() const
{
    return m_migrateDBModeHasBeenSet;
}

vector<MigrateDBItem> MigrateObject::GetDatabases() const
{
    return m_databases;
}

void MigrateObject::SetDatabases(const vector<MigrateDBItem>& _databases)
{
    m_databases = _databases;
    m_databasesHasBeenSet = true;
}

bool MigrateObject::DatabasesHasBeenSet() const
{
    return m_databasesHasBeenSet;
}

