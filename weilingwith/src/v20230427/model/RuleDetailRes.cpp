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

#include <tencentcloud/weilingwith/v20230427/model/RuleDetailRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

RuleDetailRes::RuleDetailRes() :
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleDescHasBeenSet(false),
    m_validTypeHasBeenSet(false),
    m_validPeriodHasBeenSet(false),
    m_beginDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_eventRuleHasBeenSet(false),
    m_eventInfoSetHasBeenSet(false),
    m_actionInfoSetHasBeenSet(false)
{
}

CoreInternalOutcome RuleDetailRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetailRes.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetailRes.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleDesc") && !value["RuleDesc"].IsNull())
    {
        if (!value["RuleDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetailRes.RuleDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleDesc = string(value["RuleDesc"].GetString());
        m_ruleDescHasBeenSet = true;
    }

    if (value.HasMember("ValidType") && !value["ValidType"].IsNull())
    {
        if (!value["ValidType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetailRes.ValidType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_validType = value["ValidType"].GetInt64();
        m_validTypeHasBeenSet = true;
    }

    if (value.HasMember("ValidPeriod") && !value["ValidPeriod"].IsNull())
    {
        if (!value["ValidPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetailRes.ValidPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validPeriod = string(value["ValidPeriod"].GetString());
        m_validPeriodHasBeenSet = true;
    }

    if (value.HasMember("BeginDate") && !value["BeginDate"].IsNull())
    {
        if (!value["BeginDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetailRes.BeginDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginDate = string(value["BeginDate"].GetString());
        m_beginDateHasBeenSet = true;
    }

    if (value.HasMember("EndDate") && !value["EndDate"].IsNull())
    {
        if (!value["EndDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetailRes.EndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endDate = string(value["EndDate"].GetString());
        m_endDateHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetailRes.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EventRule") && !value["EventRule"].IsNull())
    {
        if (!value["EventRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDetailRes.EventRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventRule = string(value["EventRule"].GetString());
        m_eventRuleHasBeenSet = true;
    }

    if (value.HasMember("EventInfoSet") && !value["EventInfoSet"].IsNull())
    {
        if (!value["EventInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleDetailRes.EventInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["EventInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventObj item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eventInfoSet.push_back(item);
        }
        m_eventInfoSetHasBeenSet = true;
    }

    if (value.HasMember("ActionInfoSet") && !value["ActionInfoSet"].IsNull())
    {
        if (!value["ActionInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleDetailRes.ActionInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ActionInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ActionObj item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_actionInfoSet.push_back(item);
        }
        m_actionInfoSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleDetailRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_validTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validType, allocator);
    }

    if (m_validPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_beginDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_eventRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventRule.c_str(), allocator).Move(), allocator);
    }

    if (m_eventInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eventInfoSet.begin(); itr != m_eventInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_actionInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_actionInfoSet.begin(); itr != m_actionInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t RuleDetailRes::GetRuleId() const
{
    return m_ruleId;
}

void RuleDetailRes::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool RuleDetailRes::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string RuleDetailRes::GetRuleName() const
{
    return m_ruleName;
}

void RuleDetailRes::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool RuleDetailRes::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string RuleDetailRes::GetRuleDesc() const
{
    return m_ruleDesc;
}

void RuleDetailRes::SetRuleDesc(const string& _ruleDesc)
{
    m_ruleDesc = _ruleDesc;
    m_ruleDescHasBeenSet = true;
}

bool RuleDetailRes::RuleDescHasBeenSet() const
{
    return m_ruleDescHasBeenSet;
}

int64_t RuleDetailRes::GetValidType() const
{
    return m_validType;
}

void RuleDetailRes::SetValidType(const int64_t& _validType)
{
    m_validType = _validType;
    m_validTypeHasBeenSet = true;
}

bool RuleDetailRes::ValidTypeHasBeenSet() const
{
    return m_validTypeHasBeenSet;
}

string RuleDetailRes::GetValidPeriod() const
{
    return m_validPeriod;
}

void RuleDetailRes::SetValidPeriod(const string& _validPeriod)
{
    m_validPeriod = _validPeriod;
    m_validPeriodHasBeenSet = true;
}

bool RuleDetailRes::ValidPeriodHasBeenSet() const
{
    return m_validPeriodHasBeenSet;
}

string RuleDetailRes::GetBeginDate() const
{
    return m_beginDate;
}

void RuleDetailRes::SetBeginDate(const string& _beginDate)
{
    m_beginDate = _beginDate;
    m_beginDateHasBeenSet = true;
}

bool RuleDetailRes::BeginDateHasBeenSet() const
{
    return m_beginDateHasBeenSet;
}

string RuleDetailRes::GetEndDate() const
{
    return m_endDate;
}

void RuleDetailRes::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool RuleDetailRes::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

int64_t RuleDetailRes::GetStatus() const
{
    return m_status;
}

void RuleDetailRes::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RuleDetailRes::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RuleDetailRes::GetEventRule() const
{
    return m_eventRule;
}

void RuleDetailRes::SetEventRule(const string& _eventRule)
{
    m_eventRule = _eventRule;
    m_eventRuleHasBeenSet = true;
}

bool RuleDetailRes::EventRuleHasBeenSet() const
{
    return m_eventRuleHasBeenSet;
}

vector<EventObj> RuleDetailRes::GetEventInfoSet() const
{
    return m_eventInfoSet;
}

void RuleDetailRes::SetEventInfoSet(const vector<EventObj>& _eventInfoSet)
{
    m_eventInfoSet = _eventInfoSet;
    m_eventInfoSetHasBeenSet = true;
}

bool RuleDetailRes::EventInfoSetHasBeenSet() const
{
    return m_eventInfoSetHasBeenSet;
}

vector<ActionObj> RuleDetailRes::GetActionInfoSet() const
{
    return m_actionInfoSet;
}

void RuleDetailRes::SetActionInfoSet(const vector<ActionObj>& _actionInfoSet)
{
    m_actionInfoSet = _actionInfoSet;
    m_actionInfoSetHasBeenSet = true;
}

bool RuleDetailRes::ActionInfoSetHasBeenSet() const
{
    return m_actionInfoSetHasBeenSet;
}

