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

#include <tencentcloud/goosefs/v20220519/model/GooseFSxBuildElement.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

GooseFSxBuildElement::GooseFSxBuildElement() :
    m_modelHasBeenSet(false),
    m_capacityHasBeenSet(false),
    m_mappedBucketListHasBeenSet(false)
{
}

CoreInternalOutcome GooseFSxBuildElement::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GooseFSxBuildElement.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("Capacity") && !value["Capacity"].IsNull())
    {
        if (!value["Capacity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GooseFSxBuildElement.Capacity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_capacity = value["Capacity"].GetUint64();
        m_capacityHasBeenSet = true;
    }

    if (value.HasMember("MappedBucketList") && !value["MappedBucketList"].IsNull())
    {
        if (!value["MappedBucketList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GooseFSxBuildElement.MappedBucketList` is not array type"));

        const rapidjson::Value &tmpValue = value["MappedBucketList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MappedBucket item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mappedBucketList.push_back(item);
        }
        m_mappedBucketListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GooseFSxBuildElement::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_capacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Capacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capacity, allocator);
    }

    if (m_mappedBucketListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MappedBucketList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mappedBucketList.begin(); itr != m_mappedBucketList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string GooseFSxBuildElement::GetModel() const
{
    return m_model;
}

void GooseFSxBuildElement::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool GooseFSxBuildElement::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

uint64_t GooseFSxBuildElement::GetCapacity() const
{
    return m_capacity;
}

void GooseFSxBuildElement::SetCapacity(const uint64_t& _capacity)
{
    m_capacity = _capacity;
    m_capacityHasBeenSet = true;
}

bool GooseFSxBuildElement::CapacityHasBeenSet() const
{
    return m_capacityHasBeenSet;
}

vector<MappedBucket> GooseFSxBuildElement::GetMappedBucketList() const
{
    return m_mappedBucketList;
}

void GooseFSxBuildElement::SetMappedBucketList(const vector<MappedBucket>& _mappedBucketList)
{
    m_mappedBucketList = _mappedBucketList;
    m_mappedBucketListHasBeenSet = true;
}

bool GooseFSxBuildElement::MappedBucketListHasBeenSet() const
{
    return m_mappedBucketListHasBeenSet;
}

