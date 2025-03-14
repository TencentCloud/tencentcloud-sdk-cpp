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

#include <tencentcloud/dlc/v20210125/model/AddOptimizerEnginesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

AddOptimizerEnginesRequest::AddOptimizerEnginesRequest() :
    m_catalogHasBeenSet(false),
    m_enginesHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false)
{
}

string AddOptimizerEnginesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_enginesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engines";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_engines.begin(); itr != m_engines.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_table.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddOptimizerEnginesRequest::GetCatalog() const
{
    return m_catalog;
}

void AddOptimizerEnginesRequest::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool AddOptimizerEnginesRequest::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

vector<OptimizerEngineInfo> AddOptimizerEnginesRequest::GetEngines() const
{
    return m_engines;
}

void AddOptimizerEnginesRequest::SetEngines(const vector<OptimizerEngineInfo>& _engines)
{
    m_engines = _engines;
    m_enginesHasBeenSet = true;
}

bool AddOptimizerEnginesRequest::EnginesHasBeenSet() const
{
    return m_enginesHasBeenSet;
}

string AddOptimizerEnginesRequest::GetDatabase() const
{
    return m_database;
}

void AddOptimizerEnginesRequest::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool AddOptimizerEnginesRequest::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string AddOptimizerEnginesRequest::GetTable() const
{
    return m_table;
}

void AddOptimizerEnginesRequest::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool AddOptimizerEnginesRequest::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}


