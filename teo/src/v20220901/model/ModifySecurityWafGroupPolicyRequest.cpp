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

#include <tencentcloud/teo/v20220901/model/ModifySecurityWafGroupPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifySecurityWafGroupPolicyRequest::ModifySecurityWafGroupPolicyRequest() :
    m_zoneIdHasBeenSet(false),
    m_entityHasBeenSet(false),
    m_switchHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_wafRulesHasBeenSet(false),
    m_aiRuleHasBeenSet(false),
    m_wafGroupsHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
}

string ModifySecurityWafGroupPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_entityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entity.c_str(), allocator).Move(), allocator);
    }

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_wafRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WafRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_wafRules.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_aiRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiRule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_wafGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WafGroups";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_wafGroups.begin(); itr != m_wafGroups.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySecurityWafGroupPolicyRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifySecurityWafGroupPolicyRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifySecurityWafGroupPolicyRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifySecurityWafGroupPolicyRequest::GetEntity() const
{
    return m_entity;
}

void ModifySecurityWafGroupPolicyRequest::SetEntity(const string& _entity)
{
    m_entity = _entity;
    m_entityHasBeenSet = true;
}

bool ModifySecurityWafGroupPolicyRequest::EntityHasBeenSet() const
{
    return m_entityHasBeenSet;
}

string ModifySecurityWafGroupPolicyRequest::GetSwitch() const
{
    return m_switch;
}

void ModifySecurityWafGroupPolicyRequest::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool ModifySecurityWafGroupPolicyRequest::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string ModifySecurityWafGroupPolicyRequest::GetLevel() const
{
    return m_level;
}

void ModifySecurityWafGroupPolicyRequest::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool ModifySecurityWafGroupPolicyRequest::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string ModifySecurityWafGroupPolicyRequest::GetMode() const
{
    return m_mode;
}

void ModifySecurityWafGroupPolicyRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ModifySecurityWafGroupPolicyRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

WafRule ModifySecurityWafGroupPolicyRequest::GetWafRules() const
{
    return m_wafRules;
}

void ModifySecurityWafGroupPolicyRequest::SetWafRules(const WafRule& _wafRules)
{
    m_wafRules = _wafRules;
    m_wafRulesHasBeenSet = true;
}

bool ModifySecurityWafGroupPolicyRequest::WafRulesHasBeenSet() const
{
    return m_wafRulesHasBeenSet;
}

AiRule ModifySecurityWafGroupPolicyRequest::GetAiRule() const
{
    return m_aiRule;
}

void ModifySecurityWafGroupPolicyRequest::SetAiRule(const AiRule& _aiRule)
{
    m_aiRule = _aiRule;
    m_aiRuleHasBeenSet = true;
}

bool ModifySecurityWafGroupPolicyRequest::AiRuleHasBeenSet() const
{
    return m_aiRuleHasBeenSet;
}

vector<WafGroup> ModifySecurityWafGroupPolicyRequest::GetWafGroups() const
{
    return m_wafGroups;
}

void ModifySecurityWafGroupPolicyRequest::SetWafGroups(const vector<WafGroup>& _wafGroups)
{
    m_wafGroups = _wafGroups;
    m_wafGroupsHasBeenSet = true;
}

bool ModifySecurityWafGroupPolicyRequest::WafGroupsHasBeenSet() const
{
    return m_wafGroupsHasBeenSet;
}

string ModifySecurityWafGroupPolicyRequest::GetTemplateId() const
{
    return m_templateId;
}

void ModifySecurityWafGroupPolicyRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ModifySecurityWafGroupPolicyRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}


