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

#include <tencentcloud/tcss/v20201101/model/RegexpRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

RegexpRuleInfo::RegexpRuleInfo() :
    m_ruleNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_expressionListHasBeenSet(false),
    m_ruleIDHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_operatorUINHasBeenSet(false)
{
}

CoreInternalOutcome RegexpRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegexpRuleInfo.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RegexpRuleInfo.Status` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetBool();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ExpressionList") && !value["ExpressionList"].IsNull())
    {
        if (!value["ExpressionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegexpRuleInfo.ExpressionList` is not array type"));

        const rapidjson::Value &tmpValue = value["ExpressionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WhiteListRegexpExpressionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_expressionList.push_back(item);
        }
        m_expressionListHasBeenSet = true;
    }

    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegexpRuleInfo.RuleID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = string(value["RuleID"].GetString());
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegexpRuleInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("OperatorUIN") && !value["OperatorUIN"].IsNull())
    {
        if (!value["OperatorUIN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegexpRuleInfo.OperatorUIN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorUIN = string(value["OperatorUIN"].GetString());
        m_operatorUINHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegexpRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_expressionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpressionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_expressionList.begin(); itr != m_expressionList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleID.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorUINHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorUIN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorUIN.c_str(), allocator).Move(), allocator);
    }

}


string RegexpRuleInfo::GetRuleName() const
{
    return m_ruleName;
}

void RegexpRuleInfo::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool RegexpRuleInfo::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

bool RegexpRuleInfo::GetStatus() const
{
    return m_status;
}

void RegexpRuleInfo::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RegexpRuleInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<WhiteListRegexpExpressionInfo> RegexpRuleInfo::GetExpressionList() const
{
    return m_expressionList;
}

void RegexpRuleInfo::SetExpressionList(const vector<WhiteListRegexpExpressionInfo>& _expressionList)
{
    m_expressionList = _expressionList;
    m_expressionListHasBeenSet = true;
}

bool RegexpRuleInfo::ExpressionListHasBeenSet() const
{
    return m_expressionListHasBeenSet;
}

string RegexpRuleInfo::GetRuleID() const
{
    return m_ruleID;
}

void RegexpRuleInfo::SetRuleID(const string& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool RegexpRuleInfo::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string RegexpRuleInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void RegexpRuleInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RegexpRuleInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string RegexpRuleInfo::GetOperatorUIN() const
{
    return m_operatorUIN;
}

void RegexpRuleInfo::SetOperatorUIN(const string& _operatorUIN)
{
    m_operatorUIN = _operatorUIN;
    m_operatorUINHasBeenSet = true;
}

bool RegexpRuleInfo::OperatorUINHasBeenSet() const
{
    return m_operatorUINHasBeenSet;
}

