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

#include <tencentcloud/tcss/v20201101/model/RegexpRuleListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

RegexpRuleListItem::RegexpRuleListItem() :
    m_ruleIDHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_effectiveExpressionHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_operatorUinHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome RegexpRuleListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegexpRuleListItem.RuleID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = string(value["RuleID"].GetString());
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegexpRuleListItem.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("EffectiveExpression") && !value["EffectiveExpression"].IsNull())
    {
        if (!value["EffectiveExpression"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RegexpRuleListItem.EffectiveExpression` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveExpression = value["EffectiveExpression"].GetUint64();
        m_effectiveExpressionHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegexpRuleListItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("OperatorUin") && !value["OperatorUin"].IsNull())
    {
        if (!value["OperatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegexpRuleListItem.OperatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorUin = string(value["OperatorUin"].GetString());
        m_operatorUinHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RegexpRuleListItem.Status` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetBool();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegexpRuleListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleID.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_effectiveExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectiveExpression, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorUin.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string RegexpRuleListItem::GetRuleID() const
{
    return m_ruleID;
}

void RegexpRuleListItem::SetRuleID(const string& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool RegexpRuleListItem::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string RegexpRuleListItem::GetRuleName() const
{
    return m_ruleName;
}

void RegexpRuleListItem::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool RegexpRuleListItem::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

uint64_t RegexpRuleListItem::GetEffectiveExpression() const
{
    return m_effectiveExpression;
}

void RegexpRuleListItem::SetEffectiveExpression(const uint64_t& _effectiveExpression)
{
    m_effectiveExpression = _effectiveExpression;
    m_effectiveExpressionHasBeenSet = true;
}

bool RegexpRuleListItem::EffectiveExpressionHasBeenSet() const
{
    return m_effectiveExpressionHasBeenSet;
}

string RegexpRuleListItem::GetUpdateTime() const
{
    return m_updateTime;
}

void RegexpRuleListItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RegexpRuleListItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string RegexpRuleListItem::GetOperatorUin() const
{
    return m_operatorUin;
}

void RegexpRuleListItem::SetOperatorUin(const string& _operatorUin)
{
    m_operatorUin = _operatorUin;
    m_operatorUinHasBeenSet = true;
}

bool RegexpRuleListItem::OperatorUinHasBeenSet() const
{
    return m_operatorUinHasBeenSet;
}

bool RegexpRuleListItem::GetStatus() const
{
    return m_status;
}

void RegexpRuleListItem::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RegexpRuleListItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

