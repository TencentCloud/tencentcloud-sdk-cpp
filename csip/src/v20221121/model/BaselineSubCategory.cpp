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

#include <tencentcloud/csip/v20221121/model/BaselineSubCategory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BaselineSubCategory::BaselineSubCategory() :
    m_categoryHasBeenSet(false)
{
}

CoreInternalOutcome BaselineSubCategory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineSubCategory.Category` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_category.Deserialize(value["Category"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_categoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineSubCategory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_category.ToJsonObject(value[key.c_str()], allocator);
    }

}


BaselineCategory BaselineSubCategory::GetCategory() const
{
    return m_category;
}

void BaselineSubCategory::SetCategory(const BaselineCategory& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool BaselineSubCategory::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

