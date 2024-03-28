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

#include <tencentcloud/cwp/v20180228/model/BaselineCategory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BaselineCategory::BaselineCategory() :
    m_categoryIdHasBeenSet(false),
    m_categoryNameHasBeenSet(false),
    m_parentCategoryIdHasBeenSet(false),
    m_itemCountHasBeenSet(false)
{
}

CoreInternalOutcome BaselineCategory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineCategory.CategoryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = value["CategoryId"].GetInt64();
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("CategoryName") && !value["CategoryName"].IsNull())
    {
        if (!value["CategoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineCategory.CategoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryName = string(value["CategoryName"].GetString());
        m_categoryNameHasBeenSet = true;
    }

    if (value.HasMember("ParentCategoryId") && !value["ParentCategoryId"].IsNull())
    {
        if (!value["ParentCategoryId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineCategory.ParentCategoryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_parentCategoryId = value["ParentCategoryId"].GetInt64();
        m_parentCategoryIdHasBeenSet = true;
    }

    if (value.HasMember("ItemCount") && !value["ItemCount"].IsNull())
    {
        if (!value["ItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineCategory.ItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_itemCount = value["ItemCount"].GetUint64();
        m_itemCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineCategory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_categoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_parentCategoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentCategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parentCategoryId, allocator);
    }

    if (m_itemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_itemCount, allocator);
    }

}


int64_t BaselineCategory::GetCategoryId() const
{
    return m_categoryId;
}

void BaselineCategory::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool BaselineCategory::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string BaselineCategory::GetCategoryName() const
{
    return m_categoryName;
}

void BaselineCategory::SetCategoryName(const string& _categoryName)
{
    m_categoryName = _categoryName;
    m_categoryNameHasBeenSet = true;
}

bool BaselineCategory::CategoryNameHasBeenSet() const
{
    return m_categoryNameHasBeenSet;
}

int64_t BaselineCategory::GetParentCategoryId() const
{
    return m_parentCategoryId;
}

void BaselineCategory::SetParentCategoryId(const int64_t& _parentCategoryId)
{
    m_parentCategoryId = _parentCategoryId;
    m_parentCategoryIdHasBeenSet = true;
}

bool BaselineCategory::ParentCategoryIdHasBeenSet() const
{
    return m_parentCategoryIdHasBeenSet;
}

uint64_t BaselineCategory::GetItemCount() const
{
    return m_itemCount;
}

void BaselineCategory::SetItemCount(const uint64_t& _itemCount)
{
    m_itemCount = _itemCount;
    m_itemCountHasBeenSet = true;
}

bool BaselineCategory::ItemCountHasBeenSet() const
{
    return m_itemCountHasBeenSet;
}

