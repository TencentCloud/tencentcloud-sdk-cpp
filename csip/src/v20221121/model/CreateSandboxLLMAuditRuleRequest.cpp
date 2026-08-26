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

#include <tencentcloud/csip/v20221121/model/CreateSandboxLLMAuditRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateSandboxLLMAuditRuleRequest::CreateSandboxLLMAuditRuleRequest() :
    m_ruleNameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_belongAssetTypeHasBeenSet(false),
    m_systemRuleIDListHasBeenSet(false),
    m_effectScopeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ruleActionHasBeenSet(false)
{
}

string CreateSandboxLLMAuditRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_belongAssetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BelongAssetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_belongAssetType.c_str(), allocator).Move(), allocator);
    }

    if (m_systemRuleIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemRuleIDList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_systemRuleIDList.begin(); itr != m_systemRuleIDList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_effectScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_effectScope.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleAction.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSandboxLLMAuditRuleRequest::GetRuleName() const
{
    return m_ruleName;
}

void CreateSandboxLLMAuditRuleRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool CreateSandboxLLMAuditRuleRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string CreateSandboxLLMAuditRuleRequest::GetLevel() const
{
    return m_level;
}

void CreateSandboxLLMAuditRuleRequest::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool CreateSandboxLLMAuditRuleRequest::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string CreateSandboxLLMAuditRuleRequest::GetBelongAssetType() const
{
    return m_belongAssetType;
}

void CreateSandboxLLMAuditRuleRequest::SetBelongAssetType(const string& _belongAssetType)
{
    m_belongAssetType = _belongAssetType;
    m_belongAssetTypeHasBeenSet = true;
}

bool CreateSandboxLLMAuditRuleRequest::BelongAssetTypeHasBeenSet() const
{
    return m_belongAssetTypeHasBeenSet;
}

vector<string> CreateSandboxLLMAuditRuleRequest::GetSystemRuleIDList() const
{
    return m_systemRuleIDList;
}

void CreateSandboxLLMAuditRuleRequest::SetSystemRuleIDList(const vector<string>& _systemRuleIDList)
{
    m_systemRuleIDList = _systemRuleIDList;
    m_systemRuleIDListHasBeenSet = true;
}

bool CreateSandboxLLMAuditRuleRequest::SystemRuleIDListHasBeenSet() const
{
    return m_systemRuleIDListHasBeenSet;
}

TrafficSandboxEffectScope CreateSandboxLLMAuditRuleRequest::GetEffectScope() const
{
    return m_effectScope;
}

void CreateSandboxLLMAuditRuleRequest::SetEffectScope(const TrafficSandboxEffectScope& _effectScope)
{
    m_effectScope = _effectScope;
    m_effectScopeHasBeenSet = true;
}

bool CreateSandboxLLMAuditRuleRequest::EffectScopeHasBeenSet() const
{
    return m_effectScopeHasBeenSet;
}

string CreateSandboxLLMAuditRuleRequest::GetStatus() const
{
    return m_status;
}

void CreateSandboxLLMAuditRuleRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateSandboxLLMAuditRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CreateSandboxLLMAuditRuleRequest::GetRuleAction() const
{
    return m_ruleAction;
}

void CreateSandboxLLMAuditRuleRequest::SetRuleAction(const string& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool CreateSandboxLLMAuditRuleRequest::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}


