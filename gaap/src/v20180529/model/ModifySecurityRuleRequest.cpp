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

#include <tencentcloud/gaap/v20180529/model/ModifySecurityRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

ModifySecurityRuleRequest::ModifySecurityRuleRequest() :
    m_ruleIdHasBeenSet(false),
    m_aliasNameHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_sourceCidrHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_destPortRangeHasBeenSet(false)
{
}

string ModifySecurityRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aliasName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleAction.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceCidr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceCidr.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_destPortRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestPortRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destPortRange.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySecurityRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifySecurityRuleRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifySecurityRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string ModifySecurityRuleRequest::GetAliasName() const
{
    return m_aliasName;
}

void ModifySecurityRuleRequest::SetAliasName(const string& _aliasName)
{
    m_aliasName = _aliasName;
    m_aliasNameHasBeenSet = true;
}

bool ModifySecurityRuleRequest::AliasNameHasBeenSet() const
{
    return m_aliasNameHasBeenSet;
}

string ModifySecurityRuleRequest::GetPolicyId() const
{
    return m_policyId;
}

void ModifySecurityRuleRequest::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool ModifySecurityRuleRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string ModifySecurityRuleRequest::GetRuleAction() const
{
    return m_ruleAction;
}

void ModifySecurityRuleRequest::SetRuleAction(const string& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool ModifySecurityRuleRequest::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

string ModifySecurityRuleRequest::GetSourceCidr() const
{
    return m_sourceCidr;
}

void ModifySecurityRuleRequest::SetSourceCidr(const string& _sourceCidr)
{
    m_sourceCidr = _sourceCidr;
    m_sourceCidrHasBeenSet = true;
}

bool ModifySecurityRuleRequest::SourceCidrHasBeenSet() const
{
    return m_sourceCidrHasBeenSet;
}

string ModifySecurityRuleRequest::GetProtocol() const
{
    return m_protocol;
}

void ModifySecurityRuleRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ModifySecurityRuleRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string ModifySecurityRuleRequest::GetDestPortRange() const
{
    return m_destPortRange;
}

void ModifySecurityRuleRequest::SetDestPortRange(const string& _destPortRange)
{
    m_destPortRange = _destPortRange;
    m_destPortRangeHasBeenSet = true;
}

bool ModifySecurityRuleRequest::DestPortRangeHasBeenSet() const
{
    return m_destPortRangeHasBeenSet;
}


