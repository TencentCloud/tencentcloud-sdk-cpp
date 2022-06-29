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

#include <tencentcloud/tcss/v20201101/model/AbnormalProcessEventDescription.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AbnormalProcessEventDescription::AbnormalProcessEventDescription() :
    m_descriptionHasBeenSet(false),
    m_solutionHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_matchRuleHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_operationTimeHasBeenSet(false),
    m_groupNameHasBeenSet(false)
{
}

CoreInternalOutcome AbnormalProcessEventDescription::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventDescription.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Solution") && !value["Solution"].IsNull())
    {
        if (!value["Solution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventDescription.Solution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_solution = string(value["Solution"].GetString());
        m_solutionHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventDescription.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("MatchRule") && !value["MatchRule"].IsNull())
    {
        if (!value["MatchRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventDescription.MatchRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_matchRule.Deserialize(value["MatchRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_matchRuleHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventDescription.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventDescription.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("OperationTime") && !value["OperationTime"].IsNull())
    {
        if (!value["OperationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventDescription.OperationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationTime = string(value["OperationTime"].GetString());
        m_operationTimeHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventDescription.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AbnormalProcessEventDescription::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_solutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Solution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_solution.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_matchRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_matchRule.ToJsonObject(value[key.c_str()], allocator);
    }

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
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_operationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

}


string AbnormalProcessEventDescription::GetDescription() const
{
    return m_description;
}

void AbnormalProcessEventDescription::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AbnormalProcessEventDescription::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AbnormalProcessEventDescription::GetSolution() const
{
    return m_solution;
}

void AbnormalProcessEventDescription::SetSolution(const string& _solution)
{
    m_solution = _solution;
    m_solutionHasBeenSet = true;
}

bool AbnormalProcessEventDescription::SolutionHasBeenSet() const
{
    return m_solutionHasBeenSet;
}

string AbnormalProcessEventDescription::GetRemark() const
{
    return m_remark;
}

void AbnormalProcessEventDescription::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AbnormalProcessEventDescription::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

AbnormalProcessChildRuleInfo AbnormalProcessEventDescription::GetMatchRule() const
{
    return m_matchRule;
}

void AbnormalProcessEventDescription::SetMatchRule(const AbnormalProcessChildRuleInfo& _matchRule)
{
    m_matchRule = _matchRule;
    m_matchRuleHasBeenSet = true;
}

bool AbnormalProcessEventDescription::MatchRuleHasBeenSet() const
{
    return m_matchRuleHasBeenSet;
}

string AbnormalProcessEventDescription::GetRuleName() const
{
    return m_ruleName;
}

void AbnormalProcessEventDescription::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool AbnormalProcessEventDescription::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string AbnormalProcessEventDescription::GetRuleId() const
{
    return m_ruleId;
}

void AbnormalProcessEventDescription::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool AbnormalProcessEventDescription::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string AbnormalProcessEventDescription::GetOperationTime() const
{
    return m_operationTime;
}

void AbnormalProcessEventDescription::SetOperationTime(const string& _operationTime)
{
    m_operationTime = _operationTime;
    m_operationTimeHasBeenSet = true;
}

bool AbnormalProcessEventDescription::OperationTimeHasBeenSet() const
{
    return m_operationTimeHasBeenSet;
}

string AbnormalProcessEventDescription::GetGroupName() const
{
    return m_groupName;
}

void AbnormalProcessEventDescription::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool AbnormalProcessEventDescription::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

