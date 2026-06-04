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

#include <tencentcloud/adp/v20260520/model/SkillCategory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SkillCategory::SkillCategory() :
    m_categoryKeyHasBeenSet(false),
    m_categoryNameHasBeenSet(false)
{
}

CoreInternalOutcome SkillCategory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CategoryKey") && !value["CategoryKey"].IsNull())
    {
        if (!value["CategoryKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillCategory.CategoryKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryKey = string(value["CategoryKey"].GetString());
        m_categoryKeyHasBeenSet = true;
    }

    if (value.HasMember("CategoryName") && !value["CategoryName"].IsNull())
    {
        if (!value["CategoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillCategory.CategoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryName = string(value["CategoryName"].GetString());
        m_categoryNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkillCategory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryKey.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryName.c_str(), allocator).Move(), allocator);
    }

}


string SkillCategory::GetCategoryKey() const
{
    return m_categoryKey;
}

void SkillCategory::SetCategoryKey(const string& _categoryKey)
{
    m_categoryKey = _categoryKey;
    m_categoryKeyHasBeenSet = true;
}

bool SkillCategory::CategoryKeyHasBeenSet() const
{
    return m_categoryKeyHasBeenSet;
}

string SkillCategory::GetCategoryName() const
{
    return m_categoryName;
}

void SkillCategory::SetCategoryName(const string& _categoryName)
{
    m_categoryName = _categoryName;
    m_categoryNameHasBeenSet = true;
}

bool SkillCategory::CategoryNameHasBeenSet() const
{
    return m_categoryNameHasBeenSet;
}

