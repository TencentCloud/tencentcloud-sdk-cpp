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

#include <tencentcloud/csip/v20221121/model/DspmIdentifyRuleDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmIdentifyRuleDetail::DspmIdentifyRuleDetail() :
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_levelIdHasBeenSet(false),
    m_levelNameHasBeenSet(false),
    m_levelScoreHasBeenSet(false)
{
}

CoreInternalOutcome DspmIdentifyRuleDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyRuleDetail.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyRuleDetail.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("LevelId") && !value["LevelId"].IsNull())
    {
        if (!value["LevelId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyRuleDetail.LevelId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_levelId = value["LevelId"].GetUint64();
        m_levelIdHasBeenSet = true;
    }

    if (value.HasMember("LevelName") && !value["LevelName"].IsNull())
    {
        if (!value["LevelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyRuleDetail.LevelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelName = string(value["LevelName"].GetString());
        m_levelNameHasBeenSet = true;
    }

    if (value.HasMember("LevelScore") && !value["LevelScore"].IsNull())
    {
        if (!value["LevelScore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyRuleDetail.LevelScore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_levelScore = value["LevelScore"].GetUint64();
        m_levelScoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmIdentifyRuleDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


uint64_t DspmIdentifyRuleDetail::GetRuleId() const
{
    return m_ruleId;
}

void DspmIdentifyRuleDetail::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DspmIdentifyRuleDetail::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string DspmIdentifyRuleDetail::GetRuleName() const
{
    return m_ruleName;
}

void DspmIdentifyRuleDetail::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool DspmIdentifyRuleDetail::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

uint64_t DspmIdentifyRuleDetail::GetLevelId() const
{
    return m_levelId;
}

void DspmIdentifyRuleDetail::SetLevelId(const uint64_t& _levelId)
{
    m_levelId = _levelId;
    m_levelIdHasBeenSet = true;
}

bool DspmIdentifyRuleDetail::LevelIdHasBeenSet() const
{
    return m_levelIdHasBeenSet;
}

string DspmIdentifyRuleDetail::GetLevelName() const
{
    return m_levelName;
}

void DspmIdentifyRuleDetail::SetLevelName(const string& _levelName)
{
    m_levelName = _levelName;
    m_levelNameHasBeenSet = true;
}

bool DspmIdentifyRuleDetail::LevelNameHasBeenSet() const
{
    return m_levelNameHasBeenSet;
}

uint64_t DspmIdentifyRuleDetail::GetLevelScore() const
{
    return m_levelScore;
}

void DspmIdentifyRuleDetail::SetLevelScore(const uint64_t& _levelScore)
{
    m_levelScore = _levelScore;
    m_levelScoreHasBeenSet = true;
}

bool DspmIdentifyRuleDetail::LevelScoreHasBeenSet() const
{
    return m_levelScoreHasBeenSet;
}

