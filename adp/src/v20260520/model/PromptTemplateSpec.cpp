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

#include <tencentcloud/adp/v20260520/model/PromptTemplateSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

PromptTemplateSpec::PromptTemplateSpec() :
    m_categoryKeyHasBeenSet(false),
    m_customVariableListHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_labelIdListHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_promptContentHasBeenSet(false)
{
}

CoreInternalOutcome PromptTemplateSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CategoryKey") && !value["CategoryKey"].IsNull())
    {
        if (!value["CategoryKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PromptTemplateSpec.CategoryKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryKey = string(value["CategoryKey"].GetString());
        m_categoryKeyHasBeenSet = true;
    }

    if (value.HasMember("CustomVariableList") && !value["CustomVariableList"].IsNull())
    {
        if (!value["CustomVariableList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PromptTemplateSpec.CustomVariableList` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomVariableList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_customVariableList.push_back((*itr).GetString());
        }
        m_customVariableListHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PromptTemplateSpec.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("LabelIdList") && !value["LabelIdList"].IsNull())
    {
        if (!value["LabelIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PromptTemplateSpec.LabelIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labelIdList.push_back((*itr).GetString());
        }
        m_labelIdListHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PromptTemplateSpec.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("PromptContent") && !value["PromptContent"].IsNull())
    {
        if (!value["PromptContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PromptTemplateSpec.PromptContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promptContent = string(value["PromptContent"].GetString());
        m_promptContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PromptTemplateSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryKey.c_str(), allocator).Move(), allocator);
    }

    if (m_customVariableListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomVariableList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customVariableList.begin(); itr != m_customVariableList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_labelIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelIdList.begin(); itr != m_labelIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_promptContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promptContent.c_str(), allocator).Move(), allocator);
    }

}


string PromptTemplateSpec::GetCategoryKey() const
{
    return m_categoryKey;
}

void PromptTemplateSpec::SetCategoryKey(const string& _categoryKey)
{
    m_categoryKey = _categoryKey;
    m_categoryKeyHasBeenSet = true;
}

bool PromptTemplateSpec::CategoryKeyHasBeenSet() const
{
    return m_categoryKeyHasBeenSet;
}

vector<string> PromptTemplateSpec::GetCustomVariableList() const
{
    return m_customVariableList;
}

void PromptTemplateSpec::SetCustomVariableList(const vector<string>& _customVariableList)
{
    m_customVariableList = _customVariableList;
    m_customVariableListHasBeenSet = true;
}

bool PromptTemplateSpec::CustomVariableListHasBeenSet() const
{
    return m_customVariableListHasBeenSet;
}

string PromptTemplateSpec::GetDescription() const
{
    return m_description;
}

void PromptTemplateSpec::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool PromptTemplateSpec::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> PromptTemplateSpec::GetLabelIdList() const
{
    return m_labelIdList;
}

void PromptTemplateSpec::SetLabelIdList(const vector<string>& _labelIdList)
{
    m_labelIdList = _labelIdList;
    m_labelIdListHasBeenSet = true;
}

bool PromptTemplateSpec::LabelIdListHasBeenSet() const
{
    return m_labelIdListHasBeenSet;
}

string PromptTemplateSpec::GetName() const
{
    return m_name;
}

void PromptTemplateSpec::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PromptTemplateSpec::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PromptTemplateSpec::GetPromptContent() const
{
    return m_promptContent;
}

void PromptTemplateSpec::SetPromptContent(const string& _promptContent)
{
    m_promptContent = _promptContent;
    m_promptContentHasBeenSet = true;
}

bool PromptTemplateSpec::PromptContentHasBeenSet() const
{
    return m_promptContentHasBeenSet;
}

