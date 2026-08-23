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

#include <tencentcloud/csip/v20221121/model/CommandSandboxFileRuleBase.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CommandSandboxFileRuleBase::CommandSandboxFileRuleBase() :
    m_ruleNameHasBeenSet(false),
    m_belongAssetTypeHasBeenSet(false),
    m_effectScopeHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_pathWhitelistHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome CommandSandboxFileRuleBase::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommandSandboxFileRuleBase.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("BelongAssetType") && !value["BelongAssetType"].IsNull())
    {
        if (!value["BelongAssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommandSandboxFileRuleBase.BelongAssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_belongAssetType = string(value["BelongAssetType"].GetString());
        m_belongAssetTypeHasBeenSet = true;
    }

    if (value.HasMember("EffectScope") && !value["EffectScope"].IsNull())
    {
        if (!value["EffectScope"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CommandSandboxFileRuleBase.EffectScope` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_effectScope.Deserialize(value["EffectScope"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_effectScopeHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommandSandboxFileRuleBase.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("PathWhitelist") && !value["PathWhitelist"].IsNull())
    {
        if (!value["PathWhitelist"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CommandSandboxFileRuleBase.PathWhitelist` is not array type"));

        const rapidjson::Value &tmpValue = value["PathWhitelist"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_pathWhitelist.push_back((*itr).GetString());
        }
        m_pathWhitelistHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommandSandboxFileRuleBase.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommandSandboxFileRuleBase::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_belongAssetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BelongAssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_belongAssetType.c_str(), allocator).Move(), allocator);
    }

    if (m_effectScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_effectScope.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_pathWhitelistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathWhitelist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_pathWhitelist.begin(); itr != m_pathWhitelist.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string CommandSandboxFileRuleBase::GetRuleName() const
{
    return m_ruleName;
}

void CommandSandboxFileRuleBase::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool CommandSandboxFileRuleBase::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string CommandSandboxFileRuleBase::GetBelongAssetType() const
{
    return m_belongAssetType;
}

void CommandSandboxFileRuleBase::SetBelongAssetType(const string& _belongAssetType)
{
    m_belongAssetType = _belongAssetType;
    m_belongAssetTypeHasBeenSet = true;
}

bool CommandSandboxFileRuleBase::BelongAssetTypeHasBeenSet() const
{
    return m_belongAssetTypeHasBeenSet;
}

TrafficSandboxEffectScope CommandSandboxFileRuleBase::GetEffectScope() const
{
    return m_effectScope;
}

void CommandSandboxFileRuleBase::SetEffectScope(const TrafficSandboxEffectScope& _effectScope)
{
    m_effectScope = _effectScope;
    m_effectScopeHasBeenSet = true;
}

bool CommandSandboxFileRuleBase::EffectScopeHasBeenSet() const
{
    return m_effectScopeHasBeenSet;
}

string CommandSandboxFileRuleBase::GetAction() const
{
    return m_action;
}

void CommandSandboxFileRuleBase::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool CommandSandboxFileRuleBase::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

vector<string> CommandSandboxFileRuleBase::GetPathWhitelist() const
{
    return m_pathWhitelist;
}

void CommandSandboxFileRuleBase::SetPathWhitelist(const vector<string>& _pathWhitelist)
{
    m_pathWhitelist = _pathWhitelist;
    m_pathWhitelistHasBeenSet = true;
}

bool CommandSandboxFileRuleBase::PathWhitelistHasBeenSet() const
{
    return m_pathWhitelistHasBeenSet;
}

string CommandSandboxFileRuleBase::GetStatus() const
{
    return m_status;
}

void CommandSandboxFileRuleBase::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CommandSandboxFileRuleBase::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

