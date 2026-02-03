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

#include <tencentcloud/cynosdb/v20190107/model/MigrateOpt.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

MigrateOpt::MigrateOpt() :
    m_databaseTablesHasBeenSet(false)
{
}

CoreInternalOutcome MigrateOpt::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseTables") && !value["DatabaseTables"].IsNull())
    {
        if (!value["DatabaseTables"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateOpt.DatabaseTables` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_databaseTables.Deserialize(value["DatabaseTables"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_databaseTablesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MigrateOpt::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseTables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_databaseTables.ToJsonObject(value[key.c_str()], allocator);
    }

}


MigrateObject MigrateOpt::GetDatabaseTables() const
{
    return m_databaseTables;
}

void MigrateOpt::SetDatabaseTables(const MigrateObject& _databaseTables)
{
    m_databaseTables = _databaseTables;
    m_databaseTablesHasBeenSet = true;
}

bool MigrateOpt::DatabaseTablesHasBeenSet() const
{
    return m_databaseTablesHasBeenSet;
}

