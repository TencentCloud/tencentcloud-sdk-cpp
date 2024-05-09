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

#include <tencentcloud/cwp/v20180228/model/Item.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

Item::Item() :
    m_itemIdHasBeenSet(false),
    m_itemNameHasBeenSet(false),
    m_customItemValuesHasBeenSet(false),
    m_categoryIdHasBeenSet(false)
{
}

CoreInternalOutcome Item::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemId") && !value["ItemId"].IsNull())
    {
        if (!value["ItemId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Item.ItemId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_itemId = value["ItemId"].GetInt64();
        m_itemIdHasBeenSet = true;
    }

    if (value.HasMember("ItemName") && !value["ItemName"].IsNull())
    {
        if (!value["ItemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Item.ItemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemName = string(value["ItemName"].GetString());
        m_itemNameHasBeenSet = true;
    }

    if (value.HasMember("CustomItemValues") && !value["CustomItemValues"].IsNull())
    {
        if (!value["CustomItemValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Item.CustomItemValues` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomItemValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_customItemValues.push_back((*itr).GetUint64());
        }
        m_customItemValuesHasBeenSet = true;
    }

    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Item.CategoryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = value["CategoryId"].GetInt64();
        m_categoryIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Item::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_itemId, allocator);
    }

    if (m_itemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemName.c_str(), allocator).Move(), allocator);
    }

    if (m_customItemValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomItemValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customItemValues.begin(); itr != m_customItemValues.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryId, allocator);
    }

}


int64_t Item::GetItemId() const
{
    return m_itemId;
}

void Item::SetItemId(const int64_t& _itemId)
{
    m_itemId = _itemId;
    m_itemIdHasBeenSet = true;
}

bool Item::ItemIdHasBeenSet() const
{
    return m_itemIdHasBeenSet;
}

string Item::GetItemName() const
{
    return m_itemName;
}

void Item::SetItemName(const string& _itemName)
{
    m_itemName = _itemName;
    m_itemNameHasBeenSet = true;
}

bool Item::ItemNameHasBeenSet() const
{
    return m_itemNameHasBeenSet;
}

vector<uint64_t> Item::GetCustomItemValues() const
{
    return m_customItemValues;
}

void Item::SetCustomItemValues(const vector<uint64_t>& _customItemValues)
{
    m_customItemValues = _customItemValues;
    m_customItemValuesHasBeenSet = true;
}

bool Item::CustomItemValuesHasBeenSet() const
{
    return m_customItemValuesHasBeenSet;
}

int64_t Item::GetCategoryId() const
{
    return m_categoryId;
}

void Item::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool Item::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

