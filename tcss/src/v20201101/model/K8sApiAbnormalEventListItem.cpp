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

#include <tencentcloud/tcss/v20201101/model/K8sApiAbnormalEventListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

K8sApiAbnormalEventListItem::K8sApiAbnormalEventListItem() :
    m_iDHasBeenSet(false),
    m_matchRuleTypeHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterRunningStatusHasBeenSet(false),
    m_firstCreateTimeHasBeenSet(false),
    m_lastCreateTimeHasBeenSet(false),
    m_alarmCountHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_descHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_matchRuleHasBeenSet(false)
{
}

CoreInternalOutcome K8sApiAbnormalEventListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventListItem.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("MatchRuleType") && !value["MatchRuleType"].IsNull())
    {
        if (!value["MatchRuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventListItem.MatchRuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchRuleType = string(value["MatchRuleType"].GetString());
        m_matchRuleTypeHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventListItem.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventListItem.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventListItem.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterRunningStatus") && !value["ClusterRunningStatus"].IsNull())
    {
        if (!value["ClusterRunningStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventListItem.ClusterRunningStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterRunningStatus = string(value["ClusterRunningStatus"].GetString());
        m_clusterRunningStatusHasBeenSet = true;
    }

    if (value.HasMember("FirstCreateTime") && !value["FirstCreateTime"].IsNull())
    {
        if (!value["FirstCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventListItem.FirstCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstCreateTime = string(value["FirstCreateTime"].GetString());
        m_firstCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("LastCreateTime") && !value["LastCreateTime"].IsNull())
    {
        if (!value["LastCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventListItem.LastCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastCreateTime = string(value["LastCreateTime"].GetString());
        m_lastCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("AlarmCount") && !value["AlarmCount"].IsNull())
    {
        if (!value["AlarmCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventListItem.AlarmCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmCount = value["AlarmCount"].GetUint64();
        m_alarmCountHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventListItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventListItem.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventListItem.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventListItem.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventListItem.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("MatchRule") && !value["MatchRule"].IsNull())
    {
        if (!value["MatchRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventListItem.MatchRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_matchRule.Deserialize(value["MatchRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_matchRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void K8sApiAbnormalEventListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_matchRuleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchRuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchRuleType.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterRunningStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterRunningStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterRunningStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_firstCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmCount, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_matchRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_matchRule.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t K8sApiAbnormalEventListItem::GetID() const
{
    return m_iD;
}

void K8sApiAbnormalEventListItem::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool K8sApiAbnormalEventListItem::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string K8sApiAbnormalEventListItem::GetMatchRuleType() const
{
    return m_matchRuleType;
}

void K8sApiAbnormalEventListItem::SetMatchRuleType(const string& _matchRuleType)
{
    m_matchRuleType = _matchRuleType;
    m_matchRuleTypeHasBeenSet = true;
}

bool K8sApiAbnormalEventListItem::MatchRuleTypeHasBeenSet() const
{
    return m_matchRuleTypeHasBeenSet;
}

string K8sApiAbnormalEventListItem::GetRiskLevel() const
{
    return m_riskLevel;
}

void K8sApiAbnormalEventListItem::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool K8sApiAbnormalEventListItem::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string K8sApiAbnormalEventListItem::GetClusterID() const
{
    return m_clusterID;
}

void K8sApiAbnormalEventListItem::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool K8sApiAbnormalEventListItem::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string K8sApiAbnormalEventListItem::GetClusterName() const
{
    return m_clusterName;
}

void K8sApiAbnormalEventListItem::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool K8sApiAbnormalEventListItem::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string K8sApiAbnormalEventListItem::GetClusterRunningStatus() const
{
    return m_clusterRunningStatus;
}

void K8sApiAbnormalEventListItem::SetClusterRunningStatus(const string& _clusterRunningStatus)
{
    m_clusterRunningStatus = _clusterRunningStatus;
    m_clusterRunningStatusHasBeenSet = true;
}

bool K8sApiAbnormalEventListItem::ClusterRunningStatusHasBeenSet() const
{
    return m_clusterRunningStatusHasBeenSet;
}

string K8sApiAbnormalEventListItem::GetFirstCreateTime() const
{
    return m_firstCreateTime;
}

void K8sApiAbnormalEventListItem::SetFirstCreateTime(const string& _firstCreateTime)
{
    m_firstCreateTime = _firstCreateTime;
    m_firstCreateTimeHasBeenSet = true;
}

bool K8sApiAbnormalEventListItem::FirstCreateTimeHasBeenSet() const
{
    return m_firstCreateTimeHasBeenSet;
}

string K8sApiAbnormalEventListItem::GetLastCreateTime() const
{
    return m_lastCreateTime;
}

void K8sApiAbnormalEventListItem::SetLastCreateTime(const string& _lastCreateTime)
{
    m_lastCreateTime = _lastCreateTime;
    m_lastCreateTimeHasBeenSet = true;
}

bool K8sApiAbnormalEventListItem::LastCreateTimeHasBeenSet() const
{
    return m_lastCreateTimeHasBeenSet;
}

uint64_t K8sApiAbnormalEventListItem::GetAlarmCount() const
{
    return m_alarmCount;
}

void K8sApiAbnormalEventListItem::SetAlarmCount(const uint64_t& _alarmCount)
{
    m_alarmCount = _alarmCount;
    m_alarmCountHasBeenSet = true;
}

bool K8sApiAbnormalEventListItem::AlarmCountHasBeenSet() const
{
    return m_alarmCountHasBeenSet;
}

string K8sApiAbnormalEventListItem::GetStatus() const
{
    return m_status;
}

void K8sApiAbnormalEventListItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool K8sApiAbnormalEventListItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string K8sApiAbnormalEventListItem::GetRuleType() const
{
    return m_ruleType;
}

void K8sApiAbnormalEventListItem::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool K8sApiAbnormalEventListItem::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string K8sApiAbnormalEventListItem::GetDesc() const
{
    return m_desc;
}

void K8sApiAbnormalEventListItem::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool K8sApiAbnormalEventListItem::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string K8sApiAbnormalEventListItem::GetSuggestion() const
{
    return m_suggestion;
}

void K8sApiAbnormalEventListItem::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool K8sApiAbnormalEventListItem::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string K8sApiAbnormalEventListItem::GetRuleName() const
{
    return m_ruleName;
}

void K8sApiAbnormalEventListItem::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool K8sApiAbnormalEventListItem::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

K8sApiAbnormalRuleScopeInfo K8sApiAbnormalEventListItem::GetMatchRule() const
{
    return m_matchRule;
}

void K8sApiAbnormalEventListItem::SetMatchRule(const K8sApiAbnormalRuleScopeInfo& _matchRule)
{
    m_matchRule = _matchRule;
    m_matchRuleHasBeenSet = true;
}

bool K8sApiAbnormalEventListItem::MatchRuleHasBeenSet() const
{
    return m_matchRuleHasBeenSet;
}

