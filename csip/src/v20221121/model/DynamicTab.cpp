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

#include <tencentcloud/csip/v20221121/model/DynamicTab.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DynamicTab::DynamicTab() :
    m_tabKeyHasBeenSet(false),
    m_countHasBeenSet(false),
    m_assetTypeHasBeenSet(false)
{
}

CoreInternalOutcome DynamicTab::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TabKey") && !value["TabKey"].IsNull())
    {
        if (!value["TabKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicTab.TabKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tabKey = string(value["TabKey"].GetString());
        m_tabKeyHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicTab.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DynamicTab.AssetType` is not array type"));

        const rapidjson::Value &tmpValue = value["AssetType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetTypeCount item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_assetType.push_back(item);
        }
        m_assetTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DynamicTab::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tabKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TabKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tabKey.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_assetType.begin(); itr != m_assetType.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DynamicTab::GetTabKey() const
{
    return m_tabKey;
}

void DynamicTab::SetTabKey(const string& _tabKey)
{
    m_tabKey = _tabKey;
    m_tabKeyHasBeenSet = true;
}

bool DynamicTab::TabKeyHasBeenSet() const
{
    return m_tabKeyHasBeenSet;
}

uint64_t DynamicTab::GetCount() const
{
    return m_count;
}

void DynamicTab::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DynamicTab::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

vector<AssetTypeCount> DynamicTab::GetAssetType() const
{
    return m_assetType;
}

void DynamicTab::SetAssetType(const vector<AssetTypeCount>& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DynamicTab::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

