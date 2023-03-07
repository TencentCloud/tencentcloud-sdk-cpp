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

#include <tencentcloud/cwp/v20180228/model/BaselineRiskItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BaselineRiskItem::BaselineRiskItem() :
    m_itemIdHasBeenSet(false),
    m_itemNameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_hostCountHasBeenSet(false)
{
}

CoreInternalOutcome BaselineRiskItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemId") && !value["ItemId"].IsNull())
    {
        if (!value["ItemId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRiskItem.ItemId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_itemId = value["ItemId"].GetInt64();
        m_itemIdHasBeenSet = true;
    }

    if (value.HasMember("ItemName") && !value["ItemName"].IsNull())
    {
        if (!value["ItemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRiskItem.ItemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemName = string(value["ItemName"].GetString());
        m_itemNameHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRiskItem.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("HostCount") && !value["HostCount"].IsNull())
    {
        if (!value["HostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRiskItem.HostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCount = value["HostCount"].GetInt64();
        m_hostCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineRiskItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_hostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCount, allocator);
    }

}


int64_t BaselineRiskItem::GetItemId() const
{
    return m_itemId;
}

void BaselineRiskItem::SetItemId(const int64_t& _itemId)
{
    m_itemId = _itemId;
    m_itemIdHasBeenSet = true;
}

bool BaselineRiskItem::ItemIdHasBeenSet() const
{
    return m_itemIdHasBeenSet;
}

string BaselineRiskItem::GetItemName() const
{
    return m_itemName;
}

void BaselineRiskItem::SetItemName(const string& _itemName)
{
    m_itemName = _itemName;
    m_itemNameHasBeenSet = true;
}

bool BaselineRiskItem::ItemNameHasBeenSet() const
{
    return m_itemNameHasBeenSet;
}

int64_t BaselineRiskItem::GetLevel() const
{
    return m_level;
}

void BaselineRiskItem::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool BaselineRiskItem::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t BaselineRiskItem::GetHostCount() const
{
    return m_hostCount;
}

void BaselineRiskItem::SetHostCount(const int64_t& _hostCount)
{
    m_hostCount = _hostCount;
    m_hostCountHasBeenSet = true;
}

bool BaselineRiskItem::HostCountHasBeenSet() const
{
    return m_hostCountHasBeenSet;
}

