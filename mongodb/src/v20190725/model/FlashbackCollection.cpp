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

#include <tencentcloud/mongodb/v20190725/model/FlashbackCollection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

FlashbackCollection::FlashbackCollection() :
    m_collectionNameHasBeenSet(false),
    m_targetResultCollectionNameHasBeenSet(false),
    m_filterKeyHasBeenSet(false),
    m_keyValuesHasBeenSet(false)
{
}

CoreInternalOutcome FlashbackCollection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CollectionName") && !value["CollectionName"].IsNull())
    {
        if (!value["CollectionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlashbackCollection.CollectionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collectionName = string(value["CollectionName"].GetString());
        m_collectionNameHasBeenSet = true;
    }

    if (value.HasMember("TargetResultCollectionName") && !value["TargetResultCollectionName"].IsNull())
    {
        if (!value["TargetResultCollectionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlashbackCollection.TargetResultCollectionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetResultCollectionName = string(value["TargetResultCollectionName"].GetString());
        m_targetResultCollectionNameHasBeenSet = true;
    }

    if (value.HasMember("FilterKey") && !value["FilterKey"].IsNull())
    {
        if (!value["FilterKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlashbackCollection.FilterKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filterKey = string(value["FilterKey"].GetString());
        m_filterKeyHasBeenSet = true;
    }

    if (value.HasMember("KeyValues") && !value["KeyValues"].IsNull())
    {
        if (!value["KeyValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlashbackCollection.KeyValues` is not array type"));

        const rapidjson::Value &tmpValue = value["KeyValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FBKeyValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_keyValues.push_back(item);
        }
        m_keyValuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlashbackCollection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_collectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_collectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetResultCollectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetResultCollectionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetResultCollectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_filterKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filterKey.c_str(), allocator).Move(), allocator);
    }

    if (m_keyValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_keyValues.begin(); itr != m_keyValues.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string FlashbackCollection::GetCollectionName() const
{
    return m_collectionName;
}

void FlashbackCollection::SetCollectionName(const string& _collectionName)
{
    m_collectionName = _collectionName;
    m_collectionNameHasBeenSet = true;
}

bool FlashbackCollection::CollectionNameHasBeenSet() const
{
    return m_collectionNameHasBeenSet;
}

string FlashbackCollection::GetTargetResultCollectionName() const
{
    return m_targetResultCollectionName;
}

void FlashbackCollection::SetTargetResultCollectionName(const string& _targetResultCollectionName)
{
    m_targetResultCollectionName = _targetResultCollectionName;
    m_targetResultCollectionNameHasBeenSet = true;
}

bool FlashbackCollection::TargetResultCollectionNameHasBeenSet() const
{
    return m_targetResultCollectionNameHasBeenSet;
}

string FlashbackCollection::GetFilterKey() const
{
    return m_filterKey;
}

void FlashbackCollection::SetFilterKey(const string& _filterKey)
{
    m_filterKey = _filterKey;
    m_filterKeyHasBeenSet = true;
}

bool FlashbackCollection::FilterKeyHasBeenSet() const
{
    return m_filterKeyHasBeenSet;
}

vector<FBKeyValue> FlashbackCollection::GetKeyValues() const
{
    return m_keyValues;
}

void FlashbackCollection::SetKeyValues(const vector<FBKeyValue>& _keyValues)
{
    m_keyValues = _keyValues;
    m_keyValuesHasBeenSet = true;
}

bool FlashbackCollection::KeyValuesHasBeenSet() const
{
    return m_keyValuesHasBeenSet;
}

