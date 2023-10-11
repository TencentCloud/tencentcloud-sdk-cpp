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

#include <tencentcloud/teo/v20220901/model/AclUserRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

AclUserRule::AclUserRule() :
    m_ruleNameHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_ruleStatusHasBeenSet(false),
    m_aclConditionsHasBeenSet(false),
    m_rulePriorityHasBeenSet(false),
    m_ruleIDHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_punishTimeHasBeenSet(false),
    m_punishTimeUnitHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pageIdHasBeenSet(false),
    m_customResponseIdHasBeenSet(false),
    m_responseCodeHasBeenSet(false),
    m_redirectUrlHasBeenSet(false)
{
}

CoreInternalOutcome AclUserRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclUserRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclUserRule.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("RuleStatus") && !value["RuleStatus"].IsNull())
    {
        if (!value["RuleStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclUserRule.RuleStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleStatus = string(value["RuleStatus"].GetString());
        m_ruleStatusHasBeenSet = true;
    }

    if (value.HasMember("AclConditions") && !value["AclConditions"].IsNull())
    {
        if (!value["AclConditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AclUserRule.AclConditions` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `AclUserRule.RulePriority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rulePriority = value["RulePriority"].GetInt64();
        m_rulePriorityHasBeenSet = true;
    }

    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AclUserRule.RuleID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = value["RuleID"].GetInt64();
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclUserRule.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("PunishTime") && !value["PunishTime"].IsNull())
    {
        if (!value["PunishTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AclUserRule.PunishTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_punishTime = value["PunishTime"].GetInt64();
        m_punishTimeHasBeenSet = true;
    }

    if (value.HasMember("PunishTimeUnit") && !value["PunishTimeUnit"].IsNull())
    {
        if (!value["PunishTimeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclUserRule.PunishTimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_punishTimeUnit = string(value["PunishTimeUnit"].GetString());
        m_punishTimeUnitHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclUserRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("PageId") && !value["PageId"].IsNull())
    {
        if (!value["PageId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AclUserRule.PageId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageId = value["PageId"].GetInt64();
        m_pageIdHasBeenSet = true;
    }

    if (value.HasMember("CustomResponseId") && !value["CustomResponseId"].IsNull())
    {
        if (!value["CustomResponseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclUserRule.CustomResponseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customResponseId = string(value["CustomResponseId"].GetString());
        m_customResponseIdHasBeenSet = true;
    }

    if (value.HasMember("ResponseCode") && !value["ResponseCode"].IsNull())
    {
        if (!value["ResponseCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AclUserRule.ResponseCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_responseCode = value["ResponseCode"].GetInt64();
        m_responseCodeHasBeenSet = true;
    }

    if (value.HasMember("RedirectUrl") && !value["RedirectUrl"].IsNull())
    {
        if (!value["RedirectUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclUserRule.RedirectUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redirectUrl = string(value["RedirectUrl"].GetString());
        m_redirectUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AclUserRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_pageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageId, allocator);
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


string AclUserRule::GetRuleName() const
{
    return m_ruleName;
}

void AclUserRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool AclUserRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string AclUserRule::GetAction() const
{
    return m_action;
}

void AclUserRule::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool AclUserRule::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string AclUserRule::GetRuleStatus() const
{
    return m_ruleStatus;
}

void AclUserRule::SetRuleStatus(const string& _ruleStatus)
{
    m_ruleStatus = _ruleStatus;
    m_ruleStatusHasBeenSet = true;
}

bool AclUserRule::RuleStatusHasBeenSet() const
{
    return m_ruleStatusHasBeenSet;
}

vector<AclCondition> AclUserRule::GetAclConditions() const
{
    return m_aclConditions;
}

void AclUserRule::SetAclConditions(const vector<AclCondition>& _aclConditions)
{
    m_aclConditions = _aclConditions;
    m_aclConditionsHasBeenSet = true;
}

bool AclUserRule::AclConditionsHasBeenSet() const
{
    return m_aclConditionsHasBeenSet;
}

int64_t AclUserRule::GetRulePriority() const
{
    return m_rulePriority;
}

void AclUserRule::SetRulePriority(const int64_t& _rulePriority)
{
    m_rulePriority = _rulePriority;
    m_rulePriorityHasBeenSet = true;
}

bool AclUserRule::RulePriorityHasBeenSet() const
{
    return m_rulePriorityHasBeenSet;
}

int64_t AclUserRule::GetRuleID() const
{
    return m_ruleID;
}

void AclUserRule::SetRuleID(const int64_t& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool AclUserRule::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string AclUserRule::GetUpdateTime() const
{
    return m_updateTime;
}

void AclUserRule::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AclUserRule::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t AclUserRule::GetPunishTime() const
{
    return m_punishTime;
}

void AclUserRule::SetPunishTime(const int64_t& _punishTime)
{
    m_punishTime = _punishTime;
    m_punishTimeHasBeenSet = true;
}

bool AclUserRule::PunishTimeHasBeenSet() const
{
    return m_punishTimeHasBeenSet;
}

string AclUserRule::GetPunishTimeUnit() const
{
    return m_punishTimeUnit;
}

void AclUserRule::SetPunishTimeUnit(const string& _punishTimeUnit)
{
    m_punishTimeUnit = _punishTimeUnit;
    m_punishTimeUnitHasBeenSet = true;
}

bool AclUserRule::PunishTimeUnitHasBeenSet() const
{
    return m_punishTimeUnitHasBeenSet;
}

string AclUserRule::GetName() const
{
    return m_name;
}

void AclUserRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AclUserRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t AclUserRule::GetPageId() const
{
    return m_pageId;
}

void AclUserRule::SetPageId(const int64_t& _pageId)
{
    m_pageId = _pageId;
    m_pageIdHasBeenSet = true;
}

bool AclUserRule::PageIdHasBeenSet() const
{
    return m_pageIdHasBeenSet;
}

string AclUserRule::GetCustomResponseId() const
{
    return m_customResponseId;
}

void AclUserRule::SetCustomResponseId(const string& _customResponseId)
{
    m_customResponseId = _customResponseId;
    m_customResponseIdHasBeenSet = true;
}

bool AclUserRule::CustomResponseIdHasBeenSet() const
{
    return m_customResponseIdHasBeenSet;
}

int64_t AclUserRule::GetResponseCode() const
{
    return m_responseCode;
}

void AclUserRule::SetResponseCode(const int64_t& _responseCode)
{
    m_responseCode = _responseCode;
    m_responseCodeHasBeenSet = true;
}

bool AclUserRule::ResponseCodeHasBeenSet() const
{
    return m_responseCodeHasBeenSet;
}

string AclUserRule::GetRedirectUrl() const
{
    return m_redirectUrl;
}

void AclUserRule::SetRedirectUrl(const string& _redirectUrl)
{
    m_redirectUrl = _redirectUrl;
    m_redirectUrlHasBeenSet = true;
}

bool AclUserRule::RedirectUrlHasBeenSet() const
{
    return m_redirectUrlHasBeenSet;
}

