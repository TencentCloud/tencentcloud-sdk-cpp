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

#include <tencentcloud/waf/v20180125/model/ModifyBotIdRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyBotIdRuleRequest::ModifyBotIdRuleRequest() :
    m_domainHasBeenSet(false),
    m_sceneIdHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_globalSwitchHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_globalRedirectHasBeenSet(false),
    m_protectLevelHasBeenSet(false)
{
}

string ModifyBotIdRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sceneId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_globalSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_globalSwitch, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_ruleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleAction.c_str(), allocator).Move(), allocator);
    }

    if (m_globalRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalRedirect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_globalRedirect.c_str(), allocator).Move(), allocator);
    }

    if (m_protectLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protectLevel.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyBotIdRuleRequest::GetDomain() const
{
    return m_domain;
}

void ModifyBotIdRuleRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyBotIdRuleRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ModifyBotIdRuleRequest::GetSceneId() const
{
    return m_sceneId;
}

void ModifyBotIdRuleRequest::SetSceneId(const string& _sceneId)
{
    m_sceneId = _sceneId;
    m_sceneIdHasBeenSet = true;
}

bool ModifyBotIdRuleRequest::SceneIdHasBeenSet() const
{
    return m_sceneIdHasBeenSet;
}

vector<BotIdConfig> ModifyBotIdRuleRequest::GetData() const
{
    return m_data;
}

void ModifyBotIdRuleRequest::SetData(const vector<BotIdConfig>& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool ModifyBotIdRuleRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

int64_t ModifyBotIdRuleRequest::GetGlobalSwitch() const
{
    return m_globalSwitch;
}

void ModifyBotIdRuleRequest::SetGlobalSwitch(const int64_t& _globalSwitch)
{
    m_globalSwitch = _globalSwitch;
    m_globalSwitchHasBeenSet = true;
}

bool ModifyBotIdRuleRequest::GlobalSwitchHasBeenSet() const
{
    return m_globalSwitchHasBeenSet;
}

bool ModifyBotIdRuleRequest::GetStatus() const
{
    return m_status;
}

void ModifyBotIdRuleRequest::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyBotIdRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyBotIdRuleRequest::GetRuleAction() const
{
    return m_ruleAction;
}

void ModifyBotIdRuleRequest::SetRuleAction(const string& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool ModifyBotIdRuleRequest::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

string ModifyBotIdRuleRequest::GetGlobalRedirect() const
{
    return m_globalRedirect;
}

void ModifyBotIdRuleRequest::SetGlobalRedirect(const string& _globalRedirect)
{
    m_globalRedirect = _globalRedirect;
    m_globalRedirectHasBeenSet = true;
}

bool ModifyBotIdRuleRequest::GlobalRedirectHasBeenSet() const
{
    return m_globalRedirectHasBeenSet;
}

string ModifyBotIdRuleRequest::GetProtectLevel() const
{
    return m_protectLevel;
}

void ModifyBotIdRuleRequest::SetProtectLevel(const string& _protectLevel)
{
    m_protectLevel = _protectLevel;
    m_protectLevelHasBeenSet = true;
}

bool ModifyBotIdRuleRequest::ProtectLevelHasBeenSet() const
{
    return m_protectLevelHasBeenSet;
}


