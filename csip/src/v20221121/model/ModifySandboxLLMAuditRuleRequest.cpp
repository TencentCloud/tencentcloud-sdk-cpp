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

#include <tencentcloud/csip/v20221121/model/ModifySandboxLLMAuditRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifySandboxLLMAuditRuleRequest::ModifySandboxLLMAuditRuleRequest() :
    m_iDHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_systemRuleIDListHasBeenSet(false),
    m_effectScopeHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string ModifySandboxLLMAuditRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iD, allocator);
    }

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

    if (m_ruleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleAction.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifySandboxLLMAuditRuleRequest::GetID() const
{
    return m_iD;
}

void ModifySandboxLLMAuditRuleRequest::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ModifySandboxLLMAuditRuleRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string ModifySandboxLLMAuditRuleRequest::GetRuleName() const
{
    return m_ruleName;
}

void ModifySandboxLLMAuditRuleRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ModifySandboxLLMAuditRuleRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string ModifySandboxLLMAuditRuleRequest::GetLevel() const
{
    return m_level;
}

void ModifySandboxLLMAuditRuleRequest::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool ModifySandboxLLMAuditRuleRequest::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

vector<string> ModifySandboxLLMAuditRuleRequest::GetSystemRuleIDList() const
{
    return m_systemRuleIDList;
}

void ModifySandboxLLMAuditRuleRequest::SetSystemRuleIDList(const vector<string>& _systemRuleIDList)
{
    m_systemRuleIDList = _systemRuleIDList;
    m_systemRuleIDListHasBeenSet = true;
}

bool ModifySandboxLLMAuditRuleRequest::SystemRuleIDListHasBeenSet() const
{
    return m_systemRuleIDListHasBeenSet;
}

TrafficSandboxEffectScope ModifySandboxLLMAuditRuleRequest::GetEffectScope() const
{
    return m_effectScope;
}

void ModifySandboxLLMAuditRuleRequest::SetEffectScope(const TrafficSandboxEffectScope& _effectScope)
{
    m_effectScope = _effectScope;
    m_effectScopeHasBeenSet = true;
}

bool ModifySandboxLLMAuditRuleRequest::EffectScopeHasBeenSet() const
{
    return m_effectScopeHasBeenSet;
}

string ModifySandboxLLMAuditRuleRequest::GetRuleAction() const
{
    return m_ruleAction;
}

void ModifySandboxLLMAuditRuleRequest::SetRuleAction(const string& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool ModifySandboxLLMAuditRuleRequest::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

string ModifySandboxLLMAuditRuleRequest::GetStatus() const
{
    return m_status;
}

void ModifySandboxLLMAuditRuleRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifySandboxLLMAuditRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


