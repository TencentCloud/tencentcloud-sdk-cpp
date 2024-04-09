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

#include <tencentcloud/mongodb/v20190725/model/FlashbackDatabase.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

FlashbackDatabase::FlashbackDatabase() :
    m_dBNameHasBeenSet(false),
    m_collectionsHasBeenSet(false)
{
}

CoreInternalOutcome FlashbackDatabase::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DBName") && !value["DBName"].IsNull())
    {
        if (!value["DBName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlashbackDatabase.DBName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBName = string(value["DBName"].GetString());
        m_dBNameHasBeenSet = true;
    }

    if (value.HasMember("Collections") && !value["Collections"].IsNull())
    {
        if (!value["Collections"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlashbackDatabase.Collections` is not array type"));

        const rapidjson::Value &tmpValue = value["Collections"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlashbackCollection item;
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

void FlashbackDatabase::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dBNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBName.c_str(), allocator).Move(), allocator);
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


string FlashbackDatabase::GetDBName() const
{
    return m_dBName;
}

void FlashbackDatabase::SetDBName(const string& _dBName)
{
    m_dBName = _dBName;
    m_dBNameHasBeenSet = true;
}

bool FlashbackDatabase::DBNameHasBeenSet() const
{
    return m_dBNameHasBeenSet;
}

vector<FlashbackCollection> FlashbackDatabase::GetCollections() const
{
    return m_collections;
}

void FlashbackDatabase::SetCollections(const vector<FlashbackCollection>& _collections)
{
    m_collections = _collections;
    m_collectionsHasBeenSet = true;
}

bool FlashbackDatabase::CollectionsHasBeenSet() const
{
    return m_collectionsHasBeenSet;
}

