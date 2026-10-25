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

#include <tencentcloud/dbbrain/v20210527/model/MongodbSpaceObjectItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

MongodbSpaceObjectItem::MongodbSpaceObjectItem() :
    m_spaceSchemasHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

CoreInternalOutcome MongodbSpaceObjectItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpaceSchemas") && !value["SpaceSchemas"].IsNull())
    {
        if (!value["SpaceSchemas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MongodbSpaceObjectItem.SpaceSchemas` is not array type"));

        const rapidjson::Value &tmpValue = value["SpaceSchemas"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MongoDBTableSpaceItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_spaceSchemas.push_back(item);
        }
        m_spaceSchemasHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongodbSpaceObjectItem.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MongodbSpaceObjectItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_spaceSchemasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceSchemas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_spaceSchemas.begin(); itr != m_spaceSchemas.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

}


vector<MongoDBTableSpaceItem> MongodbSpaceObjectItem::GetSpaceSchemas() const
{
    return m_spaceSchemas;
}

void MongodbSpaceObjectItem::SetSpaceSchemas(const vector<MongoDBTableSpaceItem>& _spaceSchemas)
{
    m_spaceSchemas = _spaceSchemas;
    m_spaceSchemasHasBeenSet = true;
}

bool MongodbSpaceObjectItem::SpaceSchemasHasBeenSet() const
{
    return m_spaceSchemasHasBeenSet;
}

int64_t MongodbSpaceObjectItem::GetTimestamp() const
{
    return m_timestamp;
}

void MongodbSpaceObjectItem::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool MongodbSpaceObjectItem::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

