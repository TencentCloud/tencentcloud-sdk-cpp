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

#include <tencentcloud/csip/v20221121/model/DimensionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DimensionItem::DimensionItem() :
    m_dimensionIdHasBeenSet(false),
    m_dimensionNameHasBeenSet(false),
    m_maxDeductScoreHasBeenSet(false),
    m_deductScoreHasBeenSet(false),
    m_categoriesHasBeenSet(false)
{
}

CoreInternalOutcome DimensionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DimensionId") && !value["DimensionId"].IsNull())
    {
        if (!value["DimensionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionItem.DimensionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimensionId = string(value["DimensionId"].GetString());
        m_dimensionIdHasBeenSet = true;
    }

    if (value.HasMember("DimensionName") && !value["DimensionName"].IsNull())
    {
        if (!value["DimensionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionItem.DimensionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimensionName = string(value["DimensionName"].GetString());
        m_dimensionNameHasBeenSet = true;
    }

    if (value.HasMember("MaxDeductScore") && !value["MaxDeductScore"].IsNull())
    {
        if (!value["MaxDeductScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionItem.MaxDeductScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDeductScore = value["MaxDeductScore"].GetInt64();
        m_maxDeductScoreHasBeenSet = true;
    }

    if (value.HasMember("DeductScore") && !value["DeductScore"].IsNull())
    {
        if (!value["DeductScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionItem.DeductScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deductScore = value["DeductScore"].GetInt64();
        m_deductScoreHasBeenSet = true;
    }

    if (value.HasMember("Categories") && !value["Categories"].IsNull())
    {
        if (!value["Categories"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DimensionItem.Categories` is not array type"));

        const rapidjson::Value &tmpValue = value["Categories"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CategoryItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_categories.push_back(item);
        }
        m_categoriesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DimensionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dimensionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimensionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimensionId.c_str(), allocator).Move(), allocator);
    }

    if (m_dimensionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimensionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimensionName.c_str(), allocator).Move(), allocator);
    }

    if (m_maxDeductScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDeductScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDeductScore, allocator);
    }

    if (m_deductScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deductScore, allocator);
    }

    if (m_categoriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Categories";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_categories.begin(); itr != m_categories.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DimensionItem::GetDimensionId() const
{
    return m_dimensionId;
}

void DimensionItem::SetDimensionId(const string& _dimensionId)
{
    m_dimensionId = _dimensionId;
    m_dimensionIdHasBeenSet = true;
}

bool DimensionItem::DimensionIdHasBeenSet() const
{
    return m_dimensionIdHasBeenSet;
}

string DimensionItem::GetDimensionName() const
{
    return m_dimensionName;
}

void DimensionItem::SetDimensionName(const string& _dimensionName)
{
    m_dimensionName = _dimensionName;
    m_dimensionNameHasBeenSet = true;
}

bool DimensionItem::DimensionNameHasBeenSet() const
{
    return m_dimensionNameHasBeenSet;
}

int64_t DimensionItem::GetMaxDeductScore() const
{
    return m_maxDeductScore;
}

void DimensionItem::SetMaxDeductScore(const int64_t& _maxDeductScore)
{
    m_maxDeductScore = _maxDeductScore;
    m_maxDeductScoreHasBeenSet = true;
}

bool DimensionItem::MaxDeductScoreHasBeenSet() const
{
    return m_maxDeductScoreHasBeenSet;
}

int64_t DimensionItem::GetDeductScore() const
{
    return m_deductScore;
}

void DimensionItem::SetDeductScore(const int64_t& _deductScore)
{
    m_deductScore = _deductScore;
    m_deductScoreHasBeenSet = true;
}

bool DimensionItem::DeductScoreHasBeenSet() const
{
    return m_deductScoreHasBeenSet;
}

vector<CategoryItem> DimensionItem::GetCategories() const
{
    return m_categories;
}

void DimensionItem::SetCategories(const vector<CategoryItem>& _categories)
{
    m_categories = _categories;
    m_categoriesHasBeenSet = true;
}

bool DimensionItem::CategoriesHasBeenSet() const
{
    return m_categoriesHasBeenSet;
}

