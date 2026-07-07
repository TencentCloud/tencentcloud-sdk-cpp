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

#include <tencentcloud/csip/v20221121/model/DspmIdentifyComplianceRuleRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmIdentifyComplianceRuleRelation::DspmIdentifyComplianceRuleRelation() :
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_levelIdHasBeenSet(false),
    m_levelNameHasBeenSet(false),
    m_levelScoreHasBeenSet(false),
    m_structuredStatusHasBeenSet(false),
    m_unStructuredStatusHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome DspmIdentifyComplianceRuleRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyComplianceRuleRelation.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyComplianceRuleRelation.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("LevelId") && !value["LevelId"].IsNull())
    {
        if (!value["LevelId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyComplianceRuleRelation.LevelId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_levelId = value["LevelId"].GetUint64();
        m_levelIdHasBeenSet = true;
    }

    if (value.HasMember("LevelName") && !value["LevelName"].IsNull())
    {
        if (!value["LevelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyComplianceRuleRelation.LevelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelName = string(value["LevelName"].GetString());
        m_levelNameHasBeenSet = true;
    }

    if (value.HasMember("LevelScore") && !value["LevelScore"].IsNull())
    {
        if (!value["LevelScore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyComplianceRuleRelation.LevelScore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_levelScore = value["LevelScore"].GetUint64();
        m_levelScoreHasBeenSet = true;
    }

    if (value.HasMember("StructuredStatus") && !value["StructuredStatus"].IsNull())
    {
        if (!value["StructuredStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyComplianceRuleRelation.StructuredStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_structuredStatus = value["StructuredStatus"].GetUint64();
        m_structuredStatusHasBeenSet = true;
    }

    if (value.HasMember("UnStructuredStatus") && !value["UnStructuredStatus"].IsNull())
    {
        if (!value["UnStructuredStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyComplianceRuleRelation.UnStructuredStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unStructuredStatus = value["UnStructuredStatus"].GetUint64();
        m_unStructuredStatusHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyComplianceRuleRelation.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmIdentifyComplianceRuleRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_levelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelId, allocator);
    }

    if (m_levelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelScore, allocator);
    }

    if (m_structuredStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StructuredStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_structuredStatus, allocator);
    }

    if (m_unStructuredStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnStructuredStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unStructuredStatus, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


uint64_t DspmIdentifyComplianceRuleRelation::GetRuleId() const
{
    return m_ruleId;
}

void DspmIdentifyComplianceRuleRelation::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DspmIdentifyComplianceRuleRelation::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string DspmIdentifyComplianceRuleRelation::GetRuleName() const
{
    return m_ruleName;
}

void DspmIdentifyComplianceRuleRelation::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool DspmIdentifyComplianceRuleRelation::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

uint64_t DspmIdentifyComplianceRuleRelation::GetLevelId() const
{
    return m_levelId;
}

void DspmIdentifyComplianceRuleRelation::SetLevelId(const uint64_t& _levelId)
{
    m_levelId = _levelId;
    m_levelIdHasBeenSet = true;
}

bool DspmIdentifyComplianceRuleRelation::LevelIdHasBeenSet() const
{
    return m_levelIdHasBeenSet;
}

string DspmIdentifyComplianceRuleRelation::GetLevelName() const
{
    return m_levelName;
}

void DspmIdentifyComplianceRuleRelation::SetLevelName(const string& _levelName)
{
    m_levelName = _levelName;
    m_levelNameHasBeenSet = true;
}

bool DspmIdentifyComplianceRuleRelation::LevelNameHasBeenSet() const
{
    return m_levelNameHasBeenSet;
}

uint64_t DspmIdentifyComplianceRuleRelation::GetLevelScore() const
{
    return m_levelScore;
}

void DspmIdentifyComplianceRuleRelation::SetLevelScore(const uint64_t& _levelScore)
{
    m_levelScore = _levelScore;
    m_levelScoreHasBeenSet = true;
}

bool DspmIdentifyComplianceRuleRelation::LevelScoreHasBeenSet() const
{
    return m_levelScoreHasBeenSet;
}

uint64_t DspmIdentifyComplianceRuleRelation::GetStructuredStatus() const
{
    return m_structuredStatus;
}

void DspmIdentifyComplianceRuleRelation::SetStructuredStatus(const uint64_t& _structuredStatus)
{
    m_structuredStatus = _structuredStatus;
    m_structuredStatusHasBeenSet = true;
}

bool DspmIdentifyComplianceRuleRelation::StructuredStatusHasBeenSet() const
{
    return m_structuredStatusHasBeenSet;
}

uint64_t DspmIdentifyComplianceRuleRelation::GetUnStructuredStatus() const
{
    return m_unStructuredStatus;
}

void DspmIdentifyComplianceRuleRelation::SetUnStructuredStatus(const uint64_t& _unStructuredStatus)
{
    m_unStructuredStatus = _unStructuredStatus;
    m_unStructuredStatusHasBeenSet = true;
}

bool DspmIdentifyComplianceRuleRelation::UnStructuredStatusHasBeenSet() const
{
    return m_unStructuredStatusHasBeenSet;
}

uint64_t DspmIdentifyComplianceRuleRelation::GetStatus() const
{
    return m_status;
}

void DspmIdentifyComplianceRuleRelation::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DspmIdentifyComplianceRuleRelation::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

