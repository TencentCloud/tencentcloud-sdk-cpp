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

#include <tencentcloud/cwp/v20180228/model/BaselineItemsCategory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BaselineItemsCategory::BaselineItemsCategory() :
    m_parentCategoryIdHasBeenSet(false),
    m_parentCategoryNameHasBeenSet(false),
    m_categoryCountHasBeenSet(false),
    m_categoryListsHasBeenSet(false)
{
}

CoreInternalOutcome BaselineItemsCategory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParentCategoryId") && !value["ParentCategoryId"].IsNull())
    {
        if (!value["ParentCategoryId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemsCategory.ParentCategoryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_parentCategoryId = value["ParentCategoryId"].GetInt64();
        m_parentCategoryIdHasBeenSet = true;
    }

    if (value.HasMember("ParentCategoryName") && !value["ParentCategoryName"].IsNull())
    {
        if (!value["ParentCategoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemsCategory.ParentCategoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentCategoryName = string(value["ParentCategoryName"].GetString());
        m_parentCategoryNameHasBeenSet = true;
    }

    if (value.HasMember("CategoryCount") && !value["CategoryCount"].IsNull())
    {
        if (!value["CategoryCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemsCategory.CategoryCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryCount = value["CategoryCount"].GetInt64();
        m_categoryCountHasBeenSet = true;
    }

    if (value.HasMember("CategoryLists") && !value["CategoryLists"].IsNull())
    {
        if (!value["CategoryLists"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineItemsCategory.CategoryLists` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryLists"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BaselineCategory item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_categoryLists.push_back(item);
        }
        m_categoryListsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineItemsCategory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_parentCategoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentCategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parentCategoryId, allocator);
    }

    if (m_parentCategoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentCategoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentCategoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryCount, allocator);
    }

    if (m_categoryListsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryLists";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_categoryLists.begin(); itr != m_categoryLists.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t BaselineItemsCategory::GetParentCategoryId() const
{
    return m_parentCategoryId;
}

void BaselineItemsCategory::SetParentCategoryId(const int64_t& _parentCategoryId)
{
    m_parentCategoryId = _parentCategoryId;
    m_parentCategoryIdHasBeenSet = true;
}

bool BaselineItemsCategory::ParentCategoryIdHasBeenSet() const
{
    return m_parentCategoryIdHasBeenSet;
}

string BaselineItemsCategory::GetParentCategoryName() const
{
    return m_parentCategoryName;
}

void BaselineItemsCategory::SetParentCategoryName(const string& _parentCategoryName)
{
    m_parentCategoryName = _parentCategoryName;
    m_parentCategoryNameHasBeenSet = true;
}

bool BaselineItemsCategory::ParentCategoryNameHasBeenSet() const
{
    return m_parentCategoryNameHasBeenSet;
}

int64_t BaselineItemsCategory::GetCategoryCount() const
{
    return m_categoryCount;
}

void BaselineItemsCategory::SetCategoryCount(const int64_t& _categoryCount)
{
    m_categoryCount = _categoryCount;
    m_categoryCountHasBeenSet = true;
}

bool BaselineItemsCategory::CategoryCountHasBeenSet() const
{
    return m_categoryCountHasBeenSet;
}

vector<BaselineCategory> BaselineItemsCategory::GetCategoryLists() const
{
    return m_categoryLists;
}

void BaselineItemsCategory::SetCategoryLists(const vector<BaselineCategory>& _categoryLists)
{
    m_categoryLists = _categoryLists;
    m_categoryListsHasBeenSet = true;
}

bool BaselineItemsCategory::CategoryListsHasBeenSet() const
{
    return m_categoryListsHasBeenSet;
}

