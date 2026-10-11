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

#include <tencentcloud/mongodb/v20190725/model/RoleResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

RoleResource::RoleResource() :
    m_clusterHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_collectionHasBeenSet(false)
{
}

CoreInternalOutcome RoleResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cluster") && !value["Cluster"].IsNull())
    {
        if (!value["Cluster"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RoleResource.Cluster` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_cluster = value["Cluster"].GetBool();
        m_clusterHasBeenSet = true;
    }

    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleResource.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("Collection") && !value["Collection"].IsNull())
    {
        if (!value["Collection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleResource.Collection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collection = string(value["Collection"].GetString());
        m_collectionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoleResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cluster, allocator);
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_collectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Collection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_collection.c_str(), allocator).Move(), allocator);
    }

}


bool RoleResource::GetCluster() const
{
    return m_cluster;
}

void RoleResource::SetCluster(const bool& _cluster)
{
    m_cluster = _cluster;
    m_clusterHasBeenSet = true;
}

bool RoleResource::ClusterHasBeenSet() const
{
    return m_clusterHasBeenSet;
}

string RoleResource::GetDatabase() const
{
    return m_database;
}

void RoleResource::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool RoleResource::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string RoleResource::GetCollection() const
{
    return m_collection;
}

void RoleResource::SetCollection(const string& _collection)
{
    m_collection = _collection;
    m_collectionHasBeenSet = true;
}

bool RoleResource::CollectionHasBeenSet() const
{
    return m_collectionHasBeenSet;
}

