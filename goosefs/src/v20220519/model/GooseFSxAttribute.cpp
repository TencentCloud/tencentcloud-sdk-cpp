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

#include <tencentcloud/goosefs/v20220519/model/GooseFSxAttribute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

GooseFSxAttribute::GooseFSxAttribute() :
    m_modelHasBeenSet(false),
    m_capacityHasBeenSet(false),
    m_mappedBucketListHasBeenSet(false),
    m_clientManagerNodeListHasBeenSet(false)
{
}

CoreInternalOutcome GooseFSxAttribute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GooseFSxAttribute.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("Capacity") && !value["Capacity"].IsNull())
    {
        if (!value["Capacity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GooseFSxAttribute.Capacity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_capacity = value["Capacity"].GetUint64();
        m_capacityHasBeenSet = true;
    }

    if (value.HasMember("MappedBucketList") && !value["MappedBucketList"].IsNull())
    {
        if (!value["MappedBucketList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GooseFSxAttribute.MappedBucketList` is not array type"));

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

    if (value.HasMember("ClientManagerNodeList") && !value["ClientManagerNodeList"].IsNull())
    {
        if (!value["ClientManagerNodeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GooseFSxAttribute.ClientManagerNodeList` is not array type"));

        const rapidjson::Value &tmpValue = value["ClientManagerNodeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClientClusterManagerNodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clientManagerNodeList.push_back(item);
        }
        m_clientManagerNodeListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GooseFSxAttribute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_clientManagerNodeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientManagerNodeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clientManagerNodeList.begin(); itr != m_clientManagerNodeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string GooseFSxAttribute::GetModel() const
{
    return m_model;
}

void GooseFSxAttribute::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool GooseFSxAttribute::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

uint64_t GooseFSxAttribute::GetCapacity() const
{
    return m_capacity;
}

void GooseFSxAttribute::SetCapacity(const uint64_t& _capacity)
{
    m_capacity = _capacity;
    m_capacityHasBeenSet = true;
}

bool GooseFSxAttribute::CapacityHasBeenSet() const
{
    return m_capacityHasBeenSet;
}

vector<MappedBucket> GooseFSxAttribute::GetMappedBucketList() const
{
    return m_mappedBucketList;
}

void GooseFSxAttribute::SetMappedBucketList(const vector<MappedBucket>& _mappedBucketList)
{
    m_mappedBucketList = _mappedBucketList;
    m_mappedBucketListHasBeenSet = true;
}

bool GooseFSxAttribute::MappedBucketListHasBeenSet() const
{
    return m_mappedBucketListHasBeenSet;
}

vector<ClientClusterManagerNodeInfo> GooseFSxAttribute::GetClientManagerNodeList() const
{
    return m_clientManagerNodeList;
}

void GooseFSxAttribute::SetClientManagerNodeList(const vector<ClientClusterManagerNodeInfo>& _clientManagerNodeList)
{
    m_clientManagerNodeList = _clientManagerNodeList;
    m_clientManagerNodeListHasBeenSet = true;
}

bool GooseFSxAttribute::ClientManagerNodeListHasBeenSet() const
{
    return m_clientManagerNodeListHasBeenSet;
}

