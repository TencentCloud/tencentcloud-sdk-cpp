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

#include <tencentcloud/teo/v20220901/model/RateLimitUserRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

RateLimitUserRule::RateLimitUserRule() :
    m_thresholdHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_punishTimeHasBeenSet(false),
    m_punishTimeUnitHasBeenSet(false),
    m_ruleStatusHasBeenSet(false),
    m_aclConditionsHasBeenSet(false),
    m_rulePriorityHasBeenSet(false),
    m_ruleIDHasBeenSet(false),
    m_freqFieldsHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_freqScopeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_customResponseIdHasBeenSet(false),
    m_responseCodeHasBeenSet(false),
    m_redirectUrlHasBeenSet(false)
{
}

CoreInternalOutcome RateLimitUserRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Threshold") && !value["Threshold"].IsNull())
    {
        if (!value["Threshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitUserRule.Threshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_threshold = value["Threshold"].GetInt64();
        m_thresholdHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitUserRule.Period` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetInt64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitUserRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitUserRule.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("PunishTime") && !value["PunishTime"].IsNull())
    {
        if (!value["PunishTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitUserRule.PunishTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_punishTime = value["PunishTime"].GetInt64();
        m_punishTimeHasBeenSet = true;
    }

    if (value.HasMember("PunishTimeUnit") && !value["PunishTimeUnit"].IsNull())
    {
        if (!value["PunishTimeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitUserRule.PunishTimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_punishTimeUnit = string(value["PunishTimeUnit"].GetString());
        m_punishTimeUnitHasBeenSet = true;
    }

    if (value.HasMember("RuleStatus") && !value["RuleStatus"].IsNull())
    {
        if (!value["RuleStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitUserRule.RuleStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleStatus = string(value["RuleStatus"].GetString());
        m_ruleStatusHasBeenSet = true;
    }

    if (value.HasMember("AclConditions") && !value["AclConditions"].IsNull())
    {
        if (!value["AclConditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RateLimitUserRule.AclConditions` is not array type"));

        const rapidjson::Value &tmpValue = value["AclConditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AclCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aclConditions.push_back(item);
        }
        m_aclConditionsHasBeenSet = true;
    }

    if (value.HasMember("RulePriority") && !value["RulePriority"].IsNull())
    {
        if (!value["RulePriority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitUserRule.RulePriority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rulePriority = value["RulePriority"].GetInt64();
        m_rulePriorityHasBeenSet = true;
    }

    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitUserRule.RuleID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = value["RuleID"].GetInt64();
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("FreqFields") && !value["FreqFields"].IsNull())
    {
        if (!value["FreqFields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RateLimitUserRule.FreqFields` is not array type"));

        const rapidjson::Value &tmpValue = value["FreqFields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_freqFields.push_back((*itr).GetString());
        }
        m_freqFieldsHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitUserRule.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("FreqScope") && !value["FreqScope"].IsNull())
    {
        if (!value["FreqScope"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RateLimitUserRule.FreqScope` is not array type"));

        const rapidjson::Value &tmpValue = value["FreqScope"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_freqScope.push_back((*itr).GetString());
        }
        m_freqScopeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitUserRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CustomResponseId") && !value["CustomResponseId"].IsNull())
    {
        if (!value["CustomResponseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitUserRule.CustomResponseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customResponseId = string(value["CustomResponseId"].GetString());
        m_customResponseIdHasBeenSet = true;
    }

    if (value.HasMember("ResponseCode") && !value["ResponseCode"].IsNull())
    {
        if (!value["ResponseCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitUserRule.ResponseCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_responseCode = value["ResponseCode"].GetInt64();
        m_responseCodeHasBeenSet = true;
    }

    if (value.HasMember("RedirectUrl") && !value["RedirectUrl"].IsNull())
    {
        if (!value["RedirectUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitUserRule.RedirectUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redirectUrl = string(value["RedirectUrl"].GetString());
        m_redirectUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RateLimitUserRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_thresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Threshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_threshold, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_punishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PunishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_punishTime, allocator);
    }

    if (m_punishTimeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PunishTimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_punishTimeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_aclConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclConditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aclConditions.begin(); itr != m_aclConditions.end(); ++itr, ++i)
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

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleID, allocator);
    }

    if (m_freqFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreqFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_freqFields.begin(); itr != m_freqFields.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_freqScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreqScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_freqScope.begin(); itr != m_freqScope.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_customResponseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomResponseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customResponseId.c_str(), allocator).Move(), allocator);
    }

    if (m_responseCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_responseCode, allocator);
    }

    if (m_redirectUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_redirectUrl.c_str(), allocator).Move(), allocator);
    }

}


int64_t RateLimitUserRule::GetThreshold() const
{
    return m_threshold;
}

void RateLimitUserRule::SetThreshold(const int64_t& _threshold)
{
    m_threshold = _threshold;
    m_thresholdHasBeenSet = true;
}

bool RateLimitUserRule::ThresholdHasBeenSet() const
{
    return m_thresholdHasBeenSet;
}

int64_t RateLimitUserRule::GetPeriod() const
{
    return m_period;
}

void RateLimitUserRule::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool RateLimitUserRule::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string RateLimitUserRule::GetRuleName() const
{
    return m_ruleName;
}

void RateLimitUserRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool RateLimitUserRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string RateLimitUserRule::GetAction() const
{
    return m_action;
}

void RateLimitUserRule::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool RateLimitUserRule::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

int64_t RateLimitUserRule::GetPunishTime() const
{
    return m_punishTime;
}

void RateLimitUserRule::SetPunishTime(const int64_t& _punishTime)
{
    m_punishTime = _punishTime;
    m_punishTimeHasBeenSet = true;
}

bool RateLimitUserRule::PunishTimeHasBeenSet() const
{
    return m_punishTimeHasBeenSet;
}

string RateLimitUserRule::GetPunishTimeUnit() const
{
    return m_punishTimeUnit;
}

void RateLimitUserRule::SetPunishTimeUnit(const string& _punishTimeUnit)
{
    m_punishTimeUnit = _punishTimeUnit;
    m_punishTimeUnitHasBeenSet = true;
}

bool RateLimitUserRule::PunishTimeUnitHasBeenSet() const
{
    return m_punishTimeUnitHasBeenSet;
}

string RateLimitUserRule::GetRuleStatus() const
{
    return m_ruleStatus;
}

void RateLimitUserRule::SetRuleStatus(const string& _ruleStatus)
{
    m_ruleStatus = _ruleStatus;
    m_ruleStatusHasBeenSet = true;
}

bool RateLimitUserRule::RuleStatusHasBeenSet() const
{
    return m_ruleStatusHasBeenSet;
}

vector<AclCondition> RateLimitUserRule::GetAclConditions() const
{
    return m_aclConditions;
}

void RateLimitUserRule::SetAclConditions(const vector<AclCondition>& _aclConditions)
{
    m_aclConditions = _aclConditions;
    m_aclConditionsHasBeenSet = true;
}

bool RateLimitUserRule::AclConditionsHasBeenSet() const
{
    return m_aclConditionsHasBeenSet;
}

int64_t RateLimitUserRule::GetRulePriority() const
{
    return m_rulePriority;
}

void RateLimitUserRule::SetRulePriority(const int64_t& _rulePriority)
{
    m_rulePriority = _rulePriority;
    m_rulePriorityHasBeenSet = true;
}

bool RateLimitUserRule::RulePriorityHasBeenSet() const
{
    return m_rulePriorityHasBeenSet;
}

int64_t RateLimitUserRule::GetRuleID() const
{
    return m_ruleID;
}

void RateLimitUserRule::SetRuleID(const int64_t& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool RateLimitUserRule::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

vector<string> RateLimitUserRule::GetFreqFields() const
{
    return m_freqFields;
}

void RateLimitUserRule::SetFreqFields(const vector<string>& _freqFields)
{
    m_freqFields = _freqFields;
    m_freqFieldsHasBeenSet = true;
}

bool RateLimitUserRule::FreqFieldsHasBeenSet() const
{
    return m_freqFieldsHasBeenSet;
}

string RateLimitUserRule::GetUpdateTime() const
{
    return m_updateTime;
}

void RateLimitUserRule::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RateLimitUserRule::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<string> RateLimitUserRule::GetFreqScope() const
{
    return m_freqScope;
}

void RateLimitUserRule::SetFreqScope(const vector<string>& _freqScope)
{
    m_freqScope = _freqScope;
    m_freqScopeHasBeenSet = true;
}

bool RateLimitUserRule::FreqScopeHasBeenSet() const
{
    return m_freqScopeHasBeenSet;
}

string RateLimitUserRule::GetName() const
{
    return m_name;
}

void RateLimitUserRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RateLimitUserRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RateLimitUserRule::GetCustomResponseId() const
{
    return m_customResponseId;
}

void RateLimitUserRule::SetCustomResponseId(const string& _customResponseId)
{
    m_customResponseId = _customResponseId;
    m_customResponseIdHasBeenSet = true;
}

bool RateLimitUserRule::CustomResponseIdHasBeenSet() const
{
    return m_customResponseIdHasBeenSet;
}

int64_t RateLimitUserRule::GetResponseCode() const
{
    return m_responseCode;
}

void RateLimitUserRule::SetResponseCode(const int64_t& _responseCode)
{
    m_responseCode = _responseCode;
    m_responseCodeHasBeenSet = true;
}

bool RateLimitUserRule::ResponseCodeHasBeenSet() const
{
    return m_responseCodeHasBeenSet;
}

string RateLimitUserRule::GetRedirectUrl() const
{
    return m_redirectUrl;
}

void RateLimitUserRule::SetRedirectUrl(const string& _redirectUrl)
{
    m_redirectUrl = _redirectUrl;
    m_redirectUrlHasBeenSet = true;
}

bool RateLimitUserRule::RedirectUrlHasBeenSet() const
{
    return m_redirectUrlHasBeenSet;
}

