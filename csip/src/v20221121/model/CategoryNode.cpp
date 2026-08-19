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

#include <tencentcloud/csip/v20221121/model/CategoryNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CategoryNode::CategoryNode() :
    m_categoryHasBeenSet(false),
    m_displayOrderHasBeenSet(false),
    m_assetTypesHasBeenSet(false)
{
}

CoreInternalOutcome CategoryNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryNode.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("DisplayOrder") && !value["DisplayOrder"].IsNull())
    {
        if (!value["DisplayOrder"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryNode.DisplayOrder` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_displayOrder = value["DisplayOrder"].GetUint64();
        m_displayOrderHasBeenSet = true;
    }

    if (value.HasMember("AssetTypes") && !value["AssetTypes"].IsNull())
    {
        if (!value["AssetTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CategoryNode.AssetTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["AssetTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetTypeNode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_assetTypes.push_back(item);
        }
        m_assetTypesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CategoryNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_displayOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_displayOrder, allocator);
    }

    if (m_assetTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_assetTypes.begin(); itr != m_assetTypes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CategoryNode::GetCategory() const
{
    return m_category;
}

void CategoryNode::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool CategoryNode::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

uint64_t CategoryNode::GetDisplayOrder() const
{
    return m_displayOrder;
}

void CategoryNode::SetDisplayOrder(const uint64_t& _displayOrder)
{
    m_displayOrder = _displayOrder;
    m_displayOrderHasBeenSet = true;
}

bool CategoryNode::DisplayOrderHasBeenSet() const
{
    return m_displayOrderHasBeenSet;
}

vector<AssetTypeNode> CategoryNode::GetAssetTypes() const
{
    return m_assetTypes;
}

void CategoryNode::SetAssetTypes(const vector<AssetTypeNode>& _assetTypes)
{
    m_assetTypes = _assetTypes;
    m_assetTypesHasBeenSet = true;
}

bool CategoryNode::AssetTypesHasBeenSet() const
{
    return m_assetTypesHasBeenSet;
}

