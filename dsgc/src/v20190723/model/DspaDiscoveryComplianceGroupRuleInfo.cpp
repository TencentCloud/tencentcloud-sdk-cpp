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

#include <tencentcloud/dsgc/v20190723/model/DspaDiscoveryComplianceGroupRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaDiscoveryComplianceGroupRuleInfo::DspaDiscoveryComplianceGroupRuleInfo() :
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_levelIdHasBeenSet(false)
{
}

CoreInternalOutcome DspaDiscoveryComplianceGroupRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryComplianceGroupRuleInfo.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryComplianceGroupRuleInfo.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryComplianceGroupRuleInfo.CategoryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = value["CategoryId"].GetInt64();
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("LevelId") && !value["LevelId"].IsNull())
    {
        if (!value["LevelId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryComplianceGroupRuleInfo.LevelId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_levelId = value["LevelId"].GetInt64();
        m_levelIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaDiscoveryComplianceGroupRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_levelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelId, allocator);
    }

}


int64_t DspaDiscoveryComplianceGroupRuleInfo::GetRuleId() const
{
    return m_ruleId;
}

void DspaDiscoveryComplianceGroupRuleInfo::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DspaDiscoveryComplianceGroupRuleInfo::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string DspaDiscoveryComplianceGroupRuleInfo::GetRuleName() const
{
    return m_ruleName;
}

void DspaDiscoveryComplianceGroupRuleInfo::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool DspaDiscoveryComplianceGroupRuleInfo::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

int64_t DspaDiscoveryComplianceGroupRuleInfo::GetCategoryId() const
{
    return m_categoryId;
}

void DspaDiscoveryComplianceGroupRuleInfo::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool DspaDiscoveryComplianceGroupRuleInfo::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

int64_t DspaDiscoveryComplianceGroupRuleInfo::GetLevelId() const
{
    return m_levelId;
}

void DspaDiscoveryComplianceGroupRuleInfo::SetLevelId(const int64_t& _levelId)
{
    m_levelId = _levelId;
    m_levelIdHasBeenSet = true;
}

bool DspaDiscoveryComplianceGroupRuleInfo::LevelIdHasBeenSet() const
{
    return m_levelIdHasBeenSet;
}

