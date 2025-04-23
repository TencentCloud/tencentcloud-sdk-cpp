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

#include <tencentcloud/cdn/v20180606/model/IpFilterPathRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

IpFilterPathRule::IpFilterPathRule() :
    m_filterTypeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_rulePathsHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome IpFilterPathRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FilterType") && !value["FilterType"].IsNull())
    {
        if (!value["FilterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpFilterPathRule.FilterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filterType = string(value["FilterType"].GetString());
        m_filterTypeHasBeenSet = true;
    }

    if (value.HasMember("Filters") && !value["Filters"].IsNull())
    {
        if (!value["Filters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IpFilterPathRule.Filters` is not array type"));

        const rapidjson::Value &tmpValue = value["Filters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_filters.push_back((*itr).GetString());
        }
        m_filtersHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpFilterPathRule.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("RulePaths") && !value["RulePaths"].IsNull())
    {
        if (!value["RulePaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IpFilterPathRule.RulePaths` is not array type"));

        const rapidjson::Value &tmpValue = value["RulePaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rulePaths.push_back((*itr).GetString());
        }
        m_rulePathsHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpFilterPathRule.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpFilterPathRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_filterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filterType.c_str(), allocator).Move(), allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string IpFilterPathRule::GetFilterType() const
{
    return m_filterType;
}

void IpFilterPathRule::SetFilterType(const string& _filterType)
{
    m_filterType = _filterType;
    m_filterTypeHasBeenSet = true;
}

bool IpFilterPathRule::FilterTypeHasBeenSet() const
{
    return m_filterTypeHasBeenSet;
}

vector<string> IpFilterPathRule::GetFilters() const
{
    return m_filters;
}

void IpFilterPathRule::SetFilters(const vector<string>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool IpFilterPathRule::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string IpFilterPathRule::GetRuleType() const
{
    return m_ruleType;
}

void IpFilterPathRule::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool IpFilterPathRule::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

vector<string> IpFilterPathRule::GetRulePaths() const
{
    return m_rulePaths;
}

void IpFilterPathRule::SetRulePaths(const vector<string>& _rulePaths)
{
    m_rulePaths = _rulePaths;
    m_rulePathsHasBeenSet = true;
}

bool IpFilterPathRule::RulePathsHasBeenSet() const
{
    return m_rulePathsHasBeenSet;
}

string IpFilterPathRule::GetRemark() const
{
    return m_remark;
}

void IpFilterPathRule::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool IpFilterPathRule::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

