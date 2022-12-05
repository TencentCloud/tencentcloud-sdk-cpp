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

#include <tencentcloud/cynosdb/v20190107/model/SearchClusterDatabasesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

SearchClusterDatabasesRequest::SearchClusterDatabasesRequest() :
    m_clusterIdHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_matchTypeHasBeenSet(false)
{
}

string SearchClusterDatabasesRequest::ToJsonString() const
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

    if (m_matchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_matchType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SearchClusterDatabasesRequest::GetClusterId() const
{
    return m_clusterId;
}

void SearchClusterDatabasesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool SearchClusterDatabasesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string SearchClusterDatabasesRequest::GetDatabase() const
{
    return m_database;
}

void SearchClusterDatabasesRequest::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool SearchClusterDatabasesRequest::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

int64_t SearchClusterDatabasesRequest::GetMatchType() const
{
    return m_matchType;
}

void SearchClusterDatabasesRequest::SetMatchType(const int64_t& _matchType)
{
    m_matchType = _matchType;
    m_matchTypeHasBeenSet = true;
}

bool SearchClusterDatabasesRequest::MatchTypeHasBeenSet() const
{
    return m_matchTypeHasBeenSet;
}


