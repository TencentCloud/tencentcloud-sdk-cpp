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

#include <tencentcloud/mongodb/v20190725/model/RestoreDatabases.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

RestoreDatabases::RestoreDatabases() :
    m_dbHasBeenSet(false),
    m_collectionsHasBeenSet(false)
{
}

CoreInternalOutcome RestoreDatabases::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Db") && !value["Db"].IsNull())
    {
        if (!value["Db"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreDatabases.Db` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_db = string(value["Db"].GetString());
        m_dbHasBeenSet = true;
    }

    if (value.HasMember("Collections") && !value["Collections"].IsNull())
    {
        if (!value["Collections"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RestoreDatabases.Collections` is not array type"));

        const rapidjson::Value &tmpValue = value["Collections"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RestoreCollection item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_collections.push_back(item);
        }
        m_collectionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RestoreDatabases::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Db";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_db.c_str(), allocator).Move(), allocator);
    }

    if (m_collectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Collections";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_collections.begin(); itr != m_collections.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RestoreDatabases::GetDb() const
{
    return m_db;
}

void RestoreDatabases::SetDb(const string& _db)
{
    m_db = _db;
    m_dbHasBeenSet = true;
}

bool RestoreDatabases::DbHasBeenSet() const
{
    return m_dbHasBeenSet;
}

vector<RestoreCollection> RestoreDatabases::GetCollections() const
{
    return m_collections;
}

void RestoreDatabases::SetCollections(const vector<RestoreCollection>& _collections)
{
    m_collections = _collections;
    m_collectionsHasBeenSet = true;
}

bool RestoreDatabases::CollectionsHasBeenSet() const
{
    return m_collectionsHasBeenSet;
}

