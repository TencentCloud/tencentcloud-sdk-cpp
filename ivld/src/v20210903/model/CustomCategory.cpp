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

#include <tencentcloud/ivld/v20210903/model/CustomCategory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

CustomCategory::CustomCategory() :
    m_categoryIdHasBeenSet(false),
    m_l1CategoryHasBeenSet(false),
    m_l2CategoryHasBeenSet(false)
{
}

CoreInternalOutcome CustomCategory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomCategory.CategoryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = string(value["CategoryId"].GetString());
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("L1Category") && !value["L1Category"].IsNull())
    {
        if (!value["L1Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomCategory.L1Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_l1Category = string(value["L1Category"].GetString());
        m_l1CategoryHasBeenSet = true;
    }

    if (value.HasMember("L2Category") && !value["L2Category"].IsNull())
    {
        if (!value["L2Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomCategory.L2Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_l2Category = string(value["L2Category"].GetString());
        m_l2CategoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomCategory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryId.c_str(), allocator).Move(), allocator);
    }

    if (m_l1CategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L1Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_l1Category.c_str(), allocator).Move(), allocator);
    }

    if (m_l2CategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L2Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_l2Category.c_str(), allocator).Move(), allocator);
    }

}


string CustomCategory::GetCategoryId() const
{
    return m_categoryId;
}

void CustomCategory::SetCategoryId(const string& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool CustomCategory::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string CustomCategory::GetL1Category() const
{
    return m_l1Category;
}

void CustomCategory::SetL1Category(const string& _l1Category)
{
    m_l1Category = _l1Category;
    m_l1CategoryHasBeenSet = true;
}

bool CustomCategory::L1CategoryHasBeenSet() const
{
    return m_l1CategoryHasBeenSet;
}

string CustomCategory::GetL2Category() const
{
    return m_l2Category;
}

void CustomCategory::SetL2Category(const string& _l2Category)
{
    m_l2Category = _l2Category;
    m_l2CategoryHasBeenSet = true;
}

bool CustomCategory::L2CategoryHasBeenSet() const
{
    return m_l2CategoryHasBeenSet;
}

