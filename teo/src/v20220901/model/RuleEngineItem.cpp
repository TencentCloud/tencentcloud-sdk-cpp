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

#include <tencentcloud/teo/v20220901/model/RuleEngineItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

RuleEngineItem::RuleEngineItem() :
    m_statusHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_branchesHasBeenSet(false),
    m_rulePriorityHasBeenSet(false)
{
}

CoreInternalOutcome RuleEngineItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineItem.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineItem.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleEngineItem.Description` is not array type"));

        const rapidjson::Value &tmpValue = value["Description"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_description.push_back((*itr).GetString());
        }
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Branches") && !value["Branches"].IsNull())
    {
        if (!value["Branches"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleEngineItem.Branches` is not array type"));

        const rapidjson::Value &tmpValue = value["Branches"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleBranch item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_branches.push_back(item);
        }
        m_branchesHasBeenSet = true;
    }

    if (value.HasMember("RulePriority") && !value["RulePriority"].IsNull())
    {
        if (!value["RulePriority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineItem.RulePriority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rulePriority = value["RulePriority"].GetInt64();
        m_rulePriorityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleEngineItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_description.begin(); itr != m_description.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_branchesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Branches";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_branches.begin(); itr != m_branches.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rulePriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RulePriority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rulePriority, allocator);
    }

}


string RuleEngineItem::GetStatus() const
{
    return m_status;
}

void RuleEngineItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RuleEngineItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RuleEngineItem::GetRuleId() const
{
    return m_ruleId;
}

void RuleEngineItem::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool RuleEngineItem::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string RuleEngineItem::GetRuleName() const
{
    return m_ruleName;
}

void RuleEngineItem::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool RuleEngineItem::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

vector<string> RuleEngineItem::GetDescription() const
{
    return m_description;
}

void RuleEngineItem::SetDescription(const vector<string>& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RuleEngineItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<RuleBranch> RuleEngineItem::GetBranches() const
{
    return m_branches;
}

void RuleEngineItem::SetBranches(const vector<RuleBranch>& _branches)
{
    m_branches = _branches;
    m_branchesHasBeenSet = true;
}

bool RuleEngineItem::BranchesHasBeenSet() const
{
    return m_branchesHasBeenSet;
}

int64_t RuleEngineItem::GetRulePriority() const
{
    return m_rulePriority;
}

void RuleEngineItem::SetRulePriority(const int64_t& _rulePriority)
{
    m_rulePriority = _rulePriority;
    m_rulePriorityHasBeenSet = true;
}

bool RuleEngineItem::RulePriorityHasBeenSet() const
{
    return m_rulePriorityHasBeenSet;
}

