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

#include <tencentcloud/lighthouse/v20200324/model/ReplaceFirewallTemplateRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

ReplaceFirewallTemplateRuleRequest::ReplaceFirewallTemplateRuleRequest() :
    m_templateIdHasBeenSet(false),
    m_templateRuleIdHasBeenSet(false),
    m_templateRuleHasBeenSet(false)
{
}

string ReplaceFirewallTemplateRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateRuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_templateRule.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ReplaceFirewallTemplateRuleRequest::GetTemplateId() const
{
    return m_templateId;
}

void ReplaceFirewallTemplateRuleRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ReplaceFirewallTemplateRuleRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string ReplaceFirewallTemplateRuleRequest::GetTemplateRuleId() const
{
    return m_templateRuleId;
}

void ReplaceFirewallTemplateRuleRequest::SetTemplateRuleId(const string& _templateRuleId)
{
    m_templateRuleId = _templateRuleId;
    m_templateRuleIdHasBeenSet = true;
}

bool ReplaceFirewallTemplateRuleRequest::TemplateRuleIdHasBeenSet() const
{
    return m_templateRuleIdHasBeenSet;
}

FirewallRule ReplaceFirewallTemplateRuleRequest::GetTemplateRule() const
{
    return m_templateRule;
}

void ReplaceFirewallTemplateRuleRequest::SetTemplateRule(const FirewallRule& _templateRule)
{
    m_templateRule = _templateRule;
    m_templateRuleHasBeenSet = true;
}

bool ReplaceFirewallTemplateRuleRequest::TemplateRuleHasBeenSet() const
{
    return m_templateRuleHasBeenSet;
}


