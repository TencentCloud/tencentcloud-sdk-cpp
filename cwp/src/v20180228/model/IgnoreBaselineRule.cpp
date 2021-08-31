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

#include <tencentcloud/cwp/v20180228/model/IgnoreBaselineRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

IgnoreBaselineRule::IgnoreBaselineRule() :
    m_ruleNameHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_fixHasBeenSet(false),
    m_effectHostCountHasBeenSet(false)
{
}

CoreInternalOutcome IgnoreBaselineRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IgnoreBaselineRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IgnoreBaselineRule.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IgnoreBaselineRule.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Fix") && !value["Fix"].IsNull())
    {
        if (!value["Fix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IgnoreBaselineRule.Fix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fix = string(value["Fix"].GetString());
        m_fixHasBeenSet = true;
    }

    if (value.HasMember("EffectHostCount") && !value["EffectHostCount"].IsNull())
    {
        if (!value["EffectHostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IgnoreBaselineRule.EffectHostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_effectHostCount = value["EffectHostCount"].GetUint64();
        m_effectHostCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IgnoreBaselineRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fix.c_str(), allocator).Move(), allocator);
    }

    if (m_effectHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectHostCount, allocator);
    }

}


string IgnoreBaselineRule::GetRuleName() const
{
    return m_ruleName;
}

void IgnoreBaselineRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool IgnoreBaselineRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

uint64_t IgnoreBaselineRule::GetRuleId() const
{
    return m_ruleId;
}

void IgnoreBaselineRule::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool IgnoreBaselineRule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string IgnoreBaselineRule::GetModifyTime() const
{
    return m_modifyTime;
}

void IgnoreBaselineRule::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool IgnoreBaselineRule::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string IgnoreBaselineRule::GetFix() const
{
    return m_fix;
}

void IgnoreBaselineRule::SetFix(const string& _fix)
{
    m_fix = _fix;
    m_fixHasBeenSet = true;
}

bool IgnoreBaselineRule::FixHasBeenSet() const
{
    return m_fixHasBeenSet;
}

uint64_t IgnoreBaselineRule::GetEffectHostCount() const
{
    return m_effectHostCount;
}

void IgnoreBaselineRule::SetEffectHostCount(const uint64_t& _effectHostCount)
{
    m_effectHostCount = _effectHostCount;
    m_effectHostCountHasBeenSet = true;
}

bool IgnoreBaselineRule::EffectHostCountHasBeenSet() const
{
    return m_effectHostCountHasBeenSet;
}

