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

#include <tencentcloud/tcss/v20201101/model/K8sApiAbnormalEventInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

K8sApiAbnormalEventInfo::K8sApiAbnormalEventInfo() :
    m_matchRuleNameHasBeenSet(false),
    m_matchRuleTypeHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterRunningStatusHasBeenSet(false),
    m_firstCreateTimeHasBeenSet(false),
    m_lastCreateTimeHasBeenSet(false),
    m_alarmCountHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_clusterMasterIPHasBeenSet(false),
    m_k8sVersionHasBeenSet(false),
    m_runningComponentHasBeenSet(false),
    m_descHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_infoHasBeenSet(false),
    m_matchRuleIDHasBeenSet(false),
    m_highLightFieldsHasBeenSet(false),
    m_matchRuleHasBeenSet(false)
{
}

CoreInternalOutcome K8sApiAbnormalEventInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MatchRuleName") && !value["MatchRuleName"].IsNull())
    {
        if (!value["MatchRuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventInfo.MatchRuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchRuleName = string(value["MatchRuleName"].GetString());
        m_matchRuleNameHasBeenSet = true;
    }

    if (value.HasMember("MatchRuleType") && !value["MatchRuleType"].IsNull())
    {
        if (!value["MatchRuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventInfo.MatchRuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchRuleType = string(value["MatchRuleType"].GetString());
        m_matchRuleTypeHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventInfo.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventInfo.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterRunningStatus") && !value["ClusterRunningStatus"].IsNull())
    {
        if (!value["ClusterRunningStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventInfo.ClusterRunningStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterRunningStatus = string(value["ClusterRunningStatus"].GetString());
        m_clusterRunningStatusHasBeenSet = true;
    }

    if (value.HasMember("FirstCreateTime") && !value["FirstCreateTime"].IsNull())
    {
        if (!value["FirstCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventInfo.FirstCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstCreateTime = string(value["FirstCreateTime"].GetString());
        m_firstCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("LastCreateTime") && !value["LastCreateTime"].IsNull())
    {
        if (!value["LastCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventInfo.LastCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastCreateTime = string(value["LastCreateTime"].GetString());
        m_lastCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("AlarmCount") && !value["AlarmCount"].IsNull())
    {
        if (!value["AlarmCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventInfo.AlarmCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmCount = value["AlarmCount"].GetUint64();
        m_alarmCountHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ClusterMasterIP") && !value["ClusterMasterIP"].IsNull())
    {
        if (!value["ClusterMasterIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventInfo.ClusterMasterIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterMasterIP = string(value["ClusterMasterIP"].GetString());
        m_clusterMasterIPHasBeenSet = true;
    }

    if (value.HasMember("K8sVersion") && !value["K8sVersion"].IsNull())
    {
        if (!value["K8sVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventInfo.K8sVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_k8sVersion = string(value["K8sVersion"].GetString());
        m_k8sVersionHasBeenSet = true;
    }

    if (value.HasMember("RunningComponent") && !value["RunningComponent"].IsNull())
    {
        if (!value["RunningComponent"].IsArray())
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventInfo.RunningComponent` is not array type"));

        const rapidjson::Value &tmpValue = value["RunningComponent"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_runningComponent.push_back((*itr).GetString());
        }
        m_runningComponentHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventInfo.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventInfo.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Info") && !value["Info"].IsNull())
    {
        if (!value["Info"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventInfo.Info` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_info = string(value["Info"].GetString());
        m_infoHasBeenSet = true;
    }

    if (value.HasMember("MatchRuleID") && !value["MatchRuleID"].IsNull())
    {
        if (!value["MatchRuleID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventInfo.MatchRuleID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchRuleID = string(value["MatchRuleID"].GetString());
        m_matchRuleIDHasBeenSet = true;
    }

    if (value.HasMember("HighLightFields") && !value["HighLightFields"].IsNull())
    {
        if (!value["HighLightFields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventInfo.HighLightFields` is not array type"));

        const rapidjson::Value &tmpValue = value["HighLightFields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_highLightFields.push_back((*itr).GetString());
        }
        m_highLightFieldsHasBeenSet = true;
    }

    if (value.HasMember("MatchRule") && !value["MatchRule"].IsNull())
    {
        if (!value["MatchRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalEventInfo.MatchRule` is not object type").SetRequestId(requestId));
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

void K8sApiAbnormalEventInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_matchRuleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchRuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchRuleName.c_str(), allocator).Move(), allocator);
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

    if (m_clusterMasterIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterMasterIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterMasterIP.c_str(), allocator).Move(), allocator);
    }

    if (m_k8sVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "K8sVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_k8sVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_runningComponentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningComponent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_runningComponent.begin(); itr != m_runningComponent.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_infoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Info";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_info.c_str(), allocator).Move(), allocator);
    }

    if (m_matchRuleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchRuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchRuleID.c_str(), allocator).Move(), allocator);
    }

    if (m_highLightFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighLightFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_highLightFields.begin(); itr != m_highLightFields.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


string K8sApiAbnormalEventInfo::GetMatchRuleName() const
{
    return m_matchRuleName;
}

void K8sApiAbnormalEventInfo::SetMatchRuleName(const string& _matchRuleName)
{
    m_matchRuleName = _matchRuleName;
    m_matchRuleNameHasBeenSet = true;
}

bool K8sApiAbnormalEventInfo::MatchRuleNameHasBeenSet() const
{
    return m_matchRuleNameHasBeenSet;
}

string K8sApiAbnormalEventInfo::GetMatchRuleType() const
{
    return m_matchRuleType;
}

void K8sApiAbnormalEventInfo::SetMatchRuleType(const string& _matchRuleType)
{
    m_matchRuleType = _matchRuleType;
    m_matchRuleTypeHasBeenSet = true;
}

bool K8sApiAbnormalEventInfo::MatchRuleTypeHasBeenSet() const
{
    return m_matchRuleTypeHasBeenSet;
}

string K8sApiAbnormalEventInfo::GetRiskLevel() const
{
    return m_riskLevel;
}

void K8sApiAbnormalEventInfo::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool K8sApiAbnormalEventInfo::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string K8sApiAbnormalEventInfo::GetClusterID() const
{
    return m_clusterID;
}

void K8sApiAbnormalEventInfo::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool K8sApiAbnormalEventInfo::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string K8sApiAbnormalEventInfo::GetClusterName() const
{
    return m_clusterName;
}

void K8sApiAbnormalEventInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool K8sApiAbnormalEventInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string K8sApiAbnormalEventInfo::GetClusterRunningStatus() const
{
    return m_clusterRunningStatus;
}

void K8sApiAbnormalEventInfo::SetClusterRunningStatus(const string& _clusterRunningStatus)
{
    m_clusterRunningStatus = _clusterRunningStatus;
    m_clusterRunningStatusHasBeenSet = true;
}

bool K8sApiAbnormalEventInfo::ClusterRunningStatusHasBeenSet() const
{
    return m_clusterRunningStatusHasBeenSet;
}

string K8sApiAbnormalEventInfo::GetFirstCreateTime() const
{
    return m_firstCreateTime;
}

void K8sApiAbnormalEventInfo::SetFirstCreateTime(const string& _firstCreateTime)
{
    m_firstCreateTime = _firstCreateTime;
    m_firstCreateTimeHasBeenSet = true;
}

bool K8sApiAbnormalEventInfo::FirstCreateTimeHasBeenSet() const
{
    return m_firstCreateTimeHasBeenSet;
}

string K8sApiAbnormalEventInfo::GetLastCreateTime() const
{
    return m_lastCreateTime;
}

void K8sApiAbnormalEventInfo::SetLastCreateTime(const string& _lastCreateTime)
{
    m_lastCreateTime = _lastCreateTime;
    m_lastCreateTimeHasBeenSet = true;
}

bool K8sApiAbnormalEventInfo::LastCreateTimeHasBeenSet() const
{
    return m_lastCreateTimeHasBeenSet;
}

uint64_t K8sApiAbnormalEventInfo::GetAlarmCount() const
{
    return m_alarmCount;
}

void K8sApiAbnormalEventInfo::SetAlarmCount(const uint64_t& _alarmCount)
{
    m_alarmCount = _alarmCount;
    m_alarmCountHasBeenSet = true;
}

bool K8sApiAbnormalEventInfo::AlarmCountHasBeenSet() const
{
    return m_alarmCountHasBeenSet;
}

string K8sApiAbnormalEventInfo::GetStatus() const
{
    return m_status;
}

void K8sApiAbnormalEventInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool K8sApiAbnormalEventInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string K8sApiAbnormalEventInfo::GetClusterMasterIP() const
{
    return m_clusterMasterIP;
}

void K8sApiAbnormalEventInfo::SetClusterMasterIP(const string& _clusterMasterIP)
{
    m_clusterMasterIP = _clusterMasterIP;
    m_clusterMasterIPHasBeenSet = true;
}

bool K8sApiAbnormalEventInfo::ClusterMasterIPHasBeenSet() const
{
    return m_clusterMasterIPHasBeenSet;
}

string K8sApiAbnormalEventInfo::GetK8sVersion() const
{
    return m_k8sVersion;
}

void K8sApiAbnormalEventInfo::SetK8sVersion(const string& _k8sVersion)
{
    m_k8sVersion = _k8sVersion;
    m_k8sVersionHasBeenSet = true;
}

bool K8sApiAbnormalEventInfo::K8sVersionHasBeenSet() const
{
    return m_k8sVersionHasBeenSet;
}

vector<string> K8sApiAbnormalEventInfo::GetRunningComponent() const
{
    return m_runningComponent;
}

void K8sApiAbnormalEventInfo::SetRunningComponent(const vector<string>& _runningComponent)
{
    m_runningComponent = _runningComponent;
    m_runningComponentHasBeenSet = true;
}

bool K8sApiAbnormalEventInfo::RunningComponentHasBeenSet() const
{
    return m_runningComponentHasBeenSet;
}

string K8sApiAbnormalEventInfo::GetDesc() const
{
    return m_desc;
}

void K8sApiAbnormalEventInfo::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool K8sApiAbnormalEventInfo::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string K8sApiAbnormalEventInfo::GetSuggestion() const
{
    return m_suggestion;
}

void K8sApiAbnormalEventInfo::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool K8sApiAbnormalEventInfo::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string K8sApiAbnormalEventInfo::GetInfo() const
{
    return m_info;
}

void K8sApiAbnormalEventInfo::SetInfo(const string& _info)
{
    m_info = _info;
    m_infoHasBeenSet = true;
}

bool K8sApiAbnormalEventInfo::InfoHasBeenSet() const
{
    return m_infoHasBeenSet;
}

string K8sApiAbnormalEventInfo::GetMatchRuleID() const
{
    return m_matchRuleID;
}

void K8sApiAbnormalEventInfo::SetMatchRuleID(const string& _matchRuleID)
{
    m_matchRuleID = _matchRuleID;
    m_matchRuleIDHasBeenSet = true;
}

bool K8sApiAbnormalEventInfo::MatchRuleIDHasBeenSet() const
{
    return m_matchRuleIDHasBeenSet;
}

vector<string> K8sApiAbnormalEventInfo::GetHighLightFields() const
{
    return m_highLightFields;
}

void K8sApiAbnormalEventInfo::SetHighLightFields(const vector<string>& _highLightFields)
{
    m_highLightFields = _highLightFields;
    m_highLightFieldsHasBeenSet = true;
}

bool K8sApiAbnormalEventInfo::HighLightFieldsHasBeenSet() const
{
    return m_highLightFieldsHasBeenSet;
}

K8sApiAbnormalRuleScopeInfo K8sApiAbnormalEventInfo::GetMatchRule() const
{
    return m_matchRule;
}

void K8sApiAbnormalEventInfo::SetMatchRule(const K8sApiAbnormalRuleScopeInfo& _matchRule)
{
    m_matchRule = _matchRule;
    m_matchRuleHasBeenSet = true;
}

bool K8sApiAbnormalEventInfo::MatchRuleHasBeenSet() const
{
    return m_matchRuleHasBeenSet;
}

