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

#include <tencentcloud/trocket/v20230308/model/StatisticsReport.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

StatisticsReport::StatisticsReport() :
    m_bytesHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

CoreInternalOutcome StatisticsReport::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bytes") && !value["Bytes"].IsNull())
    {
        if (!value["Bytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticsReport.Bytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bytes = value["Bytes"].GetInt64();
        m_bytesHasBeenSet = true;
    }

    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StatisticsReport.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PacketStatistics item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_items.push_back(item);
        }
        m_itemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StatisticsReport::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bytes, allocator);
    }

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t StatisticsReport::GetBytes() const
{
    return m_bytes;
}

void StatisticsReport::SetBytes(const int64_t& _bytes)
{
    m_bytes = _bytes;
    m_bytesHasBeenSet = true;
}

bool StatisticsReport::BytesHasBeenSet() const
{
    return m_bytesHasBeenSet;
}

vector<PacketStatistics> StatisticsReport::GetItems() const
{
    return m_items;
}

void StatisticsReport::SetItems(const vector<PacketStatistics>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool StatisticsReport::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

