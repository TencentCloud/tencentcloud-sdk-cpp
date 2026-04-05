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

#include <tencentcloud/ga2/v20250115/model/ModifyForwardingRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

ModifyForwardingRuleRequest::ModifyForwardingRuleRequest() :
    m_globalAcceleratorIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_forwardingPolicyIdHasBeenSet(false),
    m_forwardingRuleIdHasBeenSet(false),
    m_ruleConditionsHasBeenSet(false),
    m_ruleActionsHasBeenSet(false),
    m_originHeadersHasBeenSet(false),
    m_enableOriginSniHasBeenSet(false),
    m_originSniHasBeenSet(false),
    m_originHostHasBeenSet(false)
{
}

string ModifyForwardingRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_globalAcceleratorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_globalAcceleratorId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardingPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardingPolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_forwardingPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardingRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardingRuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_forwardingRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleConditions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleConditions.begin(); itr != m_ruleConditions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_ruleActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleActions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleActions.begin(); itr != m_ruleActions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_originHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginHeaders";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_originHeaders.begin(); itr != m_originHeaders.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_enableOriginSniHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableOriginSni";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableOriginSni, allocator);
    }

    if (m_originSniHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginSni";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originSni.c_str(), allocator).Move(), allocator);
    }

    if (m_originHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originHost.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyForwardingRuleRequest::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void ModifyForwardingRuleRequest::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool ModifyForwardingRuleRequest::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}

string ModifyForwardingRuleRequest::GetListenerId() const
{
    return m_listenerId;
}

void ModifyForwardingRuleRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ModifyForwardingRuleRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ModifyForwardingRuleRequest::GetForwardingPolicyId() const
{
    return m_forwardingPolicyId;
}

void ModifyForwardingRuleRequest::SetForwardingPolicyId(const string& _forwardingPolicyId)
{
    m_forwardingPolicyId = _forwardingPolicyId;
    m_forwardingPolicyIdHasBeenSet = true;
}

bool ModifyForwardingRuleRequest::ForwardingPolicyIdHasBeenSet() const
{
    return m_forwardingPolicyIdHasBeenSet;
}

string ModifyForwardingRuleRequest::GetForwardingRuleId() const
{
    return m_forwardingRuleId;
}

void ModifyForwardingRuleRequest::SetForwardingRuleId(const string& _forwardingRuleId)
{
    m_forwardingRuleId = _forwardingRuleId;
    m_forwardingRuleIdHasBeenSet = true;
}

bool ModifyForwardingRuleRequest::ForwardingRuleIdHasBeenSet() const
{
    return m_forwardingRuleIdHasBeenSet;
}

vector<RuleCondition> ModifyForwardingRuleRequest::GetRuleConditions() const
{
    return m_ruleConditions;
}

void ModifyForwardingRuleRequest::SetRuleConditions(const vector<RuleCondition>& _ruleConditions)
{
    m_ruleConditions = _ruleConditions;
    m_ruleConditionsHasBeenSet = true;
}

bool ModifyForwardingRuleRequest::RuleConditionsHasBeenSet() const
{
    return m_ruleConditionsHasBeenSet;
}

vector<RuleAction> ModifyForwardingRuleRequest::GetRuleActions() const
{
    return m_ruleActions;
}

void ModifyForwardingRuleRequest::SetRuleActions(const vector<RuleAction>& _ruleActions)
{
    m_ruleActions = _ruleActions;
    m_ruleActionsHasBeenSet = true;
}

bool ModifyForwardingRuleRequest::RuleActionsHasBeenSet() const
{
    return m_ruleActionsHasBeenSet;
}

vector<OriginHeader> ModifyForwardingRuleRequest::GetOriginHeaders() const
{
    return m_originHeaders;
}

void ModifyForwardingRuleRequest::SetOriginHeaders(const vector<OriginHeader>& _originHeaders)
{
    m_originHeaders = _originHeaders;
    m_originHeadersHasBeenSet = true;
}

bool ModifyForwardingRuleRequest::OriginHeadersHasBeenSet() const
{
    return m_originHeadersHasBeenSet;
}

bool ModifyForwardingRuleRequest::GetEnableOriginSni() const
{
    return m_enableOriginSni;
}

void ModifyForwardingRuleRequest::SetEnableOriginSni(const bool& _enableOriginSni)
{
    m_enableOriginSni = _enableOriginSni;
    m_enableOriginSniHasBeenSet = true;
}

bool ModifyForwardingRuleRequest::EnableOriginSniHasBeenSet() const
{
    return m_enableOriginSniHasBeenSet;
}

string ModifyForwardingRuleRequest::GetOriginSni() const
{
    return m_originSni;
}

void ModifyForwardingRuleRequest::SetOriginSni(const string& _originSni)
{
    m_originSni = _originSni;
    m_originSniHasBeenSet = true;
}

bool ModifyForwardingRuleRequest::OriginSniHasBeenSet() const
{
    return m_originSniHasBeenSet;
}

string ModifyForwardingRuleRequest::GetOriginHost() const
{
    return m_originHost;
}

void ModifyForwardingRuleRequest::SetOriginHost(const string& _originHost)
{
    m_originHost = _originHost;
    m_originHostHasBeenSet = true;
}

bool ModifyForwardingRuleRequest::OriginHostHasBeenSet() const
{
    return m_originHostHasBeenSet;
}


