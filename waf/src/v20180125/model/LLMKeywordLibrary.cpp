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

#include <tencentcloud/waf/v20180125/model/LLMKeywordLibrary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

LLMKeywordLibrary::LLMKeywordLibrary() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_referencedRulesHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_categoryHasBeenSet(false)
{
}

CoreInternalOutcome LLMKeywordLibrary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMKeywordLibrary.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMKeywordLibrary.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMKeywordLibrary.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LLMKeywordLibrary.Keywords` is not array type"));

        const rapidjson::Value &tmpValue = value["Keywords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywords.push_back((*itr).GetString());
        }
        m_keywordsHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMKeywordLibrary.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("ReferencedRules") && !value["ReferencedRules"].IsNull())
    {
        if (!value["ReferencedRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LLMKeywordLibrary.ReferencedRules` is not array type"));

        const rapidjson::Value &tmpValue = value["ReferencedRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_referencedRules.push_back((*itr).GetString());
        }
        m_referencedRulesHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMKeywordLibrary.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMKeywordLibrary.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LLMKeywordLibrary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keywords.begin(); itr != m_keywords.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_referencedRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferencedRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_referencedRules.begin(); itr != m_referencedRules.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

}


string LLMKeywordLibrary::GetName() const
{
    return m_name;
}

void LLMKeywordLibrary::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LLMKeywordLibrary::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string LLMKeywordLibrary::GetDescription() const
{
    return m_description;
}

void LLMKeywordLibrary::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool LLMKeywordLibrary::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string LLMKeywordLibrary::GetType() const
{
    return m_type;
}

void LLMKeywordLibrary::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool LLMKeywordLibrary::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> LLMKeywordLibrary::GetKeywords() const
{
    return m_keywords;
}

void LLMKeywordLibrary::SetKeywords(const vector<string>& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool LLMKeywordLibrary::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

string LLMKeywordLibrary::GetRuleId() const
{
    return m_ruleId;
}

void LLMKeywordLibrary::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool LLMKeywordLibrary::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

vector<string> LLMKeywordLibrary::GetReferencedRules() const
{
    return m_referencedRules;
}

void LLMKeywordLibrary::SetReferencedRules(const vector<string>& _referencedRules)
{
    m_referencedRules = _referencedRules;
    m_referencedRulesHasBeenSet = true;
}

bool LLMKeywordLibrary::ReferencedRulesHasBeenSet() const
{
    return m_referencedRulesHasBeenSet;
}

uint64_t LLMKeywordLibrary::GetUpdateTime() const
{
    return m_updateTime;
}

void LLMKeywordLibrary::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool LLMKeywordLibrary::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string LLMKeywordLibrary::GetCategory() const
{
    return m_category;
}

void LLMKeywordLibrary::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool LLMKeywordLibrary::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

