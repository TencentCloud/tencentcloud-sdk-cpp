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

#include <tencentcloud/waf/v20180125/model/ModifyApiSecSensitiveRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyApiSecSensitiveRuleRequest::ModifyApiSecSensitiveRuleRequest() :
    m_domainHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_customRuleHasBeenSet(false),
    m_ruleNameListHasBeenSet(false),
    m_customApiExtractRuleHasBeenSet(false),
    m_apiExtractRuleNameHasBeenSet(false),
    m_apiSecPrivilegeRuleHasBeenSet(false),
    m_apiSecPrivilegeRuleNameHasBeenSet(false),
    m_apiSecSceneRuleNameListHasBeenSet(false),
    m_apiSecSceneRuleHasBeenSet(false),
    m_apiSecCustomEventRuleNameListHasBeenSet(false),
    m_apiSecCustomEventRuleRuleHasBeenSet(false),
    m_customApiExcludeRuleHasBeenSet(false),
    m_apiExcludeRuleNameHasBeenSet(false)
{
}

string ModifyApiSecSensitiveRuleRequest::ToJsonString() const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_customRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customRule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ruleNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleNameList.begin(); itr != m_ruleNameList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customApiExtractRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomApiExtractRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customApiExtractRule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_apiExtractRuleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiExtractRuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_apiExtractRuleName.begin(); itr != m_apiExtractRuleName.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_apiSecPrivilegeRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiSecPrivilegeRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_apiSecPrivilegeRule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_apiSecPrivilegeRuleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiSecPrivilegeRuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_apiSecPrivilegeRuleName.begin(); itr != m_apiSecPrivilegeRuleName.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_apiSecSceneRuleNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiSecSceneRuleNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_apiSecSceneRuleNameList.begin(); itr != m_apiSecSceneRuleNameList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_apiSecSceneRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiSecSceneRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_apiSecSceneRule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_apiSecCustomEventRuleNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiSecCustomEventRuleNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_apiSecCustomEventRuleNameList.begin(); itr != m_apiSecCustomEventRuleNameList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_apiSecCustomEventRuleRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiSecCustomEventRuleRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_apiSecCustomEventRuleRule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_customApiExcludeRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomApiExcludeRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customApiExcludeRule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_apiExcludeRuleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiExcludeRuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_apiExcludeRuleName.begin(); itr != m_apiExcludeRuleName.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyApiSecSensitiveRuleRequest::GetDomain() const
{
    return m_domain;
}

void ModifyApiSecSensitiveRuleRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyApiSecSensitiveRuleRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t ModifyApiSecSensitiveRuleRequest::GetStatus() const
{
    return m_status;
}

void ModifyApiSecSensitiveRuleRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyApiSecSensitiveRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyApiSecSensitiveRuleRequest::GetRuleName() const
{
    return m_ruleName;
}

void ModifyApiSecSensitiveRuleRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ModifyApiSecSensitiveRuleRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

ApiSecCustomSensitiveRule ModifyApiSecSensitiveRuleRequest::GetCustomRule() const
{
    return m_customRule;
}

void ModifyApiSecSensitiveRuleRequest::SetCustomRule(const ApiSecCustomSensitiveRule& _customRule)
{
    m_customRule = _customRule;
    m_customRuleHasBeenSet = true;
}

bool ModifyApiSecSensitiveRuleRequest::CustomRuleHasBeenSet() const
{
    return m_customRuleHasBeenSet;
}

vector<string> ModifyApiSecSensitiveRuleRequest::GetRuleNameList() const
{
    return m_ruleNameList;
}

void ModifyApiSecSensitiveRuleRequest::SetRuleNameList(const vector<string>& _ruleNameList)
{
    m_ruleNameList = _ruleNameList;
    m_ruleNameListHasBeenSet = true;
}

bool ModifyApiSecSensitiveRuleRequest::RuleNameListHasBeenSet() const
{
    return m_ruleNameListHasBeenSet;
}

ApiSecExtractRule ModifyApiSecSensitiveRuleRequest::GetCustomApiExtractRule() const
{
    return m_customApiExtractRule;
}

void ModifyApiSecSensitiveRuleRequest::SetCustomApiExtractRule(const ApiSecExtractRule& _customApiExtractRule)
{
    m_customApiExtractRule = _customApiExtractRule;
    m_customApiExtractRuleHasBeenSet = true;
}

bool ModifyApiSecSensitiveRuleRequest::CustomApiExtractRuleHasBeenSet() const
{
    return m_customApiExtractRuleHasBeenSet;
}

vector<string> ModifyApiSecSensitiveRuleRequest::GetApiExtractRuleName() const
{
    return m_apiExtractRuleName;
}

void ModifyApiSecSensitiveRuleRequest::SetApiExtractRuleName(const vector<string>& _apiExtractRuleName)
{
    m_apiExtractRuleName = _apiExtractRuleName;
    m_apiExtractRuleNameHasBeenSet = true;
}

bool ModifyApiSecSensitiveRuleRequest::ApiExtractRuleNameHasBeenSet() const
{
    return m_apiExtractRuleNameHasBeenSet;
}

ApiSecPrivilegeRule ModifyApiSecSensitiveRuleRequest::GetApiSecPrivilegeRule() const
{
    return m_apiSecPrivilegeRule;
}

void ModifyApiSecSensitiveRuleRequest::SetApiSecPrivilegeRule(const ApiSecPrivilegeRule& _apiSecPrivilegeRule)
{
    m_apiSecPrivilegeRule = _apiSecPrivilegeRule;
    m_apiSecPrivilegeRuleHasBeenSet = true;
}

bool ModifyApiSecSensitiveRuleRequest::ApiSecPrivilegeRuleHasBeenSet() const
{
    return m_apiSecPrivilegeRuleHasBeenSet;
}

vector<string> ModifyApiSecSensitiveRuleRequest::GetApiSecPrivilegeRuleName() const
{
    return m_apiSecPrivilegeRuleName;
}

void ModifyApiSecSensitiveRuleRequest::SetApiSecPrivilegeRuleName(const vector<string>& _apiSecPrivilegeRuleName)
{
    m_apiSecPrivilegeRuleName = _apiSecPrivilegeRuleName;
    m_apiSecPrivilegeRuleNameHasBeenSet = true;
}

bool ModifyApiSecSensitiveRuleRequest::ApiSecPrivilegeRuleNameHasBeenSet() const
{
    return m_apiSecPrivilegeRuleNameHasBeenSet;
}

vector<string> ModifyApiSecSensitiveRuleRequest::GetApiSecSceneRuleNameList() const
{
    return m_apiSecSceneRuleNameList;
}

void ModifyApiSecSensitiveRuleRequest::SetApiSecSceneRuleNameList(const vector<string>& _apiSecSceneRuleNameList)
{
    m_apiSecSceneRuleNameList = _apiSecSceneRuleNameList;
    m_apiSecSceneRuleNameListHasBeenSet = true;
}

bool ModifyApiSecSensitiveRuleRequest::ApiSecSceneRuleNameListHasBeenSet() const
{
    return m_apiSecSceneRuleNameListHasBeenSet;
}

ApiSecSceneRule ModifyApiSecSensitiveRuleRequest::GetApiSecSceneRule() const
{
    return m_apiSecSceneRule;
}

void ModifyApiSecSensitiveRuleRequest::SetApiSecSceneRule(const ApiSecSceneRule& _apiSecSceneRule)
{
    m_apiSecSceneRule = _apiSecSceneRule;
    m_apiSecSceneRuleHasBeenSet = true;
}

bool ModifyApiSecSensitiveRuleRequest::ApiSecSceneRuleHasBeenSet() const
{
    return m_apiSecSceneRuleHasBeenSet;
}

vector<string> ModifyApiSecSensitiveRuleRequest::GetApiSecCustomEventRuleNameList() const
{
    return m_apiSecCustomEventRuleNameList;
}

void ModifyApiSecSensitiveRuleRequest::SetApiSecCustomEventRuleNameList(const vector<string>& _apiSecCustomEventRuleNameList)
{
    m_apiSecCustomEventRuleNameList = _apiSecCustomEventRuleNameList;
    m_apiSecCustomEventRuleNameListHasBeenSet = true;
}

bool ModifyApiSecSensitiveRuleRequest::ApiSecCustomEventRuleNameListHasBeenSet() const
{
    return m_apiSecCustomEventRuleNameListHasBeenSet;
}

ApiSecCustomEventRule ModifyApiSecSensitiveRuleRequest::GetApiSecCustomEventRuleRule() const
{
    return m_apiSecCustomEventRuleRule;
}

void ModifyApiSecSensitiveRuleRequest::SetApiSecCustomEventRuleRule(const ApiSecCustomEventRule& _apiSecCustomEventRuleRule)
{
    m_apiSecCustomEventRuleRule = _apiSecCustomEventRuleRule;
    m_apiSecCustomEventRuleRuleHasBeenSet = true;
}

bool ModifyApiSecSensitiveRuleRequest::ApiSecCustomEventRuleRuleHasBeenSet() const
{
    return m_apiSecCustomEventRuleRuleHasBeenSet;
}

ApiSecExcludeRule ModifyApiSecSensitiveRuleRequest::GetCustomApiExcludeRule() const
{
    return m_customApiExcludeRule;
}

void ModifyApiSecSensitiveRuleRequest::SetCustomApiExcludeRule(const ApiSecExcludeRule& _customApiExcludeRule)
{
    m_customApiExcludeRule = _customApiExcludeRule;
    m_customApiExcludeRuleHasBeenSet = true;
}

bool ModifyApiSecSensitiveRuleRequest::CustomApiExcludeRuleHasBeenSet() const
{
    return m_customApiExcludeRuleHasBeenSet;
}

vector<string> ModifyApiSecSensitiveRuleRequest::GetApiExcludeRuleName() const
{
    return m_apiExcludeRuleName;
}

void ModifyApiSecSensitiveRuleRequest::SetApiExcludeRuleName(const vector<string>& _apiExcludeRuleName)
{
    m_apiExcludeRuleName = _apiExcludeRuleName;
    m_apiExcludeRuleNameHasBeenSet = true;
}

bool ModifyApiSecSensitiveRuleRequest::ApiExcludeRuleNameHasBeenSet() const
{
    return m_apiExcludeRuleNameHasBeenSet;
}


