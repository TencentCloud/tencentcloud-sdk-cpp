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

#include <tencentcloud/csip/v20221121/model/BaselineSystemCategory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BaselineSystemCategory::BaselineSystemCategory() :
    m_subCategoryListHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_itemCountHasBeenSet(false)
{
}

CoreInternalOutcome BaselineSystemCategory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubCategoryList") && !value["SubCategoryList"].IsNull())
    {
        if (!value["SubCategoryList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineSystemCategory.SubCategoryList` is not array type"));

        const rapidjson::Value &tmpValue = value["SubCategoryList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BaselineSubCategory item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subCategoryList.push_back(item);
        }
        m_subCategoryListHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineSystemCategory.Category` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_category.Deserialize(value["Category"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("ItemCount") && !value["ItemCount"].IsNull())
    {
        if (!value["ItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineSystemCategory.ItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_itemCount = value["ItemCount"].GetUint64();
        m_itemCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineSystemCategory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subCategoryListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubCategoryList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subCategoryList.begin(); itr != m_subCategoryList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_category.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_itemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_itemCount, allocator);
    }

}


vector<BaselineSubCategory> BaselineSystemCategory::GetSubCategoryList() const
{
    return m_subCategoryList;
}

void BaselineSystemCategory::SetSubCategoryList(const vector<BaselineSubCategory>& _subCategoryList)
{
    m_subCategoryList = _subCategoryList;
    m_subCategoryListHasBeenSet = true;
}

bool BaselineSystemCategory::SubCategoryListHasBeenSet() const
{
    return m_subCategoryListHasBeenSet;
}

BaselineCategory BaselineSystemCategory::GetCategory() const
{
    return m_category;
}

void BaselineSystemCategory::SetCategory(const BaselineCategory& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool BaselineSystemCategory::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

uint64_t BaselineSystemCategory::GetItemCount() const
{
    return m_itemCount;
}

void BaselineSystemCategory::SetItemCount(const uint64_t& _itemCount)
{
    m_itemCount = _itemCount;
    m_itemCountHasBeenSet = true;
}

bool BaselineSystemCategory::ItemCountHasBeenSet() const
{
    return m_itemCountHasBeenSet;
}

