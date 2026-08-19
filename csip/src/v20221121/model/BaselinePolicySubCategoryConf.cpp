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

#include <tencentcloud/csip/v20221121/model/BaselinePolicySubCategoryConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BaselinePolicySubCategoryConf::BaselinePolicySubCategoryConf() :
    m_categoryIDHasBeenSet(false),
    m_allSelectHasBeenSet(false),
    m_itemIDListHasBeenSet(false)
{
}

CoreInternalOutcome BaselinePolicySubCategoryConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CategoryID") && !value["CategoryID"].IsNull())
    {
        if (!value["CategoryID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicySubCategoryConf.CategoryID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryID = value["CategoryID"].GetUint64();
        m_categoryIDHasBeenSet = true;
    }

    if (value.HasMember("AllSelect") && !value["AllSelect"].IsNull())
    {
        if (!value["AllSelect"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicySubCategoryConf.AllSelect` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allSelect = value["AllSelect"].GetBool();
        m_allSelectHasBeenSet = true;
    }

    if (value.HasMember("ItemIDList") && !value["ItemIDList"].IsNull())
    {
        if (!value["ItemIDList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselinePolicySubCategoryConf.ItemIDList` is not array type"));

        const rapidjson::Value &tmpValue = value["ItemIDList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_itemIDList.push_back((*itr).GetUint64());
        }
        m_itemIDListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselinePolicySubCategoryConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryID, allocator);
    }

    if (m_allSelectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllSelect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allSelect, allocator);
    }

    if (m_itemIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemIDList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_itemIDList.begin(); itr != m_itemIDList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

}


uint64_t BaselinePolicySubCategoryConf::GetCategoryID() const
{
    return m_categoryID;
}

void BaselinePolicySubCategoryConf::SetCategoryID(const uint64_t& _categoryID)
{
    m_categoryID = _categoryID;
    m_categoryIDHasBeenSet = true;
}

bool BaselinePolicySubCategoryConf::CategoryIDHasBeenSet() const
{
    return m_categoryIDHasBeenSet;
}

bool BaselinePolicySubCategoryConf::GetAllSelect() const
{
    return m_allSelect;
}

void BaselinePolicySubCategoryConf::SetAllSelect(const bool& _allSelect)
{
    m_allSelect = _allSelect;
    m_allSelectHasBeenSet = true;
}

bool BaselinePolicySubCategoryConf::AllSelectHasBeenSet() const
{
    return m_allSelectHasBeenSet;
}

vector<uint64_t> BaselinePolicySubCategoryConf::GetItemIDList() const
{
    return m_itemIDList;
}

void BaselinePolicySubCategoryConf::SetItemIDList(const vector<uint64_t>& _itemIDList)
{
    m_itemIDList = _itemIDList;
    m_itemIDListHasBeenSet = true;
}

bool BaselinePolicySubCategoryConf::ItemIDListHasBeenSet() const
{
    return m_itemIDListHasBeenSet;
}

