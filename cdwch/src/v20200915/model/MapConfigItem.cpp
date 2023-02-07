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

#include <tencentcloud/cdwch/v20200915/model/MapConfigItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

MapConfigItem::MapConfigItem() :
    m_confKeyHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

CoreInternalOutcome MapConfigItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfKey") && !value["ConfKey"].IsNull())
    {
        if (!value["ConfKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MapConfigItem.ConfKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_confKey = string(value["ConfKey"].GetString());
        m_confKeyHasBeenSet = true;
    }

    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MapConfigItem.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceConfigInfo item;
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

void MapConfigItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_confKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_confKey.c_str(), allocator).Move(), allocator);
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


string MapConfigItem::GetConfKey() const
{
    return m_confKey;
}

void MapConfigItem::SetConfKey(const string& _confKey)
{
    m_confKey = _confKey;
    m_confKeyHasBeenSet = true;
}

bool MapConfigItem::ConfKeyHasBeenSet() const
{
    return m_confKeyHasBeenSet;
}

vector<InstanceConfigInfo> MapConfigItem::GetItems() const
{
    return m_items;
}

void MapConfigItem::SetItems(const vector<InstanceConfigInfo>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool MapConfigItem::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

