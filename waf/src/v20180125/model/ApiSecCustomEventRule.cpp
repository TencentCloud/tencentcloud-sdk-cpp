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

#include <tencentcloud/waf/v20180125/model/ApiSecCustomEventRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ApiSecCustomEventRule::ApiSecCustomEventRule() :
    m_ruleNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_apiNameOpHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_matchRuleListHasBeenSet(false),
    m_statRuleListHasBeenSet(false),
    m_reqFrequencyHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

CoreInternalOutcome ApiSecCustomEventRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecCustomEventRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecCustomEventRule.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ApiNameOp") && !value["ApiNameOp"].IsNull())
    {
        if (!value["ApiNameOp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiSecCustomEventRule.ApiNameOp` is not array type"));

        const rapidjson::Value &tmpValue = value["ApiNameOp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiNameOp item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_apiNameOp.push_back(item);
        }
        m_apiNameOpHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecCustomEventRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecCustomEventRule.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("MatchRuleList") && !value["MatchRuleList"].IsNull())
    {
        if (!value["MatchRuleList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiSecCustomEventRule.MatchRuleList` is not array type"));

        const rapidjson::Value &tmpValue = value["MatchRuleList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiSecSceneRuleEntry item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_matchRuleList.push_back(item);
        }
        m_matchRuleListHasBeenSet = true;
    }

    if (value.HasMember("StatRuleList") && !value["StatRuleList"].IsNull())
    {
        if (!value["StatRuleList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiSecCustomEventRule.StatRuleList` is not array type"));

        const rapidjson::Value &tmpValue = value["StatRuleList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiSecSceneRuleEntry item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_statRuleList.push_back(item);
        }
        m_statRuleListHasBeenSet = true;
    }

    if (value.HasMember("ReqFrequency") && !value["ReqFrequency"].IsNull())
    {
        if (!value["ReqFrequency"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiSecCustomEventRule.ReqFrequency` is not array type"));

        const rapidjson::Value &tmpValue = value["ReqFrequency"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_reqFrequency.push_back((*itr).GetInt64());
        }
        m_reqFrequencyHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecCustomEventRule.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecCustomEventRule.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiSecCustomEventRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_apiNameOpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiNameOp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_apiNameOp.begin(); itr != m_apiNameOp.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_matchRuleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchRuleList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_matchRuleList.begin(); itr != m_matchRuleList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statRuleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatRuleList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_statRuleList.begin(); itr != m_statRuleList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_reqFrequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqFrequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_reqFrequency.begin(); itr != m_reqFrequency.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

}


string ApiSecCustomEventRule::GetRuleName() const
{
    return m_ruleName;
}

void ApiSecCustomEventRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ApiSecCustomEventRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

int64_t ApiSecCustomEventRule::GetStatus() const
{
    return m_status;
}

void ApiSecCustomEventRule::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ApiSecCustomEventRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<ApiNameOp> ApiSecCustomEventRule::GetApiNameOp() const
{
    return m_apiNameOp;
}

void ApiSecCustomEventRule::SetApiNameOp(const vector<ApiNameOp>& _apiNameOp)
{
    m_apiNameOp = _apiNameOp;
    m_apiNameOpHasBeenSet = true;
}

bool ApiSecCustomEventRule::ApiNameOpHasBeenSet() const
{
    return m_apiNameOpHasBeenSet;
}

string ApiSecCustomEventRule::GetDescription() const
{
    return m_description;
}

void ApiSecCustomEventRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ApiSecCustomEventRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t ApiSecCustomEventRule::GetUpdateTime() const
{
    return m_updateTime;
}

void ApiSecCustomEventRule::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ApiSecCustomEventRule::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<ApiSecSceneRuleEntry> ApiSecCustomEventRule::GetMatchRuleList() const
{
    return m_matchRuleList;
}

void ApiSecCustomEventRule::SetMatchRuleList(const vector<ApiSecSceneRuleEntry>& _matchRuleList)
{
    m_matchRuleList = _matchRuleList;
    m_matchRuleListHasBeenSet = true;
}

bool ApiSecCustomEventRule::MatchRuleListHasBeenSet() const
{
    return m_matchRuleListHasBeenSet;
}

vector<ApiSecSceneRuleEntry> ApiSecCustomEventRule::GetStatRuleList() const
{
    return m_statRuleList;
}

void ApiSecCustomEventRule::SetStatRuleList(const vector<ApiSecSceneRuleEntry>& _statRuleList)
{
    m_statRuleList = _statRuleList;
    m_statRuleListHasBeenSet = true;
}

bool ApiSecCustomEventRule::StatRuleListHasBeenSet() const
{
    return m_statRuleListHasBeenSet;
}

vector<int64_t> ApiSecCustomEventRule::GetReqFrequency() const
{
    return m_reqFrequency;
}

void ApiSecCustomEventRule::SetReqFrequency(const vector<int64_t>& _reqFrequency)
{
    m_reqFrequency = _reqFrequency;
    m_reqFrequencyHasBeenSet = true;
}

bool ApiSecCustomEventRule::ReqFrequencyHasBeenSet() const
{
    return m_reqFrequencyHasBeenSet;
}

string ApiSecCustomEventRule::GetRiskLevel() const
{
    return m_riskLevel;
}

void ApiSecCustomEventRule::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool ApiSecCustomEventRule::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string ApiSecCustomEventRule::GetSource() const
{
    return m_source;
}

void ApiSecCustomEventRule::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ApiSecCustomEventRule::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

