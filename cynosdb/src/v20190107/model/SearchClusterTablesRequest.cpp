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

#include <tencentcloud/cynosdb/v20190107/model/SearchClusterTablesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

SearchClusterTablesRequest::SearchClusterTablesRequest() :
    m_clusterIdHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_tableTypeHasBeenSet(false)
{
}

string SearchClusterTablesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
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

    if (m_tableTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SearchClusterTablesRequest::GetClusterId() const
{
    return m_clusterId;
}

void SearchClusterTablesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool SearchClusterTablesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string SearchClusterTablesRequest::GetDatabase() const
{
    return m_database;
}

void SearchClusterTablesRequest::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool SearchClusterTablesRequest::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string SearchClusterTablesRequest::GetTable() const
{
    return m_table;
}

void SearchClusterTablesRequest::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool SearchClusterTablesRequest::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

string SearchClusterTablesRequest::GetTableType() const
{
    return m_tableType;
}

void SearchClusterTablesRequest::SetTableType(const string& _tableType)
{
    m_tableType = _tableType;
    m_tableTypeHasBeenSet = true;
}

bool SearchClusterTablesRequest::TableTypeHasBeenSet() const
{
    return m_tableTypeHasBeenSet;
}


