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

#include <tencentcloud/dsgc/v20190723/model/CategoryRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

CategoryRule::CategoryRule() :
    m_categoryIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_levelIdHasBeenSet(false),
    m_levelNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_aliasRuleIdHasBeenSet(false),
    m_aliasRuleNameHasBeenSet(false),
    m_ruleEffectItemsHasBeenSet(false),
    m_ruleStatusHasBeenSet(false)
{
}

CoreInternalOutcome CategoryRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryRule.CategoryId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = value["CategoryId"].GetUint64();
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryRule.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("LevelId") && !value["LevelId"].IsNull())
    {
        if (!value["LevelId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryRule.LevelId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_levelId = value["LevelId"].GetUint64();
        m_levelIdHasBeenSet = true;
    }

    if (value.HasMember("LevelName") && !value["LevelName"].IsNull())
    {
        if (!value["LevelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryRule.LevelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelName = string(value["LevelName"].GetString());
        m_levelNameHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryRule.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AliasRuleId") && !value["AliasRuleId"].IsNull())
    {
        if (!value["AliasRuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryRule.AliasRuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aliasRuleId = value["AliasRuleId"].GetInt64();
        m_aliasRuleIdHasBeenSet = true;
    }

    if (value.HasMember("AliasRuleName") && !value["AliasRuleName"].IsNull())
    {
        if (!value["AliasRuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryRule.AliasRuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasRuleName = string(value["AliasRuleName"].GetString());
        m_aliasRuleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleEffectItems") && !value["RuleEffectItems"].IsNull())
    {
        if (!value["RuleEffectItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CategoryRule.RuleEffectItems` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleEffectItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleEffectItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleEffectItems.push_back(item);
        }
        m_ruleEffectItemsHasBeenSet = true;
    }

    if (value.HasMember("RuleStatus") && !value["RuleStatus"].IsNull())
    {
        if (!value["RuleStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryRule.RuleStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleStatus = value["RuleStatus"].GetInt64();
        m_ruleStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CategoryRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelId, allocator);
    }

    if (m_levelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelName.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_aliasRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aliasRuleId, allocator);
    }

    if (m_aliasRuleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasRuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasRuleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleEffectItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleEffectItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleEffectItems.begin(); itr != m_ruleEffectItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ruleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleStatus, allocator);
    }

}


uint64_t CategoryRule::GetCategoryId() const
{
    return m_categoryId;
}

void CategoryRule::SetCategoryId(const uint64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool CategoryRule::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

uint64_t CategoryRule::GetRuleId() const
{
    return m_ruleId;
}

void CategoryRule::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool CategoryRule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string CategoryRule::GetRuleName() const
{
    return m_ruleName;
}

void CategoryRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool CategoryRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

uint64_t CategoryRule::GetLevelId() const
{
    return m_levelId;
}

void CategoryRule::SetLevelId(const uint64_t& _levelId)
{
    m_levelId = _levelId;
    m_levelIdHasBeenSet = true;
}

bool CategoryRule::LevelIdHasBeenSet() const
{
    return m_levelIdHasBeenSet;
}

string CategoryRule::GetLevelName() const
{
    return m_levelName;
}

void CategoryRule::SetLevelName(const string& _levelName)
{
    m_levelName = _levelName;
    m_levelNameHasBeenSet = true;
}

bool CategoryRule::LevelNameHasBeenSet() const
{
    return m_levelNameHasBeenSet;
}

uint64_t CategoryRule::GetId() const
{
    return m_id;
}

void CategoryRule::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CategoryRule::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t CategoryRule::GetAliasRuleId() const
{
    return m_aliasRuleId;
}

void CategoryRule::SetAliasRuleId(const int64_t& _aliasRuleId)
{
    m_aliasRuleId = _aliasRuleId;
    m_aliasRuleIdHasBeenSet = true;
}

bool CategoryRule::AliasRuleIdHasBeenSet() const
{
    return m_aliasRuleIdHasBeenSet;
}

string CategoryRule::GetAliasRuleName() const
{
    return m_aliasRuleName;
}

void CategoryRule::SetAliasRuleName(const string& _aliasRuleName)
{
    m_aliasRuleName = _aliasRuleName;
    m_aliasRuleNameHasBeenSet = true;
}

bool CategoryRule::AliasRuleNameHasBeenSet() const
{
    return m_aliasRuleNameHasBeenSet;
}

vector<RuleEffectItem> CategoryRule::GetRuleEffectItems() const
{
    return m_ruleEffectItems;
}

void CategoryRule::SetRuleEffectItems(const vector<RuleEffectItem>& _ruleEffectItems)
{
    m_ruleEffectItems = _ruleEffectItems;
    m_ruleEffectItemsHasBeenSet = true;
}

bool CategoryRule::RuleEffectItemsHasBeenSet() const
{
    return m_ruleEffectItemsHasBeenSet;
}

int64_t CategoryRule::GetRuleStatus() const
{
    return m_ruleStatus;
}

void CategoryRule::SetRuleStatus(const int64_t& _ruleStatus)
{
    m_ruleStatus = _ruleStatus;
    m_ruleStatusHasBeenSet = true;
}

bool CategoryRule::RuleStatusHasBeenSet() const
{
    return m_ruleStatusHasBeenSet;
}

