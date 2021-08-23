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

#include <tencentcloud/cdn/v20180606/model/CappingRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

CappingRule::CappingRule() :
    m_ruleTypeHasBeenSet(false),
    m_rulePathsHasBeenSet(false),
    m_kBpsThresholdHasBeenSet(false)
{
}

CoreInternalOutcome CappingRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CappingRule.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("RulePaths") && !value["RulePaths"].IsNull())
    {
        if (!value["RulePaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CappingRule.RulePaths` is not array type"));

        const rapidjson::Value &tmpValue = value["RulePaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rulePaths.push_back((*itr).GetString());
        }
        m_rulePathsHasBeenSet = true;
    }

    if (value.HasMember("KBpsThreshold") && !value["KBpsThreshold"].IsNull())
    {
        if (!value["KBpsThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CappingRule.KBpsThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_kBpsThreshold = value["KBpsThreshold"].GetInt64();
        m_kBpsThresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CappingRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_rulePathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RulePaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rulePaths.begin(); itr != m_rulePaths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_kBpsThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KBpsThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kBpsThreshold, allocator);
    }

}


string CappingRule::GetRuleType() const
{
    return m_ruleType;
}

void CappingRule::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool CappingRule::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

vector<string> CappingRule::GetRulePaths() const
{
    return m_rulePaths;
}

void CappingRule::SetRulePaths(const vector<string>& _rulePaths)
{
    m_rulePaths = _rulePaths;
    m_rulePathsHasBeenSet = true;
}

bool CappingRule::RulePathsHasBeenSet() const
{
    return m_rulePathsHasBeenSet;
}

int64_t CappingRule::GetKBpsThreshold() const
{
    return m_kBpsThreshold;
}

void CappingRule::SetKBpsThreshold(const int64_t& _kBpsThreshold)
{
    m_kBpsThreshold = _kBpsThreshold;
    m_kBpsThresholdHasBeenSet = true;
}

bool CappingRule::KBpsThresholdHasBeenSet() const
{
    return m_kBpsThresholdHasBeenSet;
}

