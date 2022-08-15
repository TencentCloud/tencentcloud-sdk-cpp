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

#include <tencentcloud/irp/v20220805/model/RecItemData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Irp::V20220805::Model;
using namespace std;

RecItemData::RecItemData() :
    m_itemIdHasBeenSet(false),
    m_itemTypeHasBeenSet(false),
    m_itemTraceIdHasBeenSet(false),
    m_scoreHasBeenSet(false)
{
}

CoreInternalOutcome RecItemData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemId") && !value["ItemId"].IsNull())
    {
        if (!value["ItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecItemData.ItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemId = string(value["ItemId"].GetString());
        m_itemIdHasBeenSet = true;
    }

    if (value.HasMember("ItemType") && !value["ItemType"].IsNull())
    {
        if (!value["ItemType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecItemData.ItemType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemType = string(value["ItemType"].GetString());
        m_itemTypeHasBeenSet = true;
    }

    if (value.HasMember("ItemTraceId") && !value["ItemTraceId"].IsNull())
    {
        if (!value["ItemTraceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecItemData.ItemTraceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemTraceId = string(value["ItemTraceId"].GetString());
        m_itemTraceIdHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RecItemData.Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecItemData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemId.c_str(), allocator).Move(), allocator);
    }

    if (m_itemTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemType.c_str(), allocator).Move(), allocator);
    }

    if (m_itemTraceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemTraceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemTraceId.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

}


string RecItemData::GetItemId() const
{
    return m_itemId;
}

void RecItemData::SetItemId(const string& _itemId)
{
    m_itemId = _itemId;
    m_itemIdHasBeenSet = true;
}

bool RecItemData::ItemIdHasBeenSet() const
{
    return m_itemIdHasBeenSet;
}

string RecItemData::GetItemType() const
{
    return m_itemType;
}

void RecItemData::SetItemType(const string& _itemType)
{
    m_itemType = _itemType;
    m_itemTypeHasBeenSet = true;
}

bool RecItemData::ItemTypeHasBeenSet() const
{
    return m_itemTypeHasBeenSet;
}

string RecItemData::GetItemTraceId() const
{
    return m_itemTraceId;
}

void RecItemData::SetItemTraceId(const string& _itemTraceId)
{
    m_itemTraceId = _itemTraceId;
    m_itemTraceIdHasBeenSet = true;
}

bool RecItemData::ItemTraceIdHasBeenSet() const
{
    return m_itemTraceIdHasBeenSet;
}

double RecItemData::GetScore() const
{
    return m_score;
}

void RecItemData::SetScore(const double& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool RecItemData::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

