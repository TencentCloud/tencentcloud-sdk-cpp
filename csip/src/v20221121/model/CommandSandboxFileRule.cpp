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

#include <tencentcloud/csip/v20221121/model/CommandSandboxFileRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CommandSandboxFileRule::CommandSandboxFileRule() :
    m_ruleIDHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_ruleContentHasBeenSet(false)
{
}

CoreInternalOutcome CommandSandboxFileRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CommandSandboxFileRule.RuleID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = value["RuleID"].GetInt64();
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommandSandboxFileRule.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommandSandboxFileRule.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("RuleContent") && !value["RuleContent"].IsNull())
    {
        if (!value["RuleContent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CommandSandboxFileRule.RuleContent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ruleContent.Deserialize(value["RuleContent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ruleContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommandSandboxFileRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleID, allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ruleContent.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t CommandSandboxFileRule::GetRuleID() const
{
    return m_ruleID;
}

void CommandSandboxFileRule::SetRuleID(const int64_t& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool CommandSandboxFileRule::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string CommandSandboxFileRule::GetRuleType() const
{
    return m_ruleType;
}

void CommandSandboxFileRule::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool CommandSandboxFileRule::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string CommandSandboxFileRule::GetUpdateTime() const
{
    return m_updateTime;
}

void CommandSandboxFileRule::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CommandSandboxFileRule::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

CommandSandboxFileRuleBase CommandSandboxFileRule::GetRuleContent() const
{
    return m_ruleContent;
}

void CommandSandboxFileRule::SetRuleContent(const CommandSandboxFileRuleBase& _ruleContent)
{
    m_ruleContent = _ruleContent;
    m_ruleContentHasBeenSet = true;
}

bool CommandSandboxFileRule::RuleContentHasBeenSet() const
{
    return m_ruleContentHasBeenSet;
}

