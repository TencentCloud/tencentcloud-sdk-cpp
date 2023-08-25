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

#include <tencentcloud/dsgc/v20190723/model/RuleDistribution.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

RuleDistribution::RuleDistribution() :
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_levelIdHasBeenSet(false),
    m_levelNameHasBeenSet(false),
    m_ruleCntHasBeenSet(false)
{
}

CoreInternalOutcome RuleDistribution::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDistribution.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDistribution.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("LevelId") && !value["LevelId"].IsNull())
    {
        if (!value["LevelId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDistribution.LevelId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_levelId = value["LevelId"].GetInt64();
        m_levelIdHasBeenSet = true;
    }

    if (value.HasMember("LevelName") && !value["LevelName"].IsNull())
    {
        if (!value["LevelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDistribution.LevelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelName = string(value["LevelName"].GetString());
        m_levelNameHasBeenSet = true;
    }

    if (value.HasMember("RuleCnt") && !value["RuleCnt"].IsNull())
    {
        if (!value["RuleCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDistribution.RuleCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleCnt = value["RuleCnt"].GetInt64();
        m_ruleCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleDistribution::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_ruleCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleCnt, allocator);
    }

}


int64_t RuleDistribution::GetRuleId() const
{
    return m_ruleId;
}

void RuleDistribution::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool RuleDistribution::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string RuleDistribution::GetRuleName() const
{
    return m_ruleName;
}

void RuleDistribution::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool RuleDistribution::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

int64_t RuleDistribution::GetLevelId() const
{
    return m_levelId;
}

void RuleDistribution::SetLevelId(const int64_t& _levelId)
{
    m_levelId = _levelId;
    m_levelIdHasBeenSet = true;
}

bool RuleDistribution::LevelIdHasBeenSet() const
{
    return m_levelIdHasBeenSet;
}

string RuleDistribution::GetLevelName() const
{
    return m_levelName;
}

void RuleDistribution::SetLevelName(const string& _levelName)
{
    m_levelName = _levelName;
    m_levelNameHasBeenSet = true;
}

bool RuleDistribution::LevelNameHasBeenSet() const
{
    return m_levelNameHasBeenSet;
}

int64_t RuleDistribution::GetRuleCnt() const
{
    return m_ruleCnt;
}

void RuleDistribution::SetRuleCnt(const int64_t& _ruleCnt)
{
    m_ruleCnt = _ruleCnt;
    m_ruleCntHasBeenSet = true;
}

bool RuleDistribution::RuleCntHasBeenSet() const
{
    return m_ruleCntHasBeenSet;
}

