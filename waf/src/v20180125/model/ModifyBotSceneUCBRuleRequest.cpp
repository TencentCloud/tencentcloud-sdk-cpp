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

#include <tencentcloud/waf/v20180125/model/ModifyBotSceneUCBRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyBotSceneUCBRuleRequest::ModifyBotSceneUCBRuleRequest() :
    m_domainHasBeenSet(false),
    m_sceneIdHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_batchRulesHasBeenSet(false)
{
}

string ModifyBotSceneUCBRuleRequest::ToJsonString() const
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

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_batchRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_batchRules.begin(); itr != m_batchRules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyBotSceneUCBRuleRequest::GetDomain() const
{
    return m_domain;
}

void ModifyBotSceneUCBRuleRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyBotSceneUCBRuleRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ModifyBotSceneUCBRuleRequest::GetSceneId() const
{
    return m_sceneId;
}

void ModifyBotSceneUCBRuleRequest::SetSceneId(const string& _sceneId)
{
    m_sceneId = _sceneId;
    m_sceneIdHasBeenSet = true;
}

bool ModifyBotSceneUCBRuleRequest::SceneIdHasBeenSet() const
{
    return m_sceneIdHasBeenSet;
}

InOutputBotUCBRule ModifyBotSceneUCBRuleRequest::GetRule() const
{
    return m_rule;
}

void ModifyBotSceneUCBRuleRequest::SetRule(const InOutputBotUCBRule& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool ModifyBotSceneUCBRuleRequest::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

vector<InOutputBotUCBRule> ModifyBotSceneUCBRuleRequest::GetBatchRules() const
{
    return m_batchRules;
}

void ModifyBotSceneUCBRuleRequest::SetBatchRules(const vector<InOutputBotUCBRule>& _batchRules)
{
    m_batchRules = _batchRules;
    m_batchRulesHasBeenSet = true;
}

bool ModifyBotSceneUCBRuleRequest::BatchRulesHasBeenSet() const
{
    return m_batchRulesHasBeenSet;
}


