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

#include <tencentcloud/dbbrain/v20210527/model/MongoDBIndex.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

MongoDBIndex::MongoDBIndex() :
    m_clusterIdHasBeenSet(false),
    m_collectionHasBeenSet(false),
    m_dbHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_indexesToBuildHasBeenSet(false),
    m_indexesToDropHasBeenSet(false)
{
}

CoreInternalOutcome MongoDBIndex::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBIndex.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Collection") && !value["Collection"].IsNull())
    {
        if (!value["Collection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBIndex.Collection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collection = string(value["Collection"].GetString());
        m_collectionHasBeenSet = true;
    }

    if (value.HasMember("Db") && !value["Db"].IsNull())
    {
        if (!value["Db"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBIndex.Db` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_db = string(value["Db"].GetString());
        m_dbHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBIndex.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBIndex.Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("IndexesToBuild") && !value["IndexesToBuild"].IsNull())
    {
        if (!value["IndexesToBuild"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MongoDBIndex.IndexesToBuild` is not array type"));

        const rapidjson::Value &tmpValue = value["IndexesToBuild"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IndexesToBuild item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_indexesToBuild.push_back(item);
        }
        m_indexesToBuildHasBeenSet = true;
    }

    if (value.HasMember("IndexesToDrop") && !value["IndexesToDrop"].IsNull())
    {
        if (!value["IndexesToDrop"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MongoDBIndex.IndexesToDrop` is not array type"));

        const rapidjson::Value &tmpValue = value["IndexesToDrop"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IndexesToDrop item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_indexesToDrop.push_back(item);
        }
        m_indexesToDropHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MongoDBIndex::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_collectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Collection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_collection.c_str(), allocator).Move(), allocator);
    }

    if (m_dbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Db";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_db.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_indexesToBuildHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexesToBuild";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_indexesToBuild.begin(); itr != m_indexesToBuild.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_indexesToDropHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexesToDrop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_indexesToDrop.begin(); itr != m_indexesToDrop.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MongoDBIndex::GetClusterId() const
{
    return m_clusterId;
}

void MongoDBIndex::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool MongoDBIndex::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string MongoDBIndex::GetCollection() const
{
    return m_collection;
}

void MongoDBIndex::SetCollection(const string& _collection)
{
    m_collection = _collection;
    m_collectionHasBeenSet = true;
}

bool MongoDBIndex::CollectionHasBeenSet() const
{
    return m_collectionHasBeenSet;
}

string MongoDBIndex::GetDb() const
{
    return m_db;
}

void MongoDBIndex::SetDb(const string& _db)
{
    m_db = _db;
    m_dbHasBeenSet = true;
}

bool MongoDBIndex::DbHasBeenSet() const
{
    return m_dbHasBeenSet;
}

int64_t MongoDBIndex::GetLevel() const
{
    return m_level;
}

void MongoDBIndex::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool MongoDBIndex::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t MongoDBIndex::GetScore() const
{
    return m_score;
}

void MongoDBIndex::SetScore(const int64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool MongoDBIndex::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

vector<IndexesToBuild> MongoDBIndex::GetIndexesToBuild() const
{
    return m_indexesToBuild;
}

void MongoDBIndex::SetIndexesToBuild(const vector<IndexesToBuild>& _indexesToBuild)
{
    m_indexesToBuild = _indexesToBuild;
    m_indexesToBuildHasBeenSet = true;
}

bool MongoDBIndex::IndexesToBuildHasBeenSet() const
{
    return m_indexesToBuildHasBeenSet;
}

vector<IndexesToDrop> MongoDBIndex::GetIndexesToDrop() const
{
    return m_indexesToDrop;
}

void MongoDBIndex::SetIndexesToDrop(const vector<IndexesToDrop>& _indexesToDrop)
{
    m_indexesToDrop = _indexesToDrop;
    m_indexesToDropHasBeenSet = true;
}

bool MongoDBIndex::IndexesToDropHasBeenSet() const
{
    return m_indexesToDropHasBeenSet;
}

