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

#include <tencentcloud/ckafka/v20190819/model/SQLServerParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

SQLServerParam::SQLServerParam() :
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_snapshotModeHasBeenSet(false)
{
}

CoreInternalOutcome SQLServerParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLServerParam.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLServerParam.Table` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_table = string(value["Table"].GetString());
        m_tableHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLServerParam.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("SnapshotMode") && !value["SnapshotMode"].IsNull())
    {
        if (!value["SnapshotMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLServerParam.SnapshotMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotMode = string(value["SnapshotMode"].GetString());
        m_snapshotModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SQLServerParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotMode.c_str(), allocator).Move(), allocator);
    }

}


string SQLServerParam::GetDatabase() const
{
    return m_database;
}

void SQLServerParam::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool SQLServerParam::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string SQLServerParam::GetTable() const
{
    return m_table;
}

void SQLServerParam::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool SQLServerParam::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

string SQLServerParam::GetResource() const
{
    return m_resource;
}

void SQLServerParam::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool SQLServerParam::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string SQLServerParam::GetSnapshotMode() const
{
    return m_snapshotMode;
}

void SQLServerParam::SetSnapshotMode(const string& _snapshotMode)
{
    m_snapshotMode = _snapshotMode;
    m_snapshotModeHasBeenSet = true;
}

bool SQLServerParam::SnapshotModeHasBeenSet() const
{
    return m_snapshotModeHasBeenSet;
}

