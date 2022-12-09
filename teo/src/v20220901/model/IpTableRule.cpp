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

#include <tencentcloud/teo/v20220901/model/IpTableRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

IpTableRule::IpTableRule() :
    m_actionHasBeenSet(false),
    m_matchFromHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_ruleIDHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_matchContentHasBeenSet(false)
{
}

CoreInternalOutcome IpTableRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpTableRule.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("MatchFrom") && !value["MatchFrom"].IsNull())
    {
        if (!value["MatchFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpTableRule.MatchFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchFrom = string(value["MatchFrom"].GetString());
        m_matchFromHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpTableRule.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IpTableRule.RuleID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = value["RuleID"].GetInt64();
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpTableRule.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpTableRule.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpTableRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("MatchContent") && !value["MatchContent"].IsNull())
    {
        if (!value["MatchContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpTableRule.MatchContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchContent = string(value["MatchContent"].GetString());
        m_matchContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpTableRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_matchFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleID, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_matchContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchContent.c_str(), allocator).Move(), allocator);
    }

}


string IpTableRule::GetAction() const
{
    return m_action;
}

void IpTableRule::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool IpTableRule::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string IpTableRule::GetMatchFrom() const
{
    return m_matchFrom;
}

void IpTableRule::SetMatchFrom(const string& _matchFrom)
{
    m_matchFrom = _matchFrom;
    m_matchFromHasBeenSet = true;
}

bool IpTableRule::MatchFromHasBeenSet() const
{
    return m_matchFromHasBeenSet;
}

string IpTableRule::GetOperator() const
{
    return m_operator;
}

void IpTableRule::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool IpTableRule::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

int64_t IpTableRule::GetRuleID() const
{
    return m_ruleID;
}

void IpTableRule::SetRuleID(const int64_t& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool IpTableRule::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string IpTableRule::GetUpdateTime() const
{
    return m_updateTime;
}

void IpTableRule::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool IpTableRule::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string IpTableRule::GetStatus() const
{
    return m_status;
}

void IpTableRule::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool IpTableRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string IpTableRule::GetRuleName() const
{
    return m_ruleName;
}

void IpTableRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool IpTableRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string IpTableRule::GetMatchContent() const
{
    return m_matchContent;
}

void IpTableRule::SetMatchContent(const string& _matchContent)
{
    m_matchContent = _matchContent;
    m_matchContentHasBeenSet = true;
}

bool IpTableRule::MatchContentHasBeenSet() const
{
    return m_matchContentHasBeenSet;
}

