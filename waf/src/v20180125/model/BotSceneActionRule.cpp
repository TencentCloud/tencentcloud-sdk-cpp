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

#include <tencentcloud/waf/v20180125/model/BotSceneActionRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

BotSceneActionRule::BotSceneActionRule() :
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_scopeTypeHasBeenSet(false),
    m_actionMatchTypeHasBeenSet(false)
{
}

CoreInternalOutcome BotSceneActionRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneActionRule.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneActionRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneActionRule.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneActionRule.Status` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetBool();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BotSceneActionRule.Score` is not array type"));

        const rapidjson::Value &tmpValue = value["Score"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BotScoreRuleEntry item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_score.push_back(item);
        }
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneActionRule.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BotSceneActionRule.Scope` is not array type"));

        const rapidjson::Value &tmpValue = value["Scope"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BotActionScopeRuleEntry item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_scope.push_back(item);
        }
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneActionRule.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ScopeType") && !value["ScopeType"].IsNull())
    {
        if (!value["ScopeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneActionRule.ScopeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scopeType = string(value["ScopeType"].GetString());
        m_scopeTypeHasBeenSet = true;
    }

    if (value.HasMember("ActionMatchType") && !value["ActionMatchType"].IsNull())
    {
        if (!value["ActionMatchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotSceneActionRule.ActionMatchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionMatchType = string(value["ActionMatchType"].GetString());
        m_actionMatchTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotSceneActionRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_score.begin(); itr != m_score.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_scope.begin(); itr != m_scope.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScopeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scopeType.c_str(), allocator).Move(), allocator);
    }

    if (m_actionMatchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionMatchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionMatchType.c_str(), allocator).Move(), allocator);
    }

}


string BotSceneActionRule::GetRuleId() const
{
    return m_ruleId;
}

void BotSceneActionRule::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool BotSceneActionRule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string BotSceneActionRule::GetRuleName() const
{
    return m_ruleName;
}

void BotSceneActionRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool BotSceneActionRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

int64_t BotSceneActionRule::GetPriority() const
{
    return m_priority;
}

void BotSceneActionRule::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool BotSceneActionRule::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

bool BotSceneActionRule::GetStatus() const
{
    return m_status;
}

void BotSceneActionRule::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BotSceneActionRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<BotScoreRuleEntry> BotSceneActionRule::GetScore() const
{
    return m_score;
}

void BotSceneActionRule::SetScore(const vector<BotScoreRuleEntry>& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool BotSceneActionRule::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string BotSceneActionRule::GetLevel() const
{
    return m_level;
}

void BotSceneActionRule::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool BotSceneActionRule::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

vector<BotActionScopeRuleEntry> BotSceneActionRule::GetScope() const
{
    return m_scope;
}

void BotSceneActionRule::SetScope(const vector<BotActionScopeRuleEntry>& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool BotSceneActionRule::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

string BotSceneActionRule::GetType() const
{
    return m_type;
}

void BotSceneActionRule::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool BotSceneActionRule::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string BotSceneActionRule::GetScopeType() const
{
    return m_scopeType;
}

void BotSceneActionRule::SetScopeType(const string& _scopeType)
{
    m_scopeType = _scopeType;
    m_scopeTypeHasBeenSet = true;
}

bool BotSceneActionRule::ScopeTypeHasBeenSet() const
{
    return m_scopeTypeHasBeenSet;
}

string BotSceneActionRule::GetActionMatchType() const
{
    return m_actionMatchType;
}

void BotSceneActionRule::SetActionMatchType(const string& _actionMatchType)
{
    m_actionMatchType = _actionMatchType;
    m_actionMatchTypeHasBeenSet = true;
}

bool BotSceneActionRule::ActionMatchTypeHasBeenSet() const
{
    return m_actionMatchTypeHasBeenSet;
}

