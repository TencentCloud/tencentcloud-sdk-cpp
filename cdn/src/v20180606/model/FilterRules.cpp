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

#include <tencentcloud/cdn/v20180606/model/FilterRules.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

FilterRules::FilterRules() :
    m_filterTypeHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_rulePathsHasBeenSet(false)
{
}

CoreInternalOutcome FilterRules::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FilterType") && !value["FilterType"].IsNull())
    {
        if (!value["FilterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilterRules.FilterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filterType = string(value["FilterType"].GetString());
        m_filterTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilterRules.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("RulePaths") && !value["RulePaths"].IsNull())
    {
        if (!value["RulePaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FilterRules.RulePaths` is not array type"));

        const rapidjson::Value &tmpValue = value["RulePaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rulePaths.push_back((*itr).GetString());
        }
        m_rulePathsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FilterRules::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_filterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filterType.c_str(), allocator).Move(), allocator);
    }

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

}


string FilterRules::GetFilterType() const
{
    return m_filterType;
}

void FilterRules::SetFilterType(const string& _filterType)
{
    m_filterType = _filterType;
    m_filterTypeHasBeenSet = true;
}

bool FilterRules::FilterTypeHasBeenSet() const
{
    return m_filterTypeHasBeenSet;
}

string FilterRules::GetRuleType() const
{
    return m_ruleType;
}

void FilterRules::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool FilterRules::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

vector<string> FilterRules::GetRulePaths() const
{
    return m_rulePaths;
}

void FilterRules::SetRulePaths(const vector<string>& _rulePaths)
{
    m_rulePaths = _rulePaths;
    m_rulePathsHasBeenSet = true;
}

bool FilterRules::RulePathsHasBeenSet() const
{
    return m_rulePathsHasBeenSet;
}

