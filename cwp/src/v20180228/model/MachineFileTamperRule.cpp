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

#include <tencentcloud/cwp/v20180228/model/MachineFileTamperRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

MachineFileTamperRule::MachineFileTamperRule() :
    m_nameHasBeenSet(false),
    m_ruleCategoryHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome MachineFileTamperRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineFileTamperRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("RuleCategory") && !value["RuleCategory"].IsNull())
    {
        if (!value["RuleCategory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineFileTamperRule.RuleCategory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleCategory = value["RuleCategory"].GetUint64();
        m_ruleCategoryHasBeenSet = true;
    }

    if (value.HasMember("Rule") && !value["Rule"].IsNull())
    {
        if (!value["Rule"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MachineFileTamperRule.Rule` is not array type"));

        const rapidjson::Value &tmpValue = value["Rule"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FileTamperRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rule.push_back(item);
        }
        m_ruleHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineFileTamperRule.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MachineFileTamperRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleCategory, allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rule.begin(); itr != m_rule.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

}


string MachineFileTamperRule::GetName() const
{
    return m_name;
}

void MachineFileTamperRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MachineFileTamperRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t MachineFileTamperRule::GetRuleCategory() const
{
    return m_ruleCategory;
}

void MachineFileTamperRule::SetRuleCategory(const uint64_t& _ruleCategory)
{
    m_ruleCategory = _ruleCategory;
    m_ruleCategoryHasBeenSet = true;
}

bool MachineFileTamperRule::RuleCategoryHasBeenSet() const
{
    return m_ruleCategoryHasBeenSet;
}

vector<FileTamperRule> MachineFileTamperRule::GetRule() const
{
    return m_rule;
}

void MachineFileTamperRule::SetRule(const vector<FileTamperRule>& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool MachineFileTamperRule::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

uint64_t MachineFileTamperRule::GetId() const
{
    return m_id;
}

void MachineFileTamperRule::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool MachineFileTamperRule::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

