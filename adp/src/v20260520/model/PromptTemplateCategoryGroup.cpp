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

#include <tencentcloud/adp/v20260520/model/PromptTemplateCategoryGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

PromptTemplateCategoryGroup::PromptTemplateCategoryGroup() :
    m_categoryListHasBeenSet(false),
    m_moduleHasBeenSet(false)
{
}

CoreInternalOutcome PromptTemplateCategoryGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CategoryList") && !value["CategoryList"].IsNull())
    {
        if (!value["CategoryList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PromptTemplateCategoryGroup.CategoryList` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PromptTemplateCategory item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_categoryList.push_back(item);
        }
        m_categoryListHasBeenSet = true;
    }

    if (value.HasMember("Module") && !value["Module"].IsNull())
    {
        if (!value["Module"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PromptTemplateCategoryGroup.Module` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_module = string(value["Module"].GetString());
        m_moduleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PromptTemplateCategoryGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_categoryList.begin(); itr != m_categoryList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

}


vector<PromptTemplateCategory> PromptTemplateCategoryGroup::GetCategoryList() const
{
    return m_categoryList;
}

void PromptTemplateCategoryGroup::SetCategoryList(const vector<PromptTemplateCategory>& _categoryList)
{
    m_categoryList = _categoryList;
    m_categoryListHasBeenSet = true;
}

bool PromptTemplateCategoryGroup::CategoryListHasBeenSet() const
{
    return m_categoryListHasBeenSet;
}

string PromptTemplateCategoryGroup::GetModule() const
{
    return m_module;
}

void PromptTemplateCategoryGroup::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool PromptTemplateCategoryGroup::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

