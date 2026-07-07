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

#include <tencentcloud/csip/v20221121/model/DspmIdentifyCategoryRuleRelateDetailItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmIdentifyCategoryRuleRelateDetailItem::DspmIdentifyCategoryRuleRelateDetailItem() :
    m_complianceIdHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_levelIdHasBeenSet(false),
    m_levelNameHasBeenSet(false)
{
}

CoreInternalOutcome DspmIdentifyCategoryRuleRelateDetailItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComplianceId") && !value["ComplianceId"].IsNull())
    {
        if (!value["ComplianceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyCategoryRuleRelateDetailItem.ComplianceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_complianceId = value["ComplianceId"].GetUint64();
        m_complianceIdHasBeenSet = true;
    }

    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyCategoryRuleRelateDetailItem.CategoryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = value["CategoryId"].GetInt64();
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyCategoryRuleRelateDetailItem.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyCategoryRuleRelateDetailItem.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("LevelId") && !value["LevelId"].IsNull())
    {
        if (!value["LevelId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyCategoryRuleRelateDetailItem.LevelId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_levelId = value["LevelId"].GetUint64();
        m_levelIdHasBeenSet = true;
    }

    if (value.HasMember("LevelName") && !value["LevelName"].IsNull())
    {
        if (!value["LevelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyCategoryRuleRelateDetailItem.LevelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelName = string(value["LevelName"].GetString());
        m_levelNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmIdentifyCategoryRuleRelateDetailItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_complianceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_complianceId, allocator);
    }

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

}


uint64_t DspmIdentifyCategoryRuleRelateDetailItem::GetComplianceId() const
{
    return m_complianceId;
}

void DspmIdentifyCategoryRuleRelateDetailItem::SetComplianceId(const uint64_t& _complianceId)
{
    m_complianceId = _complianceId;
    m_complianceIdHasBeenSet = true;
}

bool DspmIdentifyCategoryRuleRelateDetailItem::ComplianceIdHasBeenSet() const
{
    return m_complianceIdHasBeenSet;
}

int64_t DspmIdentifyCategoryRuleRelateDetailItem::GetCategoryId() const
{
    return m_categoryId;
}

void DspmIdentifyCategoryRuleRelateDetailItem::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool DspmIdentifyCategoryRuleRelateDetailItem::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

uint64_t DspmIdentifyCategoryRuleRelateDetailItem::GetRuleId() const
{
    return m_ruleId;
}

void DspmIdentifyCategoryRuleRelateDetailItem::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DspmIdentifyCategoryRuleRelateDetailItem::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string DspmIdentifyCategoryRuleRelateDetailItem::GetRuleName() const
{
    return m_ruleName;
}

void DspmIdentifyCategoryRuleRelateDetailItem::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool DspmIdentifyCategoryRuleRelateDetailItem::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

uint64_t DspmIdentifyCategoryRuleRelateDetailItem::GetLevelId() const
{
    return m_levelId;
}

void DspmIdentifyCategoryRuleRelateDetailItem::SetLevelId(const uint64_t& _levelId)
{
    m_levelId = _levelId;
    m_levelIdHasBeenSet = true;
}

bool DspmIdentifyCategoryRuleRelateDetailItem::LevelIdHasBeenSet() const
{
    return m_levelIdHasBeenSet;
}

string DspmIdentifyCategoryRuleRelateDetailItem::GetLevelName() const
{
    return m_levelName;
}

void DspmIdentifyCategoryRuleRelateDetailItem::SetLevelName(const string& _levelName)
{
    m_levelName = _levelName;
    m_levelNameHasBeenSet = true;
}

bool DspmIdentifyCategoryRuleRelateDetailItem::LevelNameHasBeenSet() const
{
    return m_levelNameHasBeenSet;
}

